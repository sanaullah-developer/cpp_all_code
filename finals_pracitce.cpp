#include <iostream>
using namespace std;

//User-Defined Data Type/- Structure having Three Integers
struct STRUCTURE
{
	int rollno;
	int mark[5];
	int Grade;
};

//Global Variable
int sum[2] = {0};


//Functions in Which Array is passed through refrence i.e Actual Elements of the array are being modified
void getinfo(STRUCTURE* Students);

//Functions in Which Array is passed through value i.e A copy of the Modified Array is passed to the function
void display (STRUCTURE Student[]);


//Main Functions
int main()
{
	//An Instance of STRUCUTURE datatype has been created
	STRUCTURE Students[2];
	
	//Students array varibale has been passed to getinfo Function
	getinfo (Students);
	
	//Students array variable after modification from function getinfo has been passed to function display
	display (Students);
	
}

//Get info Function, In this function The data will be collected
void getinfo(STRUCTURE* Students)
{
	
	//Created a pointer of data type STRUCUTRE, REASON:- pointer will only store the data of which it is itself i-e int pointer store int value
	//So in this case STRUCUTRE pointer has been created which stores STRUCTURE data type variable named Students
	STRUCTURE *ptr = Students;
	
	//Using For-Loop since we have an array of Students variable of STRUCUTURE Data type
	for (int i = 0; i < 2; i++)
	{
		//Roll No Prompt and data is collected Through Pointer
		cout << "Enter Roll No : ";
		cin >> ptr->rollno;
		
		//Since the STRUCUTURE data type had an array and we have not yet studied how to access the array of structure through pointer
		//Hence used basic for loop.
		for (int b = 0; b < 5; b++)
		{
			cout << "Mark of Subject " << b+1 << " : ";
			cin >> Students[i].mark[b];
			
			//Global Variable stores Total Marks of each Student
			sum[i] += Students[i].mark[b]; 
		}
		
		//GRADE = CLASS
		cout << "Grade : ";
		cin >> ptr->Grade;
		cout << endl;
		
		//We said to Pointer to jump to another memory location.
		ptr++;
	}
}

//DISPLAY FUNCTION -/ PURPOSE:- Just display
void display (STRUCTURE Student[])
{
	for (int i = 0; i < 2; i++)
	{
		cout << "Roll No : " << Student[i].rollno;
		cout << "\nGrade : " << Student[i].Grade;
		//Observe here we are displaying sum due to globalness we can access it in any function. 
		cout << "\nTotal Marks : " << sum[i];
		cout << endl << endl;
 	}
}