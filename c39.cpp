#include <iostream>
using namespace std;
int main()
{
	int arr[10]={10,20,30,40,50,60,70,80,90,100};
	int i,n,loc=-1;
	cout<<"enter the value to find";
	cin>>n;
	for(i=0;i<10;i++)
	if(arr[i]==n)
	loc=1;
	if(arr[i]==-1)
	cout<<"the value does not exist";
	else
	cout<<"value found at index"<<loc<<endl;
	return 0;
	
}