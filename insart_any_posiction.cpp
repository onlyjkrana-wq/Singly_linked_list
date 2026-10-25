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
void fun(Node* &a,Node* &b, int value){
    Node* new_value = new Node(value);
    a->next = new_value;
    new_value->next = b;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;
    fun(a,b,40);
    
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val <<" ";
        temp = temp->next;
    }
    

    return 0;
}