//Problem Link: https://codeforces.com/contest/791/problem/A

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
 Fast
    int a,b,cnt=0;
    cin>>a>>b;
    
    while(a<=b){
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt<<"\n";
   

    return 0;
}
 
