#include"header.h"
void add_new(SLL **ptr)
{
	SLL *new,*temp;
	new=(SLL *)malloc(sizeof(SLL));
	printf("\nEnter Name And Percentage\n");
	scanf("%s %f",new->name,&new->marks);

	if((*ptr == 0) || ((*ptr)->rollno >1)){
		new->next=*ptr;
		*ptr=new;
		new->rollno=1;
	}
	else
	{
		temp=*ptr;
		while((temp->next !=0) && ((temp->next->rollno)-(temp-> rollno) ==1)){
			temp=temp->next;
		}
		new-> next=temp->next;
		temp->next=new;
		new->rollno=temp->rollno+1;
	}
	printf(" NEW RECORD ADDED \n");      
}

void sort_roll(SLL *ptr){
	if(ptr==0){
		printf("no records found\n");
		return;
	}

	SLL *p1=ptr,*p2,temp;
	int i,j,c=count_node(ptr);
	for(i=0;i<c-1;i++){
		p2=p1->next;
		for(j=0;j<c-1-i;j++){
			if(p1->rollno > p2->rollno){
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
}
