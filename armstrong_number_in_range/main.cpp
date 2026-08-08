#include <iostream>
#include <cmath>
using namespace std;
void armstrong(int);

//  This program is for identifying armstrong number in a given range 
//  ARMSTRONG NUMBER: these are number whose sum of power of digits is equal to that number 
//  Note: the power should be according to these number if there are three digits in a number then 
//        power will be three and vice versa.
int main() 
{
	int start,end;
	cout<<"Enter Start Point : ";
	cin>>start;
	cout<<"Enter End   Point : ";
	cin>>end;
	for(int i=start;i<end;i++)
	{
		armstrong(i);
	}
	return 0;
}


void armstrong(int num)
{
	int original=num;
	int num2=num;
	int power=0;
	int sum=0;
	while(num>0)
	{
		num/=10;
		power++;
	}
	
	while(original>0)
	{
		sum+=pow(original%10,power);
		original/=10;
	}
	
	if(sum==num2)
	{
		cout<<sum<<endl;
	}

}