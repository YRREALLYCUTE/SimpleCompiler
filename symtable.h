#ifndef _SYMTABLE_H_
#define _SYMTABLE_H_

#include"symtree.h"
#include<string>
using namespace std;

typedef struct symtablenode{
    string id;
    ExpType type;
    int offset;

}TableNode;

extern TableNode symTable[100];

extern int getOffset(string id);
extern int insertNode(string id);
extern ExpType getType(int offset);
extern int setType(int offset, ExpType type);
extern int findItem(string id);
#endif