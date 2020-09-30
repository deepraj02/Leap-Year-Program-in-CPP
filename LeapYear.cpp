//.....................................Without Nested If..............................................

#include <iostream>
using namespace std;

int main()
{	
	int year{};
	cout<<"Enter The Year"<<endl;
	cin>>year;


	if((year%4==0 && year%100!=0) ||(year%400==0)){
		cout<<"The Entered Year is a Leap Year"<<endl;
	}
	else{
		cout<<"The Entered Year is Not a Leap Year"<<endl;
	}
	return 0;
}




//.....................................................With Nested IF........................................................................

#include<iostream>
using namespace std;

int main()
{
	int year{};
	cout<<"Enter the Year:--";
	cin>>year;

	if(year%4==0){
		if(year%100==0){
			if(year%400==0){
				cout<<"The Entered Year is a Leap Year"<<endl;
			}
			else{
				cout<<"The Entered Year is Not a Leap Year"<<endl;
			}
		}
		else{
			cout<<"The Entered Year is a Leap Year"<<endl;
		}
		
	}
	else{
		cout<<"The Entered Year is Not a Leap Year"<<endl;
	}


	return 0;
}		
