#include <stdio.h>

struct Node
{
    int val;
    struct Node *next;
};

void print(struct Node* head)
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
    head = 0;
    int choice = 1;
    while (choice)
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

        printf("If you want to continue press 1\n If you want to exist press 0\nEnter your choice : ");
        scanf("%d", &choice);
    }

    print(head);

    return 0;
}
