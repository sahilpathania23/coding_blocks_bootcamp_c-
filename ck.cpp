//
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main(){
	
	int n,i,maxi=INT_MAX;
	cin>>n;
	int a[100000];
	for (int i = 0; i < n; ++i)
	
	{
		cin>>a[i];
		if (a[i]>maxi)
		{
			maxi=a[i];
		}
	}
	int *freq=new int[maxi+1];
	for(i=0;i<=maxi;++i){
		freq[i]=0;

	}
	for(i=0;i<n;i++){
		freq[a[i]]++;//in this i am incrementing the
		//value of freq array index 0 to the value
		//a[i]
	}
	for(i=0;i<=maxi;i++){
		while(freq[i]!=0){
			cout<<i<<" ";
			freq[i]--;
		}
	}

	return 0;
}