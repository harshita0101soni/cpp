#include<iostream>
using namespace std;
int main()
{
	int arr[6],i ;
	for(i =0;i<=5;i++)
	{
		cout<<"\nenter integer =";
		cin>>arr[i];
	}
	int num = arr[0];
	int j,temp,x;
	for(i=0;i<=5;i++)
	{
		if(num>arr[i])
		{
			
			x = arr[i];
			for(j=i;j>=0;j--)
			{
				arr[j] =arr[j-1];
			}
			arr[0] = x;
		}
	}
	for(i=0;i<=5;i++)
	{
		cout<<"\n"<<i<<" "<<arr[i];
	}
	return 0;	
}


