//
// Created by Anant Agarwal on 8/9/18.
//
#include "iostream"

using namespace std;



int postfix(char* s){

    char pop = s.pop();
    for (int i = 0; i < s.size(); ++i) {

    }
    if(isdigit(pop))
    {
        s.push(pop);
    }
    else {
        int val1 = static_cast<int> (s.pop());
        int val2 = static_cast<int> (s.pop());
        switch(pop)
        {
            case '+':s.push(static_cast<char> (val1+val2)); break;
            case '-':s.push(static_cast<char> (val1-val2)); break;
            case '*':s.push(static_cast<char> (val1*val2)); break;
            case '/':s.push(static_cast<char> (val1/val2)); break;
            default: cout<<"Check the value at"<<endl;
        }

    }

    return static_cast<int> (s.pop());
}
