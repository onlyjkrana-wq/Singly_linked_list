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

void cin_Function(Node *&head, Node *&tail, int val)
{
    Node *NewValue = new Node(val);
    if (head == NULL)
    {
        head = NewValue;
        tail = NewValue;
        return;
    }
    tail->next = NewValue;
    tail = NewValue;
}

void Print_Function(Node *&head)
{
    Node *tamp = head;

    while (tamp != NULL)
    {
        cout << tamp->val << " ";
        tamp = tamp->next;
    }
}

void Sort_LInklist(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val > j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        cin_Function(head, tail, val);
    }
    Sort_LInklist(head);
    Print_Function(head);
    return 0;
}