#include<iostream>
using namespace std;

int main()
{
	float n,m=1,i=1;
	cout<<"Enter the value : ";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		m=m*i;
	}
	
	cout<<"The result is : "<<m;
	
	return 0;
}
