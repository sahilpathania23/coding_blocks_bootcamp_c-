#include <iostream>
#include <climits>
using namespace std;
void rt()
{
    char g ;
    cin>>g;
    int l=int(g);
    if(l>=97 && l<=122){
        l=l-26-6;
        cout<<char(l);
    }else if (l<=91 && l>=65)
    {
        l=l+26+6;
        cout<<char(l);
    }else{
        cout<<"Invalid";
    }
}
int main()
{   
    char g;
    cin>>g;
    int l=int(g);
    if(l>=97 && l<=122){
        cout<<"lowercase";
    }else if (l<=91 && l>=65)
    {
        cout<<"UPPERCASE";
    }else{
        cout<<"Invalid";    
    }

    return 0;
}