#include <stdio.h>
#include <stdlib.h>

typedef struct linknd{	

	int data;
	void *next;
	
	//struct linked *next;
} linknd_t; 



//struct linked nd

 static linknd_t *list; // linked List ��ü
//����ü�� ���� ������ 
linknd_t* create_node(int value){
	
	linknd_t* ndPtr;
	
	//���� �޸� �Ҵ� & ������ ���� 
	ndPtr =(linknd_t*)malloc( sizeof(linknd_t) );
	if (ndPtr == NULL)
	{
		printf("ERROR \n");
		return NULL;
		
	}
	//������ ����
	ndPtr->data =value;
	ndPtr->next =NULL;
	
	return ndPtr;
	 
}
