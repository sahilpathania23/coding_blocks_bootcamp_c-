#include <iostream>
#include <climits>
using namespace std;

int main(){
	int r,c;
	int arr[100][100];
	cin>>r>>c;
	for(int y=0;y<r;++y){
		for(int w=0;w<c;++w){
			cin>>arr[y][w];
		}
	}
	int sr=0,er=r-1,sc=0,ec=c-1;
	while(sr<=er and sc<=ec){
	for(int h=sr;h<=er;++h){
		cout<<arr[h][sc]<<","<<" ";
	}sc++;
	for(int h=sc;h<=ec;++h){
		cout<<arr[er][h]<<","<<" ";

	}er--;
	for(int h=er;h>=sr;--h){
		cout<<arr[h][ec]<<","<<" ";
	}ec--;
	for(int h=ec;h>sr;--h){
		cout<<arr[sr][h]<<","<<" ";			
	}sr++;
}
cout<<"END";
return 0;

}
