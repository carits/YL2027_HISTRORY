#include<bits/stdc++.h>
using namespace std;
 int n;
int main(){
 cin>> n;
 int m=sqrt(n);
 if(m*m==n){
  cout<< m*2;
 }else if(m*m+m>=n){
  cout<< m*2+1;
 }else{
  cout<< m*2+2;
 }
 return 0;
}