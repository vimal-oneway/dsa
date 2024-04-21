#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

struct tree *createNode(int data)
{
    struct tree *newNode = (struct tree *)malloc(sizeof(struct tree));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct tree *insertNode(struct tree *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
        return root;
    }
    else if (data < root->data)
    {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insertNode(root->right, data);
    }
    return root;
}

void inOrderTraversal(struct tree *root, int space)
{
    if (root == NULL)
        return;
    int i;
    inOrderTraversal(root->left, space + 1);
    for (i = 0; i < space; i++)
    {
        printf("       ");
    }
    printf("%d\n", root->data);
    inOrderTraversal(root->right, space + 1);
}

int sreach(struct tree *root, int data)
{
    if (!root)
        return 0;
    if (root->data == data)
        return 1;
    if (data < root->data)
        return sreach(root->left, data);
    return sreach(root->right, data);
}

void main()
{
    int choice, data, found;
    struct tree *root = NULL;
    do
    {
        printf("\n1.insert a node");
        printf("\n2.Travers a tree");
        printf("\n3.Sreach");
        printf("\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter the number to add");
            scanf("%d", &data);
            if (root == NULL)
            {
                root = insertNode(root, data);
            }
            insertNode(root, data);
            break;
        case 2:
            printf("\n");
            inOrderTraversal(root, 0);
            break;
        case 3:
            printf("\nEnter the data to sreach");
            scanf("%d", &data);
            found = sreach(root, data);
            found ? printf("%d was found", data) : printf("%d was not found", data);
            break;
        case 4:
            printf("Exiting the program ");
            break;
        default:
            printf("\nInvalid input");
            break;
        }
    } while (choice != 4);
}