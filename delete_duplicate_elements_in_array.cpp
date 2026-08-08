#include <iostream>
using namespace std;

int main() {
	int size;
	cout<<"Enter size of array : ";
	cin>>size;
	
	int array[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>array[i];
	}
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i!=j)
			{
			
				if(array[i]==array[j])
				{
				
					for(int k=0;k<size;k++)
					{
						
						if(k>=j)
						{
							array[k]=array[k+1];
						
						}
					}
					size-=1;
				}
			}
		}
		
	}
	
	for(int z=0;z<size;z++)
	{
		cout<<"\nthe values are : "<<array[z];
	}
	return 0;
}