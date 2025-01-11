#include"header.h"

void delete_node(SLL **ptr)
{
    char ch;
  	//system("clear"); 
    printf("R/r : Enter rollno To Delete\n N/n : Enter Name To Delete\n");
    printf("Enter your Choice :\n");
      scanf(" %c",&ch);
    if(((ch>>5)&1)==0)
      ch^=32;
    switch(ch)
    {
        case 'r' : delete_node_rollno(ptr);
                   break;
        case 'n' : delete_node_name(ptr);
                   break;
    }
}
void delete_node_rollno(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("No Records present\n");
		return;
	}
	int num;
	printf("enter rollno to delete\n");
	scanf("%d",&num);
	SLL *del=*ptr; 
	SLL *prev;
	while(del){
		if(del->rollno == num ) 
		{ 
			if(del == *ptr)   
				*ptr=del->next; 
			else 
				prev->next=del->next; 
			free(del); 
			printf("RECORD BEEN DELETED");
			return;
		}
		prev=del; 
		del=del->next;  
	}
	printf("Rollno not found\n"); 
}

void delete_node_name(SLL **ptr)
{
	if(*ptr==0)
	{
		printf("No Records present\n");
		return;
	}
	char name[20];
	printf("enter name to delete\n");
	scanf(" %[^\n]",name);
	SLL *del=*ptr; 
	SLL *prev;
	while(del){
		if(strcmp(del->name,name)==0) 
		{ 
			if(del == *ptr)   
				*ptr=del->next; 
			else 
				prev->next=del->next; 
			free(del);  
			printf("RECORD BEEN DELETED");
			return;
		}
		prev=del; 
		del=del->next;  
	}
	printf("Name not found\n"); 
}

///////////////////////delete all///////////

void delete_all(SLL **ptr){
	if(*ptr==0){
		printf("No records found\n");
		return;
	}
	int c=0;
	SLL *del=*ptr; 
	while(del){
		*ptr=del->next; 
	///	printf("deleted Node pos:%d\n",++c);
		sleep(1);
		free(del);
		del=*ptr; 
	}
	printf(" all the nodes deleted\n");
}

