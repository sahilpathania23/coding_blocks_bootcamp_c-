#include <iostream>
#include <climits>
using namespace std;

int main(){
	int n;
	int arr[100][100];
	cin>>n;
	int rows=n,cols=n;
	for(int i=0;i<rows;++i){
		for (int j = 0; j < cols; ++j)
		{
			cin>>arr[i][j];
		}
	}
	for(int h=0;h<rows;++h){
		for(int k=h;k<cols;++k){
			swap(arr[h][k],arr[k][h]);
		}
	}
	for(int i=0;i<rows;++i){
		for (int j = 0; j < cols; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
