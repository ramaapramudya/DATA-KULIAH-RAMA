#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    Node *left;
    Node *right;
};

void addData(Node **root, int newData)
{
    if ((*root) == NULL)
    {
        Node *newNode;
        newNode = new Node;
        newNode->data = newData;
        newNode->left = NULL;
        newNode->right = NULL;
        (*root) = newNode;
        (*root)->left = NULL;
        (*root)->right = NULL;
        printf("Data Bertambah");
    }
    else if (newData < (*root)->data)
        addData(&(*root)->left, newData);
    else if (newData > (*root)->data)
        addData(&(*root)->right, newData);
    else if (newData == (*root)->data)
        printf("Data Sudah Ada");
}

void preOrder(Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

int main()
{
    int pil, data;
    Node *tree;
    tree = NULL;

    do
    {
        system("cls");
        printf("1. Tambah Data\n");
        printf("2. Data Pre-Order\n");
        printf("3. Data In-Order\n");
        printf("4. Data Post-Order\n");
        printf("5. Exit\n");
        printf("Pilih Menu : ");
        scanf("%d", &pil);

        switch (pil)
        {
        case 1:
            printf("\nMasukkan Data Baru : ");
            scanf("%d", &data);
            addData(&tree, data);
            break;

        case 2:
            printf("\nPRE-ORDER : ");
            printf("\n==================\n");
            if (tree != NULL)
                preOrder(tree);
            else
                printf("Data Kosong");
            break;

        case 3:
            printf("\nIN-ORDER : ");
            printf("\n==================\n");
            if (tree != NULL)
                inOrder(tree);
            else
                printf("Data Kosong");
            break;

        case 4:
            printf("\nPOST ORDER : ");
            printf("\n==================\n");
            if (tree != NULL)
                postOrder(tree);
            else
                printf("Data Kosong");
            break;
        }
        _getch();
    } while (pil != 5);
    return EXIT_FAILURE;
}
