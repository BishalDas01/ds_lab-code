#include <stdio.h>

struct Node
{
    int val;
    struct Node *next;
};

void print(struct Node *head)
{
    while (head != 0)
    {
        printf("%d ", head->val);
        head = head->next;
    }
}

int main()
{
    struct Node *head, *tail, *newnode;
    struct Node* newNode;
    head = 0;
    int choice = 1;
    while (choice)
    {
        if (choice == 1)
        {
            newnode = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter data : ");
            scanf("%d", &newnode->val);
            newnode->next = 0;
            if (head == 0)
            {
                head = newnode;
                tail = newnode;
            }
            else
            {
                tail->next = newnode;
                tail = newnode;
            }
        }

        else
        {
            newNode = (struct Node *)malloc(sizeof(struct Node));
            printf("Enter value : ");
            scanf("%d", &newNode->val);
            newNode->next = head;
            head = newNode;
        }

        printf("If you want to continue press 1\n If you want to insert at head press 2\nFor exist press 0\nEnter your choice : ");
        scanf("%d", &choice);
    }

    print(head);

    return 0;
}
