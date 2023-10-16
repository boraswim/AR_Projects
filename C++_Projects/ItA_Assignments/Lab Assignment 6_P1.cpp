// Bora Sevim
// 10.12.2021
// LabAssignment#6 P1

#include <iostream>
using namespace std;

int sum(int a,int b){
  return a+b;
}

int diff(int a,int b){
  return(a-b);
}

int prod(int a,int b){
  return(a*b);
}

float div(float a,float b){
  return a/b;
}

int main() {
  int n1;
  int n2;

  cout<<"Enter the first number:";
  cin>>n1;
  cout<<"Enter the second number:";
  cin>>n2;

  int summary=sum(n1,n2);
  int difference=diff(n1,n2);
  int production=prod(n1,n2);
  float division=div(float(n1),float(n2));

  cout<<n1<<"+"<<n2<<"="<<summary<<endl;
  cout<<n1<<"-"<<n2<<"="<<difference<<endl;
  cout<<n1<<"*"<<n2<<"="<<production<<endl;
  cout<<n1<<"/"<<n2<<"="<<division<<endl;

  return 0;
} 