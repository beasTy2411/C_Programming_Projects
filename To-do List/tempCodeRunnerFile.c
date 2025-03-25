#include<stdio.h>
#include<stdlib.h>

void add_task();
void view_task();
int change_status();

typedef struct Task{
    char title[50];
    // char description[100];
     int is_completed;
    struct Task *next;
}Task;

Task *head = NULL;
Task *current = NULL;
int count = 0;

int main(void) {
    int choice;
    do {
        printf("\n--- To-Do List Menu ---\n");
        printf("1. Add Task\n2. View Tasks\n3. Change Task Status\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: add_task(); break;
            case 2: view_task(); break;
            case 3: change_status(); break;
            case 4: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 3);
    return 0;
}

void add_task()
{
    Task *new_task = (Task *)malloc(sizeof(Task));
    printf("Enter the name of the task:");
    getchar();
    fgets(new_task->title,50,stdin);
    // printf("Enter the description of the task:");
    // getchar();
    // fgets(new_task->description,100,stdin);
    new_task->is_completed = 0;
    new_task->next = NULL;
    if(head == NULL)
    {
        head = new_task;
        current = new_task;
    }
    else
    {
        current->next = new_task;
        current = new_task;
    }
    count++;
}

void view_task()
{   
    current = head;
    int i = 1;
    while(current != NULL)
    {
        printf("%i. %s %s\n", i, current->title, current->is_completed?"Completed":"Pending");
        current = current->next;
        i++;
    }
    
}

int change_status()
{   
    int task_no;
    printf("Enter the no. of the task: ");
    scanf("%i",task_no);

    if(task_no > count)
    {
        printf("Enter a valid task number.");
        return 1;
    }
    
    current = head;
    for (int j = 1; j <= task_no && current != NULL; j++)
    {
        if(j == task_no)
        {
            current->is_completed = current->is_completed? 0 : 1;
            printf("The status of %s is change to %s.", current->title, current->is_completed?"Completed":"Pending");
        }

        current = current->next;
    }
    
}