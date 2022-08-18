 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main() {
     int n;
     cin>>n;
     double bill;
     if(n>=250)
         bill=220 + ((n-250)*1.50);
     else{
     if(n<=50)
     bill=n*0.5;
         else if(n>50 && n<=150){
         bill=50*0.5 +(n-50)*0.75;
         }
          else if(n>150 && n<=250){
         bill=50*0.5 +100*0.75+(n-150)*1.2;
         }
     }
     bill*=1.2;
     cout<<fixed<<setprecision(2)<<bill;
     return 0;
 }