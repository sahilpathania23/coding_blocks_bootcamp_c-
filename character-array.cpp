//
#include <iostream>
#include <climits>
#include <math.h>
using namespace std;
int main(){
	char a[100];
	char ch;
	int i=0;
	ch=cin.get();
	while(ch!="\n"){
		a[i]=ch;
		i++;
		ch=cin.get();

	}
	a[i]="\0";
	cout<<a<<endl;
	//2nd way of taking input without whitw=espaces
	//cin insert NULL at the end on its own
	cin>>a;
	cout<<a<<endl;

	return 0;
}