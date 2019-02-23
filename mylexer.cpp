/****************************************************************************
*                     U N R E G I S T E R E D   C O P Y
* 
* You are on day 98 of your 30 day trial period.
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
* mylexer.cpp
* C++ source file generated from mylexer.l.
* 
* Date: 12/28/18
* Time: 15:05:57
* 
* ALex Version: 2.07
****************************************************************************/

#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#line 1 ".\\mylexer.l"

/****************************************************************************
mylexer.l
ParserWizard generated Lex file.

Date: 2018��12��13��
****************************************************************************/
#include<string>
#include"symtree.h"
#include"symtable.h"
#include "myparser.h"
#include<iostream>
using namespace std;

TreeNode treenode;
extern TableNode symTable[100];
int lineno = 1;

#line 57 "mylexer.cpp"
// repeated because of possible precompiled header
#include <yyclex.h>

// namespaces
#ifdef YYSTDCPPLIB
using namespace std;
#endif
#ifdef YYNAMESPACE
using namespace yl;
#endif

#include ".\mylexer.h"

/////////////////////////////////////////////////////////////////////////////
// constructor

YYLEXERNAME::YYLEXERNAME()
{
	yytables();
#line 32 ".\\mylexer.l"

	// place any extra initialisation code here

#line 81 "mylexer.cpp"
}

/////////////////////////////////////////////////////////////////////////////
// destructor

YYLEXERNAME::~YYLEXERNAME()
{
#line 37 ".\\mylexer.l"

	// place any extra cleanup code here

#line 93 "mylexer.cpp"
}

#ifndef YYTEXT_SIZE
#define YYTEXT_SIZE 100
#endif
#ifndef YYUNPUT_SIZE
#define YYUNPUT_SIZE YYTEXT_SIZE
#endif
#ifndef YYTEXT_MAX
#define YYTEXT_MAX 0
#endif
#ifndef YYUNPUT_MAX
#define YYUNPUT_MAX YYTEXT_MAX
#endif

/****************************************************************************
* N O T E
* 
* If the compiler generates a YYLEXERNAME error then you have not declared
* the name of the lexical analyser. The easiest way to do this is to use a
* name declaration. This is placed in the declarations section of your Lex
* source file and is introduced with the %name keyword. For instance, the
* following name declaration declares the lexer mylexer:
* 
* %name mylexer
* 
* For more information see help.
****************************************************************************/

// backwards compatability with lex
#ifdef input
int YYLEXERNAME::yyinput()
{
	return input();
}
#else
#define input yyinput
#endif

#ifdef output
void YYLEXERNAME::yyoutput(int ch)
{
	output(ch);
}
#else
#define output yyoutput
#endif

#ifdef unput
void YYLEXERNAME::yyunput(int ch)
{
	unput(ch);
}
#else
#define unput yyunput
#endif

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn -rch		// <warning: unreachable code> off
#endif
#endif

int YYLEXERNAME::yyaction(int action)
{
#line 60 ".\\mylexer.l"

	// extract yylval for use later on in actions
	YYSTYPE YYFAR& yylval = *(YYSTYPE YYFAR*)yyparserptr->yylvalptr;

#line 164 "mylexer.cpp"
	yyreturnflg = yytrue;
	switch (action) {
	case 1:
		{
#line 67 ".\\mylexer.l"
return MAIN;
#line 171 "mylexer.cpp"
		}
		break;
	case 2:
		{
#line 68 ".\\mylexer.l"
return INT;
#line 178 "mylexer.cpp"
		}
		break;
	case 3:
		{
#line 69 ".\\mylexer.l"
return DOUBLE;
#line 185 "mylexer.cpp"
		}
		break;
	case 4:
		{
#line 70 ".\\mylexer.l"
return CHAR;
#line 192 "mylexer.cpp"
		}
		break;
	case 5:
		{
#line 71 ".\\mylexer.l"
return IF;
#line 199 "mylexer.cpp"
		}
		break;
	case 6:
		{
#line 72 ".\\mylexer.l"
return WHILE;
#line 206 "mylexer.cpp"
		}
		break;
	case 7:
		{
#line 73 ".\\mylexer.l"
return FOR;
#line 213 "mylexer.cpp"
		}
		break;
	case 8:
		{
#line 74 ".\\mylexer.l"
return ELSE;
#line 220 "mylexer.cpp"
		}
		break;
	case 9:
		{
#line 75 ".\\mylexer.l"
return WRITE;
#line 227 "mylexer.cpp"
		}
		break;
	case 10:
		{
#line 76 ".\\mylexer.l"
return READ;
#line 234 "mylexer.cpp"
		}
		break;
	case 11:
		{
#line 77 ".\\mylexer.l"
return ASSIGN;
#line 241 "mylexer.cpp"
		}
		break;
	case 12:
		{
#line 78 ".\\mylexer.l"
return PLUS;
#line 248 "mylexer.cpp"
		}
		break;
	case 13:
		{
#line 79 ".\\mylexer.l"
return MINUS;
#line 255 "mylexer.cpp"
		}
		break;
	case 14:
		{
#line 80 ".\\mylexer.l"
return TIMES;
#line 262 "mylexer.cpp"
		}
		break;
	case 15:
		{
#line 81 ".\\mylexer.l"
return OVER;
#line 269 "mylexer.cpp"
		}
		break;
	case 16:
		{
#line 82 ".\\mylexer.l"
return LPAREN;
#line 276 "mylexer.cpp"
		}
		break;
	case 17:
		{
#line 83 ".\\mylexer.l"
return RPAREN;
#line 283 "mylexer.cpp"
		}
		break;
	case 18:
		{
#line 84 ".\\mylexer.l"
return LSQBRA;
#line 290 "mylexer.cpp"
		}
		break;
	case 19:
		{
#line 85 ".\\mylexer.l"
return RSQBRA;
#line 297 "mylexer.cpp"
		}
		break;
	case 20:
		{
#line 86 ".\\mylexer.l"
return LBRACE;
#line 304 "mylexer.cpp"
		}
		break;
	case 21:
		{
#line 87 ".\\mylexer.l"
return RBRACE;
#line 311 "mylexer.cpp"
		}
		break;
	case 22:
		{
#line 88 ".\\mylexer.l"
return SEMICOLON;
#line 318 "mylexer.cpp"
		}
		break;
	case 23:
		{
#line 89 ".\\mylexer.l"
return COMMA;
#line 325 "mylexer.cpp"
		}
		break;
	case 24:
		{
#line 90 ".\\mylexer.l"
return EQ;
#line 332 "mylexer.cpp"
		}
		break;
	case 25:
		{
#line 91 ".\\mylexer.l"
return LT;
#line 339 "mylexer.cpp"
		}
		break;
	case 26:
		{
#line 92 ".\\mylexer.l"
return MT;
#line 346 "mylexer.cpp"
		}
		break;
	case 27:
		{
#line 93 ".\\mylexer.l"
return NE;
#line 353 "mylexer.cpp"
		}
		break;
	case 28:
		{
#line 94 ".\\mylexer.l"
return AND;
#line 360 "mylexer.cpp"
		}
		break;
	case 29:
		{
#line 95 ".\\mylexer.l"
return OR;
#line 367 "mylexer.cpp"
		}
		break;
	case 30:
		{
#line 96 ".\\mylexer.l"
return NOT;
#line 374 "mylexer.cpp"
		}
		break;
	case 31:
		{
#line 98 ".\\mylexer.l"

#line 381 "mylexer.cpp"
		}
		break;
	case 32:
		{
#line 99 ".\\mylexer.l"

#line 388 "mylexer.cpp"
		}
		break;
	case 33:
		{
#line 100 ".\\mylexer.l"

				yylval=&treenode;
				yylval->attr.double_value=atof(yytext);
				//cout<<atof(yytext)<<endl;;
				return DOUBLE_NUM;
				
#line 400 "mylexer.cpp"
		}
		break;
#line 106 ".\\mylexer.l"
				
#line 405 "mylexer.cpp"
	case 34:
		{
#line 107 ".\\mylexer.l"

			yylval=&treenode;
			yylval->attr.int_value=atoi(yytext);
			return INT_NUM;
			
#line 414 "mylexer.cpp"
		}
		break;
#line 112 ".\\mylexer.l"
			
#line 419 "mylexer.cpp"
	case 35:
		{
#line 113 ".\\mylexer.l"

				yylval = &treenode;
				yylval->attr.char_value = yytext[0];
				return CONSTCHAR;
			
#line 428 "mylexer.cpp"
		}
		break;
	case 36:
		{
#line 119 ".\\mylexer.l"

			
	int offset;
	offset = getOffset(yytext);

	yylval = &treenode;
	yylval->attr.val = offset;
	yylval->attr.name = symTable[offset-1].id.data();
	yylval->type = symTable[offset-1].type;

	return ID;

#line 446 "mylexer.cpp"
		}
		break;
	case 37:
		{
#line 132 ".\\mylexer.l"
 lineno++; 
#line 453 "mylexer.cpp"
		}
		break;
	case 38:
		{
#line 133 ".\\mylexer.l"
/*do nothing*/;
#line 460 "mylexer.cpp"
		}
		break;
	default:
		yyassert(0);
		break;
	}
	yyreturnflg = yyfalse;
	return 0;
}

#ifndef YYNBORLANDWARN
#ifdef __BORLANDC__
#pragma warn .rch		// <warning: unreachable code> to the old state
#endif
#endif

void YYLEXERNAME::yytables()
{
	yystext_size = YYTEXT_SIZE;
	yysunput_size = YYUNPUT_SIZE;
	yytext_max = YYTEXT_MAX;
	yyunput_max = YYUNPUT_MAX;

	static const yymatch_t YYNEARFAR YYBASED_CODE match[] = {
		0
	};
	yymatch = match;

	yytransitionmax = 213;
	static const yytransition_t YYNEARFAR YYBASED_CODE transition[] = {
		{ 0, 0 },
		{ 3, 1 },
		{ 4, 1 },
		{ 56, 79 },
		{ 0, 84 },
		{ 52, 31 },
		{ 3, 4 },
		{ 3, 4 },
		{ 68, 69 },
		{ 0, 79 },
		{ 0, 79 },
		{ 57, 79 },
		{ 48, 28 },
		{ 54, 33 },
		{ 69, 57 },
		{ 53, 31 },
		{ 69, 69 },
		{ 38, 14 },
		{ 38, 83 },
		{ 70, 57 },
		{ 49, 28 },
		{ 79, 69 },
		{ 39, 14 },
		{ 55, 37 },
		{ 3, 1 },
		{ 5, 1 },
		{ 38, 86 },
		{ 0, 39 },
		{ 68, 84 },
		{ 3, 4 },
		{ 6, 1 },
		{ 7, 1 },
		{ 8, 1 },
		{ 9, 1 },
		{ 10, 1 },
		{ 11, 1 },
		{ 12, 1 },
		{ 13, 1 },
		{ 43, 19 },
		{ 14, 1 },
		{ 15, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 16, 1 },
		{ 83, 83 },
		{ 17, 1 },
		{ 18, 1 },
		{ 19, 1 },
		{ 20, 1 },
		{ 86, 83 },
		{ 56, 86 },
		{ 56, 86 },
		{ 78, 86 },
		{ 36, 6 },
		{ 59, 44 },
		{ 60, 45 },
		{ 40, 42 },
		{ 0, 79 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 42, 42 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 16, 16 },
		{ 22, 1 },
		{ 61, 46 },
		{ 23, 1 },
		{ 62, 47 },
		{ 63, 49 },
		{ 64, 50 },
		{ 65, 51 },
		{ 66, 52 },
		{ 24, 1 },
		{ 25, 1 },
		{ 26, 1 },
		{ 27, 1 },
		{ 67, 53 },
		{ 44, 24 },
		{ 28, 1 },
		{ 45, 25 },
		{ 71, 59 },
		{ 72, 60 },
		{ 29, 1 },
		{ 73, 61 },
		{ 74, 64 },
		{ 75, 65 },
		{ 76, 66 },
		{ 30, 1 },
		{ 77, 67 },
		{ 81, 76 },
		{ 46, 26 },
		{ 56, 86 },
		{ 31, 1 },
		{ 80, 72 },
		{ 82, 77 },
		{ 84, 78 },
		{ 32, 1 },
		{ 33, 1 },
		{ 34, 1 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 47, 27 },
		{ 85, 80 },
		{ 0, 7 },
		{ 50, 29 },
		{ 51, 30 },
		{ 35, 5 },
		{ 0, 0 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 0, 0 },
		{ 21, 85 },
		{ 0, 0 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 21, 85 },
		{ 41, 41 },
		{ 41, 41 },
		{ 41, 41 },
		{ 41, 41 },
		{ 41, 41 },
		{ 41, 41 },
		{ 41, 41 },
		{ 41, 41 },
		{ 41, 41 },
		{ 41, 41 },
		{ 58, 58 },
		{ 58, 58 },
		{ 58, 58 },
		{ 58, 58 },
		{ 58, 58 },
		{ 58, 58 },
		{ 58, 58 },
		{ 58, 58 },
		{ 58, 58 },
		{ 58, 58 }
	};
	yytransition = transition;

	static const yystate_t YYNEARFAR YYBASED_CODE state[] = {
		{ 0, 0, 0 },
		{ 85, -8, 0 },
		{ 1, 0, 0 },
		{ 4, 0, 38 },
		{ 0, -3, 37 },
		{ 0, 72, 30 },
		{ 0, 21, 0 },
		{ -37, 120, 0 },
		{ 0, 0, 16 },
		{ 0, 0, 17 },
		{ 0, 0, 14 },
		{ 0, 0, 12 },
		{ 0, 0, 23 },
		{ 0, 0, 13 },
		{ 0, -25, 15 },
		{ 41, 0, 34 },
		{ 42, 25, 34 },
		{ 0, 0, 22 },
		{ 0, 0, 25 },
		{ 0, -23, 11 },
		{ 0, 0, 26 },
		{ 85, 0, 36 },
		{ 0, 0, 18 },
		{ 0, 0, 19 },
		{ 85, -8, 36 },
		{ 85, -13, 36 },
		{ 85, 1, 36 },
		{ 85, 17, 36 },
		{ 85, -90, 36 },
		{ 85, 34, 36 },
		{ 85, 31, 36 },
		{ 85, -99, 36 },
		{ 0, 0, 20 },
		{ 0, -111, 0 },
		{ 0, 0, 21 },
		{ 0, 0, 27 },
		{ 0, 0, 28 },
		{ 0, -16, 0 },
		{ 79, 0, 0 },
		{ -39, 17, 31 },
		{ 58, 0, 0 },
		{ 42, 145, 0 },
		{ 0, 16, 34 },
		{ 0, 0, 24 },
		{ 85, -37, 36 },
		{ 85, -56, 36 },
		{ 85, -31, 36 },
		{ 85, -28, 36 },
		{ 85, 0, 5 },
		{ 85, -29, 36 },
		{ 85, -17, 36 },
		{ 85, -8, 36 },
		{ 85, -15, 36 },
		{ 85, -10, 36 },
		{ 0, 0, 29 },
		{ 0, 0, 35 },
		{ 84, 0, 0 },
		{ -38, -28, 0 },
		{ 0, 155, 33 },
		{ 85, -15, 36 },
		{ 85, 2, 36 },
		{ 85, 1, 36 },
		{ 85, 0, 7 },
		{ 85, 0, 2 },
		{ 85, -7, 36 },
		{ 85, 4, 36 },
		{ 85, -3, 36 },
		{ 85, -9, 36 },
		{ 86, 0, 0 },
		{ -38, -26, 0 },
		{ 0, 0, 32 },
		{ 85, 0, 4 },
		{ 85, 4, 36 },
		{ 85, 0, 8 },
		{ 85, 0, 1 },
		{ 85, 0, 10 },
		{ 85, 7, 36 },
		{ 85, 12, 36 },
		{ 83, 67, 0 },
		{ -38, -31, 32 },
		{ 85, 28, 36 },
		{ 85, 0, 6 },
		{ 85, 0, 9 },
		{ -68, 8, 0 },
		{ -56, -6, 32 },
		{ 0, 70, 3 },
		{ -68, 16, 32 }
	};
	yystate = state;

	static const yybackup_t YYNEARFAR YYBASED_CODE backup[] = {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};
	yybackup = backup;
}
#line 137 ".\\mylexer.l"


/////////////////////////////////////////////////////////////////////////////
// programs section


