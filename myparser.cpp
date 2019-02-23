/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 102 of your 30 day trial period.
* 
* This file was produced by an UNREGISTERED COPY of Parser Generator. It is
* for evaluation purposes only. If you continue to use Parser Generator 30
* days after installation then you are required to purchase a license. For
* more information see the online help or go to the Bumble-Bee Software
* homepage at:
* 
* http://www.bumblebeesoftware.com
* 
* This notice must remain present in the file. It cannot be removed.
****************************************************************************/

/****************************************************************************
* myparser.cpp
* C++ source file generated from myparser.y.
* 
* Date: 01/01/19
* Time: 12:00:31
* 
* AYACC Version: 2.07
****************************************************************************/

#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\myparser.y"

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

#line 56 "myparser.cpp"
// repeated because of possible precompiled header
#include <yycpars.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\myparser.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYPARSERNAME::YYPARSERNAME()
{
	yytables();
#line 35 ".\\myparser.y"

	// place any extra initialisation code here

#line 80 "myparser.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYPARSERNAME::~YYPARSERNAME()
{
	// allows virtual functions to be called properly for correct cleanup
	yydestroy();
#line 40 ".\\myparser.y"

	// place any extra cleanup code here

#line 94 "myparser.cpp"
}

#ifndef YYSTYPE
#define YYSTYPE int
#endif
#ifndef YYSTACK_SIZE
#define YYSTACK_SIZE 100
#endif
#ifndef YYSTACK_MAX
#define YYSTACK_MAX 0
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYPARSERNAME error then you have not declared
* the name of the parser. The easiest way to do this is to use a name
* declaration. This is placed in the declarations section of your YACC
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the parser myparser:
* 
* %name myparser
* 
* For more information see help.
****************************************************************************/

// yyattribute
#ifdef YYDEBUG
void YYFAR* YYPARSERNAME::yyattribute1(int index) const
{
	YYSTYPE YYFAR* p = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + index];
	return p;
}
#define yyattribute(index) (*(YYSTYPE YYFAR*)yyattribute1(index))
#else
#define yyattribute(index) (((YYSTYPE YYFAR*)yyattributestackptr)[yytop + (index)])
#endif

void YYPARSERNAME::yystacktoval(int index)
{
	yyassert(index >= 0);
	*(YYSTYPE YYFAR*)yyvalptr = ((YYSTYPE YYFAR*)yyattributestackptr)[index];
}

void YYPARSERNAME::yyvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltoval()
{
	*(YYSTYPE YYFAR*)yyvalptr = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYPARSERNAME::yyvaltolval()
{
	*(YYSTYPE YYFAR*)yylvalptr = *(YYSTYPE YYFAR*)yyvalptr;
}

void YYPARSERNAME::yylvaltostack(int index)
{
	yyassert(index >= 0);
	((YYSTYPE YYFAR*)yyattributestackptr)[index] = *(YYSTYPE YYFAR*)yylvalptr;
}

void YYFAR* YYPARSERNAME::yynewattribute(int count)
{
	yyassert(count >= 0);
	return new YYFAR YYSTYPE[count];
}

void YYPARSERNAME::yydeleteattribute(void YYFAR* attribute)
{
	delete[] (YYSTYPE YYFAR*)attribute;
}

void YYPARSERNAME::yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count)
{
	for (int i = 0; i < count; i++) {
		((YYSTYPE YYFAR*)dest)[i] = ((YYSTYPE YYFAR*)src)[i];
	}
}

#ifdef YYDEBUG
void YYPARSERNAME::yyinitdebug(void YYFAR** p, int count) const
{
	yyassert(p != NULL);
	yyassert(count >= 1);

	YYSTYPE YYFAR** p1 = (YYSTYPE YYFAR**)p;
	for (int i = 0; i < count; i++) {
		p1[i] = &((YYSTYPE YYFAR*)yyattributestackptr)[yytop + i - (count - 1)];
	}
}
#endif

void YYPARSERNAME::yyaction(int action)
{
	switch (action) {
	case 0:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 102 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(4 - 4);
	printHead();
	printData((*(YYSTYPE YYFAR*)yyvalptr));
	printStmt((*(YYSTYPE YYFAR*)yyvalptr));

#line 209 "myparser.cpp"
			}
		}
		break;
	case 1:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[5];
			yyinitdebug((void YYFAR**)yya, 5);
#endif
			{
#line 109 ".\\myparser.y"

	TreeNode* t = yyattribute(2 - 4);
	if(t != NULL ){
		(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(COMPK);
		int i = 0;
		while(t!=NULL){
			if(i > 8){
				break;
			}
			(*(YYSTYPE YYFAR*)yyvalptr)->child[i] = t;
			t = t->simbling;
			i++;
		}
		TreeNode *s =yyattribute(3 - 4);
		while(s != NULL){
			if(i>8){
				break;
			}
			(*(YYSTYPE YYFAR*)yyvalptr)->child[i]=s;
			s = s->simbling;
			i++;
		}
	}else{
		(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(COMPK);
		t = yyattribute(3 - 4);
		int j = 0;
		while(t!=NULL && j<8){
			(*(YYSTYPE YYFAR*)yyvalptr)->child[j] = t;
			t = t->simbling;
			j++;
		}
	}
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 255 "myparser.cpp"
			}
		}
		break;
	case 2:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 143 ".\\myparser.y"

	
	TreeNode* t = yyattribute(2 - 3);
	if(t != NULL){
		(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(COMPK);
		int i = 0;
		while(t!=NULL){
			if(i > 8){
				break;
			}
			(*(YYSTYPE YYFAR*)yyvalptr)->child[i] = t;
			t = t->simbling;
			i++;
		}
	}
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 284 "myparser.cpp"
			}
		}
		break;
	case 3:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 161 ".\\myparser.y"

	TreeNode *t = yyattribute(1 - 2);
	if(t!=NULL){
		while(t->simbling != NULL){
			t = t->simbling;
		}
		t->simbling =yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr) =yyattribute(1 - 2);
	}else
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 2);

	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 309 "myparser.cpp"
			}
		}
		break;
	case 4:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 174 ".\\myparser.y"
 
	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 324 "myparser.cpp"
			}
		}
		break;
	case 5:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 178 ".\\myparser.y"

	TreeNode* t = yyattribute(1 - 2);
	if(t != NULL){
		while(t->simbling != NULL){
			t = t->simbling;
		}
		t->simbling = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr) =yyattribute(1 - 2);
	}
	else{
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 2);
	}

#line 349 "myparser.cpp"
			}
		}
		break;
	case 6:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 191 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 364 "myparser.cpp"
			}
		}
		break;
	case 7:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 195 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newDecNode(ArrayK);
	int i = 1;
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	while(yyattribute(2 - 3) != NULL &&  i<8){
		(*(YYSTYPE YYFAR*)yyvalptr)->child[i] = yyattribute(2 - 3);
		
		if(yyattribute(2 - 3)->child[0]==NULL){
			yyattribute(2 - 3)->type = yyattribute(1 - 3)->type;
			int offset = getOffset(yyattribute(2 - 3)->attr.name);
			ExpType type = getType(offset);

			if(type == notype){
				setType(offset-1,yyattribute(1 - 3)->type);
			}else{
				cout<<"duplicated define!"<<endl;
			}

			
		}
		else{
			yyattribute(2 - 3)->child[0]->type = yyattribute(1 - 3)->type;
			if(yyattribute(2 - 3)->child[0]->type != yyattribute(2 - 3)->child[1]->type)
				cout<<"error: different types, data loss! "<<endl;
			int offset = getOffset(yyattribute(2 - 3)->child[0]->attr.name);
			ExpType type = getType(offset);

			if(type == notype){
				setType(offset-1,yyattribute(1 - 3)->type);
			}else{
				cout<<"duplicated define!"<<endl;
			}
		}

		yyattribute(2 - 3) = yyattribute(2 - 3)->simbling;
		i++;
	}
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 415 "myparser.cpp"
			}
		}
		break;
	case 8:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 235 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 430 "myparser.cpp"
			}
		}
		break;
	case 9:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 237 ".\\myparser.y"

	TreeNode* t = yyattribute(1 - 3);
	if(t!=NULL){
		while(t->simbling!=NULL){
			t = t->simbling;
		}
		t->simbling = yyattribute(2 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr) =yyattribute(1 - 3);
	}else{
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);
	}

#line 454 "myparser.cpp"
			}
		}
		break;
	case 10:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 250 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 469 "myparser.cpp"
			}
		}
		break;
	case 11:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 252 ".\\myparser.y"

	TreeNode* t = yyattribute(1 - 2);
	if(t!=NULL){
		while(t->simbling!=NULL){
			t = t->simbling;
		}
		t->simbling = yyattribute(2 - 2);
		(*(YYSTYPE YYFAR*)yyvalptr) =yyattribute(1 - 2);
	}else{
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 2);
	}

#line 493 "myparser.cpp"
			}
		}
		break;
	case 12:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 265 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);

#line 508 "myparser.cpp"
			}
		}
		break;
	case 13:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 269 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(PointK);
	(*(YYSTYPE YYFAR*)yyvalptr) -> child[0] = yyattribute(1 - 2);
	int i = 1;
	while(yyattribute(2 - 2) != NULL && i < MAXCHILDREN){
		(*(YYSTYPE YYFAR*)yyvalptr)->attr.arrspan[i] = yyattribute(2 - 2)->attr.int_value;
		yyattribute(2 - 2) = yyattribute(2 - 2)->simbling;
		i++;
	}
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.dev = i-1;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 532 "myparser.cpp"
			}
		}
		break;
	case 14:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 282 ".\\myparser.y"

	int i = 1;
	(*(YYSTYPE YYFAR*)yyvalptr) = newDecNode(VarK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	while(yyattribute(2 - 3) != NULL &&  i<8){
		(*(YYSTYPE YYFAR*)yyvalptr)->child[i] = yyattribute(2 - 3);
		
		if(yyattribute(2 - 3)->child[0]==NULL){
			yyattribute(2 - 3)->type = yyattribute(1 - 3)->type;
			int offset = getOffset(yyattribute(2 - 3)->attr.name);
			ExpType type = getType(offset);

			if(type == notype){
				setType(offset-1,yyattribute(1 - 3)->type);
			}else{
				cout<<"duplicated define!"<<endl;
			}

			
		}
		else{
			yyattribute(2 - 3)->child[0]->type = yyattribute(1 - 3)->type;
			if(yyattribute(2 - 3)->child[0]->type != yyattribute(2 - 3)->child[1]->type)
				cout<<"error: different types, data loss! "<<endl;
			int offset = getOffset(yyattribute(2 - 3)->child[0]->attr.name);
			ExpType type = getType(offset);

			if(type == notype){
				setType(offset-1,yyattribute(1 - 3)->type);
			}else{
				cout<<"duplicated define!"<<endl;
			}
		}
		yyattribute(2 - 3) = yyattribute(2 - 3)->simbling;
		i++;
	}
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 582 "myparser.cpp"
			}
		}
		break;
	case 15:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 321 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(TypeK);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Integer;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 599 "myparser.cpp"
			}
		}
		break;
	case 16:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 326 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(TypeK);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Double;

#line 615 "myparser.cpp"
			}
		}
		break;
	case 17:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 330 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(TypeK);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Char;

#line 631 "myparser.cpp"
			}
		}
		break;
	case 18:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 336 ".\\myparser.y"

	TreeNode* t = yyattribute(1 - 3);
	if(t!=NULL){
		while(t->simbling!=NULL){
			t = t->simbling;
		}
		t->simbling = yyattribute(3 - 3);
		(*(YYSTYPE YYFAR*)yyvalptr) =yyattribute(1 - 3);
	}else{
		(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(3 - 3);
	}

#line 655 "myparser.cpp"
			}
		}
		break;
	case 19:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 348 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 670 "myparser.cpp"
			}
		}
		break;
	case 20:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 352 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 685 "myparser.cpp"
			}
		}
		break;
	case 21:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 354 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(iniTypeK);//输出问题
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 704 "myparser.cpp"
			}
		}
		break;
	case 22:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 363 ".\\myparser.y"


	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(IdK);
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.val = yyattribute(1 - 1)->attr.val;
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.name = yyattribute(1 - 1)->attr.name;
	(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(1 - 1)->type;
	output((*(YYSTYPE YYFAR*)yyvalptr));
	//$$->type = symTableT.getType($$->attr.val);

#line 725 "myparser.cpp"
			}
		}
		break;
	case 23:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 373 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr)= yyattribute(1 - 1);

#line 740 "myparser.cpp"
			}
		}
		break;
	case 24:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 375 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr)= yyattribute(1 - 1);

#line 755 "myparser.cpp"
			}
		}
		break;
	case 25:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 377 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr)= yyattribute(1 - 1);

#line 770 "myparser.cpp"
			}
		}
		break;
	case 26:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 379 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);

#line 785 "myparser.cpp"
			}
		}
		break;
	case 27:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 381 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr)=yyattribute(1 - 1);

#line 800 "myparser.cpp"
			}
		}
		break;
	case 28:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 385 ".\\myparser.y"

	
	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(WriteK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;


#line 819 "myparser.cpp"
			}
		}
		break;
	case 29:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 391 ".\\myparser.y"


	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(WriteK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;


#line 838 "myparser.cpp"
			}
		}
		break;
	case 30:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 399 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(ReadK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;

#line 855 "myparser.cpp"
			}
		}
		break;
	case 31:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 405 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 2);

#line 870 "myparser.cpp"
			}
		}
		break;
	case 32:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 407 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr)=NULL;

#line 885 "myparser.cpp"
			}
		}
		break;
	case 33:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 411 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0]=yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1]=yyattribute(3 - 3);

	if(yyattribute(1 - 3)->child[0]!=NULL){
		cout<<"error: can't be an expr in left of '='!"<<endl;
	}else{
		if(yyattribute(1 - 3)->type != yyattribute(3 - 3)->type){
			cout<<"error: different type"<<endl;
			(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
		}else{
			(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
		}
	}

	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = ASSIGN;
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 917 "myparser.cpp"
			}
		}
		break;
	case 34:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 430 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 932 "myparser.cpp"
			}
		}
		break;
	case 35:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 434 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);

	
	if((*(YYSTYPE YYFAR*)yyvalptr)->child[0]->type != (*(YYSTYPE YYFAR*)yyvalptr)->child[1]->type){
		cout<<" warn: different type, may cause data loss; "<<endl;
		(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
	}else{
		(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
	}

	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = PLUS;
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));	

#line 961 "myparser.cpp"
			}
		}
		break;
	case 36:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 450 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	
	if((*(YYSTYPE YYFAR*)yyvalptr)->child[0]->type != (*(YYSTYPE YYFAR*)yyvalptr)->child[1]->type){
		cout<<" warn: different type, may cause data loss; "<<endl;
		(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
	}else{
		(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
	}

	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MINUS;
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 989 "myparser.cpp"
			}
		}
		break;
	case 37:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 465 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 1004 "myparser.cpp"
			}
		}
		break;
	case 38:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 469 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);

	
	if((*(YYSTYPE YYFAR*)yyvalptr)->child[0]->type != (*(YYSTYPE YYFAR*)yyvalptr)->child[1]->type){
		cout<<" warn: different type, may cause data loss; "<<endl;
		(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
	}else{
		(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
	}

	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = TIMES;
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;

#line 1032 "myparser.cpp"
			}
		}
		break;
	case 39:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 484 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);

	if((*(YYSTYPE YYFAR*)yyvalptr)->child[0]->type != (*(YYSTYPE YYFAR*)yyvalptr)->child[1]->type){
		cout<<" warn: different type, may cause data loss; "<<endl;
		(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
	}else{
		(*(YYSTYPE YYFAR*)yyvalptr)->type = yyattribute(3 - 3)->type;
	}

	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OVER;
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;

#line 1059 "myparser.cpp"
			}
		}
		break;
	case 40:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 498 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);
	if((*(YYSTYPE YYFAR*)yyvalptr)->type == notype){
		cout<<"error: identity "<< (*(YYSTYPE YYFAR*)yyvalptr)->attr.name << " is not defined!" <<endl;
	}

#line 1077 "myparser.cpp"
			}
		}
		break;
	case 41:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 505 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 1092 "myparser.cpp"
			}
		}
		break;
	case 42:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 507 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 1107 "myparser.cpp"
			}
		}
		break;
	case 43:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 509 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);

#line 1122 "myparser.cpp"
			}
		}
		break;
	case 44:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 513 ".\\myparser.y"

	
	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(ConstK);
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.int_value = yyattribute(1 - 1)->attr.int_value;
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Integer;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1141 "myparser.cpp"
			}
		}
		break;
	case 45:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 519 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(ConstK);
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.double_value = yyattribute(1 - 1)->attr.double_value;
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Double;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1159 "myparser.cpp"
			}
		}
		break;
	case 46:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 524 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(ConstK);
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.char_value = yyattribute(1 - 1)->attr.char_value;
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Char;

#line 1176 "myparser.cpp"
			}
		}
		break;
	case 47:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 530 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = EQ;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1196 "myparser.cpp"
			}
		}
		break;
	case 48:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 538 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NE;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1216 "myparser.cpp"
			}
		}
		break;
	case 49:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 546 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = LT;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1236 "myparser.cpp"
			}
		}
		break;
	case 50:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 553 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = MT;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1256 "myparser.cpp"
			}
		}
		break;
	case 51:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 560 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 1271 "myparser.cpp"
			}
		}
		break;
	case 52:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 562 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);

#line 1286 "myparser.cpp"
			}
		}
		break;
	case 53:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 566 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = AND;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1306 "myparser.cpp"
			}
		}
		break;
	case 54:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 573 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(1 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(3 - 3);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = OR;
	output((*(YYSTYPE YYFAR*)yyvalptr));


#line 1327 "myparser.cpp"
			}
		}
		break;
	case 55:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[3];
			yyinitdebug((void YYFAR**)yya, 3);
#endif
			{
#line 581 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newExpNode(OpK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(2 - 2);
	(*(YYSTYPE YYFAR*)yyvalptr)->type = Bool;
	(*(YYSTYPE YYFAR*)yyvalptr)->attr.op = NOT;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1346 "myparser.cpp"
			}
		}
		break;
	case 56:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[2];
			yyinitdebug((void YYFAR**)yya, 2);
#endif
			{
#line 587 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(1 - 1);

#line 1361 "myparser.cpp"
			}
		}
		break;
	case 57:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[4];
			yyinitdebug((void YYFAR**)yya, 4);
#endif
			{
#line 589 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = yyattribute(2 - 3);

#line 1376 "myparser.cpp"
			}
		}
		break;
	case 58:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 597 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(IfK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1395 "myparser.cpp"
			}
		}
		break;
	case 59:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 603 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(IfK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1414 "myparser.cpp"
			}
		}
		break;
	case 60:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 611 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(IfK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1434 "myparser.cpp"
			}
		}
		break;
	case 61:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 619 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(IfK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1454 "myparser.cpp"
			}
		}
		break;
	case 62:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 627 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(IfK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1474 "myparser.cpp"
			}
		}
		break;
	case 63:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[8];
			yyinitdebug((void YYFAR**)yya, 8);
#endif
			{
#line 635 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(IfK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[2] = yyattribute(7 - 7);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));

#line 1494 "myparser.cpp"
			}
		}
		break;
	case 64:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 644 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(WhileK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);

	if(yyattribute(3 - 5)->type != Bool){
		cout<<"warn: condition type isnot Bool!"<<endl;
	}

	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));	

#line 1518 "myparser.cpp"
			}
		}
		break;
	case 65:
		{
#ifdef YYDEBUG
			YYSTYPE YYFAR* yya[6];
			yyinitdebug((void YYFAR**)yya, 6);
#endif
			{
#line 655 ".\\myparser.y"

	(*(YYSTYPE YYFAR*)yyvalptr) = newStmtNode(WhileK);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[0] = yyattribute(3 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->child[1] = yyattribute(5 - 5);
	(*(YYSTYPE YYFAR*)yyvalptr)->simbling = NULL;
	output((*(YYSTYPE YYFAR*)yyvalptr));	

#line 1537 "myparser.cpp"
			}
		}
		break;
	default:
		yyassert(0);
		break;
	}
}

void YYPARSERNAME::yytables()
{
	yyattribute_size = sizeof(YYSTYPE);
	yysstack_size = YYSTACK_SIZE;
	yystack_max = YYSTACK_MAX;

#ifdef YYDEBUG
	static const yysymbol_t YYNEARFAR YYBASED_CODE symbol[] = {
		{ "$end", 0 },
		{ "error", 256 },
		{ "PLUS", 257 },
		{ "MINUS", 258 },
		{ "TIMES", 259 },
		{ "OVER", 260 },
		{ "ASSIGN", 261 },
		{ "EQ", 262 },
		{ "LT", 263 },
		{ "MT", 264 },
		{ "NE", 265 },
		{ "AND", 266 },
		{ "OR", 267 },
		{ "NOT", 268 },
		{ "LPAREN", 269 },
		{ "RPAREN", 270 },
		{ "LBRACE", 271 },
		{ "RBRACE", 272 },
		{ "LSQBRA", 273 },
		{ "RSQBRA", 274 },
		{ "MAIN", 275 },
		{ "COMMA", 276 },
		{ "SEMICOLON", 277 },
		{ "IF", 278 },
		{ "ELSE", 279 },
		{ "WHILE", 281 },
		{ "INT_NUM", 282 },
		{ "DOUBLE_NUM", 283 },
		{ "CONSTCHAR", 284 },
		{ "INT", 285 },
		{ "DOUBLE", 286 },
		{ "CHAR", 287 },
		{ "ID", 288 },
		{ "WRITE", 289 },
		{ "READ", 290 },
		{ NULL, 0 }
	};
	yysymbol = symbol;

	static const char* const YYNEARFAR YYBASED_CODE rule[] = {
		"$accept: program",
		"program: MAIN LPAREN RPAREN compound_stmt",
		"compound_stmt: LBRACE local_declarations stmt_seq RBRACE",
		"compound_stmt: LBRACE stmt_seq RBRACE",
		"local_declarations: local_declarations var_declaration",
		"local_declarations: var_declaration",
		"stmt_seq: stmt_seq stmt",
		"stmt_seq: stmt",
		"array_declaration: type_specifier array_list SEMICOLON",
		"array_list: array",
		"array_list: array_list COMMA array",
		"dev_list: dev",
		"dev_list: dev_list dev",
		"dev: LSQBRA INT_NUM RSQBRA",
		"array: ID dev_list",
		"var_declaration: type_specifier idlist SEMICOLON",
		"type_specifier: INT",
		"type_specifier: DOUBLE",
		"type_specifier: CHAR",
		"idlist: idlist COMMA initdec",
		"idlist: initdec",
		"initdec: id",
		"initdec: id ASSIGN constval",
		"id: ID",
		"stmt: expr_stmt",
		"stmt: if_stmt",
		"stmt: while_stmt",
		"stmt: read_stmt",
		"stmt: write_stmt",
		"write_stmt: WRITE LPAREN id RPAREN SEMICOLON",
		"write_stmt: WRITE LPAREN constval RPAREN SEMICOLON",
		"read_stmt: READ LPAREN id RPAREN SEMICOLON",
		"expr_stmt: expr SEMICOLON",
		"expr_stmt: SEMICOLON",
		"expr: simple_exp ASSIGN simple_exp",
		"expr: logic_exp",
		"simple_exp: simple_exp PLUS term",
		"simple_exp: simple_exp MINUS term",
		"simple_exp: term",
		"term: term TIMES factor",
		"term: term OVER factor",
		"term: factor",
		"factor: constval",
		"factor: id",
		"factor: LPAREN simple_exp RPAREN",
		"constval: INT_NUM",
		"constval: DOUBLE_NUM",
		"constval: CONSTCHAR",
		"condition_exp: condition_exp EQ condition_exp",
		"condition_exp: condition_exp NE condition_exp",
		"condition_exp: condition_exp LT condition_exp",
		"condition_exp: condition_exp MT condition_exp",
		"condition_exp: simple_exp",
		"condition_exp: LPAREN condition_exp RPAREN",
		"logic_exp: logic_exp AND logic_exp",
		"logic_exp: logic_exp OR logic_exp",
		"logic_exp: NOT logic_exp",
		"logic_exp: condition_exp",
		"logic_exp: LPAREN logic_exp RPAREN",
		"if_stmt: IF LPAREN expr RPAREN compound_stmt",
		"if_stmt: IF LPAREN expr RPAREN stmt",
		"if_stmt: IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt",
		"if_stmt: IF LPAREN expr RPAREN stmt ELSE stmt",
		"if_stmt: IF LPAREN expr RPAREN stmt ELSE compound_stmt",
		"if_stmt: IF LPAREN expr RPAREN compound_stmt ELSE stmt",
		"while_stmt: WHILE LPAREN expr RPAREN compound_stmt",
		"while_stmt: WHILE LPAREN expr RPAREN stmt"
	};
	yyrule = rule;
#endif

	static const yyreduction_t YYNEARFAR YYBASED_CODE reduction[] = {
		{ 0, 1, -1 },
		{ 1, 4, 0 },
		{ 2, 4, 1 },
		{ 2, 3, 2 },
		{ 3, 2, 3 },
		{ 3, 1, 4 },
		{ 4, 2, 5 },
		{ 4, 1, 6 },
		{ 5, 3, 7 },
		{ 6, 1, 8 },
		{ 6, 3, 9 },
		{ 7, 1, 10 },
		{ 7, 2, 11 },
		{ 8, 3, 12 },
		{ 9, 2, 13 },
		{ 10, 3, 14 },
		{ 11, 1, 15 },
		{ 11, 1, 16 },
		{ 11, 1, 17 },
		{ 12, 3, 18 },
		{ 12, 1, 19 },
		{ 13, 1, 20 },
		{ 13, 3, 21 },
		{ 14, 1, 22 },
		{ 15, 1, 23 },
		{ 15, 1, 24 },
		{ 15, 1, 25 },
		{ 15, 1, 26 },
		{ 15, 1, 27 },
		{ 16, 5, 28 },
		{ 16, 5, 29 },
		{ 17, 5, 30 },
		{ 18, 2, 31 },
		{ 18, 1, 32 },
		{ 19, 3, 33 },
		{ 19, 1, 34 },
		{ 20, 3, 35 },
		{ 20, 3, 36 },
		{ 20, 1, 37 },
		{ 21, 3, 38 },
		{ 21, 3, 39 },
		{ 21, 1, 40 },
		{ 22, 1, 41 },
		{ 22, 1, 42 },
		{ 22, 3, 43 },
		{ 23, 1, 44 },
		{ 23, 1, 45 },
		{ 23, 1, 46 },
		{ 24, 3, 47 },
		{ 24, 3, 48 },
		{ 24, 3, 49 },
		{ 24, 3, 50 },
		{ 24, 1, 51 },
		{ 24, 3, 52 },
		{ 25, 3, 53 },
		{ 25, 3, 54 },
		{ 25, 2, 55 },
		{ 25, 1, 56 },
		{ 25, 3, 57 },
		{ 26, 5, 58 },
		{ 26, 5, 59 },
		{ 26, 7, 60 },
		{ 26, 7, 61 },
		{ 26, 7, 62 },
		{ 26, 7, 63 },
		{ 27, 5, 64 },
		{ 27, 5, 65 }
	};
	yyreduction = reduction;

	yytokenaction_size = 89;

	static const yytokenaction_t YYNEARFAR YYBASED_CODE tokenaction[] = {
		{ 109, YYAT_SHIFT, 5 },
		{ 21, YYAT_ERROR, 0 },
		{ 31, YYAT_SHIFT, 59 },
		{ 31, YYAT_SHIFT, 60 },
		{ 31, YYAT_SHIFT, 61 },
		{ 31, YYAT_SHIFT, 62 },
		{ 109, YYAT_SHIFT, 9 },
		{ 109, YYAT_SHIFT, 10 },
		{ 84, YYAT_SHIFT, 84 },
		{ 102, YYAT_SHIFT, 109 },
		{ 109, YYAT_SHIFT, 11 },
		{ 91, YYAT_SHIFT, 64 },
		{ 91, YYAT_SHIFT, 65 },
		{ 90, YYAT_SHIFT, 55 },
		{ 90, YYAT_SHIFT, 56 },
		{ 21, YYAT_SHIFT, 15 },
		{ 21, YYAT_SHIFT, 16 },
		{ 21, YYAT_SHIFT, 17 },
		{ 109, YYAT_SHIFT, 19 },
		{ 109, YYAT_SHIFT, 20 },
		{ 101, YYAT_SHIFT, 108 },
		{ 84, YYAT_SHIFT, 12 },
		{ 84, YYAT_SHIFT, 13 },
		{ 84, YYAT_SHIFT, 14 },
		{ 100, YYAT_SHIFT, 59 },
		{ 100, YYAT_SHIFT, 60 },
		{ 100, YYAT_SHIFT, 61 },
		{ 100, YYAT_SHIFT, 62 },
		{ 42, YYAT_SHIFT, 59 },
		{ 42, YYAT_SHIFT, 60 },
		{ 42, YYAT_SHIFT, 61 },
		{ 42, YYAT_SHIFT, 62 },
		{ 100, YYAT_SHIFT, 68 },
		{ 99, YYAT_SHIFT, 64 },
		{ 99, YYAT_SHIFT, 65 },
		{ 96, YYAT_SHIFT, 107 },
		{ 42, YYAT_SHIFT, 68 },
		{ 43, YYAT_SHIFT, 64 },
		{ 43, YYAT_SHIFT, 65 },
		{ 41, YYAT_SHIFT, 57 },
		{ 41, YYAT_SHIFT, 58 },
		{ 34, YYAT_SHIFT, 64 },
		{ 34, YYAT_SHIFT, 65 },
		{ 41, YYAT_SHIFT, 67 },
		{ 95, YYAT_SHIFT, 106 },
		{ 34, YYAT_SHIFT, 66 },
		{ 99, YYAT_SHIFT, 69 },
		{ 89, YYAT_SHIFT, 55 },
		{ 89, YYAT_SHIFT, 56 },
		{ 94, YYAT_SHIFT, 105 },
		{ 43, YYAT_SHIFT, 69 },
		{ 88, YYAT_SHIFT, 60 },
		{ 88, YYAT_SHIFT, 61 },
		{ 85, YYAT_SHIFT, 60 },
		{ 85, YYAT_SHIFT, 61 },
		{ 58, YYAT_SHIFT, 7 },
		{ 58, YYAT_SHIFT, 8 },
		{ 53, YYAT_SHIFT, 76 },
		{ 53, YYAT_SHIFT, 77 },
		{ 48, YYAT_ERROR, 0 },
		{ 48, YYAT_SHIFT, 75 },
		{ 40, YYAT_SHIFT, 64 },
		{ 40, YYAT_SHIFT, 65 },
		{ 29, YYAT_SHIFT, 57 },
		{ 29, YYAT_SHIFT, 58 },
		{ 26, YYAT_SHIFT, 55 },
		{ 26, YYAT_SHIFT, 56 },
		{ 83, YYAT_SHIFT, 57 },
		{ 79, YYAT_SHIFT, 79 },
		{ 78, YYAT_ERROR, 0 },
		{ 76, YYAT_SHIFT, 18 },
		{ 74, YYAT_SHIFT, 96 },
		{ 73, YYAT_SHIFT, 95 },
		{ 72, YYAT_SHIFT, 94 },
		{ 71, YYAT_SHIFT, 93 },
		{ 70, YYAT_SHIFT, 92 },
		{ 54, YYAT_SHIFT, 78 },
		{ 46, YYAT_ERROR, 0 },
		{ 33, YYAT_SHIFT, 63 },
		{ 22, YYAT_SHIFT, 50 },
		{ 20, YYAT_SHIFT, 47 },
		{ 19, YYAT_SHIFT, 46 },
		{ 11, YYAT_SHIFT, 45 },
		{ 10, YYAT_SHIFT, 44 },
		{ 4, YYAT_SHIFT, 5 },
		{ 3, YYAT_SHIFT, 4 },
		{ 2, YYAT_ACCEPT, 0 },
		{ 1, YYAT_SHIFT, 3 },
		{ 0, YYAT_SHIFT, 1 }
	};
	yytokenaction = tokenaction;

	static const yystateaction_t YYNEARFAR YYBASED_CODE stateaction[] = {
		{ -187, 1, YYAT_ERROR, 0 },
		{ -182, 1, YYAT_ERROR, 0 },
		{ 86, 1, YYAT_ERROR, 0 },
		{ -185, 1, YYAT_ERROR, 0 },
		{ -187, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_DEFAULT, 21 },
		{ 0, 0, YYAT_REDUCE, 1 },
		{ 0, 0, YYAT_DEFAULT, 58 },
		{ 0, 0, YYAT_DEFAULT, 58 },
		{ 0, 0, YYAT_REDUCE, 33 },
		{ -186, 1, YYAT_ERROR, 0 },
		{ -187, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 45 },
		{ 0, 0, YYAT_REDUCE, 46 },
		{ 0, 0, YYAT_REDUCE, 47 },
		{ 0, 0, YYAT_REDUCE, 16 },
		{ 0, 0, YYAT_REDUCE, 17 },
		{ 0, 0, YYAT_REDUCE, 18 },
		{ 0, 0, YYAT_REDUCE, 23 },
		{ -188, 1, YYAT_ERROR, 0 },
		{ -189, 1, YYAT_ERROR, 0 },
		{ -270, 1, YYAT_DEFAULT, 109 },
		{ -193, 1, YYAT_DEFAULT, 48 },
		{ 0, 0, YYAT_REDUCE, 5 },
		{ 0, 0, YYAT_REDUCE, 7 },
		{ 0, 0, YYAT_DEFAULT, 76 },
		{ -194, 1, YYAT_REDUCE, 38 },
		{ 0, 0, YYAT_REDUCE, 26 },
		{ 0, 0, YYAT_REDUCE, 42 },
		{ -203, 1, YYAT_REDUCE, 35 },
		{ 0, 0, YYAT_REDUCE, 25 },
		{ -260, 1, YYAT_REDUCE, 57 },
		{ 0, 0, YYAT_REDUCE, 43 },
		{ -199, 1, YYAT_ERROR, 0 },
		{ -216, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_REDUCE, 41 },
		{ 0, 0, YYAT_REDUCE, 24 },
		{ 0, 0, YYAT_REDUCE, 27 },
		{ 0, 0, YYAT_REDUCE, 28 },
		{ 0, 0, YYAT_REDUCE, 56 },
		{ -196, 1, YYAT_REDUCE, 52 },
		{ -227, 1, YYAT_ERROR, 0 },
		{ -234, 1, YYAT_REDUCE, 57 },
		{ -220, 1, YYAT_REDUCE, 52 },
		{ 0, 0, YYAT_DEFAULT, 58 },
		{ 0, 0, YYAT_DEFAULT, 58 },
		{ -192, 1, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_DEFAULT, 76 },
		{ -212, 1, YYAT_DEFAULT, 109 },
		{ 0, 0, YYAT_REDUCE, 4 },
		{ 0, 0, YYAT_REDUCE, 3 },
		{ 0, 0, YYAT_REDUCE, 6 },
		{ 0, 0, YYAT_REDUCE, 20 },
		{ -219, 1, YYAT_ERROR, 0 },
		{ -185, 1, YYAT_REDUCE, 21 },
		{ 0, 0, YYAT_DEFAULT, 79 },
		{ 0, 0, YYAT_DEFAULT, 79 },
		{ 0, 0, YYAT_DEFAULT, 58 },
		{ -213, 1, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_REDUCE, 32 },
		{ 0, 0, YYAT_DEFAULT, 79 },
		{ 0, 0, YYAT_DEFAULT, 79 },
		{ 0, 0, YYAT_DEFAULT, 79 },
		{ 0, 0, YYAT_REDUCE, 58 },
		{ 0, 0, YYAT_REDUCE, 53 },
		{ 0, 0, YYAT_REDUCE, 44 },
		{ -195, 1, YYAT_ERROR, 0 },
		{ -196, 1, YYAT_ERROR, 0 },
		{ -197, 1, YYAT_ERROR, 0 },
		{ -198, 1, YYAT_ERROR, 0 },
		{ -199, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 2 },
		{ -218, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 15 },
		{ -219, 1, YYAT_DEFAULT, 46 },
		{ -201, 1, YYAT_DEFAULT, 84 },
		{ 0, 0, YYAT_REDUCE, 39 },
		{ 0, 0, YYAT_REDUCE, 40 },
		{ 0, 0, YYAT_REDUCE, 54 },
		{ -199, 1, YYAT_REDUCE, 55 },
		{ -261, 1, YYAT_DEFAULT, 76 },
		{ -210, 1, YYAT_REDUCE, 48 },
		{ 0, 0, YYAT_REDUCE, 50 },
		{ 0, 0, YYAT_REDUCE, 51 },
		{ -212, 1, YYAT_REDUCE, 49 },
		{ -212, 1, YYAT_REDUCE, 36 },
		{ -246, 1, YYAT_REDUCE, 37 },
		{ -246, 1, YYAT_REDUCE, 34 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ -228, 1, YYAT_ERROR, 0 },
		{ -233, 1, YYAT_ERROR, 0 },
		{ -242, 1, YYAT_ERROR, 0 },
		{ 0, 0, YYAT_REDUCE, 19 },
		{ 0, 0, YYAT_REDUCE, 22 },
		{ -224, 1, YYAT_ERROR, 0 },
		{ -238, 1, YYAT_ERROR, 0 },
		{ -259, 1, YYAT_REDUCE, 59 },
		{ -270, 1, YYAT_REDUCE, 60 },
		{ 0, 0, YYAT_REDUCE, 65 },
		{ 0, 0, YYAT_REDUCE, 66 },
		{ 0, 0, YYAT_REDUCE, 30 },
		{ 0, 0, YYAT_REDUCE, 29 },
		{ 0, 0, YYAT_REDUCE, 31 },
		{ 0, 0, YYAT_DEFAULT, 109 },
		{ -271, 1, YYAT_DEFAULT, 58 },
		{ 0, 0, YYAT_REDUCE, 61 },
		{ 0, 0, YYAT_REDUCE, 64 },
		{ 0, 0, YYAT_REDUCE, 63 },
		{ 0, 0, YYAT_REDUCE, 62 }
	};
	yystateaction = stateaction;

	yynontermgoto_size = 63;

	static const yynontermgoto_t YYNEARFAR YYBASED_CODE nontermgoto[] = {
		{ 109, 112 },
		{ 84, 32 },
		{ 79, 99 },
		{ 76, 97 },
		{ 76, 54 },
		{ 78, 98 },
		{ 79, -1 },
		{ 84, 43 },
		{ 84, 26 },
		{ 84, 35 },
		{ 84, 28 },
		{ 84, 100 },
		{ 21, 48 },
		{ 109, 113 },
		{ 109, 38 },
		{ 109, 37 },
		{ 109, 36 },
		{ 109, 33 },
		{ 21, 49 },
		{ 21, 25 },
		{ 108, 110 },
		{ 93, 103 },
		{ 92, 101 },
		{ 21, 24 },
		{ 109, 30 },
		{ 109, 27 },
		{ 48, -1 },
		{ 62, 40 },
		{ 46, 73 },
		{ 5, 21 },
		{ 5, 22 },
		{ 62, 88 },
		{ 66, 91 },
		{ 108, 111 },
		{ 93, 104 },
		{ 92, 102 },
		{ 5, 23 },
		{ 46, 72 },
		{ 64, 89 },
		{ 48, 51 },
		{ 45, 71 },
		{ 45, 34 },
		{ 65, -1 },
		{ 65, 90 },
		{ 58, 31 },
		{ 58, 83 },
		{ 45, 29 },
		{ 56, -1 },
		{ 56, 81 },
		{ 25, 53 },
		{ 25, 52 },
		{ 8, 42 },
		{ 8, 41 },
		{ 61, 87 },
		{ 60, 86 },
		{ 59, 85 },
		{ 57, 82 },
		{ 55, 80 },
		{ 47, 74 },
		{ 44, 70 },
		{ 7, 39 },
		{ 4, 6 },
		{ 0, 2 }
	};
	yynontermgoto = nontermgoto;

	static const yystategoto_t YYNEARFAR YYBASED_CODE stategoto[] = {
		{ 61, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 59, -1 },
		{ 26, 21 },
		{ 0, -1 },
		{ 35, 58 },
		{ 27, 84 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 8, 48 },
		{ 0, 48 },
		{ 0, -1 },
		{ 0, -1 },
		{ 37, 76 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 40, 45 },
		{ 21, 58 },
		{ 14, -1 },
		{ 44, -1 },
		{ 24, 109 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 35, 56 },
		{ 26, 65 },
		{ 31, 58 },
		{ 20, 62 },
		{ 31, 62 },
		{ 30, 62 },
		{ 29, 62 },
		{ 7, 84 },
		{ 0, -1 },
		{ 17, 65 },
		{ 22, 79 },
		{ 12, 79 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -10, -1 },
		{ 0, -1 },
		{ -18, -1 },
		{ -18, 84 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ -13, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 20, 109 },
		{ 19, 109 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 18, 109 },
		{ -2, 45 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 },
		{ 0, -1 }
	};
	yystategoto = stategoto;

	yydestructorptr = NULL;

	yytokendestptr = NULL;
	yytokendest_size = 0;

	yytokendestbaseptr = NULL;
	yytokendestbase_size = 0;
}
#line 665 ".\\myparser.y"


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


