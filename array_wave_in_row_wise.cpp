#include <iostream>
#include <climits>
using namespace std;

int main(){
	int arr[100][100];
	int m,n;
	cin>>m>>n;
	for(int y=0;y<m;++y)
	{
		for(int u=0;u<n;++u)
		{
			cin>>arr[y][u];
		}
	}
	int k=0;
	while(k<m){
		if(k%2==0)
		{

			for(int h=0;h<n;++h){
				cout<<arr[k][h]<<","<<" ";
			}
		}else{
			for(int j=n-1;j>=0;--j){
				cout<<arr[k][j]<<","<<" ";
			}
		}
		k++;

	}cout<<"END";

	return 0;


}
