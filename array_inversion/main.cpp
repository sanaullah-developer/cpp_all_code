#include <iostream>
using namespace std;

int main() {
		
	int size;
	
	cout<<"Enter the size of array : ";
	cin>>size;
	
	int num[size];
	int temp[size];
	int right;
	int left;
	
	
	for(int i=0 ; i<size ; i++)
	{
		cout<<"Enter Number "<<i+1<<" : ";
		cin>>num[i];
	}
	
	for(int i=0 ; i<size ; i++)
	{
		temp[i]=num[i];
	}
	
	right=size-1;
	left=0;
	while(left<size)
	{
		num[left]=temp[right];
		right--;
		left++;
	}
		cout<<"\n\nInverted Array : \n"<<endl;
	for(int i=0 ; i<size ; i++)
	{
		cout<<"Inverted Number : "<<num[i]<<"\n";
	}

	
	return 0;
}