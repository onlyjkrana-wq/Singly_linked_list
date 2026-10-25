#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insart_Head(Node *&head, int value)
{
    Node* newnode = new Node(value);
    newnode->next = head;

    head = newnode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    insart_Head(head,500);

    while (head != NULL)
    {
        cout << head->val << endl; 
        head = head->next;
    }
    

    return 0;
}