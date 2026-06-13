#include<bits/stdc++.h>
using namespace std;

void replica(int i,int n,string m){
        if(i>n){
            return ;
        }
        cout<<m<<endl;
        replica(i+1,n,m);
}
int main(){
    int n=5;
    string m="surjadeep";
    replica(1,n,m);
}