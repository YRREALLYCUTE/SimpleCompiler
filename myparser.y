%{
/****************************************************************************
myparser.y
ParserWizard generated YACC file.

Date: 2018��12��13��
****************************************************************************/
#include <iostream>
#include <cctype>
#include"mylexer.h"
#include"symtree.h"
#include"symtable.h"

using namespace std;

extern TableNode symTable[100];
%}
%include {
#ifndef YYSTYPE
#define YYSTYPE TreeNode*
#endif
}
/////////////////////////////////////////////////////////////////////////////
// declarations section

// parser name
%name myparser

// class definition
{
	// place any extra class members here
}

// constructor
{
	// place any extra initialisation code here
}

// destructor
{
	// place any extra cleanup code here
}

// attribute type
%include {
#ifndef YYSTYPE
#define YYSTYPE TreeNode*
#endif
}

// place any declarations here
%token PLUS
%token MINUS
%token TIMES
%token OVER
%token ASSIGN
%token EQ
%token LT
%token MT
%token NE
%token AND
%token OR
%token NOT

%token LPAREN RPAREN 
%token LBRACE RBRACE
%token LSQBRA RSQBRA

%token MAIN
%token COMMA

%token SEMICOLON
%token IF ELSE
%token FOR WHILE


%token INT_NUM DOUBLE_NUM CONSTCHAR
%token INT DOUBLE CHAR
%token ID

%token WRITE READ
%token AND OR NOT


%left OR
%left AND

%left EQ NE
%left LT MT

%left PLUS MINUS
%left TIMES OVER

%left NOT
%%

/////////////////////////////////////////////////////////////////////////////
// rules section

// place your YACC rules here (there must be at least one)

program: MAIN LPAREN RPAREN compound_stmt{
	$$ = $4;
	printHead();
	printData($$);
	printStmt($$);
};

compound_stmt: LBRACE local_declarations stmt_seq RBRACE{
	TreeNode* t = $2;
	if(t != NULL ){
		$$ = newStmtNode(COMPK);
		int i = 0;
		while(t!=NULL){
			if(i > 8){
				break;
			}
			$$->child[i] = t;
			t = t->simbling;
			i++;
		}
		TreeNode *s =$3;
		while(s != NULL){
			if(i>8){
				break;
			}
			$$->child[i]=s;
			s = s->simbling;
			i++;
		}
	}else{
		$$ = newStmtNode(COMPK);
		t = $3;
		int j = 0;
		while(t!=NULL && j<8){
			$$->child[j] = t;
			t = t->simbling;
			j++;
		}
	}
	output($$);
}
| LBRACE stmt_seq RBRACE{
	
	TreeNode* t = $2;
	if(t != NULL){
		$$ = newStmtNode(COMPK);
		int i = 0;
		while(t!=NULL){
			if(i > 8){
				break;
			}
			$$->child[i] = t;
			t = t->simbling;
			i++;
		}
	}
	output($$);
};

local_declarations: local_declarations var_declaration{
	TreeNode *t = $1;
	if(t!=NULL){
		while(t->simbling != NULL){
			t = t->simbling;
		}
		t->simbling =$2;
		$$ =$1;
	}else
		$$ = $2;

	output($$);
}
| var_declaration{ 
	$$ = $1;
};

stmt_seq: stmt_seq stmt{
	TreeNode* t = $1;
	if(t != NULL){
		while(t->simbling != NULL){
			t = t->simbling;
		}
		t->simbling = $2;
		$$ =$1;
	}
	else{
		$$ = $2;
	}
}
|stmt{
	$$ = $1;
};

array_declaration: type_specifier array_list SEMICOLON{
	$$ = newDecNode(ArrayK);
	int i = 1;
	$$->child[0] = $1;
	while($2 != NULL &&  i<8){
		$$->child[i] = $2;
		
		if($2->child[0]==NULL){
			$2->type = $1->type;
			int offset = getOffset($2->attr.name);
			ExpType type = getType(offset);

			if(type == notype){
				setType(offset-1,$1->type);
			}else{
				cout<<"duplicated define!"<<endl;
			}

			
		}
		else{
			$2->child[0]->type = $1->type;
			if($2->child[0]->type != $2->child[1]->type)
				cout<<"error: different types, data loss! "<<endl;
			int offset = getOffset($2->child[0]->attr.name);
			ExpType type = getType(offset);

			if(type == notype){
				setType(offset-1,$1->type);
			}else{
				cout<<"duplicated define!"<<endl;
			}
		}

		$2 = $2->simbling;
		i++;
	}
	output($$);
};

array_list: array{
	$$ = $1;
}|array_list COMMA array{
	TreeNode* t = $1;
	if(t!=NULL){
		while(t->simbling!=NULL){
			t = t->simbling;
		}
		t->simbling = $2;
		$$ =$1;
	}else{
		$$ = $2;
	}
};

dev_list:dev{
	$$ = $1;
}|dev_list dev {
	TreeNode* t = $1;
	if(t!=NULL){
		while(t->simbling!=NULL){
			t = t->simbling;
		}
		t->simbling = $2;
		$$ =$1;
	}else{
		$$ = $2;
	}
};

dev: LSQBRA INT_NUM RSQBRA{
	$$ = $2;
};

array: ID dev_list{
	$$ = newExpNode(PointK);
	$$ -> child[0] = $1;
	int i = 1;
	while($2 != NULL && i < MAXCHILDREN){
		$$->attr.arrspan[i] = $2->attr.int_value;
		$2 = $2->simbling;
		i++;
	}
	$$->attr.dev = i-1;
	output($$);
};

var_declaration: type_specifier idlist SEMICOLON{
	int i = 1;
	$$ = newDecNode(VarK);
	$$->child[0] = $1;
	while($2 != NULL &&  i<8){
		$$->child[i] = $2;
		
		if($2->child[0]==NULL){
			$2->type = $1->type;
			int offset = getOffset($2->attr.name);
			ExpType type = getType(offset);

			if(type == notype){
				setType(offset-1,$1->type);
			}else{
				cout<<"duplicated define!"<<endl;
			}

			
		}
		else{
			$2->child[0]->type = $1->type;
			if($2->child[0]->type != $2->child[1]->type)
				cout<<"error: different types, data loss! "<<endl;
			int offset = getOffset($2->child[0]->attr.name);
			ExpType type = getType(offset);

			if(type == notype){
				setType(offset-1,$1->type);
			}else{
				cout<<"duplicated define!"<<endl;
			}
		}
		$2 = $2->simbling;
		i++;
	}
	output($$);
};

type_specifier: INT{
	$$ = newExpNode(TypeK);
	$$->type = Integer;
	output($$);
}
| DOUBLE{
	$$ = newExpNode(TypeK);
	$$->type = Double;
}
|CHAR{
	$$ = newExpNode(TypeK);
	$$->type = Char;
};


idlist: idlist COMMA initdec{
	TreeNode* t = $1;
	if(t!=NULL){
		while(t->simbling!=NULL){
			t = t->simbling;
		}
		t->simbling = $3;
		$$ =$1;
	}else{
		$$ = $3;
	}
}
| initdec{
	$$ = $1;
};

initdec: id{
	$$ = $1;
}|id ASSIGN constval{
	$$ = newExpNode(iniTypeK);//输出问题
	$$->child[0] = $1;
	$$->child[1] = $3;
	$$->type = $3->type;
	output($$);
};


id: ID{

	$$ = newExpNode(IdK);
	$$->attr.val = $1->attr.val;
	$$->attr.name = $1->attr.name;
	$$->type = $1->type;
	output($$);
	//$$->type = symTableT.getType($$->attr.val);
};

stmt: expr_stmt{
	$$= $1;
}|if_stmt{
	$$= $1;
}|while_stmt{
	$$= $1;
}|read_stmt{
	$$=$1;
}|write_stmt{
	$$=$1;
};

write_stmt: WRITE LPAREN id RPAREN SEMICOLON{
	
	$$ = newStmtNode(WriteK);
	$$->child[0] = $3;
	$$->simbling = NULL;

}|WRITE LPAREN constval RPAREN SEMICOLON{

	$$ = newStmtNode(WriteK);
	$$->child[0] = $3;
	$$->simbling = NULL;

};

read_stmt: READ LPAREN id RPAREN SEMICOLON{
	$$ = newStmtNode(ReadK);
	$$->child[0] = $3;
	$$->simbling = NULL;
};

expr_stmt: expr SEMICOLON{
	$$ = $1;
}|SEMICOLON{
	$$=NULL;
};

expr: simple_exp ASSIGN simple_exp{
	$$ = newExpNode(OpK);
	$$->child[0]=$1;
	$$->child[1]=$3;

	if($1->child[0]!=NULL){
		cout<<"error: can't be an expr in left of '='!"<<endl;
	}else{
		if($1->type != $3->type){
			cout<<"error: different type"<<endl;
			$$->type = $3->type;
		}else{
			$$->type = $3->type;
		}
	}

	$$->attr.op = ASSIGN;
	$$->simbling = NULL;
	output($$);
}|logic_exp{
	$$ = $1;
};

simple_exp: simple_exp PLUS term{
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;

	
	if($$->child[0]->type != $$->child[1]->type){
		cout<<" warn: different type, may cause data loss; "<<endl;
		$$->type = $3->type;
	}else{
		$$->type = $3->type;
	}

	$$->attr.op = PLUS;
	$$->simbling = NULL;
	output($$);	
}|simple_exp MINUS term{
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;
	
	if($$->child[0]->type != $$->child[1]->type){
		cout<<" warn: different type, may cause data loss; "<<endl;
		$$->type = $3->type;
	}else{
		$$->type = $3->type;
	}

	$$->attr.op = MINUS;
	$$->simbling = NULL;
	output($$);
}|term{
	$$ = $1;
};

term: term TIMES factor{
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;

	
	if($$->child[0]->type != $$->child[1]->type){
		cout<<" warn: different type, may cause data loss; "<<endl;
		$$->type = $3->type;
	}else{
		$$->type = $3->type;
	}

	$$->attr.op = TIMES;
	$$->simbling = NULL;
}|term OVER factor{
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;

	if($$->child[0]->type != $$->child[1]->type){
		cout<<" warn: different type, may cause data loss; "<<endl;
		$$->type = $3->type;
	}else{
		$$->type = $3->type;
	}

	$$->attr.op = OVER;
	$$->simbling = NULL;
}|factor{
	$$ = $1;
	if($$->type == notype){
		cout<<"error: identity "<< $$->attr.name << " is not defined!" <<endl;
	}
};

factor: constval{
	$$ = $1;
}|id{
	$$ = $1;
}| LPAREN simple_exp RPAREN{
	$$ = $2;
};

constval: INT_NUM{
	
	$$ = newExpNode(ConstK);
	$$->attr.int_value = $1->attr.int_value;
	$$->type = Integer;
	output($$);
}|DOUBLE_NUM{
	$$ = newExpNode(ConstK);
	$$->attr.double_value = $1->attr.double_value;
	$$->type = Double;
	output($$);
}|CONSTCHAR{
	$$ = newExpNode(ConstK);
	$$->attr.char_value = $1->attr.char_value;
	$$->type = Char;
};

condition_exp: condition_exp EQ condition_exp{
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;
	$$->type = Bool;
	$$->attr.op = EQ;
	output($$);
}
| condition_exp NE condition_exp{
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;
	$$->type = Bool;
	$$->attr.op = NE;
	output($$);
}
|condition_exp LT condition_exp{
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;
	$$->type = Bool;
	$$->attr.op = LT;
	output($$);
}|condition_exp MT condition_exp{
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;
	$$->type = Bool;
	$$->attr.op = MT;
	output($$);
}| simple_exp{
	$$ = $1;
}| LPAREN condition_exp RPAREN{
	$$ = $2;
};

logic_exp: logic_exp AND logic_exp {
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;
	$$->type = Bool;
	$$->attr.op = AND;
	output($$);
}|logic_exp OR logic_exp{
	$$ = newExpNode(OpK);
	$$->child[0] = $1;
	$$->child[1] = $3;
	$$->type = Bool;
	$$->attr.op = OR;
	output($$);

}|NOT logic_exp{
	$$ = newExpNode(OpK);
	$$->child[0] = $2;
	$$->type = Bool;
	$$->attr.op = NOT;
	output($$);
}|condition_exp{
	$$ = $1;
}|LPAREN logic_exp RPAREN{
	$$ = $2;
};





if_stmt: IF LPAREN expr RPAREN compound_stmt{
	$$ = newStmtNode(IfK);
	$$->child[0] = $3;
	$$->child[1] = $5;
	$$->simbling = NULL;
	output($$);
}|IF LPAREN expr RPAREN stmt{
	$$ = newStmtNode(IfK);
	$$->child[0] = $3;
	$$->child[1] = $5;
	$$->simbling = NULL;
	output($$);
}
|IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt
{
	$$ = newStmtNode(IfK);
	$$->child[0] = $3;
	$$->child[1] = $5;
	$$->child[2] = $7;
	$$->simbling = NULL;
	output($$);
}
|IF LPAREN expr RPAREN stmt ELSE stmt{
	$$ = newStmtNode(IfK);
	$$->child[0] = $3;
	$$->child[1] = $5;
	$$->child[2] = $7;
	$$->simbling = NULL;
	output($$);
}
|IF LPAREN expr RPAREN stmt ELSE compound_stmt{
	$$ = newStmtNode(IfK);
	$$->child[0] = $3;
	$$->child[1] = $5;
	$$->child[2] = $7;
	$$->simbling = NULL;
	output($$);
}
|IF LPAREN expr RPAREN compound_stmt ELSE stmt{
	$$ = newStmtNode(IfK);
	$$->child[0] = $3;
	$$->child[1] = $5;
	$$->child[2] = $7;
	$$->simbling = NULL;
	output($$);
};

while_stmt: WHILE LPAREN expr RPAREN compound_stmt{
	$$ = newStmtNode(WhileK);
	$$->child[0] = $3;
	$$->child[1] = $5;

	if($3->type != Bool){
		cout<<"warn: condition type isnot Bool!"<<endl;
	}

	$$->simbling = NULL;
	output($$);	
}|WHILE LPAREN expr RPAREN stmt{
	$$ = newStmtNode(WhileK);
	$$->child[0] = $3;
	$$->child[1] = $5;
	$$->simbling = NULL;
	output($$);	
};



%%

/////////////////////////////////////////////////////////////////////////////
// programs section

int main(void)
{
	int n = 1;
	myparser parser;
	mylexer lexer;
	if (parser.yycreate(&lexer)) {
		if(lexer.yycreate(&parser)){
			freopen("test.txt", "r", stdin);
			n = parser.yyparse();
			freopen("CON", "r", stdin);
		}
	}
	cin.get();
	return n;
}

