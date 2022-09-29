#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node()
    {
        next = NULL;
        prev = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

public:
    void insert_at_beginning(int v)
    {
        Node *temp = new Node();
        temp->prev = NULL;
        temp->next = head->prev;
        temp->data = v;
        head = temp;
    }
    void insert_between(Node *pem, int v)
    {
        Node *temp = new Node();
        temp->data = v;
        if (head == NULL)
        {
            temp = head;
        }
        else
        {
            temp->next = pem->next;
            pem->next = temp;
            temp->prev = pem;
            if (temp->next != NULL)
            {
                temp->next->prev = temp;
            }
        }
    }
    void insert_at_end(int v)
    {
        Node *newNode = new Node();
        newNode->data = v;
        newNode->next = NULL;

        Node *temp = head;

        if (head == NULL)
        {
            newNode->prev = NULL;
            head = newNode;
            return;
        }

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;

        newNode->prev = temp;
    }
    // void delete_at_beginning()
    // {
    //     if (head == NULL)
    //     {
    //         cout << "List is Empty" << endl;
    //     }
    //     else
    //     {
    //         cout << "Element Deleted: " << head->data << endl;

    //         Node *temp = head;

    //         head = head->next;
    //         delete (temp);
    //     }
    // }
    // void delete_at_end()
    // {
    //     if (head == NULL)
    //     {
    //         cout << "List is Empty" << endl;
    //     }
    //     else if (head->next == NULL)
    //     {

    //         cout << "Element Deleted: " << head->data << endl;
    //         delete (head);
    //         head = NULL;
    //     }
    //     else
    //     {

    //         Node *temp = head;

    //         while (temp->next->next != NULL)
    //         {
    //             temp = temp->next;
    //         }

    //         cout << "Element Deleted: " << temp->next->data << endl;

    //         delete (temp->next);

    //         temp->next = NULL;
    //     }
    // }
    // void delete_at_given_position(int p)
    // {
    //     if (head == NULL)
    //     {
    //         // if list is empty do nothing
    //         cout << "List is Empty" << endl;
    //     }
    //     else
    //     {
    //         Node *temp, *ptr;
    //         if (p == 0)
    //         {
    //             // if p==0, perform delete at beginning
    //             cout << "Element Deleted: " << head->data << endl;
    //             ptr = head;
    //             head = head->next;
    //             delete (ptr);
    //         }
    //         else
    //         {
    //             temp = ptr = head;
    //             while (p > 0)
    //             {
    //                 --p;
    //                 temp = ptr;
    //                 ptr = ptr->next;
    //             }
    //             cout << "Element Deleted: " << ptr->data << endl;

    //             temp->next = ptr->next;

    //             free(ptr);
    //         }
    //     }
    //}
    void print()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            Node *temp = head;
            cout << "Linked List: ";
            while (temp != NULL)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
    };
};

int main()
{
    printf("1 to Insert at the beginning");
    printf("\n2 to Insert between");
    printf("\n3 to Insert at end");
    printf("\n4 to Delete from beginning");
    printf("\n5 to Delete from the end");
    printf("\n6 to Delete from mid");
    printf("\n7 to Display");
    printf("\n0 to Exit");

    int choice, v, p;
    LinkedList ll;
    do
    {
        cout << "\nEnter Your Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Element: ";
            cin >> v;
            ll.insert_at_beginning(v);
            break;

        case 2:
            cout << "Enter Element: ";
            cin >> v;
            // ll.insert_between(v);
            break;

        case 3:
            cout << "Enter Element: ";
            cin >> v;
            ll.insert_at_end(v);
            break;

        case 4:
            // ll.delete_at_beginning();
            break;

        case 5:
            // ll.delete_at_end();
            break;

        case 6:
            cout << "Enter Position ( zero-indexed ): ";
            cin >> p;
            // ll.delete_at_given_position(p);
            break;

        case 7:
            // ll.print();
            break;
        }
    } while (choice != 0);
    return 0;
}