#include <bits/stdc++.h>
using namespace std;

// Node class //
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

// Insart_at_tail function //
void Insart_at_tail(Node *&head, Node *&tail, int value)
{
    Node *new_Node = new Node(value);
    if (head == NULL)
    {
        head = new_Node;
        tail = new_Node;
        return;
    }
    tail->next = new_Node;
    tail = new_Node;
}
// Delete function //
void Delete(Node* &head)
{
    
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
// Print function //
void print(Node* &head)
{
    Node* &temp = head;
    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    print(temp->next);
}
// Main function //
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        Insart_at_tail(head, tail, value);
    }

    Delete(head);
    print(head);
    
    return 0;
}