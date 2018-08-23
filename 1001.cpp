#include <bits/stdc++.h>
#include <stack>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
  stack<int> s;
  int n;
  float f;
  while(cin>>n){
    s.push(n);
  }
  while(!s.empty()){
    f=sqrt(s.top());
    printf("%.4f\n",f);
    s.pop();
  }
  
  return 0;
}
