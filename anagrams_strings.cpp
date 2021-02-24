#include <iostream>
#include <climits>
using namespace std;

int result(char a[],char t[]){
	int f=0;
	int c[26]={0};
	int c1[26]={0};

	for(int y=0;a[y]!='\0';++y){
 			c[a[y]-'a']++;
	}
	for(int l=0;t[l]!='\0';++l){
 			c1[t[l]-'a']++;

	}
	for(int h=0;h<26;++h){
		f=f+abs(c[h]-c1[h]);
		
	}
	return f;
}
int main(){
	int g,k;
	cin>>g;
	int finalresult[100000];
	for (int i = 0; i < g; ++i)
	{
		char sonu[100000];
		cin>>sonu;
		char titu[100000];
		
		cin>>titu;
		k=result(sonu,titu);
		finalresult[i]=k;
	}
	for(int o=0;o<g;o++){
		cout<<finalresult[o]<<endl;
	}
	return 0;
}


