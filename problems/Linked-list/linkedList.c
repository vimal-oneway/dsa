#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node* head = NULL, *last = NULL; 

void createNode(int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        last = newNode;
    }
    else{
        last->next = newNode;
        last = newNode;
    }
}

void print(){
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d \t ", temp->data);
        temp = temp->next;
    }
}

void add()
{
    struct node* temp = head;
    int sum = 0;
    printf("\n The elements of linkedList are \n");
    while (temp != NULL)
    {
        printf("%d \t ", temp->data);
        sum += temp->data;
        temp = temp->next;
    }
    printf("\nSum of linkedList is %d", sum);
}

void main()
{
    int flag=1, choose=0, data=0;
    while(flag)
    {
        printf("\nenter 1 to add \nenter 2 to display nodes \nenter 3 to add the linked list \nenter 4 to exits");
        scanf("%d", &choose);
        switch (choose)
        {
            case 1:
            {
                printf("\nEnter the data to insert");
                scanf("%d",&data);
                createNode(data);
                break;
            }
            case 2:
            {
                print();
                break;
            }
            case 3:
            {
                add();
                break;
            }
            default:
            {
                printf("\nExit");
                flag=0;
                break;
            }
        }
    }
}
