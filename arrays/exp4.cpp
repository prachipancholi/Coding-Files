#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;

void beg_insert(int item)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            ptr->next = head;
            temp->next = ptr;
            head = ptr;
        }
        printf("\nNode Inserted\n");
    }
}

void last_del()
{
    struct node *ptr, *preptr;
    if (head == NULL)
    {
        printf("\nUNDERFLOW\n");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
        ptr = head;
        while (ptr->next != head)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
        printf("\nNode Deleted\n");
    }
}
void last_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n UNDERFLOW\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nNode Deleted\n");
    }
    else
    {
        ptr = head;
        if (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->prev->next = NULL;
        free(ptr);
        printf("\nNode Deleted\n");
    }
}
void insertlast(int item)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {

        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            ptr->prev = NULL;
            head = ptr;
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->prev = temp;
            ptr->next = NULL;
        }
        printf("\nNode Inserted\n");
    }
}

int main()
{
    int b = 1;

    while (b)
    {
        cout << "20BCS1334- Prachi Pancholi\n";

        cout << "1. Enter in doubly linked list.\n";
        cout << "2. Delete from doubly linked list.\n";
        cout << "3. Insert into circular linked list.\n";
        cout << "Delete from circular linked list.\n";
        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
            int item;
            cout << "Enter item to insert: \n";
            cin >> item;
            insertlast(item);
            break;
        case 2:
            last_delete();
            break;
        case 3:
            int it;
            cout << "Enter item to insert: \n";
            cin >> it;
            beg_insert(it);
            break;
        case 4:
            last_del();
            break;

        default:
            cout << "Invalid try again.\n";
            break;
        }

        cout << "wanna perform more? \n";
        cin >> b;
    }

    return 0;
}