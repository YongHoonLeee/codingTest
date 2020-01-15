#include<iostream>
#include<cstdlib>
#include"ArrayBaseStack.h"
using namespace std; 

void StackInit(Stack* pstack)
{
	pstack->topIndex=-1;
}
int SIsEmpty(Stack* pstack)
{
	if (pstack->topIndex == -1)
		return true;
	else
		return false;
}

void SPush(Stack* pstack, Data data)
{
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}
