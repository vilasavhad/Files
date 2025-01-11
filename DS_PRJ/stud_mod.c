#include"header.h"

void mod_node(SLL *ptr)
{
  //system("clear"); 
	char ch;
	SLL *mod=0;
	printf("Enter which record to search for modification\n R/r : To Search a Rollno\n N/n : To Search a Name\n P/p : Percentage Based\n");
	printf("Enter Your Choice :\n");
	scanf(" %c",&ch);
    if(((ch>>5)&1)==0)
      ch^=32;
	switch(ch)
	{
	case 'r' :
		mod=search_rollno(ptr);
			if(mod)
		{
			modify_record(mod);
		}
		break;
	case 'n' :
		mod=search_name(ptr);
		if(mod)
		{
			modify_record(mod);
		}
		break;
	case 'p' :
		mod=search_per(ptr);
		break;
	default :
		printf("Invalid Choice\n");
	}
}

SLL* search_rollno(SLL *ptr) {
	if(ptr==0) {
		printf("no records found\n");
		return 0;
	}
	int num;
	printf("enter Rollno\n");
	scanf("%d",&num);
	int f=0;
	while(ptr) {
		if(num==ptr->rollno)
		{
			printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
			return ptr;
			f=1;
		}
		ptr=ptr->next;
	}
	if(f==0)
		return 0;
}
SLL* search_name(SLL *ptr) {
	if(ptr==0) {
		printf("no records found\n");
		return 0;
	}
	char name[20];
	printf("enter name\n");
	scanf("%s",name);
	int f=0;
	while(ptr) {
		if(strcmp(name,ptr->name)==0) {
			printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
			return ptr;
			f=1;
		}
		ptr=ptr->next;
	}
	if(f==0)
		return 0;
}
SLL* search_per(SLL *ptr) {
	if(ptr==0) {
		printf("no records found\n");
		return 0;
	}
	float per;
	printf("enter per : \n");
	scanf("%f",&per);
	int f=0;
	while(ptr) {
		if(per==ptr->marks) {
			printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
			return ptr;
			f=1;
		}
		ptr=ptr->next;
	}
	if(f==0)
		return 0;
}

void modify_record(SLL *ptr) {
	char sop;
	float mrk;
	printf("\nWhat You Want To Change:\nn/N : modify Name \np/P : modify Percentage \nEnter Your Choice:\n");
	scanf(" %c",&sop);
	if(sop>>5 &1)
		sop-=32;
	switch(sop) {
	case 'N': {
		printf("Enter Name To Modify:\n");
		scanf("%s",ptr->name);
		break;
	}
	case 'P': {
		printf("Enter Percentage To Modify:\n");
		scanf("%f",&mrk);
		if(mrk<=100 && mrk >=0)
		{
			ptr->marks=mrk;
		}
		break;
	}
	default:
		printf(" INVALID CHOICE ");
	}
}

