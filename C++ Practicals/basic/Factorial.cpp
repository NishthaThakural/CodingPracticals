#include<iostream>
using namespace std;
int sum(int n)
{
	if(n==1)
	return(1);
	else
	return(n*sum(n-1));
}
int main()
{
	int n=5,total;
	
	total=sum(n);
	cout<<total;
}
