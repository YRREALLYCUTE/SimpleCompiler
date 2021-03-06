#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 98 of your 30 day trial period.
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
# mylexer.v
# Lex verbose file generated from mylexer.l.
# 
# Date: 12/28/18
# Time: 15:05:57
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  "main"

    2  "int"

    3  "double"

    4  "char"

    5  "if"

    6  "while"

    7  "for"

    8  "else"

    9  "write"

   10  "read"

   11  "="

   12  "+"

   13  "-"

   14  "*"

   15  "/"

   16  "("

   17  ")"

   18  "["

   19  "]"

   20  "{"

   21  "}"

   22  ";"

   23  ","

   24  "=="

   25  "<"

   26  ">"

   27  "!="

   28  "&&"

   29  "||"

   30  "!"

   31  \/\/.*

   32  \/(\*)([^(\*)^"]*|\".*\"|\*+[^\/])*(\*)*(\*)\/

   33  [0-9]+\.[0-9]+

   34  ([1-9]+[0-9]*)|([1-9])|0

   35  '.'

   36  [a-zA-Z_]([a-zA-Z_]|[0-9])*

   37  \n

   38  [ \t\n]+


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x26               goto 6
	0x27               goto 7
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2f               goto 14
	0x30               goto 15
	0x31 - 0x39 (9)    goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x41 - 0x5a (26)   goto 21
	0x5b               goto 22
	0x5d               goto 23
	0x5f               goto 21
	0x61 - 0x62 (2)    goto 21
	0x63               goto 24
	0x64               goto 25
	0x65               goto 26
	0x66               goto 27
	0x67 - 0x68 (2)    goto 21
	0x69               goto 28
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 29
	0x6e - 0x71 (4)    goto 21
	0x72               goto 30
	0x73 - 0x76 (4)    goto 21
	0x77               goto 31
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 32
	0x7c               goto 33
	0x7d               goto 34


state 2
	^INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x26               goto 6
	0x27               goto 7
	0x28               goto 8
	0x29               goto 9
	0x2a               goto 10
	0x2b               goto 11
	0x2c               goto 12
	0x2d               goto 13
	0x2f               goto 14
	0x30               goto 15
	0x31 - 0x39 (9)    goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x41 - 0x5a (26)   goto 21
	0x5b               goto 22
	0x5d               goto 23
	0x5f               goto 21
	0x61 - 0x62 (2)    goto 21
	0x63               goto 24
	0x64               goto 25
	0x65               goto 26
	0x66               goto 27
	0x67 - 0x68 (2)    goto 21
	0x69               goto 28
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 29
	0x6e - 0x71 (4)    goto 21
	0x72               goto 30
	0x73 - 0x76 (4)    goto 21
	0x77               goto 31
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 32
	0x7c               goto 33
	0x7d               goto 34


state 3
	0x09 - 0x0a (2)    goto 3
	0x20               goto 3

	match 38


state 4
	0x09 - 0x0a (2)    goto 3
	0x20               goto 3

	match 37


state 5
	0x3d               goto 35

	match 30


state 6
	0x26               goto 36


state 7
	0x00 - 0x09 (10)   goto 37
	0x0b - 0xff (245)  goto 37


state 8
	match 16


state 9
	match 17


state 10
	match 14


state 11
	match 12


state 12
	match 23


state 13
	match 13


state 14
	0x2a               goto 38
	0x2f               goto 39

	match 15


state 15
	0x2e               goto 40
	0x30 - 0x39 (10)   goto 41

	match 34


state 16
	0x2e               goto 40
	0x30               goto 42
	0x31 - 0x39 (9)    goto 16

	match 34


state 17
	match 22


state 18
	match 25


state 19
	0x3d               goto 43

	match 11


state 20
	match 26


state 21
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 36


state 22
	match 18


state 23
	match 19


state 24
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 44
	0x69 - 0x7a (18)   goto 21

	match 36


state 25
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 45
	0x70 - 0x7a (11)   goto 21

	match 36


state 26
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 46
	0x6d - 0x7a (14)   goto 21

	match 36


state 27
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 47
	0x70 - 0x7a (11)   goto 21

	match 36


state 28
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x65 (5)    goto 21
	0x66               goto 48
	0x67 - 0x6d (7)    goto 21
	0x6e               goto 49
	0x6f - 0x7a (12)   goto 21

	match 36


state 29
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 50
	0x62 - 0x7a (25)   goto 21

	match 36


state 30
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 51
	0x66 - 0x7a (21)   goto 21

	match 36


state 31
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 52
	0x69 - 0x71 (9)    goto 21
	0x72               goto 53
	0x73 - 0x7a (8)    goto 21

	match 36


state 32
	match 20


state 33
	0x7c               goto 54


state 34
	match 21


state 35
	match 27


state 36
	match 28


state 37
	0x27               goto 55


state 38
	0x00 - 0x21 (34)   goto 38
	0x22               goto 56
	0x23 - 0x27 (5)    goto 38
	0x2a               goto 57
	0x2b - 0x5d (51)   goto 38
	0x5f - 0xff (161)  goto 38


state 39
	0x00 - 0x09 (10)   goto 39
	0x0b - 0xff (245)  goto 39

	match 31


state 40
	0x30 - 0x39 (10)   goto 58


state 41
	0x2e               goto 40
	0x30 - 0x39 (10)   goto 41


state 42
	0x2e               goto 40
	0x30 - 0x39 (10)   goto 42

	match 34


state 43
	match 24


state 44
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 59
	0x62 - 0x7a (25)   goto 21

	match 36


state 45
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 60
	0x76 - 0x7a (5)    goto 21

	match 36


state 46
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x72 (18)   goto 21
	0x73               goto 61
	0x74 - 0x7a (7)    goto 21

	match 36


state 47
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 62
	0x73 - 0x7a (8)    goto 21

	match 36


state 48
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 5


state 49
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 63
	0x75 - 0x7a (6)    goto 21

	match 36


state 50
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 64
	0x6a - 0x7a (17)   goto 21

	match 36


state 51
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 65
	0x62 - 0x7a (25)   goto 21

	match 36


state 52
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 66
	0x6a - 0x7a (17)   goto 21

	match 36


state 53
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 67
	0x6a - 0x7a (17)   goto 21

	match 36


state 54
	match 29


state 55
	match 35


state 56
	0x00 - 0x09 (10)   goto 56
	0x0b - 0x21 (23)   goto 56
	0x22               goto 68
	0x23 - 0xff (221)  goto 56


state 57
	0x00 - 0x29 (42)   goto 38
	0x2a               goto 69
	0x2b - 0x2e (4)    goto 38
	0x2f               goto 70
	0x30 - 0xff (208)  goto 38


state 58
	0x30 - 0x39 (10)   goto 58

	match 33


state 59
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 71
	0x73 - 0x7a (8)    goto 21

	match 36


state 60
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 21
	0x62               goto 72
	0x63 - 0x7a (24)   goto 21

	match 36


state 61
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 73
	0x66 - 0x7a (21)   goto 21

	match 36


state 62
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 7


state 63
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 2


state 64
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6d (13)   goto 21
	0x6e               goto 74
	0x6f - 0x7a (12)   goto 21

	match 36


state 65
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x63 (3)    goto 21
	0x64               goto 75
	0x65 - 0x7a (22)   goto 21

	match 36


state 66
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 76
	0x6d - 0x7a (14)   goto 21

	match 36


state 67
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 77
	0x75 - 0x7a (6)    goto 21

	match 36


state 68
	0x00 - 0x09 (10)   goto 68
	0x0a               goto 38
	0x0b - 0x21 (23)   goto 68
	0x22               goto 68
	0x23 - 0x27 (5)    goto 68
	0x28 - 0x29 (2)    goto 56
	0x2a               goto 78
	0x2b - 0x5d (51)   goto 68
	0x5e               goto 56
	0x5f - 0xff (161)  goto 68


state 69
	0x00 - 0x21 (34)   goto 38
	0x22               goto 68
	0x23 - 0x27 (5)    goto 38
	0x28 - 0x29 (2)    goto 38
	0x2a               goto 69
	0x2b - 0x2e (4)    goto 38
	0x2f               goto 79
	0x30 - 0x5d (46)   goto 38
	0x5e               goto 38
	0x5f - 0xff (161)  goto 38


state 70
	match 32


state 71
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 4


state 72
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 80
	0x6d - 0x7a (14)   goto 21

	match 36


state 73
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 8


state 74
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 1


state 75
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 10


state 76
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 81
	0x66 - 0x7a (21)   goto 21

	match 36


state 77
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 82
	0x66 - 0x7a (21)   goto 21

	match 36


state 78
	0x00 - 0x09 (10)   goto 68
	0x0a               goto 38
	0x0b - 0x21 (23)   goto 68
	0x22               goto 68
	0x23 - 0x29 (7)    goto 68
	0x2a               goto 83
	0x2b - 0x2e (4)    goto 68
	0x2f               goto 84
	0x30 - 0xff (208)  goto 68


state 79
	0x00 - 0x21 (34)   goto 38
	0x22               goto 56
	0x23 - 0x27 (5)    goto 38
	0x2a               goto 57
	0x2b - 0x5d (51)   goto 38
	0x5f - 0xff (161)  goto 38

	match 32


state 80
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 85
	0x66 - 0x7a (21)   goto 21

	match 36


state 81
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 6


state 82
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 9


state 83
	0x00 - 0x09 (10)   goto 68
	0x0a               goto 38
	0x0b - 0x21 (23)   goto 68
	0x22               goto 68
	0x23 - 0x27 (5)    goto 68
	0x28 - 0x29 (2)    goto 68
	0x2a               goto 83
	0x2b - 0x2e (4)    goto 68
	0x2f               goto 86
	0x30 - 0x5d (46)   goto 68
	0x5e               goto 68
	0x5f - 0xff (161)  goto 68


state 84
	0x00 - 0x09 (10)   goto 56
	0x0b - 0x21 (23)   goto 56
	0x22               goto 68
	0x23 - 0xff (221)  goto 56

	match 32


state 85
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 3


state 86
	0x00 - 0x09 (10)   goto 68
	0x0a               goto 38
	0x0b - 0x21 (23)   goto 68
	0x22               goto 68
	0x23 - 0x27 (5)    goto 68
	0x28 - 0x29 (2)    goto 56
	0x2a               goto 78
	0x2b - 0x5d (51)   goto 68
	0x5e               goto 56
	0x5f - 0xff (161)  goto 68

	match 32


#############################################################################
# Summary
#############################################################################

1 start state(s)
38 expression(s), 86 state(s)


#############################################################################
# End of File
#############################################################################
