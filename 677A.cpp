// Problem link: https://codeforces.com/contest/677/problem/A

#define Fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ll long long
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <cmath>
 
using namespace std;

int main(){
 
    int n, h;
    cin>>n>>h;
    int a[n];
    int cnt1=0;
    int cnt2=0;
    for (int i=0; i<n; ++i) {
        cin>>a[i];
        if (a[i]>h){
            cnt2+=2;
        }else if (a[i]<=h){
            cnt1+=1;
        }
    }
 
    cout<<cnt1+cnt2<<"\n";
 
    return 0;
}
