#ifndef _SYNTREE_H_
#define _SYNTREE_H_

#include<string>
#define MAXCHILDREN 10

typedef enum {StmtK, ExpK, DeclK} NodeKind;
typedef enum {IfK, WhileK, AssignK, ReadK, WriteK,COMPK} StmtKind;
typedef enum {TypeK,OpK, ConstK, IdK,iniTypeK,PointK} ExpKind;
typedef enum {VarK, ArrayK}  DecKind;
typedef enum {notype, Integer, Double, Char,Bool} ExpType;


typedef struct treenode{
    int seq;
    struct treenode *child[MAXCHILDREN];
    struct treenode *simbling;
    NodeKind nodeKind;
    union{ StmtKind stmt; ExpKind exp; DecKind dec;} kind;
    union{ int op;int dev;int arrspan[MAXCHILDREN]; int int_value; double double_value; char char_value;const char *name; int val;} attr;
    ExpType type;
}TreeNode;

TreeNode* newStmtNode(StmtKind kind);

TreeNode* newExpNode(ExpKind kind);

TreeNode* newDecNode(DecKind kind);

void output( TreeNode *node);

void printHead();

void printData(TreeNode* t);

void printStmt(TreeNode* t);

void printExpr(TreeNode* t);

void printIfK(TreeNode* t);

void printWhileK(TreeNode* t);

void printCompK(TreeNode* t);

void printTemp(TreeNode* t);

void printWrite(TreeNode* t);

void printRead(TreeNode* t);
#endif// !_SYNTREE_H_
