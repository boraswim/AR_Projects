// Bora Sevim
// 06.12.2021
// LabAssignment#5 P1

#include <iostream>
using namespace std;

void ac(int td,int tm,int ty,int bd,int bm,int by){
  int ad,am,ay;
  ay=ty-by;
  am=tm-bm;
  if(bm>tm){
    ay-=1;
    am+=12;
  }
  ad=td-bd;
  if(bd>td){
    am-=1;
    switch(bm){
    case 1:
    ad+=31;
    break;
    case 2:
    ad+=28;
    break;
    case 3:
    ad+=31;
    break;
    case 4:
    ad+=30;
    break;
    case 5:
    ad+=31;
    break;
    case 6:
    ad+=30;
    break;
    case 7:
    ad+=31;
    break;
    case 8:
    ad+=31;
    break;
    case 9:
    ad+=30;
    break;
    case 10:
    ad+=31;
    break;
    case 11:
    ad+=30;
    break;
    case 12:
    ad+=31;
    break;
    }
  }
  if(am<0){
    am+=12;
    ay-=1;
  }
  cout<<"Your age is: "<<ay<<" years "<<am<<" months "<<ad<<" days.";
}

int main() {
  int td,tm,ty,bd,bm,by,ad,am,ay;

  cout<<"Enter today's date (day):";
  cin>>td;
  cout<<"Enter today's date (month):";
  cin>>tm;
  cout<<"Enter today's date (year):";
  cin>>ty;
  cout<<"Enter your birthday (day):";
  cin>>bd;
  cout<<"Enter your birthday (month):";
  cin>>bm;
  cout<<"Enter your birthday (year):";
  cin>>by;

  ac(td,tm,ty,bd,bm,by);
} 