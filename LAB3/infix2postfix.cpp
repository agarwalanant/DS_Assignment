//
// Created by Anant Agarwal on 8/23/18.
//
#include "iostream"
#include "vector"

using namespace std;

class Node
{
public:

    char data;
    Node *next;
};

class stacks
{
public:
    Node *top= NULL;
    int count =0;
    char pop();
    bool push(char);
    bool isEmpty();

};

char stacks::pop()
{
    if(top == NULL)
    {
        cout<<"Empty stack"<<endl;
    }
    else
    {
        Node *old = top;

        top = top ->next;
        count--;
        char data = old -> data;
        delete(old);
        count--;
//        cout<<"Number of elements in stack "<< count<<endl;
        return data;


    }
}


bool stacks::push(char data) {
    auto newtop = new Node;

        newtop->data = data;
        newtop->next = top;
        top = newtop;
        count++;

}

string

int main()
{

    return 0;
}