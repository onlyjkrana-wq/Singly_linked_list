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
void print(Node* tamp)
{
    if (tamp == NULL)
    {
        return;
    }

    print(tamp->next);
    cout << tamp->val <<" ";
}
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
    Node *tamp = head;
    print(tamp);

    return 0;
}