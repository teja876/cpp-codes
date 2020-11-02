#include<iostream>
using namespace std;

struct node 
{
    int data;
    struct node*  next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
struct linkedlist
{
    node* head;
    linkedlist()
    {
        head = NULL;
    }
    void push(int data)
    {
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
    void pop()
    {
        cout<< head->data << endl;
        head = head->next;
    }
};

int main()
{
    int n;
    cin >> n;
    linkedlist ll;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        ll.push(x);
    }
}