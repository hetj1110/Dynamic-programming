// Print From from 1 to n using recursion (By Backtraking)

#include <bits/stdc++.h>
using namespace std;

int count(int i,int n){
    if(i > n){
        return 0;
    }
    count(i+1,n);
    cout << i <<endl;
}


int main()
{
    int n = 5;
    cout<<"N = "<<n<< endl;
    count(1,n);
}
