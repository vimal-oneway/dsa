#include <stdio.h>
#include <stdlib.h>

void add(int queue[], int *rare)
{
    int i = 0;
    printf("Enter the element of Queue\n");
    scanf("%d", &i);
    queue[*rare] = i;
    printf("%d was pushed\n", queue[*rare]);
    *rare+=1;
}

void delete(int queue[], int *front)
{
    printf("Element %d was pop\n", queue[*front]);
    *front += 1;
}

void display(int queue[], int front, int rare)
{
    int i = front;
    printf("Elements are\n");
    for (i; i < rare; i++)
    {
        printf("%d\t", queue[i]);
    }
}

void main()
{
    int queue[30], front = 0, rare = 0, choice;
    do
    {
        printf("\n\n1. Push element\n2. Pop element\n3. display elements\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add(queue, &rare);
            break;
        case 2:
            delete (queue, &front);
            break;
        case 3:
            display(queue, front, rare);
            break;
        case 4:
            printf("Exiting the program\n");
            exit(1);
            break;
        default:
            printf("Invalid input try again:)\n");
            break;
        }

    } while (1);
}