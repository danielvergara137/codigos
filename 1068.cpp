#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
  int n=0,sum=0,i=0;
  cin>>n;
  if(abs(n)<10000){
    if(n>=0){
      for(i=1;i<n+1;i++){
	sum=sum+i;
      }
    }
    else{
      for(i=1;i>n-1;i--){
	sum=sum+i;
      }
    }
    cout<<sum<<endl;
  }
  
  return 0;
}
