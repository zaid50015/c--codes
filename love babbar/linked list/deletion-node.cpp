#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int d;
    Node *next;
    Node(int d)
    {
        this->d = d;
        this->next = NULL;
    }

    /// DELETING A NODE

    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};

void insertfromtail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertfromhead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insertion using positonsa
void insertposition(Node *&tail, Node *&head, int pos, int value)
{
    if (pos == 1)
    {
        insertfromhead(head, value);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertfromtail(tail, value);
    }
    Node *insertnode = new Node(value);
    insertnode->next = temp->next;
    temp->next = insertnode;
}

/// insertion using values;
void valueinsertion(Node *&head, Node *&tail, int value, int valueToBeInserted)
{
    Node *temp = head;
    if (temp->d == value)
    {
        insertfromhead(head, valueToBeInserted);
        return;
    }
    int pos = 0;
    while ((temp->next->d) != value)
    {
        pos++;
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        insertfromtail(tail, valueToBeInserted);
        return;
    }
    Node *insertnode = new Node(valueToBeInserted);
    insertnode->next = temp->next;
    temp->next = insertnode;
}

// DELETING   A NODE

void deletion(Node *&head, Node *&tail, int pos)
{

    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node*currnode = head;
        Node*prevnode = NULL;
        int cnt = 1;
        while (cnt < pos)
        {
            prevnode = currnode;
            currnode = currnode->next;
            cnt++;
        }
        if (currnode->next == NULL)
        {
            tail = prevnode;
        }
        prevnode->next = currnode->next;
        currnode->next = NULL;
        delete currnode;
    }
}

///
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->d << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(10);
    Node *tail = node1;
    insertfromtail(tail, 20);
    insertfromtail(tail, 30);
    Node *head = node1;
    insertposition(tail, head, 3, 40);
    insertposition(tail, head, 1, 0);
    print(head);
    valueinsertion(head, tail, 10, 5);
    cout << endl
         << endl;
    print(head);
    valueinsertion(head, tail, 0, -1);
    cout << endl;
    print(head);

    // Deletion in node

    deletion(head, tail, 1);
    deletion(head, tail, 4);

    deletion(head, tail, 5);

    print(head);

    cout << "Value at head = " << head->d << endl;
    cout << "Value at tail = " << tail->d << endl;
}