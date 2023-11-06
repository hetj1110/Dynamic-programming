// Print Liniariry from n to 1 using recursion

#include <bits/stdc++.h>
using namespace std;

int count_1(int i,int n){
    if(i > n){
        return 0;
    }
    cout << n+1-i <<endl;
    count_1(i+1,n);
}

// diffrent way
int count_2(int i,int n){
    if(i < 1){
        return 0;
    }
    cout << i <<endl;
    count_2(i-1,n);
}

int main()
{
    int n = 5;
    cout<<"N = "<<n<< endl;
    cout<<"-------------------------From count_1------------------------"<<endl;
    count_1(1,n);
    cout<<"-------------------------From count_2------------------------"<<endl;
    count_2(n,n);
    return 0;
}
