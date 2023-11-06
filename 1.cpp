#include <bits/stdc++.h>
using namespace std;

int cnt = 0; 
void sum(){
    if(cnt==5) return;
    cout << "Het Joshi : "<<cnt<<endl;
    cnt++;
    sum();
}

int main()
{
    sum();
    return 0;
}

