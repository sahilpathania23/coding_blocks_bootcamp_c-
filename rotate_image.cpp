#include <iostream>
#include <climits>
using namespace std;

int main(){
	int m;
	int arr[100][100];
	cin>>m;
	for(int h=0;h<m;++h){
		for(int y=0;y<m;++y){
			cin>>arr[h][y];
		}
	}
	for(int k=m-1;k>=0;--k){
		for(int h=0;h<m;h++){
			cout<<arr[h][k]<<" ";
		}cout<<endl;
	}
	return 0;

}
