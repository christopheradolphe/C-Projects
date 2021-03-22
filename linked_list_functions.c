#include <stdio.h>
#include <stdlib.h>

#include "lab4.h"

void print_all_rec(struct node *head){
  if (head == NULL){
    return;
  }else{
    printf("%d\n", head->data);
    print_all_rec(head->next);
  }
}

void insert_value(struct node *head, int index, int val){
  ///insert node with data value of val at index of linked list
  // if index > length of list , append node to end of linked list
  int i = 0;
  while (head->next != NULL && i<(index-1)){
    head = head->next;
    i++;
  }
  struct node *new = malloc(sizeof(struct node));
  new->data = val;
  new->next = head->next;
  head->next = new;
}

void delete_node(struct node *head, int val){
  ///Delete first node in linked list that has a value of val
  //if the value is the first value in list
  if (head->data == val){
    head->data = head->next->data;
    head->next = head->next->next;
    return;
  }
  while(head->next->data != val && head != NULL && head->next->next != NULL){
    head = head->next;
  }
  if(head == NULL || head->next->next == NULL){
    return;
  }else{
    head->next = head->next->next;
  }

}