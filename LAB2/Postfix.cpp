//
// Created by Anant Agarwal on 8/9/18.
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


bool stacks::push(char data)
{
    auto newtop = new Node;

    if (top == NULL)
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
//    cout<<newtop ->data<<endl;
//    cout<<"number of elements in stack "<<count<<endl;

    return true;
}

bool stacks::isEmpty()
{
    return static_cast<bool>(top == nullptr ? 1 : 0);
}


int postfix(string s) {

    stacks *data = new stacks[s.length()];

    for (int i = 0; i < s.length(); ++i) {

    cout<<"char at "<<i<<" "<< s.at(i)<<endl;
    if (isdigit(s.at(i))) {
        data->push(s.at(i)-'0');
    } else {
        int val1 = static_cast<int> (data->pop());
        int val2 = static_cast<int> (data->pop());
        cout<<"val1 "<<val1<<endl;
        cout<<"val2 "<<val2<<endl;
        switch (s.at(i)) {
            case '+':
                data->push(static_cast<char> (val2 + val1));
                break;
            case '-':
                data->push(static_cast<char> (val2 - val1));
                break;
            case '*':
                data->push(static_cast<char> (val2 * val1));
                break;
            case '/':
                cout<<data->push(static_cast<char> (val2 / val1));
                break;
            default:
                cout << "Check the value at" << endl;
        }

    }
}
    return static_cast<int> (data->pop());
}

int main()
{
    char exp[] = "37*82/+";
    cout<<postfix(exp)<<endl;

    return 0;
}
