#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *first = 0;

struct Node *last;

void append(int data) {
  struct Node *t;

  if (first != 0) {
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = data;
    t->next = NULL;
    last->next = t;
    last = t;
  } else {
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = data;
    first->next = NULL;
    last = first;
  }
}

void create() {
  int data;
  printf("Enter the data to insert\n");
  scanf("%d", &data);
  append(data);
}

void display() {
  struct Node *t = first;
  printf("\n Display elements in linked list\n");
  while (t != NULL) {
    printf("%d\t", t->data);
    t = t->next;
  }
}

void update() {
  struct Node *t = first;
  int data, updateThisData;
  printf("Enter data need to Update\n");
  scanf("%d %d", &updateThisData, &data);
  while (t != NULL) {
    if (updateThisData == t->data) {
      t->data = data;
      break;
    }
    t = t->next;
  }
}

void delete() {
  struct Node *t = first;
  int data, del = 0;

  printf("Enter data need to Update\n");
  scanf("%d", &data);

  if (t->data == data) {
    first = t->next;
    printf("Deleted");
    return;
  }

  while (t->next != NULL) {
    if (data == t->next->data) {
      if (t->next->next != NULL)
        t->next = t->next->next;
      else {
        last = t;
        last->next = NULL;
      }
      del = 1;
      break;
    }

    t = t->next;
  }

  if (del) {
    printf("Deleted");
  } else {
    printf("Data not found");
  }
}

void count() {
  struct Node *t;
  int count = 0;

  while (t != NULL) {
    count++;
    t = t->next;
  }

  printf("Total number of nodes in linked list is %d", count);
}

int main() {
  printf("CURD opteration in linked list\n");
  int option = 0;

  do {
    printf("Enter your choice\n1. create\n2. update\n3. delete\n4. display\n5. "
           "count\n6. "
           "exit\n");
    scanf("%d", &option);
    switch (option) {
    case 1:
      create();
      break;
    case 2:
      update();
      break;
    case 3:
      delete ();
      break;
    case 4:
      display();
      break;
    case 5:
      count();
      break;
    case 6:
      exit(0);
      break;
    default:
      printf("Exiting the linked list program\n");
      exit(0);
    }
  } while (option > 0 && option < 6);

  return 0;
}
