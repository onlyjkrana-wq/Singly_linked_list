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
void fun(Node* &head, int value){
    Node* new_value = new Node(value);
    new_value->next = head;

    head =new_value;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    fun(head,40);

    while (head != NULL)
    {
        cout << head->val <<" ";
        head = head->next;
    }
    

    return 0;
}