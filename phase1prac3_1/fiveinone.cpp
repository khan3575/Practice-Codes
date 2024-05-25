#include<bits/stdc++.h>
using namespace std;
int primes(int arr[],int n)
{
	int cnt=0;
	for(int i=0; i<n; i++)
	{
		int temp= arr[i];
		bool ok=true;
		if(temp==1)
		{
			ok=false;
		}
		else{
			for(int j=2; j*j<= temp; j++)
			{
				if(temp%j==0)
				{
					ok=false;
				}
			}

		}
		if(ok)
		{
			cnt++;
		}
	}
	return cnt;
}
int palindrome(int arr[], int n)
{
	int cnt=0;
	for(int i=0; i<n;i++  )
	{
		int temp=arr[i];
		int rev=0;
		while(temp)
		{
			rev*=10;
			rev+= temp%10;
			temp/=10;
		}
		if (rev==arr[i])
		{
			cnt++;
		}
	}
	return cnt;
}

int maxDiv(int arr[],int n)
{
	int mxdiv=0, num=-1;
	for(int i=0; i < n; i++)
	{
		int numOfdiv=0;
		int temp=arr[i];
		for(int j=1; j*j<=arr[i]; j++)
		{
			if(temp%j==0)
			{
				if(j*j==temp)
				{
					numOfdiv++;
				}
				else{
					numOfdiv+=2;
				}
			}
		}
		if(numOfdiv>=mxdiv)
		{
			mxdiv=numOfdiv;
			num= arr[i];
		}
	}
	return num;
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+n);
	cout<<"The maximum number : "<<arr[n-1]<<'\n';
	cout<<"The minimum number : "<<arr[0]<<'\n';
	cout<<"The number of prime numbers : "<<primes(arr, n)<<'\n';
	cout<<"The number of palindrome numbers : "<<palindrome(arr,n)<<'\n';
	cout<<"The number that has the maximum number of divisors : "<<maxDiv(arr, n)<<'\n';



}