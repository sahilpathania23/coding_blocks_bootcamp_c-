#include <iostream>
#include <climits>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int arr[100][100];
	for(int row=0;row<m;row++){
		for(int col=0;col<n;col++){
			cin>>arr[row][col];
		}
	}
	int sr=0,er=m-1,sc=0,ec=n-1;
	while(sr<=er and sc<=ec){
		for(int h=sc;h<=ec;++h){
			cout<<arr[sr][h]<<","<<" ";
		}sr++;
		for(int h=sr;h<=er;++h){
			cout<<arr[h][ec]<<","<<" ";
		}ec--;
		if(sr <er){
		for(int h=ec;h>=sc;--h){
			cout<<arr[er][h]<<","<<" ";
		}er--;}
		if(sc<ec){
		for(int h=er;h>=sr;--h){
			cout<<arr[h][sc]<<","<<" ";
		}sc++;}
	}
	cout<<"END";

	
return 0;

}
