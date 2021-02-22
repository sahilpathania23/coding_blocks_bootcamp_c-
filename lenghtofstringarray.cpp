#include <iostream>
#include <climits>
using namespace std;
int main(){
	char arr[1000];
	int count=0;
	int i=0;
	cin.getline(arr,1000);
	while(arr[i]!='\0'){
		count++;
		i++;
	}
	cout<<i;
	return 0;
}
