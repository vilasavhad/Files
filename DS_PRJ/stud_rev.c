#include"header.h"

void reverse_links(SLL **ptr){
  if(*ptr==0){
   printf("No records found\n");
   return;
  }
  int c=count_node(*ptr) ; 
  SLL **arr,*temp=*ptr;
  arr=malloc(sizeof(SLL*)*c);
  
  if(c>=2){
 int i=0;
 while(temp){
   arr[i++]=temp;
   temp=temp->next;
 }

 for(i=1;i<c;i++)
  arr[i]->next=arr[i-1];

  arr[0]->next=0;
  *ptr=arr[c-1]; 
 }
}
