#include"header.h"
int main()
{
	SLL *headptr=0;
	char op;
	while(1) {
		printf("\033[32m ***** STUDENT RECORD MENU *****\n");
		printf("______________________________________\n\n");
		printf(" a/A : Add New Record\n d/D : Delete a Record\n s/S : Show the List\n m/M : Modify a Record\n v/V : Save\n e/E : Exit\n t/T : Sort the List\n l/L : Delete all the Record\n r/R : Reverse the List\n\033[0m \n");
		printf("Enter Your Choice : \n");
		scanf(" %c",&op);
              if(((op>>5)&1)==0)
                 op=op^32;
		switch(op)
		{
		case 'a':
                        sort_roll(headptr);
			add_new(&headptr);
			break;
		case 's':
			print_node(headptr);
			break;
		case 'd': delete_node(&headptr);
		    break;	
		case 'm': mod_node(headptr);
		    break;
		case 'v': save_file(headptr);
		    break;
		case 'e' : exit(0);    
		case 't' : sort_data(headptr);
		    break;    
		case 'l' : delete_all(&headptr);
		    break;
		case 'r' : reverse_links(&headptr);
		    break;
		case 'x' : read_file(&headptr);
		    break;
		 default : printf("Invalid Choice\n");   
		    
		}

	}

}

