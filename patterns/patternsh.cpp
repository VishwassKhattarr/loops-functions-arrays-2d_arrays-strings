#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char startchar='A'+i-1;
            char ch=startchar+j-1;    
            cout<<ch;
            j++;
        }
        cout <<endl;
        i++;
    }
}