#include<bits/stdc++.h>
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
void cin_Functoin(Node *&head, Node *&Tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;
};
void print(Node *&head)
{
    Node *temp = head;

    if (temp == NULL)
    {
        return;
    }
    cout << temp->val << " ";
    print(temp->next);
}
void Delete_At_Tail(Node *&Tail, Node *&head)
{
    Node *Temp = head;
    while (Temp->next != Tail)
    {
        Temp = Temp->next;
    }
    Temp->next = NULL;
    delete Tail;
    Tail = Temp;
}
int main()
{
    Node *head = NULL;
    Node *Tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        cin_Functoin(head, Tail, val);
    }

    Delete_At_Tail(Tail,head);
    print(head);
    
    return 0;
}