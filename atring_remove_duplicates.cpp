#include <iostream>
#include <climits>
using namespace std;
void duplicate(char arr[])
{
	char k=arr[0];
	int h;
	for(h=0;arr[h]!='\0';h++){
		if (k!=arr[h]){
				cout<<k;
				k=arr[h];
		}
		

	}

	cout<<arr[h-1];
}

	

int main(){
	char arr[1000];
	cin>>arr;
	duplicate(arr);


	return 0;
}