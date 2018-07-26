#include<iostream>
#include<String>

using namespace std;

class student
{
	public:
		string name;
		string branch;
		int rollno;
		int CGPA;
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
		
		student stud[];
		student search();
		void publish();
		
//display
		
void display(student stud[])
{
	for(int i = 0;i<=50;i++)
	{
		cout<<stud[i].name;
		cout<<stud[i].branch;
		cout<<stud[i].rollno;
		cout<<stud[i].CGPA;
		cout<<""<<endl;
		
	}
}

//sorting

void sort(student data[],int length)
{
	for (int i = 0; i < length; i++)
	{
		int j =i;
		while(data[j].rollno<data[j-1].rollno)
		{
			swap(&data[j],&data[j-1]);
			j--;
		}
	}
}

student search(student arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 

        if (arr[mid].rollno == x)  
            return arr[mid];
 

        if (arr[mid].rollno > x) 
            return search(arr, l, mid-1, x);
 

        return search(arr, mid+1, r, x);
   }
 

   return -1;
}

};




int main()
{
	
	return 0;
}
