#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int number;
    struct node *next;
}node;


int main()
{
    node *head = NULL;
    node *curr = NULL;

    for(int i = 0 ; i<3 ; i++)
    {
        node *new = malloc(sizeof(node));
        if (new == NULL)
        {
            return 1;
        }

        new->number = i;
        new->next = NULL;

        if (head == NULL)
        {
            head = new;
            curr = new;
        }
        else
        {
            curr->next = new;
            curr = new;
        }
        
    }

    curr = head;
    while(curr != NULL)
    {
        printf("%i\n", curr->number);
        curr = curr->next;
    }
    
}