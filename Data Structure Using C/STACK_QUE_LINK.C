/* Stack and QUEUE Using Linklist*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
  int info;
  struct node* link;
};
typedef struct node* NODE;

NODE head;

NODE getnode();
void stkpush();
void pop_del();
void qinsert();
void display();
void freenode(NODE);

void main() {
  int ch;
  char op;
  clrscr();
  head->link=NULL;
  while (1) {
    printf("\n------------MENU------------");
    printf("\n\t 1: STACK IMPLEMENTATION");
    printf("\n\t 2: QUEUE IMPLEMENTATION");
    printf("\n\t 3: DISPLAY");
    printf("\n\t 4: EXIT");
    printf("\n\t ENTER THE CHOICE: ");
    scanf("%d",&ch);
    switch (ch) {
    case 1:
      printf("\n\t\t STACK ");
      printf("\n\t 1: Push - Insert at front");
      printf("\n\t 2: Pop - Delete at front");
      printf("\n\t Enter the option : ");
      scanf("%d",&op);
      switch (op) {
      case 1:
        stkpush();
        printf("\n\t Stack contents after Push operation");
        display();
        break;
      case 2:
        pop_del();
        printf("\n\t Stack contents after Pop");
        display();
        break;
      default:
        printf("\n\t Invalid choice: ");
        exit(1);
        break;
      }
      break;
    case 2:
      printf("\n\t\t QUEUE ");
      printf("\n\t 1: Insert - Insert at Last");
      printf("\n\t 2: Delete - Delete at front");
      printf("\n\t Enter the option : ");
      scanf("%d",&op);
      switch (op) {
      case 1:
        qinsert();
        printf("\n\t Queue contents after insertion");
        display();
        break;
      case 2:
        pop_del();
        printf("\n\t Queue contents after deletion");
        display();
        break;
      default:
        printf("\n\t Invalid choice: ");
        exit(1);
        break;
      }
      break;
    case 3:
      display();
      break;
    case 4:
      exit(1);
      break;
    default:
      printf("\n\t INVALID CHOICE \n");
    }
  }
}
void stkpush() //insert at front
{
  NODE p, next;
  p=getnode();
  printf("\n\t Enter the element to be inserted at front: ");
  scanf("%d",&p->info);
  if (head->link == NULL) {
    printf("\n\t This is the 1st element of the list");
    head->link=p;
    p->link=NULL;
  } else {
    next=head->link;
    p->link=next;
    head->link=p;
  }
}
void pop_del() // delete at front
{
  NODE cur, next;
  if (head->link == NULL) {
    printf("\n\t Empty List - Underflow");
    return;
  }
  cur=head->link;
  if (cur->link != NULL) {
    next=cur->link;
    head->link = next;
    freenode(cur);
    return;
  }
  head->link = NULL;
  freenode(cur);
}

void qinsert() // insert at back
{
  NODE p, temp;
  p = getnode();
  printf("\n\t Enter the element to be inserted at last: ");
  scanf("%d", &p->info);
  if (head->link == NULL) {
    printf("\n\t This is the 1st element of the list");
    head->link=p;
    p->link=NULL;
  } else {
    temp = head->link;
    while (temp->link != NULL)
      temp = temp->link;

    temp->link=p;
    p->link=NULL;
  }
}

void display() {
  NODE p;
  if (head-> link == NULL) {
    printf("\n\t  Empty List");
    return;
  }
  p = head->link;
  printf("\n\t output List :\n");
  printf("\n Head -->");
  while (p->link != NULL) {
    printf("%d-->",p->info);
    p=p->link;
  }
  printf(" %d", p->info);
  printf("-->");
  printf("NULL");
}

NODE getnode() {
  NODE p;
  p = (NODE) malloc(sizeof(struct node));
  return (p);
}

void freenode(NODE p) {
  free(p);
}
