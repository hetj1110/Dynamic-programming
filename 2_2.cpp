// Print Liniariry from 1 to n using recursion

#include <bits/stdc++.h>
using namespace std;

int name(int i,int n){
    if(i > n){
        return 0;
    }
    cout << "Het Joshi : "<< i <<endl;
    name(i+1,n);
}

int main()
{
    int n = 5;
    cout<<"N = "<<n<< endl;
    name(1,n);
    return 0;
}
