#include"header.h"

void save_file(SLL *ptr)
{
    	system("clear"); 
	printf(" ******************\n");
	if(ptr==0){
		printf("NO records found\n");
		printf(" ******************\n");   
		return ;
	}
    char ch;
    printf("s/S : Save And Exit \ne/E : Save Without Exit\n");
    printf("Enter Your Choice :\n");
    scanf(" %c",&ch);
    if(((ch>>5)&1)==0)
      ch^=32;
    switch(ch)
    {
        case 's' : save(ptr);
            break;
        case 'e' : printf(".........\n");
           break;
        default  : printf("Invalid Choice\n");
    }
}
void save(SLL *ptr){

	FILE *fp;
	fp=fopen("student_data.txt","w");

	while(ptr){ 
		fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next; 
	}
	printf("data saved in file\n");
	printf(" ******************\n");
	fclose(fp);
}


/////////////////////read File//////////////////

void read_file(SLL **ptr){
	SLL *new,*last;

	FILE *fp;
	fp=fopen("student_data.txt","r");
	if(fp==0){
		printf("file not present\n");
		return;
	}
	while(1){
		new=malloc(sizeof(SLL)); 
		if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->marks)==-1)
			break;

		new->next=0;
		if(*ptr==0) 
			*ptr=new;
		else{
			last=*ptr;
			while(last->next) 
				last=last->next; 

			last->next=new; 
		}
	}
}
