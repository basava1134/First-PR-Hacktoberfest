#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

// Case 1->at_head
class Node *insertAtFirst(class Node *head, int data)
{
    class Node *ptr = new Node();
    ptr->data = data;

    ptr->next = head;
    return ptr;
}
// Case 2
class Node *insertAtIndex(struct Node *head, int data, int index)
{
    class Node *ptr = new Node();
    class Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Case 3
class Node *insertAtEnd(struct Node *head, int data)
{
    class Node *ptr = new Node();
    ptr->data = data;
    class Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
// Case 4: Deleting the first element from the linked list
class Node *deleteFirst(class Node *head)
{
    class Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// Case 5: Deleting the element at a given index from the linked list
class Node *deleteAtIndex(class Node *head, int index)
{
    class Node *p = head;
    class Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}
// Case 6: Deleting the last element
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}
int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    int choice;
    do
    {
        cout << "\nEnter 1 -> insertAtFirst "<<endl;
        cout << "Enter 2 -> insertAtIndex "<<endl;
        cout << "Enter 3 -> insertAtEnd "<<endl;
        cout << "Enter 4 -> deleteFirst "<<endl;
        cout << "Enter 5 -> deleteAtIndex "<<endl;
        cout << "Enter 6 -> deleteAtLast "<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Linked list before insertion" << endl;
            linkedListTraversal(head);
            head = insertAtIndex(head, 56, 1);

            cout << "linked list after insertion" << endl;
            linkedListTraversal(head);
            break;
        case 2:
            cout << "Linked list before insertion" << endl;
            linkedListTraversal(head);
            head = insertAtIndex(head, 56, 1);

            cout << "linked list after insertion" << endl;
            linkedListTraversal(head);
            break;
        case 3:
            cout << "Linked list before insertion" << endl;
            linkedListTraversal(head);
            head = insertAtEnd(head, 56);
            cout << endl;
            cout << "linked list after insertion" << endl;
            linkedListTraversal(head);
            break;
        case 4:
            cout << "Linked list before Deletion" << endl;
            linkedListTraversal(head);
            head = deleteFirst(head);
            cout << endl;
            cout << "linked list after insertion" << endl;
            linkedListTraversal(head);

            break;
        case 5:
            cout << "Linked list before Deletion" << endl;
            linkedListTraversal(head);
            head = deleteAtIndex(head, 2);
            cout << endl;
            cout << "linked list after insertion" << endl;
            linkedListTraversal(head);
            break;
        case 6:
            cout << "Linked list before Deletion" << endl;
            linkedListTraversal(head);
            head = deleteAtLast(head);
            cout << endl;
            cout << "linked list after insertion" << endl;
            linkedListTraversal(head);
        default:
            break;
        }
    } while (choice <= 6);
    return 0;
}

