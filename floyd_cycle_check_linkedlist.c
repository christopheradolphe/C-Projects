#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct node{
    int data; 
    struct node *next; 
};

int floyd_cycle_check(struct node *head){
  //Return 0 if no cycle in linked list
  //Return 1 if cycle in linked list
  // int size = length_linked_list(head);
  struct node *hare = head->next->next;
  struct node *tortoise = head->next;
  while (hare != tortoise){
    if (head == NULL || hare->next == NULL || hare->next->next == NULL || tortoise->next == NULL){
      return 0;
    }
    hare = hare->next->next;
    tortoise = tortoise->next;
    }
    return 1;
}