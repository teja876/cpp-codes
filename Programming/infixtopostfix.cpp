#include<iostream>
using namespace std;
struct node
{
    char data;
    struct node* next;
    node(char data)
    {
        this->data = data;
        next = NULL;
    }
};
struct stack
{
    node* head;
    void stack()
    {
        head = NULL;
    }
    void push(char data)
    {
        node* temp = new node(data);
        temp->next = head;
        head = temp;
    }
    char pop()
    {
        char x;
        x = head->data;
        head = head->next;
        return x;
    }
    int isempty()
    {
        if(head == NULL)
        {
            return 1;
        }
        return 0;
    }
    char peek()
    {
        return head->data;
    }
    int prec(char ch)
    {
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;            
    }
    return -1;
    }

};

void intopo(string exp)
{
    string nexp;
    for(int i  = 0; i < exp.length(); i++)
    {
        if ((exp[i] >= 'a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='Z'))
        {
            nexp[k] = exp[i];
            k++;
        }
        
    }
}
int main()
{
    string exp;
    cin >> exp;
    intopo(exp);
}