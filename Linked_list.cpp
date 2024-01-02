// Linked list :It is a linear data structure .(Collection of nodes)
// We use it because of it is a dynamic data structure.
// Types of linked list : (i) Singly linked list ,(ii) Doubly linked list ,(iii) Circular linked list  ans (iv) Circular Doubly linked list

#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
// SINGLY LINKED LIST
// creating a node
class Node
{
public:
    int data;
    Node *next;
    Node() {}
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// Insert node at the first
void Insert_head(Node *&head, int data)
{
    // creating a new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Insert node at any possition
void Insert_mid(Node *&head, int possition, int data)
{
    Node *temp = new Node(data);
    Node *temp_head = head;
    if (possition == 1)
    {
        temp->next = temp_head;
        head = temp;
        return;
    }
    int count_node = 2;
    while (count_node < possition && temp_head->next != NULL)
    {
        temp_head = temp_head->next;
        count_node++;
    }
    temp->next = temp_head->next;
    temp_head->next = temp;
}

// Insert node at the tail
void Insert_tail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;

    // Another way to insert at the end if user pass the head pointer

    Node *head_temp = tail;
    while (head_temp->next != NULL)
    {
        head_temp = head_temp->next;
    }
    head_temp->next = temp;
    head_temp = temp;
}


// Delete node from any possition
void Delete_node(Node *&head, int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        head = temp->next;
        delete temp;
        return;
    }
    int count_node = 2;
    while (count_node < pos)
    {
        temp = temp->next;
        count_node++;
    }
    Node *current = temp->next;
    temp->next = current->next;
    delete current;
    return;
}

// Traverse the linked list
void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
 */

/*
// DOUBLY LINKED LIST
class Node
{
public:
    int data;
    Node *next, *prev;
    Node() {}
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Insert node at the head
void Doubly_insert_head(Node *&head, int data)
{
    Node *temp = new Node(data);
    head->prev = temp;
    temp->next = head;
    head = temp;
}

// Insert at the tail
void Doubly_insert_tail(Node *&head, int data)
{
    Node *temp = new Node(data);
    Node *temp_head = head;
    while (temp_head->next != NULL)
    {
        temp_head = temp_head->next;
    }
    temp->prev = temp_head;
    temp_head->next = temp;
}

// Insert node at any possition
void Doubly_insert_mid(Node *&head, int data, int pos)
{
    if (pos == 1)
    {
        Doubly_insert_head(head, data);
        return;
    }
    Node *temp = new Node(data);
    Node *temp_head = head;
    int cnt = 2;
    while (cnt < pos && temp_head != NULL)
    {
        temp_head = temp_head->next;
        cnt++;
    }
    temp->next = temp_head->next;
    temp_head->next->prev = temp;
    temp->prev = temp_head;
    temp_head->next = temp;
}

// Delete node from any possition
void Doubly_delete(Node *&head, int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        head->next->prev=NULL;
        head = temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int cnt = 2;
    while (cnt < pos)
    {
        temp = temp->next;
        cnt++;
    }
    Node *current = temp->next;
    temp->next = current->next;
    current->next->prev = temp;
    current->next=NULL;
    current->prev=NULL;
    delete current;
}

// print doubly linked list all nodes
void Print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
*/

int main()
{

    /*
//SINGLY LINKED LIST

    // creating the head pointer
    Node *head = NULL;

    // create a new node
    Node *node1 = new Node(4);
    head = node1;
    Node *tail = head;
    Display(head);

    // Insert node at the head
    Insert_head(head, 3);
    Insert_head(head, 2);

    // Insert node at the tail
    // Insert_tail(head, 5);//if we pass the head pointer
    Insert_tail(tail, 5);
    Insert_tail(tail, 8);
    Display(head);

    // Insert node at any possition
    Insert_mid(head, 5, 18);
    Display(head);

    // delete node at any possition
    Delete_node(head, 5);
    Delete_node(head, 1);
    Display(head);
    */

    /*
     // DOUBLY LINKED LIST
     Node *node1 = new Node(8);
     Node *head = node1;
     // Insert head
     Doubly_insert_head(head, 13);
     Doubly_insert_head(head, 3);

     // Insert tail
     Doubly_insert_tail(head, 123);
     Doubly_insert_tail(head, 33);

     // Insert mid
     Doubly_insert_mid(head, 64, 1);
     Doubly_insert_mid(head, 9, 3);
     Print(head);

     // Delete node from any possitions
     Doubly_delete(head, 2);
     Doubly_delete(head, 1);
     Print(head);
    */

    return 0;
}