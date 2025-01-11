#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdarg.h>
typedef struct Student
{
  int rollno;
  char name[20];
  float marks;
  struct Student *next;
}SLL;

void add_new(SLL **ptr);
void print_node(SLL *ptr);
void delete_node(SLL **ptr);
void delete_node_name(SLL **ptr);
void delete_node_rollno(SLL **ptr);
void mod_node(SLL *ptr);
SLL* search_rollno(SLL *ptr);
SLL* search_name(SLL *ptr);
SLL* search_per(SLL *ptr);
void modify_record(SLL *ptr);
void save_file(SLL *ptr);
void save(SLL *ptr);
void read_file(SLL **ptr);
void sort_data(SLL *ptr);
void sort_name(SLL *ptr);
void sort_per(SLL *ptr);
int  count_node(SLL *ptr);
void delete_all(SLL **ptr);
void reverse_links(SLL **ptr);
void sort_roll(SLL *ptr);
