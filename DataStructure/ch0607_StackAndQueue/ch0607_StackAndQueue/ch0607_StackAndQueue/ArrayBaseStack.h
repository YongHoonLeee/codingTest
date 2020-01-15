#pragma once
#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define STACK_LEN 100
#endif // !__AB_STACK_H__

typedef int Data;
typedef ArrayStack Stack;

class ArrayStack {

public:
	Data stackArr[STACK_LEN];
	int topIndex;
	void StackInit(Stack* pstack);
	int SIsEmpty(Stack* pstack);

	void SPush(Stack* pstack, Data data);
	Data SPop(Stack* pstack);
	Data SPeek(Stack* pstack);

};