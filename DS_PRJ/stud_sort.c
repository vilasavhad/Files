#include"header.h"

void sort_data(SLL *ptr)
{
    	//system("clear"); 
	printf(" ******************\n");
	if(ptr==0){
		printf("NO records found\n");
		printf(" ******************\n");   
		return ;
	}
    char ch;
    printf("N/n : Sort with Name \nP/p : Sort with Percentage\n");
    printf("Enter Your Choice :\n");
    scanf(" %c",&ch);
    if(((ch>>5)&1)==0)
      ch^=32;
    switch(ch)
    {
        case 'n' : sort_name(ptr);
            break;
        case 'p' : sort_per(ptr);
           break;
        default  : printf("Invalid Choice\n");
    }
}
void sort_name(SLL *ptr){
	if(ptr==0){
		printf("no records found\n");
		return;
	}

	SLL *p1=ptr,*p2,temp;
	int i,j,c=count_node(ptr);
	for(i=0;i<c-1;i++){
		p2=p1->next;
		for(j=0;j<c-1-i;j++){
			if(strcmp(p2->name,p1->name)<0){
				temp.rollno=p1->rollno;
				strcpy(temp.name,p1->name);
				temp.marks=p1->marks;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->marks=p2->marks;

				p2->rollno=temp.rollno;
				strcpy(p2->name,temp.name);
				p2->marks=temp.marks;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
      printf("Sort With Name.....\n");
}

void sort_per(SLL *ptr){
	if(ptr==0){
		printf("no records found\n");
		return;
	}

	SLL *p1=ptr,*p2,temp;
	int i,j,c=count_node(ptr);
	for(i=0;i<c-1;i++){
		p2=p1->next;
		for(j=0;j<c-1-i;j++){
			if(p1->marks < p2->marks){
				temp.rollno=p1->rollno;
				strcpy(temp.name,p1->name);
				temp.marks=p1->marks;

				p1->rollno=p2->rollno;
				strcpy(p1->name,p2->name);
				p1->marks=p2->marks;

				p2->rollno=temp.rollno;
				strcpy(p2->name,temp.name);
				p2->marks=temp.marks;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
   printf("Sort With Percentage.....\n");
}


int  count_node(SLL *ptr){
	system("clear"); 

	int c=0;
	while(ptr){ 
		c++;
		ptr=ptr->next;  
	}
	return c;

}

