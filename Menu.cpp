#include<iostream>
using namespace std;

int main()
{
	int ch;
	char val;
	
	do
	{
	cout<<"Menu Card : "<<endl;
	cout<<"1. Coffee "<<endl<<"2. Tea "<<endl;
	cout<<" What would you like to have : ";
	cin>>ch;
	
		if(ch==1)
		{
			cout<<"Enjoy your Coffee !!!";
		}
		else if(ch==2)
		{
			cout<<"Enjoy your Tea !!!";
		}
		else
		{
			cout<<"This is not in our Menu card !!!"<<endl;
		}
		
		cout<<endl<<endl;
		cout<<"Do you want to continue  ?";
		cin>>val;
		
	}while(val=='y');



	return 0;


}
