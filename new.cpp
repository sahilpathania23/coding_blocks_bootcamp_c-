#include <iostream>
#include <climits>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[2000];
	int a[3];
	for(int qw=0;qw<3;++qw){
		a[qw]=0;
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}for(int w=0;w<n;++w){
		if (arr[w]==0){
			a[0]++;

		}else if(arr[w]==1){
			a[1]++;
		}else{
			a[2]++;
		}
	}for(int l=0;l<3;++l){
		while(a[l]!=0){
			cout<<l<<endl;
			a[l]--;
		}
	}
	
        
	return 0;
}
