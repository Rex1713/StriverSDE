#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
    for(int i =1;i<=n ; i++) {
        if(n % i ==0)
            cout<<i<<" ";
    }
}

void printDivisorsSqrt(int n) {
    vector<int> ans;

    // TC --> O(Sqrt(N))
    for(int i =1 ;i*i<=n;i++) {
        if(n%i == 0)
        {
            ans.push_back(i);
            if((n/i)!=i){
                ans.push_back(n/i);
            }
        }
    }
    // TC ----> O(number of factors log(number of factors))
    sort(ans.begin(),ans.end());
    // TC ----> O (number of factors)
    for(auto it : ans) {
        cout<<it<<" ";
    }


}

int main()
{
    int n;
    cin>> n ;
    printDivisorsSqrt(n);
}