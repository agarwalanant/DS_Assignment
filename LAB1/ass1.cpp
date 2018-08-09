#include<iostream>
#include<string>

using namespace std;

class student
{
	public:
		string name;
		string branch;
		int rollno=0;
		int CGPA=0;
};
void swap(student *first, student *second)
{
	student temp = *first;
	*first = *second;
	*second = temp;
}
class data
{
	public:
		
		student stud[50];
		int length = 0;
		
		
//display
		
void display()
{
	for(int i = 0;i<length;i++)
	{
        cout<<"Name: "<<stud[i].name<<endl;
        cout<<"Roll no: "<<stud[i].rollno<<endl;
        cout<<"CGPA: "<<stud[i].CGPA<<endl;
        cout<<"Branch : "<<stud[i].branch<<endl;
		
	}
}

//sorting

void sort()
{
	for (int i = 0; i < length; i++)
	{
		int j =i;
		while(stud[j].rollno<stud[j-1].rollno & j>0)

			swap(&stud[j],&stud[j-1]);
		j--;
		}
	}


int binary(int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 

        if (stud[mid].rollno == x)
            return mid;
 

        if (stud[mid].rollno > x)
            return binary(l, mid - 1, x);
 

        return binary(mid + 1, r, x);
   }
 

   return -1;
}

int search(int s)
{
    int index = binary(0,length,s);
    return index;
}

void publish()
{
    int q=1,i =0;
	while(true)
	{
		cout<<"Enter Name";
		cin>>stud[i].name;
		cout<<"Enter Rollno";
		cin>>stud[i].rollno;
		cout<<"Enter CGPA";
		cin>>stud[i].CGPA;
		cout<<"Emter Branch";
		cin>>stud[i].branch;
		length++;
		++i;
		cout<<"0 to continue and 1 to quit";
		cin>>q;

		if(q==1)
		    break;
	}
}

void print(int index)
{
    cout<<"Name: "<<stud[index].name<<endl;
    cout<<"Roll no: "<<stud[index].rollno<<endl;
    cout<<"CGPA: "<<stud[index].CGPA<<endl;
}

};




int main()
{
	data c1;
	c1.publish();
	c1.sort();
    c1.display();
    int index = c1.search(5);
    cout<<"SEARCH RESULT"<<endl;
    if(index == -1)
    {
        cout<<"Not Found";
    }
    else
        c1.print(index);
	return 0;
}
