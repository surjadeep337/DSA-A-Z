#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

void pattern8(int n){
    for(int i=n-1;i>=0;i--){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

void pattern9(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=n-2;i>=0;i--){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

void pattern10(int n){

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern11(int n){

    for(int i=0;i<n;i++){

        int start;

        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }

        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }

        cout<<endl;
    }
}

void pattern12(int n){

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
            cout<<j;
        }

        cout<<endl;
    }
}

void pattern13(int n){

    int num=1;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }

        cout<<endl;
    }
}

void pattern14(int n){

    for(int i=0;i<n;i++){

        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }

        cout<<endl;
    }
}

void pattern15(int n){

    for(int i=n;i>=1;i--){

        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }

        cout<<endl;
    }
}

void pattern16(int n){

    for(int i=0;i<n;i++){

        char ch='A'+i;

        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }

        cout<<endl;
    }
}

void pattern17(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        char ch='A';

        for(int j=0;j<2*i+1;j++){

            cout<<ch;

            if(j<i){
                ch++;
            }
            else{
                ch--;
            }
        }

        cout<<endl;
    }
}

void pattern18(int n){

    for(int i=0;i<n;i++){

        for(char ch='A'+n-i-1;ch<='A'+n-1;ch++){
            cout<<ch<<" ";
        }

        cout<<endl;
    }
}

void pattern19(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=n-1;i>=0;i--){

        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        for(int j=0;j<2*i;j++){
            cout<<" ";
        }

        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

void pattern20(int n){

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=n-1;i>=1;i--){

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}

void pattern21(int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){

            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }

        cout<<endl;
    }
}

void pattern22(int n){

    for(int i=0;i<2*n-1;i++){

        for(int j=0;j<2*n-1;j++){

            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;

            int mini=min(min(top,bottom),min(left,right));

            cout<<n-mini<<" ";
        }

        cout<<endl;
    }
}

int main(){

    int n;
    cin>>n;

    cout<<"Pattern 1"<<endl;
    pattern1(n);

    cout<<endl<<"Pattern 2"<<endl;
    pattern2(n);

    cout<<endl<<"Pattern 3"<<endl;
    pattern3(n);

    cout<<endl<<"Pattern 4"<<endl;
    pattern4(n);

    cout<<endl<<"Pattern 5"<<endl;
    pattern5(n);

    cout<<endl<<"Pattern 6"<<endl;
    pattern6(n);

    cout<<endl<<"Pattern 7"<<endl;
    pattern7(n);

    cout<<endl<<"Pattern 8"<<endl;
    pattern8(n);

    cout<<endl<<"Pattern 9"<<endl;
    pattern9(n);

    cout<<endl<<"Pattern 10"<<endl;
    pattern10(n);

    cout<<endl<<"Pattern 11"<<endl;
    pattern11(n);

    cout<<endl<<"Pattern 12"<<endl;
    pattern12(n);

    cout<<endl<<"Pattern 13"<<endl;
    pattern13(n);

    cout<<endl<<"Pattern 14"<<endl;
    pattern14(n);

    cout<<endl<<"Pattern 15"<<endl;
    pattern15(n);

    cout<<endl<<"Pattern 16"<<endl;
    pattern16(n);

    cout<<endl<<"Pattern 17"<<endl;
    pattern17(n);

    cout<<endl<<"Pattern 18"<<endl;
    pattern18(n);

    cout<<endl<<"Pattern 19"<<endl;
    pattern19(n);

    cout<<endl<<"Pattern 20"<<endl;
    pattern20(n);

    cout<<endl<<"Pattern 21"<<endl;
    pattern21(n);

    cout<<endl<<"Pattern 22"<<endl;
    pattern22(n);

}