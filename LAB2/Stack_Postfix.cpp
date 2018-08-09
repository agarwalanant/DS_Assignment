//
// Created by Anant Agarwal on 8/9/18.
//

#include "iostream"
#include "vector"

using namespace std;

class stack
{
public:
    vector<char> vec;


    char pop()
    {
        char data = vec.at(vec.size()-1);
         vec.pop_back();
         //print();
        return data;
    }

    void push(char val)
    {
        vec.push_back(val);
        print();
    }

    void print(){
        for (int i = 0; i < vec.size(); ++i) {
            cout<<vec.at(i)<<" ";
        }
        cout<<""<<endl;
    }

public:stack()
{
        vector<char> vec;
}

int postfix(stack s){
        stack data;
        char pop = s.pop();
        if(isdigit(pop))
        {
            data.push(pop);
        }
        else {
            int val1 = static_cast<int> (s.pop());
            int val2 = static_cast<int> (s.pop());
            switch(pop)
            {
                case '+':data.push(static_cast<char> (val1+val2)); break;
                case '-':data.push(static_cast<char> (val1-val2)); break;
                case '*':data.push(static_cast<char> (val1*val2)); break;
                case '/':data.push(static_cast<char> (val1/val2)); break;
            }

        }
    }


};

int main()
{
    stack s1;
    s1.push('a');
    s1.push('4');
    cout<<s1.pop();

    return 0;
}