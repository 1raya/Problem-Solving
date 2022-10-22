//Problem link: https://codeforces.com/contest/734/problem/A

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
 
    int n;
    cin>>n;

    string s;
    cin>>s;
    int cntD=0;
    int cntA=0;
    
 
    for (int i=0; i<n; ++i) {
        if(s[i]=='A'){
            cntA++;
        }else if(s[i]=='D'){
            cntD++;
        }
    }
    
    if (cntD > cntA) {
        cout<<"Danik"<<"\n";
    }else if( cntA > cntD){
        cout<<"Anton"<<"\n";
    }else if (cntD == cntA){
        cout<<"Friendship"<<"\n";
    }
   

    return 0;
}
