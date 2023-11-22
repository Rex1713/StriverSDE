#include<bits/stdc++.h>
using namespace std;

void brutePrimeNumbers(int n)
{
    int cnt = 0;
    for(int i =1 ;i <=n ; i++) {
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt ==2) cout<<"True";
    else cout<<"false";
}

int main()
{
    int n;
    cin>>n;
    brutePrimeNumbers(n);
}