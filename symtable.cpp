#include"symtable.h"
#include<iostream>
#include<string.h>
using namespace std;

TableNode symTable[100];
int getOffset(string id);
int insertNode(string id);
ExpType getType(int offset);
int setType(int offset, ExpType type);
int findItem(string id);


int getOffset(string id){
	if(symTable[0].offset != 1){
		for(int i = 0; i< 100 ; i++){
			symTable[i].id = new char[10];
			symTable[i].offset = -1;
			symTable[i].type = notype;
		}
	}

    int judge = 0;
    if(findItem(id)){
        for(int i = 0; i < 100; i++){
            if(symTable[i].id == id )
                return symTable[i].offset;
        }
    }else{
        
        return insertNode(id);
    }
}

int insertNode(string id){

    for(int i = 0; i < 100; i++){
        if(symTable[i].offset == -1){
			symTable[i].id = id ;
            symTable[i].offset = i+1;
            symTable[i].type = notype;
            return i+1;
        }
    }

}

ExpType getType(int offset){
    
    return symTable[offset].type;

}

int setType(int offset, ExpType type){

    symTable[offset].type = type;
    return 1;

}

int findItem(string id){
	
    for(int i = 0; i < 100; i++){
		if(symTable[i].offset == -1){
            return 0;
        }
        if( symTable[i].id == (string)id){
            return 1;
        }
    }
    return 0;
}