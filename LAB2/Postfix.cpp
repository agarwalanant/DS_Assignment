//
// Created by Anant Agarwal on 8/9/18.
//
#include "iostream"
#include "vector"

using namespace std;

class Node
{
public:

    int data;
    Node *next;
};

class stacks
{
public:
    Node *top;
    int count =0;
    int pop();
    bool push(int);
    bool isEmpty();

};
int stacks::pop()
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
        int data = old -> data;
        delete(old);
        count--;
        cout<<"Number of elements in stack "<< count<<endl;
        return data;


    }
}


bool stacks::push(int data)
{
    auto newtop = new Node;

    if (top == nullptr)
    {
        newtop ->data = data;
        newtop ->next = top;
        top = newtop;
        count++;
    }
    else
    {
        newtop ->data= data;
        newtop-> next = top;
        top = newtop;
        count++;
    }
    cout<<newtop ->data<<endl;
    cout<<"number of elements in stack "<<count<<endl;

    return true;
}

bool stacks::isEmpty()
{
    return static_cast<bool>(top == nullptr ? 1 : 0);
}


int postfix(stacks s){

    char pop = s.pop();
    vector<char> data {};
    for (int i = 0; i < s.size(); ++i) {

    }
    if(isdigit(pop))
    {
        data.push_back(pop);
    }
    else {
        int val1 = static_cast<int> (s.pop_back());
        int val2 = static_cast<int> (s.pop_back());
        switch(pop)
        {
            case '+':data.push(static_cast<char> (val1+val2)); break;
            case '-':data.push(static_cast<char> (val1-val2)); break;
            case '*':data.push(static_cast<char> (val1*val2)); break;
            case '/':data.push(static_cast<char> (val1/val2)); break;
            default: cout<<"Check the value at"<<endl;
        }

    }

    return static_cast<int> (data.pop());
}

int main()
{
    char a[] {'1','2','+'};
    cout<<postfix(a)<<endl;

    return 0;
}
