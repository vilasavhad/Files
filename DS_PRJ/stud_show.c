#include"header.h"
void print_node(SLL *ptr) {
	system("clear"); 
          printf("\033[34m             STUDENTS RECORDs\n");
	printf(" ****************************************************************\n");
	if(ptr==0) {
		printf("NO records found\n");
		printf("\033[34m ******************\n");
		return ;
	}
	while(ptr) { 
		printf("|%-10.2d\t| %-20s | %8.2f |\n",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next; 
	}
	printf("\033[34m ****************************************************************\n\n\n");
}

