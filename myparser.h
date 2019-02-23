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
* myparser.h
* C++ header file generated from myparser.y.
* 
* Date: 01/01/19
* Time: 12:00:31
* 
* AYACC Version: 2.07
****************************************************************************/

#ifndef _MYPARSER_H
#define _MYPARSER_H

#include <yycpars.h>

#line 18 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE TreeNode*
#endif

#line 39 "myparser.h"
/////////////////////////////////////////////////////////////////////////////
// myparser

#ifndef YYEXPPARSER
#define YYEXPPARSER
#endif

class YYEXPPARSER YYFAR myparser : public _YL yyfparser {
public:
	myparser();
	virtual ~myparser();

protected:
	void yytables();
	virtual void yyaction(int action);
#ifdef YYDEBUG
	void YYFAR* yyattribute1(int index) const;
	void yyinitdebug(void YYFAR** p, int count) const;
#endif

	// attribute functions
	virtual void yystacktoval(int index);
	virtual void yyvaltostack(int index);
	virtual void yylvaltoval();
	virtual void yyvaltolval();
	virtual void yylvaltostack(int index);

	virtual void YYFAR* yynewattribute(int count);
	virtual void yydeleteattribute(void YYFAR* attribute);
	virtual void yycopyattribute(void YYFAR* dest, const void YYFAR* src, int count);

public:
#line 30 ".\\myparser.y"

	// place any extra class members here

#line 76 "myparser.h"
};

#ifndef YYPARSERNAME
#define YYPARSERNAME myparser
#endif

#line 45 ".\\myparser.y"

#ifndef YYSTYPE
#define YYSTYPE TreeNode*
#endif

#line 89 "myparser.h"
#define PLUS 257
#define MINUS 258
#define TIMES 259
#define OVER 260
#define ASSIGN 261
#define EQ 262
#define LT 263
#define MT 264
#define NE 265
#define AND 266
#define OR 267
#define NOT 268
#define LPAREN 269
#define RPAREN 270
#define LBRACE 271
#define RBRACE 272
#define LSQBRA 273
#define RSQBRA 274
#define MAIN 275
#define COMMA 276
#define SEMICOLON 277
#define IF 278
#define ELSE 279
#define FOR 280
#define WHILE 281
#define INT_NUM 282
#define DOUBLE_NUM 283
#define CONSTCHAR 284
#define INT 285
#define DOUBLE 286
#define CHAR 287
#define ID 288
#define WRITE 289
#define READ 290
#endif
