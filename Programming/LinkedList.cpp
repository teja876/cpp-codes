#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
struct linkedlist
{
    node *head, *q;
    linkedlist()
    {
        head = NULL;
    }
    void push(int data)
    {
        node *temp = new node(data);
        if(head == NULL)
        {
            head = temp;
        }
        q->next = temp;
        q = temp;
    }
    
    void print()
    {
        node *temp = head;
        while(temp != NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

    void reverse()
    {
        node *temp = head;
        node *prev = head;
        node *curr = head;
        node *mainh = head;
        while(temp != NULL)
        {
            curr = temp;
            head = curr;
            temp = curr->next;
            if(curr == mainh)
            {
                curr->next = NULL;
            }
            else
            {
                curr->next = prev;
            }
            
            prev = curr;
        }
    }
};

main()
{
    linkedlist lk;
    int n, number;
    cout << "Print no of elements"<<endl;
    cin >>n;
    for(int i =0; i<n; i++)
    {
        cin>>number;
        lk.push(number);
    }
    // lk.print();
    lk.reverse();
    lk.print();
}
