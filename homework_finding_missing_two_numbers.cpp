#include <iostream>
#include <climits>
using namespace std;

int main(){
int exp1=0,ecp2=0;
int no;
int l=0;
int arr[10000],a[10000];
int n,k;
cin>>n;
for(int i=1;i<n-1;i++){
	cin>>a[i];
}
for(int i=1;i<=n;i++){
	int t;
	k=0;
	for( t=1;a[t]!='\0';++t){
		if ((a[t]^i)==0){
			k=0;
			break;
		}else{
			k++;
		}
	}
	if(k!=0){
		arr[l]=i;
		l++;
	}


	
}
for(int g=0;g<l;++g){
	cout<<arr[g]<<" ";
}



return 0;

}
