#include <iostream>

using namespace std;

int main()
{
    int data;
int num;
int max=0, min = 1000000;

cout<<"Enter the number of intergers"<<endl;
cin>>num;

for (int count = 0; count < num; ++count)
{
    cout<<"Please enter number #" << count <<endl;
    cin>>data;

    if (data<min)
    {
        min = data;
    }
    if (data>max)
    {
        max = data;
    }
}

cout<<"The smallest number:"<<min<<endl;
cout<<"The largest number:"<<max<<endl;
}
