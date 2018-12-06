#include <stdio.h>
#include <stdlib.h>

typedef struct linknd{	

	int data;
	void *next;
	
	//struct linked *next;
} linknd_t; 



//struct linked nd

 static linknd_t *list; // linked List 실체
//구조체에 대한 포인터 
linknd_t* create_node(int value){
	
	linknd_t* ndPtr;
	
	//동적 메모리 할당 & 정수값 저장 
	ndPtr =(linknd_t*)malloc( sizeof(linknd_t) );
	if (ndPtr == NULL)
	{
		printf("ERROR \n");
		return NULL;
		
	}
	//정수값 저장
	ndPtr->data =value;
	ndPtr->next =NULL;
	
	return ndPtr;
	 
}
