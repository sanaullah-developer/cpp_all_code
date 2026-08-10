#include <iostream>
using namespace std;
int main()
{
	
	int startnum = 0;
	int endnum = 0;
	int i = 2;
	bool assumption = true;
	int count = 1; //To Count Prime Number in a Range

	//Asking For Range
	cout<<"Start Number : ";
	cin>>startnum;
	cout<<"End Number : ";
	cin>>endnum;
	
	
	//LOGIC:- Ensure that startnum is less than endnum 
	while (startnum >= endnum)
	{
		cout<<"Input Valid Start & End Number"<<endl;
		cout<<"Start Number : ";
		cin>>startnum;
		cout<<"End Number : ";
		cin>>endnum;
	}
	
	
	//REASON:- 1 is Not Prime Number
	if (startnum == 1)
	{
		startnum++;
	}
	
	
	//REASON:- Intention is to Enter the Loop for which the testexpression must be true
	while (startnum <= endnum)
	{
		
		//REASON:- As we have to check whether number is prime we must enter this loop as well
		while (startnum > i)
		{
			
			//REASON:- I check if startnum(assume startnum = 10), when divided by i(assume i=2) give remainder 0 then (i) assumption become 
			//false & (ii) break the loop. Q1. Why Break LOOP? Ans: We know that Prime Number is divisible on itself only hence if it
			//divided by another number(less than startnum) and give remainder 0 it means it is not Prime. 
			if (startnum % i == 0)
			{
				assumption = false;
				break;
			}
			
			
			//REASON:- When If becomes false(0) automatically else becomes true
			else
			{
				assumption = true;
			}
			
			
			//REASON:- The reason for i++ is to ensure that the (i) exectue 9 time for instance if startnum is 10 OR 11 times if startnum is 12
			i++;
		}
		
		
		//REASON:- If assumption is true means assumption in previous iteration didn't became false then the Number is Prime
		if (assumption == true)
		{
			cout<<count<<". "<<startnum<<" : Prime Number"<<endl;
			count++;
		}
		
		
		//REASON:- i became 2 after each loop also the startnum is +1 after each loop and this loop will execute till it is equal to endnum
		startnum++;
		i = 2;
	}

	return 0;	
}