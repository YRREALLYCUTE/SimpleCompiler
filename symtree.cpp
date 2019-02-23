#include"symtree.h"
#include<string>
#include<iostream>
#include<string.h>
#include<fstream>
#include<iomanip>

using namespace std;

void printChildren(TreeNode * node);
int count = 0;
TreeNode* newStmtNode(StmtKind kind){
    TreeNode *t = (TreeNode *) malloc(sizeof(TreeNode));
    int i;
    if(t == NULL)
        cout << "out of memory!"  << endl;
    else{
        for(i = 0; i < MAXCHILDREN; i++)
            t->child[i] = NULL;
        t->nodeKind = StmtK;
        t->kind.stmt = kind;
        t->seq = count;
        count++;
    }
    return t;
}

TreeNode* newExpNode(ExpKind kind){
    TreeNode* t = (TreeNode*) malloc(sizeof(TreeNode));
    int i;
    if(t == NULL){
        cout << "out of memory!" << endl;
    }else{
        for(i = 0; i < MAXCHILDREN; i++)
            t->child[i] = NULL;
        t->simbling = NULL;
        t->nodeKind = ExpK;
        t->type = notype;
        t->kind.exp = kind;
        t->seq = count;
        count ++;
    }
    return t;
}

TreeNode* newDecNode(DecKind kind){
    TreeNode* t = (TreeNode*) malloc(sizeof(TreeNode));
    int i;
    if(t == NULL){
        cout << " out of memery! "<<endl;
    }
    else{
        for(i = 0;i< MAXCHILDREN; i++){
            t->child[i] = NULL;
        }
        t->simbling =NULL;
        t->nodeKind = DeclK;
        t->kind.dec = kind;
        t->type = notype;
        t->seq = count;
        count++;
    }
    return t;
}

/*typedef enum {StmtK, ExpK, DeclK} NodeKind;
typedef enum {IfK, RepeatK, AssignK, ReadK, WriteK,COMPK} StmtKind;
typedef enum {TypeK,OpK, ConstK, IdK} ExpKind;
typedef enum {VarK, ArrayK}  DecKind;
typedef enum {notype, Integer, Double, Char} ExpType;

typedef struct treenode{
    struct treenode *child[MAXCHILDREN];
    struct treenode *simbling;
    NodeKind nodeKind;
    union{ StmtKind stmt; ExpKind exp; DecKind dec;} kind;
    union{ int op; int val; char *name; double value;} attr;
    ExpType type;
}TreeNode;*/

char* exptype[] = {"notype","Integer","Double","Char","Bool"};
char* opType[] = {"+","-","*","/","=","==","<",">","!=","&&","||","!"};

void output(TreeNode *node){

    switch(node->nodeKind){
		case DeclK:
            switch(node->kind.dec){
				case VarK:
                    cout<<setw(2)<<node->seq<<":"<<setw(20)<<"Var Declaration"<<setw(15)<<""<<setw(2)<<"";
                    printChildren(node);
                    break;
				case ArrayK:
                    break;
            }
            break;
		case StmtK:
            switch(node->kind.stmt){
				case IfK:
                    cout<<setw(2)<<node->seq<<":"<<setw(20)<<"if statment"<<setw(15)<<" "<<setw(2)<<"";
                    printChildren(node);
                    break;
				case COMPK:
                    cout<<setw(2)<<node->seq<<":"<<setw(20)<<"compound statment"<<setw(15)<<" "<<setw(2)<<"";
                    printChildren(node);
                default:
                    break;
            }
            break;
		case ExpK:
            switch(node->kind.exp){
				case IdK:
                    cout<<setw(2)<<node->seq<<":"<<setw(20)<<"ID Declaration"<<setw(15)<<"symbol:"<<setw(2)<<node->attr.name<<setw(15)<<"type:"<<setw(8)<<exptype[node->type];
                    printChildren(node);
                    break;
				case TypeK:
                    cout<<setw(2)<<node->seq<<":"<<setw(20)<<"Type Specifier"<<setw(15)<<exptype[node->type]<<setw(2)<<" "<<setw(15)<<"type:"<<setw(8)<<exptype[node->type];
                    printChildren(node);
                    break;
                case iniTypeK:
                    cout<<setw(2)<<node->seq<<":"<<setw(20)<<"init Identity"<<setw(15)<<exptype[node->type]<<setw(2)<<" "<<setw(15)<<"type:"<<setw(8)<<exptype[node->type];
                    printChildren(node);
                    break;
   
				case OpK:
                    cout<<setw(2)<<node->seq<<":"<<setw(20)<<"Expr"<<setw(15)<<"op:"<<setw(2)<<opType[node->attr.op - 257] <<setw(15)<<"type:"<<setw(8)<<exptype[node->type];
                    printChildren(node);
                    break;
				case ConstK:
                    switch(node->type){
                        case Integer:
                            cout<<setw(2)<<node->seq<<":"<<setw(20)<<"Const Declaration"<<setw(15)<<"value:"<<setw(2)<<node->attr.int_value<<setw(15)<<"type:"<<setw(8)<<exptype[node->type];
                            printChildren(node);
                            break;
                        case Double:
                            cout<<setw(2)<<node->seq<<":"<<setw(20)<<"Const Declaration"<<setw(15)<<"value:"<<setw(2)<<node->attr.double_value<<setw(15)<<"type:"<<setw(8)<<exptype[node->type];
                            printChildren(node);
                            break;
                        case Char:
                            cout<<setw(2)<<node->seq<<":"<<setw(20)<<"Const Declaration"<<setw(15)<<"value:"<<setw(2)<<node->attr.char_value<<setw(15)<<"type:"<<setw(8)<<exptype[node->type];
                            printChildren(node);
                            break;
                        default:
                            break; 
                    }
                    break;
                default:
                    break;
            }
            break;
        default:
            break;
    }
}



void printChildren(TreeNode* node){
    cout<<setw(15)<<"Children:";

    for(int i = 0; i<MAXCHILDREN; i++){
        if(node->child[i] != NULL ){
            cout<<" "<<node->child[i]->seq;
        }
    }

    cout<<endl;
}


void printHead(){
    ofstream fout;
	fout.open("E://test.asm",ios::trunc|ios::out);
	if(!fout.is_open() ){
        cout<<"bad"<<endl;
    }else{
        fout<<".486\n.model flat, stdcall\n\noption casemap:none\n\nincludelib \\masm32\\lib\\kernel32.lib\nincludelib \\masm32\\lib\\user32.lib\nincludelib \\masm32\\lib\\gdi32.lib\nincludelib \\masm32\\lib\\msvcrt.lib\nincludelib \\masm32\\lib\\masm32.lib\n\n\ninclude \\masm32\\include\\kernel32.inc\ninclude \\masm32\\include\\user32.inc\ninclude \\masm32\\include\\gdi32.inc\ninclude \\masm32\\include\\windows.inc\ninclude \\masm32\\include\\msvcrt.inc\ninclude \\masm32\\include\\masm32.inc\ninclude \\masm32\\macros\\macros.asm\n";
    }
    fout.close();
}

void printData(TreeNode* t){
    ofstream fout;
    fout.open("E://test.asm",ios::app);

    if(!fout.is_open()){
        cout<<"can't write data"<<endl;
    }else{
        fout<<endl<<endl<<".data"<<endl;

        printTemp(t);
        fout<<endl;

        for(int i = 0; i < MAXCHILDREN; i++){
            if(t->child[i] == NULL)
                break;
            else{
                if(t->child[i]->nodeKind == DeclK){
                    TreeNode* temp = t->child[i];
                    for(int j =1 ; j < MAXCHILDREN; j++){
                        if(temp->child[j] == NULL){
                            break;
                        }else{
                            TreeNode* IdTemp = temp->child[j];
                            if(IdTemp->type == Integer){
                                if(IdTemp->child[0] == NULL){
									cout<<IdTemp->attr.name<<endl;
                                    fout<<"\t"<<IdTemp->attr.name<<" dd 0"<<endl;
								} 
								else{
                                    fout<<"\t"<<IdTemp->child[0]->attr.name<<" dd "<<IdTemp->child[1]->attr.int_value<<endl;
                                }
                            }else if(IdTemp->type == Char){
                                if(IdTemp->child[0] == NULL)
                                    fout<<"\t"<<IdTemp->attr.name<<" BYTE 0"<<endl;
                                else{
                                    fout<<"\t"<<IdTemp->child[0]->attr.name<<" dd "<<IdTemp->child[1]->attr.char_value<<endl;
                                }
                            }else if(IdTemp->type == Double){
                                if(IdTemp->child[0] == NULL)
                                    fout<<"\t"<<IdTemp->attr.name<<" dd 0"<<endl;
                                else{
                                    fout<<"\t"<<IdTemp->child[0]->attr.name<<" dd "<<IdTemp->child[1]->attr.double_value<<endl;
                                }
                            }
                            
                        }
                    }
                }             
            }
        }

        fout<<".code"<<endl;
    }
    fout.close();
}


void printStmt(TreeNode* t){
    ofstream fout;
    fout.open("E://test.asm",ios::app);
    if(!fout.is_open()){
        cout<<"file open falied!"<<endl;
    }else{
        fout<<"start:"<<endl;
        for(int i = 0; i < MAXCHILDREN; i++){
            if(t->child[i] == NULL){
                break;
            }else{
                if(t->child[i]->nodeKind == StmtK){
                    TreeNode* temp = t->child[i];

                    if(temp->kind.stmt == IfK){
                        printIfK(temp);
                    }else if(temp->kind.stmt == WhileK){
                        printWhileK(temp);
                    }else if(temp->kind.stmt == COMPK){
                        printCompK(temp);
                    }else if(temp->kind.stmt == ReadK){
                        printRead(temp);
                    }else if(temp->kind.stmt == WriteK){
                        printWrite(temp);
                    }
                }else if(t->child[i]->kind.exp == OpK){
                    printExpr(t->child[i]);
                }
            }
        }
    }

    fout<<"ret"<<endl;
    fout<<"end start"<<endl;
    fout.close();
}


void printIfK(TreeNode* t){
    ofstream fout;
    fout.open("E://test.asm",ios::app);

    if(!fout.is_open()){
        cout<<"file open failed"<<endl;
    }else{
        if(t->child[2] != NULL){
            printExpr(t->child[0]);
            if(t->child[1]->kind.stmt == COMPK){
                printCompK(t->child[1]);
                fout<<"jmp Else_L"<<t->child[0]->seq<<endl;
                fout<<"L"<<t->child[0]->seq<<":"<<endl;
                if(t->child[2]->kind.exp == OpK){
                    printExpr(t->child[2]);
                    fout<<"Else_L"<<t->child[0]->seq<<":"<<endl;
                }else if(t->child[2]->kind.stmt == COMPK){
                    printCompK(t->child[2]);
                    fout<<"Else_L"<<t->child[0]->seq<<":"<<endl;
                }
            }else if(t->child[1]->kind.exp == OpK){
                printExpr(t->child[1]);
                fout<<"L"<<t->child[0]->seq<<":"<<endl;
            }
        }else{
            printExpr(t->child[0]);
            if(t->child[1]->kind.stmt == COMPK){
                printCompK(t->child[1]);
                fout<<"L"<<t->child[0]->seq<<":"<<endl;
            }else if(t->child[1]->kind.exp == OpK){
                printExpr(t->child[1]);
                fout<<"L"<<t->child[0]->seq<<":"<<endl;
            }
        }
    }

    fout.close();
}

void printWhileK(TreeNode* t){
    ofstream fout;
    fout.open("E://test.asm",ios::app);

    if(!fout.is_open()){
        cout<<"file open failed"<<endl;
    }else{
        fout<<"L"<<t->seq<<":"<<endl;
        printExpr(t->child[0]);

        if(t->child[1]->kind.stmt == COMPK){
            printCompK(t->child[1]);
            fout<<"jmp L"<<t->seq<<endl;
            fout<<"L"<<t->child[0]->seq<<":"<<endl;
        }else if(t->child[1]->kind.exp == OpK){
            printExpr(t->child[1]);
            fout<<"jmp L"<<t->seq<<endl;
            fout<<"L"<<t->child[0]->seq<<":"<<endl;
        }

    }
    fout.close();
}


void printCompK(TreeNode* t){
    ofstream fout;
    fout.open("E://test.asm",ios::app);

    if(!fout.is_open()){
        cout<<"file open failed"<<endl;
    }else{
        for(int i = 0; i < MAXCHILDREN; i++){
            if(t->child[i] == NULL){
                break;
            }else{
                if(t->child[i]->nodeKind == StmtK){
                    TreeNode* temp = t->child[i];

                    if(temp->kind.stmt == IfK){
                        printIfK(temp);
                    }else if(temp->kind.stmt == WhileK){
                        printWhileK(temp);
                    }else if(temp->kind.stmt == COMPK){
                        printCompK(temp);
                    }else if(temp->kind.stmt == ReadK){
                        printRead(temp);
                    }else if(temp->kind.stmt == WriteK){
                        printWrite(temp);
                    }
				}else if(t->child[i]->kind.exp == OpK){
					printExpr(t->child[i]);
				}
            }
        }
    }
    fout.close();
}

void printExpr(TreeNode* t){
    ofstream fout;
    fout.open("E://test.asm",ios::app);

    if(!fout.is_open()){
        cout<<"file open failed"<<endl;
    }else{
        TreeNode* e1 = t->child[0];
        TreeNode* e2 = t->child[1];

        if(opType[t->attr.op - 257] == "+"){
        
            fout<<"\tmov eax,";
            if(e1->kind.exp == IdK){
                fout<<e1->attr.name<<endl;
            }else if(e1->kind.exp == ConstK){
                if(e1->type == Integer)
                    fout<<e1->attr.int_value<<endl;
                else if(e1->type == Double){
                    fout<<e1->attr.double_value<<endl;
                }
            }

            fout<<"\tadd eax,";
            if(e2->kind.exp == IdK){
                fout<<e2->attr.name<<endl;
            }else if(e2->kind.exp == ConstK){
                if(e2->type == Integer)
                    fout<<e2->attr.int_value<<endl;
                else if(e2->type == Double){
                    fout<<e2->attr.double_value<<endl;
                }
            }
            fout<<"\tmov t"<<t->seq<<", eax"<<endl;

        }else if(opType[t->attr.op - 257] == "-"){

            fout<<"\tmov eax,";
            if(e1->kind.exp == IdK){
                fout<<e1->attr.name<<endl;
            }else if(e1->kind.exp == ConstK){
                if(e1->type == Integer)
                    fout<<e1->attr.int_value<<endl;
                else if(e1->type == Double){
                    fout<<e1->attr.double_value<<endl;
                }
            }

            fout<<"\tsub eax,";
            if(e2->kind.exp == IdK){
                fout<<e2->attr.name<<endl;
            }else if(e2->kind.exp == ConstK){
                if(e2->type == Integer)
                    fout<<e2->attr.int_value<<endl;
                else if(e2->type == Double){
                    fout<<e2->attr.double_value<<endl;
                }
            }
            fout<<"\tmov t"<<t->seq<<", eax"<<endl;

        }else if(opType[t->attr.op - 257] == "*"){
       
            fout<<"\tmov eax,";
            if(e1->kind.exp == IdK){
                fout<<e1->attr.name<<endl;
            }else if(e1->kind.exp == ConstK){
                if(e1->type == Integer)
                    fout<<e1->attr.int_value<<endl;
                else if(e1->type == Double){
                    fout<<e1->attr.double_value<<endl;
                }
            }

            fout<<"\tmul eax,";
            if(e2->kind.exp == IdK){
                fout<<e2->attr.name<<endl;
            }else if(e2->kind.exp == ConstK){
                if(e2->type == Integer)
                    fout<<e2->attr.int_value<<endl;
                else if(e2->type == Double){
                    fout<<e2->attr.double_value<<endl;
                }
            }
            fout<<"\tmov t"<<t->seq<<", eax"<<endl;
       
        }else if(opType[t->attr.op - 257] == "/"){
            
            fout<<"\tmov eax,";
            if(e1->kind.exp == IdK){
                fout<<e1->attr.name<<endl;
            }else if(e1->kind.exp == ConstK){
                if(e1->type == Integer)
                    fout<<e1->attr.int_value<<endl;
                else if(e1->type == Double){
                    fout<<e1->attr.double_value<<endl;
                }
            }

            fout<<"\tdiv eax,";
            if(e2->kind.exp == IdK){
                fout<<e2->attr.name<<endl;
            }else if(e2->kind.exp == ConstK){
                if(e2->type == Integer)
                    fout<<e2->attr.int_value<<endl;
                else if(e2->type == Double){
                    fout<<e2->attr.double_value<<endl;
                }
            }
            fout<<"\tmov t"<<t->seq<<", eax"<<endl;
        
        }
        else if(opType[t->attr.op - 257] == ">"){
            
            if(e1->kind.exp == IdK){
                fout<<"\tmov eax,"<<e1->attr.name<<endl;
            }else if(e1->kind.exp == ConstK){
                if(e1->type==Integer){
                    fout<<"\tmov eax,"<<e1->attr.int_value<<endl;
                }else if(e1->type == Double){
                    fout<<"\tmov eax,"<<e1->attr.double_value<<endl;
                }
            }else if(e1->kind.exp == OpK){
                printExpr(e1);
                fout<<"\tmov eax,t"<<e1->seq<<endl;
            }

            if(e2->kind.exp == IdK)
            {
                fout<<"\tmov ebx,"<<e2->attr.name<<endl;
            }
            else if(e2->kind.exp == ConstK){
                if(e2->type == Integer){
                    fout<<"\tmov ebx,"<<e2->attr.int_value<<endl;
                }else if(e2->type == Double){
                    fout<<"\tmov ebx,"<<e2->attr.double_value<<endl;
                }
            }else if(e2->kind.exp == OpK){
                printExpr(e2);
                fout<<"\tmov ebx,t"<<e2->seq<<endl;
            }

            fout<<"\tcmp eax,ebx"<<endl;
            fout<<"\tjna L"<<t->seq<<endl;
            
        }else if(opType[t->attr.op - 257] == "<"){

            if(e1->kind.exp == IdK){
                fout<<"\tmov eax,"<<e1->attr.name<<endl;
            }else if(e1->kind.exp == ConstK){
                if(e1->type==Integer){
                    fout<<"\tmov eax,"<<e1->attr.int_value<<endl;
                }else if(e1->type == Double){
                    fout<<"\tmov eax,"<<e1->attr.double_value<<endl;
                }
            }else if(e1->kind.exp == OpK){
                printExpr(e1);
                fout<<"\tmov eax,t"<<e1->seq<<endl;
            }

            if(e2->kind.exp == IdK)
            {
                fout<<"\tmov ebx,"<<e2->attr.name<<endl;
            }
            else if(e2->kind.exp == ConstK){
                if(e2->type == Integer){
                    fout<<"\tmov ebx,"<<e2->attr.int_value<<endl;
                }else if(e2->type == Double){
                    fout<<"\tmov ebx,"<<e2->attr.double_value<<endl;
                }
            }else if(e2->kind.exp == OpK){
                printExpr(e2);
                fout<<"\tmov ebx,t"<<e2->seq<<endl;
            }

            fout<<"\tcmp eax,ebx"<<endl;
            fout<<"\tjnb L"<<t->seq<<endl;
            
        }else if(opType[t->attr.op - 257] == "=="){

            if(e1->kind.exp == IdK){
                fout<<"\tmov eax,"<<e1->attr.name<<endl;
            }else if(e1->kind.exp == ConstK){
                if(e1->type==Integer){
                    fout<<"\tmov eax,"<<e1->attr.int_value<<endl;
                }else if(e1->type == Double){
                    fout<<"\tmov eax,"<<e1->attr.double_value<<endl;
                }
            }else if(e1->kind.exp == OpK){
                printExpr(e1);
                fout<<"\tmov eax,t"<<e1->seq<<endl;
            }

            if(e2->kind.exp == IdK)
            {
                fout<<"\tmov ebx,"<<e2->attr.name<<endl;
            }
            else if(e2->kind.exp == ConstK){
                if(e2->type == Integer){
                    fout<<"\tmov ebx,"<<e2->attr.int_value<<endl;
                }else if(e2->type == Double){
                    fout<<"\tmov ebx,"<<e2->attr.double_value<<endl;
                }
            }else if(e2->kind.exp == OpK){
                printExpr(e2);
                fout<<"\tmov ebx,t"<<e2->seq<<endl;
            }

            fout<<"\tcmp eax,ebx"<<endl;
            fout<<"\tjne L"<<t->seq<<endl;
            
        }
        else if(opType[t->attr.op - 257] == "="){
        
            if(e2->kind.exp == IdK){
                fout<<"\tmov eax";
                fout<<","<<e2->attr.name<<endl;
                fout<<"\tmov "<<e1->attr.name<<", eax"<<endl;
            }else{
                printExpr(e2);
                fout<<"\tmov eax,"<<"t"<<e2->seq<<endl;;
                fout<<"\tmov "<<e1->attr.name<<", eax"<<endl;
            }

        }else if(opType[t->attr.op - 257 ] == "!="){
            
            if(e1->kind.exp == IdK){
                fout<<"\tmov eax,"<<e1->attr.name<<endl;
            }else if(e1->kind.exp == ConstK){
                if(e1->type==Integer){
                    fout<<"\tmov eax,"<<e1->attr.int_value<<endl;
                }else if(e1->type == Double){
                    fout<<"\tmov eax,"<<e1->attr.double_value<<endl;
                }
            }else if(e1->kind.exp == OpK){
                printExpr(e1);
                fout<<"\tmov eax,t"<<e1->seq<<endl;
            }


            if(e2->kind.exp == IdK)
            {
                fout<<"\tmov ebx,"<<e2->attr.name<<endl;
            }
            else if(e2->kind.exp == ConstK){
                if(e2->type == Integer){
                    fout<<"\tmov ebx,"<<e2->attr.int_value<<endl;
                }else if(e2->type == Double){
                    fout<<"\tmov ebx,"<<e2->attr.double_value<<endl;
                }
            }else if(e2->kind.exp == OpK){
                printExpr(e2);
                fout<<"\tmov eax,t"<<e2->seq<<endl;
            }

            fout<<"\tcmp eax,ebx"<<endl;
            fout<<"\tje L"<<t->seq<<endl;
            
        }else if(opType[t->attr.op - 257 ] == "&&"){

            if(e1->kind.exp == OpK && e2->kind.exp == OpK){
                printExpr(e1);
                fout<<"\tjmp L"<<e1->seq<<"temp"<<endl;
                fout<<"L"<<e1->seq<<":"<<endl;
                fout<<"\tjmp "<<"L"<<t->seq<<endl;
                fout<<"L"<<e1->seq<<"temp:"<<endl;
                printExpr(e2);
                fout<<"\tjmp L"<<e2->seq<<"temp"<<endl;
                fout<<"L"<<e2->seq<<":"<<endl;
                fout<<"\tjmp "<<"L"<<t->seq<<endl;
                fout<<"L"<<e2->seq<<"temp:"<<endl;
            }else{

            }


        }else if(opType[t->attr.op - 257 ] == "||"){

            if(e1->kind.exp == OpK && e2->kind.exp == OpK){
                printExpr(e1);
                fout<<"\tjmp L"<<t->seq<<"begin"<<endl;
                fout<<"L"<<e1->seq<<":"<<endl;
                printExpr(e2);
                fout<<"\tjmp L"<<t->seq<<"begin"<<endl;
                fout<<"L"<<e2->seq<<":"<<endl;
                fout<<"\tjmp L"<<t->seq<<endl;
                fout<<"L"<<t->seq<<"begin:"<<endl;
            }else{

            }

        }else if(opType[t->attr.op - 257 ] == "!"){
            
            if(e1->kind.exp == OpK){
                printExpr(e1);
                fout<<"\tjmp L"<<t->seq<<endl;
                fout<<"L"<<e1->seq<<":"<<endl;
            }else if(e1->kind.exp == IdK){
                
            }

        }
    }
    fout.close();
}

void printTemp(TreeNode* t){
    ofstream fout;
    fout.open("E://test.asm",ios::app);
    if(!fout.is_open()){
        cout<<"file can't open"<<endl;
    }else{
        for(int i = 0; i< MAXCHILDREN; i++){
            if(t->child[i]!=NULL){
               
                printTemp(t->child[i]);
            }
        }
    }
     if(t->kind.exp == OpK && t->attr.op - 257 >= 0 && t->attr.op - 257 <=3){
                    fout<<"\tt"<<t->seq<<" dd 0"<<endl;
                }
    fout.close();
    return;
}


void printWrite(TreeNode* t){
    ofstream fout;
    fout.open("E://test.asm",ios::app);
    if(!fout.is_open()){
        cout<<"file can't open"<<endl;
    }else{
        fout<<"\tprint str$("<<t->child[0]->attr.name<<")"<<endl;
        fout<<"\tprint chr$(\"  \")"<<endl;
    }
    fout.close();
}

void printRead(TreeNode* t){
    ofstream fout;
    fout.open("E://test.asm",ios::app);
    if(!fout.is_open()){
        cout<<"file can't open"<<endl;
    }else{
        fout<<"\tmov eax,sval(input(\"input:\"))"<<endl;
        fout<<"\tmov "<<t->child[0]->attr.name<<", eax"<<endl;
    }
    fout.close();
}