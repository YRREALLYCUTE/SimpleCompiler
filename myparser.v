#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 102 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# myparser.v
# YACC verbose file generated from myparser.y.
# 
# Date: 01/01/19
# Time: 12:00:31
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : program $end

    1  program : MAIN LPAREN RPAREN compound_stmt

    2  compound_stmt : LBRACE local_declarations stmt_seq RBRACE
    3                | LBRACE stmt_seq RBRACE

    4  local_declarations : local_declarations var_declaration
    5                     | var_declaration

    6  stmt_seq : stmt_seq stmt
    7           | stmt

    8  array_declaration : type_specifier array_list SEMICOLON

    9  array_list : array
   10             | array_list COMMA array

   11  dev_list : dev
   12           | dev_list dev

   13  dev : LSQBRA INT_NUM RSQBRA

   14  array : ID dev_list

   15  var_declaration : type_specifier idlist SEMICOLON

   16  type_specifier : INT
   17                 | DOUBLE
   18                 | CHAR

   19  idlist : idlist COMMA initdec
   20         | initdec

   21  initdec : id
   22          | id ASSIGN constval

   23  id : ID

   24  stmt : expr_stmt
   25       | if_stmt
   26       | while_stmt
   27       | read_stmt
   28       | write_stmt

   29  write_stmt : WRITE LPAREN id RPAREN SEMICOLON
   30             | WRITE LPAREN constval RPAREN SEMICOLON

   31  read_stmt : READ LPAREN id RPAREN SEMICOLON

   32  expr_stmt : expr SEMICOLON
   33            | SEMICOLON

   34  expr : simple_exp ASSIGN simple_exp
   35       | logic_exp

   36  simple_exp : simple_exp PLUS term
   37             | simple_exp MINUS term
   38             | term

   39  term : term TIMES factor
   40       | term OVER factor
   41       | factor

   42  factor : constval
   43         | id
   44         | LPAREN simple_exp RPAREN

   45  constval : INT_NUM
   46           | DOUBLE_NUM
   47           | CONSTCHAR

   48  condition_exp : condition_exp EQ condition_exp
   49                | condition_exp NE condition_exp
   50                | condition_exp LT condition_exp
   51                | condition_exp MT condition_exp
   52                | simple_exp
   53                | LPAREN condition_exp RPAREN

   54  logic_exp : logic_exp AND logic_exp
   55            | logic_exp OR logic_exp
   56            | NOT logic_exp
   57            | condition_exp
   58            | LPAREN logic_exp RPAREN

   59  if_stmt : IF LPAREN expr RPAREN compound_stmt
   60          | IF LPAREN expr RPAREN stmt
   61          | IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt
   62          | IF LPAREN expr RPAREN stmt ELSE stmt
   63          | IF LPAREN expr RPAREN stmt ELSE compound_stmt
   64          | IF LPAREN expr RPAREN compound_stmt ELSE stmt

   65  while_stmt : WHILE LPAREN expr RPAREN compound_stmt
   66             | WHILE LPAREN expr RPAREN stmt


##############################################################################
# States
##############################################################################

state 0
	$accept : . program $end

	MAIN  shift 1

	program  goto 2


state 1
	program : MAIN . LPAREN RPAREN compound_stmt

	LPAREN  shift 3


state 2
	$accept : program . $end  (0)

	$end  accept


state 3
	program : MAIN LPAREN . RPAREN compound_stmt

	RPAREN  shift 4


state 4
	program : MAIN LPAREN RPAREN . compound_stmt

	LBRACE  shift 5

	compound_stmt  goto 6


state 5
	compound_stmt : LBRACE . local_declarations stmt_seq RBRACE
	compound_stmt : LBRACE . stmt_seq RBRACE

	NOT  shift 7
	LPAREN  shift 8
	SEMICOLON  shift 9
	IF  shift 10
	WHILE  shift 11
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	INT  shift 15
	DOUBLE  shift 16
	CHAR  shift 17
	ID  shift 18
	WRITE  shift 19
	READ  shift 20

	local_declarations  goto 21
	stmt_seq  goto 22
	var_declaration  goto 23
	stmt  goto 24
	type_specifier  goto 25
	term  goto 26
	while_stmt  goto 27
	constval  goto 28
	logic_exp  goto 29
	if_stmt  goto 30
	condition_exp  goto 31
	id  goto 32
	expr  goto 33
	simple_exp  goto 34
	factor  goto 35
	expr_stmt  goto 36
	read_stmt  goto 37
	write_stmt  goto 38


state 6
	program : MAIN LPAREN RPAREN compound_stmt .  (1)

	.  reduce 1


state 7
	logic_exp : NOT . logic_exp

	NOT  shift 7
	LPAREN  shift 8
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	logic_exp  goto 39
	condition_exp  goto 31
	id  goto 32
	simple_exp  goto 40
	factor  goto 35


state 8
	factor : LPAREN . simple_exp RPAREN
	logic_exp : LPAREN . logic_exp RPAREN
	condition_exp : LPAREN . condition_exp RPAREN

	NOT  shift 7
	LPAREN  shift 8
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	logic_exp  goto 41
	condition_exp  goto 42
	id  goto 32
	simple_exp  goto 43
	factor  goto 35


state 9
	expr_stmt : SEMICOLON .  (33)

	.  reduce 33


state 10
	if_stmt : IF . LPAREN expr RPAREN compound_stmt ELSE compound_stmt
	if_stmt : IF . LPAREN expr RPAREN compound_stmt
	if_stmt : IF . LPAREN expr RPAREN stmt
	if_stmt : IF . LPAREN expr RPAREN compound_stmt ELSE stmt
	if_stmt : IF . LPAREN expr RPAREN stmt ELSE compound_stmt
	if_stmt : IF . LPAREN expr RPAREN stmt ELSE stmt

	LPAREN  shift 44


state 11
	while_stmt : WHILE . LPAREN expr RPAREN stmt
	while_stmt : WHILE . LPAREN expr RPAREN compound_stmt

	LPAREN  shift 45


state 12
	constval : INT_NUM .  (45)

	.  reduce 45


state 13
	constval : DOUBLE_NUM .  (46)

	.  reduce 46


state 14
	constval : CONSTCHAR .  (47)

	.  reduce 47


state 15
	type_specifier : INT .  (16)

	.  reduce 16


state 16
	type_specifier : DOUBLE .  (17)

	.  reduce 17


state 17
	type_specifier : CHAR .  (18)

	.  reduce 18


state 18
	id : ID .  (23)

	.  reduce 23


state 19
	write_stmt : WRITE . LPAREN constval RPAREN SEMICOLON
	write_stmt : WRITE . LPAREN id RPAREN SEMICOLON

	LPAREN  shift 46


state 20
	read_stmt : READ . LPAREN id RPAREN SEMICOLON

	LPAREN  shift 47


state 21
	compound_stmt : LBRACE local_declarations . stmt_seq RBRACE
	local_declarations : local_declarations . var_declaration

	NOT  shift 7
	LPAREN  shift 8
	SEMICOLON  shift 9
	IF  shift 10
	WHILE  shift 11
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	INT  shift 15
	DOUBLE  shift 16
	CHAR  shift 17
	ID  shift 18
	WRITE  shift 19
	READ  shift 20

	stmt_seq  goto 48
	var_declaration  goto 49
	stmt  goto 24
	type_specifier  goto 25
	term  goto 26
	while_stmt  goto 27
	constval  goto 28
	logic_exp  goto 29
	if_stmt  goto 30
	condition_exp  goto 31
	id  goto 32
	expr  goto 33
	simple_exp  goto 34
	factor  goto 35
	expr_stmt  goto 36
	read_stmt  goto 37
	write_stmt  goto 38


state 22
	compound_stmt : LBRACE stmt_seq . RBRACE
	stmt_seq : stmt_seq . stmt

	NOT  shift 7
	LPAREN  shift 8
	RBRACE  shift 50
	SEMICOLON  shift 9
	IF  shift 10
	WHILE  shift 11
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18
	WRITE  shift 19
	READ  shift 20

	stmt  goto 51
	term  goto 26
	while_stmt  goto 27
	constval  goto 28
	logic_exp  goto 29
	if_stmt  goto 30
	condition_exp  goto 31
	id  goto 32
	expr  goto 33
	simple_exp  goto 34
	factor  goto 35
	expr_stmt  goto 36
	read_stmt  goto 37
	write_stmt  goto 38


state 23
	local_declarations : var_declaration .  (5)

	.  reduce 5


state 24
	stmt_seq : stmt .  (7)

	.  reduce 7


state 25
	var_declaration : type_specifier . idlist SEMICOLON

	ID  shift 18

	initdec  goto 52
	idlist  goto 53
	id  goto 54


state 26
	term : term . TIMES factor
	simple_exp : term .  (38)
	term : term . OVER factor

	TIMES  shift 55
	OVER  shift 56
	.  reduce 38


state 27
	stmt : while_stmt .  (26)

	.  reduce 26


state 28
	factor : constval .  (42)

	.  reduce 42


state 29
	logic_exp : logic_exp . OR logic_exp
	logic_exp : logic_exp . AND logic_exp
	expr : logic_exp .  (35)

	AND  shift 57
	OR  shift 58
	.  reduce 35


state 30
	stmt : if_stmt .  (25)

	.  reduce 25


state 31
	condition_exp : condition_exp . EQ condition_exp
	condition_exp : condition_exp . NE condition_exp
	condition_exp : condition_exp . LT condition_exp
	logic_exp : condition_exp .  (57)
	condition_exp : condition_exp . MT condition_exp

	EQ  shift 59
	LT  shift 60
	MT  shift 61
	NE  shift 62
	.  reduce 57


state 32
	factor : id .  (43)

	.  reduce 43


state 33
	expr_stmt : expr . SEMICOLON

	SEMICOLON  shift 63


state 34
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	condition_exp : simple_exp .  (52)
	expr : simple_exp . ASSIGN simple_exp

	PLUS  shift 64
	MINUS  shift 65
	ASSIGN  shift 66
	.  reduce 52


state 35
	term : factor .  (41)

	.  reduce 41


state 36
	stmt : expr_stmt .  (24)

	.  reduce 24


state 37
	stmt : read_stmt .  (27)

	.  reduce 27


state 38
	stmt : write_stmt .  (28)

	.  reduce 28


state 39
	logic_exp : logic_exp . OR logic_exp
	logic_exp : logic_exp . AND logic_exp
	logic_exp : NOT logic_exp .  (56)

	.  reduce 56


state 40
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	condition_exp : simple_exp .  (52)

	PLUS  shift 64
	MINUS  shift 65
	.  reduce 52


state 41
	logic_exp : logic_exp . OR logic_exp
	logic_exp : logic_exp . AND logic_exp
	logic_exp : LPAREN logic_exp . RPAREN

	AND  shift 57
	OR  shift 58
	RPAREN  shift 67


42: shift-reduce conflict (shift 68, reduce 57) on RPAREN
state 42
	condition_exp : condition_exp . EQ condition_exp
	condition_exp : condition_exp . NE condition_exp
	condition_exp : condition_exp . LT condition_exp
	logic_exp : condition_exp .  (57)
	condition_exp : condition_exp . MT condition_exp
	condition_exp : LPAREN condition_exp . RPAREN

	EQ  shift 59
	LT  shift 60
	MT  shift 61
	NE  shift 62
	RPAREN  shift 68
	.  reduce 57


43: shift-reduce conflict (shift 69, reduce 52) on RPAREN
state 43
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	factor : LPAREN simple_exp . RPAREN
	condition_exp : simple_exp .  (52)

	PLUS  shift 64
	MINUS  shift 65
	RPAREN  shift 69
	.  reduce 52


state 44
	if_stmt : IF LPAREN . expr RPAREN compound_stmt ELSE compound_stmt
	if_stmt : IF LPAREN . expr RPAREN compound_stmt
	if_stmt : IF LPAREN . expr RPAREN stmt
	if_stmt : IF LPAREN . expr RPAREN compound_stmt ELSE stmt
	if_stmt : IF LPAREN . expr RPAREN stmt ELSE compound_stmt
	if_stmt : IF LPAREN . expr RPAREN stmt ELSE stmt

	NOT  shift 7
	LPAREN  shift 8
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	logic_exp  goto 29
	condition_exp  goto 31
	id  goto 32
	expr  goto 70
	simple_exp  goto 34
	factor  goto 35


state 45
	while_stmt : WHILE LPAREN . expr RPAREN stmt
	while_stmt : WHILE LPAREN . expr RPAREN compound_stmt

	NOT  shift 7
	LPAREN  shift 8
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	logic_exp  goto 29
	condition_exp  goto 31
	id  goto 32
	expr  goto 71
	simple_exp  goto 34
	factor  goto 35


state 46
	write_stmt : WRITE LPAREN . constval RPAREN SEMICOLON
	write_stmt : WRITE LPAREN . id RPAREN SEMICOLON

	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	constval  goto 72
	id  goto 73


state 47
	read_stmt : READ LPAREN . id RPAREN SEMICOLON

	ID  shift 18

	id  goto 74


state 48
	compound_stmt : LBRACE local_declarations stmt_seq . RBRACE
	stmt_seq : stmt_seq . stmt

	NOT  shift 7
	LPAREN  shift 8
	RBRACE  shift 75
	SEMICOLON  shift 9
	IF  shift 10
	WHILE  shift 11
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18
	WRITE  shift 19
	READ  shift 20

	stmt  goto 51
	term  goto 26
	while_stmt  goto 27
	constval  goto 28
	logic_exp  goto 29
	if_stmt  goto 30
	condition_exp  goto 31
	id  goto 32
	expr  goto 33
	simple_exp  goto 34
	factor  goto 35
	expr_stmt  goto 36
	read_stmt  goto 37
	write_stmt  goto 38


state 49
	local_declarations : local_declarations var_declaration .  (4)

	.  reduce 4


state 50
	compound_stmt : LBRACE stmt_seq RBRACE .  (3)

	.  reduce 3


state 51
	stmt_seq : stmt_seq stmt .  (6)

	.  reduce 6


state 52
	idlist : initdec .  (20)

	.  reduce 20


state 53
	var_declaration : type_specifier idlist . SEMICOLON
	idlist : idlist . COMMA initdec

	COMMA  shift 76
	SEMICOLON  shift 77


state 54
	initdec : id .  (21)
	initdec : id . ASSIGN constval

	ASSIGN  shift 78
	.  reduce 21


state 55
	term : term TIMES . factor

	LPAREN  shift 79
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	constval  goto 28
	id  goto 32
	factor  goto 80


state 56
	term : term OVER . factor

	LPAREN  shift 79
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	constval  goto 28
	id  goto 32
	factor  goto 81


state 57
	logic_exp : logic_exp AND . logic_exp

	NOT  shift 7
	LPAREN  shift 8
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	logic_exp  goto 82
	condition_exp  goto 31
	id  goto 32
	simple_exp  goto 40
	factor  goto 35


state 58
	logic_exp : logic_exp OR . logic_exp

	NOT  shift 7
	LPAREN  shift 8
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	logic_exp  goto 83
	condition_exp  goto 31
	id  goto 32
	simple_exp  goto 40
	factor  goto 35


state 59
	condition_exp : condition_exp EQ . condition_exp

	LPAREN  shift 84
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	condition_exp  goto 85
	id  goto 32
	simple_exp  goto 40
	factor  goto 35


state 60
	condition_exp : condition_exp LT . condition_exp

	LPAREN  shift 84
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	condition_exp  goto 86
	id  goto 32
	simple_exp  goto 40
	factor  goto 35


state 61
	condition_exp : condition_exp MT . condition_exp

	LPAREN  shift 84
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	condition_exp  goto 87
	id  goto 32
	simple_exp  goto 40
	factor  goto 35


state 62
	condition_exp : condition_exp NE . condition_exp

	LPAREN  shift 84
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	condition_exp  goto 88
	id  goto 32
	simple_exp  goto 40
	factor  goto 35


state 63
	expr_stmt : expr SEMICOLON .  (32)

	.  reduce 32


state 64
	simple_exp : simple_exp PLUS . term

	LPAREN  shift 79
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 89
	constval  goto 28
	id  goto 32
	factor  goto 35


state 65
	simple_exp : simple_exp MINUS . term

	LPAREN  shift 79
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 90
	constval  goto 28
	id  goto 32
	factor  goto 35


state 66
	expr : simple_exp ASSIGN . simple_exp

	LPAREN  shift 79
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	id  goto 32
	simple_exp  goto 91
	factor  goto 35


state 67
	logic_exp : LPAREN logic_exp RPAREN .  (58)

	.  reduce 58


state 68
	condition_exp : LPAREN condition_exp RPAREN .  (53)

	.  reduce 53


state 69
	factor : LPAREN simple_exp RPAREN .  (44)

	.  reduce 44


state 70
	if_stmt : IF LPAREN expr . RPAREN compound_stmt ELSE compound_stmt
	if_stmt : IF LPAREN expr . RPAREN compound_stmt
	if_stmt : IF LPAREN expr . RPAREN stmt
	if_stmt : IF LPAREN expr . RPAREN compound_stmt ELSE stmt
	if_stmt : IF LPAREN expr . RPAREN stmt ELSE compound_stmt
	if_stmt : IF LPAREN expr . RPAREN stmt ELSE stmt

	RPAREN  shift 92


state 71
	while_stmt : WHILE LPAREN expr . RPAREN stmt
	while_stmt : WHILE LPAREN expr . RPAREN compound_stmt

	RPAREN  shift 93


state 72
	write_stmt : WRITE LPAREN constval . RPAREN SEMICOLON

	RPAREN  shift 94


state 73
	write_stmt : WRITE LPAREN id . RPAREN SEMICOLON

	RPAREN  shift 95


state 74
	read_stmt : READ LPAREN id . RPAREN SEMICOLON

	RPAREN  shift 96


state 75
	compound_stmt : LBRACE local_declarations stmt_seq RBRACE .  (2)

	.  reduce 2


state 76
	idlist : idlist COMMA . initdec

	ID  shift 18

	initdec  goto 97
	id  goto 54


state 77
	var_declaration : type_specifier idlist SEMICOLON .  (15)

	.  reduce 15


state 78
	initdec : id ASSIGN . constval

	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14

	constval  goto 98


state 79
	factor : LPAREN . simple_exp RPAREN

	LPAREN  shift 79
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	id  goto 32
	simple_exp  goto 99
	factor  goto 35


state 80
	term : term TIMES factor .  (39)

	.  reduce 39


state 81
	term : term OVER factor .  (40)

	.  reduce 40


state 82
	logic_exp : logic_exp . OR logic_exp
	logic_exp : logic_exp AND logic_exp .  (54)
	logic_exp : logic_exp . AND logic_exp

	.  reduce 54


state 83
	logic_exp : logic_exp OR logic_exp .  (55)
	logic_exp : logic_exp . OR logic_exp
	logic_exp : logic_exp . AND logic_exp

	AND  shift 57
	.  reduce 55


state 84
	factor : LPAREN . simple_exp RPAREN
	condition_exp : LPAREN . condition_exp RPAREN

	LPAREN  shift 84
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18

	term  goto 26
	constval  goto 28
	condition_exp  goto 100
	id  goto 32
	simple_exp  goto 43
	factor  goto 35


state 85
	condition_exp : condition_exp EQ condition_exp .  (48)
	condition_exp : condition_exp . EQ condition_exp
	condition_exp : condition_exp . NE condition_exp
	condition_exp : condition_exp . LT condition_exp
	condition_exp : condition_exp . MT condition_exp

	LT  shift 60
	MT  shift 61
	.  reduce 48


state 86
	condition_exp : condition_exp . EQ condition_exp
	condition_exp : condition_exp . NE condition_exp
	condition_exp : condition_exp LT condition_exp .  (50)
	condition_exp : condition_exp . LT condition_exp
	condition_exp : condition_exp . MT condition_exp

	.  reduce 50


state 87
	condition_exp : condition_exp . EQ condition_exp
	condition_exp : condition_exp . NE condition_exp
	condition_exp : condition_exp . LT condition_exp
	condition_exp : condition_exp MT condition_exp .  (51)
	condition_exp : condition_exp . MT condition_exp

	.  reduce 51


state 88
	condition_exp : condition_exp . EQ condition_exp
	condition_exp : condition_exp NE condition_exp .  (49)
	condition_exp : condition_exp . NE condition_exp
	condition_exp : condition_exp . LT condition_exp
	condition_exp : condition_exp . MT condition_exp

	LT  shift 60
	MT  shift 61
	.  reduce 49


state 89
	simple_exp : simple_exp PLUS term .  (36)
	term : term . TIMES factor
	term : term . OVER factor

	TIMES  shift 55
	OVER  shift 56
	.  reduce 36


state 90
	simple_exp : simple_exp MINUS term .  (37)
	term : term . TIMES factor
	term : term . OVER factor

	TIMES  shift 55
	OVER  shift 56
	.  reduce 37


state 91
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	expr : simple_exp ASSIGN simple_exp .  (34)

	PLUS  shift 64
	MINUS  shift 65
	.  reduce 34


state 92
	if_stmt : IF LPAREN expr RPAREN . compound_stmt ELSE compound_stmt
	if_stmt : IF LPAREN expr RPAREN . compound_stmt
	if_stmt : IF LPAREN expr RPAREN . stmt
	if_stmt : IF LPAREN expr RPAREN . compound_stmt ELSE stmt
	if_stmt : IF LPAREN expr RPAREN . stmt ELSE compound_stmt
	if_stmt : IF LPAREN expr RPAREN . stmt ELSE stmt

	NOT  shift 7
	LPAREN  shift 8
	LBRACE  shift 5
	SEMICOLON  shift 9
	IF  shift 10
	WHILE  shift 11
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18
	WRITE  shift 19
	READ  shift 20

	compound_stmt  goto 101
	stmt  goto 102
	term  goto 26
	while_stmt  goto 27
	constval  goto 28
	logic_exp  goto 29
	if_stmt  goto 30
	condition_exp  goto 31
	id  goto 32
	expr  goto 33
	simple_exp  goto 34
	factor  goto 35
	expr_stmt  goto 36
	read_stmt  goto 37
	write_stmt  goto 38


state 93
	while_stmt : WHILE LPAREN expr RPAREN . stmt
	while_stmt : WHILE LPAREN expr RPAREN . compound_stmt

	NOT  shift 7
	LPAREN  shift 8
	LBRACE  shift 5
	SEMICOLON  shift 9
	IF  shift 10
	WHILE  shift 11
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18
	WRITE  shift 19
	READ  shift 20

	compound_stmt  goto 103
	stmt  goto 104
	term  goto 26
	while_stmt  goto 27
	constval  goto 28
	logic_exp  goto 29
	if_stmt  goto 30
	condition_exp  goto 31
	id  goto 32
	expr  goto 33
	simple_exp  goto 34
	factor  goto 35
	expr_stmt  goto 36
	read_stmt  goto 37
	write_stmt  goto 38


state 94
	write_stmt : WRITE LPAREN constval RPAREN . SEMICOLON

	SEMICOLON  shift 105


state 95
	write_stmt : WRITE LPAREN id RPAREN . SEMICOLON

	SEMICOLON  shift 106


state 96
	read_stmt : READ LPAREN id RPAREN . SEMICOLON

	SEMICOLON  shift 107


state 97
	idlist : idlist COMMA initdec .  (19)

	.  reduce 19


state 98
	initdec : id ASSIGN constval .  (22)

	.  reduce 22


state 99
	simple_exp : simple_exp . PLUS term
	simple_exp : simple_exp . MINUS term
	factor : LPAREN simple_exp . RPAREN

	PLUS  shift 64
	MINUS  shift 65
	RPAREN  shift 69


state 100
	condition_exp : condition_exp . EQ condition_exp
	condition_exp : condition_exp . NE condition_exp
	condition_exp : condition_exp . LT condition_exp
	condition_exp : condition_exp . MT condition_exp
	condition_exp : LPAREN condition_exp . RPAREN

	EQ  shift 59
	LT  shift 60
	MT  shift 61
	NE  shift 62
	RPAREN  shift 68


101: shift-reduce conflict (shift 108, reduce 59) on ELSE
state 101
	if_stmt : IF LPAREN expr RPAREN compound_stmt . ELSE compound_stmt
	if_stmt : IF LPAREN expr RPAREN compound_stmt .  (59)
	if_stmt : IF LPAREN expr RPAREN compound_stmt . ELSE stmt

	ELSE  shift 108
	.  reduce 59


102: shift-reduce conflict (shift 109, reduce 60) on ELSE
state 102
	if_stmt : IF LPAREN expr RPAREN stmt .  (60)
	if_stmt : IF LPAREN expr RPAREN stmt . ELSE compound_stmt
	if_stmt : IF LPAREN expr RPAREN stmt . ELSE stmt

	ELSE  shift 109
	.  reduce 60


state 103
	while_stmt : WHILE LPAREN expr RPAREN compound_stmt .  (65)

	.  reduce 65


state 104
	while_stmt : WHILE LPAREN expr RPAREN stmt .  (66)

	.  reduce 66


state 105
	write_stmt : WRITE LPAREN constval RPAREN SEMICOLON .  (30)

	.  reduce 30


state 106
	write_stmt : WRITE LPAREN id RPAREN SEMICOLON .  (29)

	.  reduce 29


state 107
	read_stmt : READ LPAREN id RPAREN SEMICOLON .  (31)

	.  reduce 31


state 108
	if_stmt : IF LPAREN expr RPAREN compound_stmt ELSE . compound_stmt
	if_stmt : IF LPAREN expr RPAREN compound_stmt ELSE . stmt

	NOT  shift 7
	LPAREN  shift 8
	LBRACE  shift 5
	SEMICOLON  shift 9
	IF  shift 10
	WHILE  shift 11
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18
	WRITE  shift 19
	READ  shift 20

	compound_stmt  goto 110
	stmt  goto 111
	term  goto 26
	while_stmt  goto 27
	constval  goto 28
	logic_exp  goto 29
	if_stmt  goto 30
	condition_exp  goto 31
	id  goto 32
	expr  goto 33
	simple_exp  goto 34
	factor  goto 35
	expr_stmt  goto 36
	read_stmt  goto 37
	write_stmt  goto 38


state 109
	if_stmt : IF LPAREN expr RPAREN stmt ELSE . compound_stmt
	if_stmt : IF LPAREN expr RPAREN stmt ELSE . stmt

	NOT  shift 7
	LPAREN  shift 8
	LBRACE  shift 5
	SEMICOLON  shift 9
	IF  shift 10
	WHILE  shift 11
	INT_NUM  shift 12
	DOUBLE_NUM  shift 13
	CONSTCHAR  shift 14
	ID  shift 18
	WRITE  shift 19
	READ  shift 20

	compound_stmt  goto 112
	stmt  goto 113
	term  goto 26
	while_stmt  goto 27
	constval  goto 28
	logic_exp  goto 29
	if_stmt  goto 30
	condition_exp  goto 31
	id  goto 32
	expr  goto 33
	simple_exp  goto 34
	factor  goto 35
	expr_stmt  goto 36
	read_stmt  goto 37
	write_stmt  goto 38


state 110
	if_stmt : IF LPAREN expr RPAREN compound_stmt ELSE compound_stmt .  (61)

	.  reduce 61


state 111
	if_stmt : IF LPAREN expr RPAREN compound_stmt ELSE stmt .  (64)

	.  reduce 64


state 112
	if_stmt : IF LPAREN expr RPAREN stmt ELSE compound_stmt .  (63)

	.  reduce 63


state 113
	if_stmt : IF LPAREN expr RPAREN stmt ELSE stmt .  (62)

	.  reduce 62


Tokens never shifted
	RSQBRA  (274)
	LSQBRA  (273)


Rules never reduced
	array_declaration : type_specifier array_list SEMICOLON  (8)
	array_list : array  (9)
	array_list : array_list COMMA array  (10)
	dev_list : dev  (11)
	dev_list : dev_list dev  (12)
	dev : LSQBRA INT_NUM RSQBRA  (13)
	array : ID dev_list  (14)


##############################################################################
# Summary
##############################################################################

State 42 contains 1 shift-reduce conflict(s)
State 43 contains 1 shift-reduce conflict(s)
State 101 contains 1 shift-reduce conflict(s)
State 102 contains 1 shift-reduce conflict(s)


35 token(s), 28 nonterminal(s)
67 grammar rule(s), 114 state(s)


##############################################################################
# End of File
##############################################################################
