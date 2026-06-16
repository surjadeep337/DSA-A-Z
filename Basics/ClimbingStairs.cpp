#include<bits/stdc++.h>
using namespace std;
int climbStairs(int n){
    if(n<=2){
        return n;
    }
    return climbStairs(n-1)+climbStairs(n-2);

}
int main(){
    int n=4;
    climbStairs(n);
    cout<<climbStairs(n);
}