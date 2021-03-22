#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int data; 
    struct node *next; 
};

struct node2{
    void *p_data; //a pointer to data (allocated with malloc)
    int type; // 0 if int, 1 if float, 2 if double
    struct node2 *next;
};

void print_all(struct node *head){
  while (head != NULL){
    printf("%d\n", head->data);
    head = head->next;
  }
}

void print_all_rec(struct node *head){
  if (head == NULL){
    return;
  }else{
    printf("%d\n", head->data);
    print_all_rec(head->next);
  }
}

void append_int(struct node2 *head, int *val){
  while (head->next != NULL){
    head = head->next;
  }

  struct node2 *new = malloc(sizeof(struct node2));
  head->next = new;
  new->p_data = val;
  (*new).type = 0;
  new->next = NULL;
}

void append_float(struct node2 *head, float *val){
  while (head->next != NULL){
    head = head->next;
  }

  struct node2 *new = malloc(sizeof(struct node2));
  head->next = new;
  new->p_data = val;
  (*new).type = 1;
  new->next = NULL;
}

void append_double(struct node2 *head, double *val){
  while (head->next != NULL){
    head = head->next;
  }

  struct node2 *new = malloc(sizeof(struct node2));
  head->next = new;
  new->p_data = val;
  (*new).type = 2;
  new->next = NULL;
}

void print_all_rec2(struct node2 *head){
  if (head == NULL){
    return;
  }else{
    if (head->type ==0){
      int *add = head->p_data;
      printf("%d\n", *add);
    }
    if (head->type ==1){
      float *add = head->p_data;
      printf("%f\n", *add);
    }
    if (head->type ==2){
      double *add = head->p_data;
      printf("%f\n", *add);
    }
    print_all_rec2(head->next);
  }
}


int main(void){
  struct node n1;
  struct node *head = &n1;
  n1.data = 5;
  struct node n2;
  n1.next = &n2;
  n2.data = 70;
  struct node n3;
  n2.next = &n3;
  n3.data = 10;
  struct node n4;
  n3.next = &n4;
  n4.data = 60;
  n4.next = NULL;
  print_all(head);
  printf("New One\n");
  print_all_rec(head);
  printf("End of part 1 \n");

  int d = 6;
  struct node2 n21;
  n21.p_data = &d;
  n21.type = 0;
  n21.next = NULL;
  float a = 1.23456;
  append_float(&n21, &a);
  int b = 6;
  append_int(&n21, &b);
  double c = 10000000000;
  append_double(&n21, &c);
  print_all_rec2(&n21);



}