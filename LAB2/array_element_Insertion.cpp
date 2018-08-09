//
// Created by Anant Agarwal on 8/9/18.
//

#include "iostream"

using namespace std;

class array
{
    int arr[100];
public:    void publish()
    {
        for (int i = 0; i < 100 ; ++i) {
            arr[i]= i;
        }
    }

public:bool insert(int pos,int val)
    {
        int temp = arr[pos-1];

        for (int i = pos; i < 100;) {
            arr[i] = temp;
             temp = arr[i+1];
            arr[i+1] = arr[i];
            i++;


        }
        arr[pos]=val;
    }
void print()
{
    for (int i = 0; i <20 ; ++i) {
        cout<<arr[i]<<" ";

    }
}

public:
    array(){
        int array[100];
        publish();
    }

};

int main()
{

    array a1;
    a1.print();
    a1.insert(5,444);
    cout<<""<<endl;
    a1.print();
    return 0;
}