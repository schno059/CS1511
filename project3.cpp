#include <iostream>
using namespace std;

int crud(int lbs, int days);

int main()
{
	char answer='n';
	int lbs=0, days=0;//declare and instantiate variables
	cout<<"\n\nWelcome to the green crud calculator"<<endl;
	cout<<"where you can predict the future mass of your green crud population";//introduction 
	do
	{
		cout<<"\nWhat is the inital mass of the population in pounds?"<<endl;
		cin>>lbs;
		cout<<"\nAnd how many days will you allow it to grow?"<<endl;//inputs
		cin>>days;
		if((lbs>=0)&&(days>=0))
		{
			cout<<"\nAfter a span of "<<days<<" days, your "<<lbs<<" lb crud population"<<endl;//context
			cout<<"will grow to a mass of "<<crud(lbs,days)<<" lbs"<<endl;//function call
		}
		else
			cout<<"Invalid data. Inputs must be positive integers"<<endl;
		cout<<"Would you like to calculate another scenario?"<<endl;
		cin>>answer;//repetition check
	}while(toupper(answer)=='Y');
}

int crud(int lbs, int days)//function to calculate growth when provided inputs
{
	int f1=lbs,f2=lbs,fsum=lbs,i;//declare variables
	for(i=10; i<=days; i+=5)
	{
		fsum=f1+f2;//recursive formula to always add up previous two terms
		f1=f2;
		f2=fsum;
	}
	return fsum;//returns calculated result. Note: if days<10, then mass is unchanged
}
