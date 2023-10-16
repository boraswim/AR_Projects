// Bora Sevim
// 29.12.2021
// LabAssignment#8 P1

#include <iostream>
using namespace std;

class Box{
private:
    double width,length,height;

public:
    void setWidth(double w);
    void setLength(double l);
    void setHeight(double h);
    double getWidth();
    double getLength();
    double getHeight();
    double calculateVolume(double w,double l,double h);
    Box();
    Box(double w1,double h1,double l1);
    ~Box();
};

void Box::setWidth(double w){
    width=w;
}

void Box::setLength(double l){
    length=l;
}

void Box::setHeight(double h){
    height=h;
}

double Box::calculateVolume(double w, double l, double h){
    return w*l*h;
}

Box::Box(){
    cout<<"Box is created by default constructor!"<<endl;
}

Box::Box(double w1,double h1,double l1){
    cout<<"Box is created by parameterized constructor!\nVolume of the box is:"<<w1*l1*h1<<endl;
}

Box::~Box(){
    cout<<"Box destroyed by destructor!"<<endl;
}


int main() {
    double w;
    double l;
    double h;
    for(int counter=1;counter<=10;++counter){
        cout<<"Enter the width:";
        cin>>w;
        cout<<"Enter the length:";
        cin>>l;
        cout<<"Enter the height:";
        cin>>h;

        if(counter%2==0){
            Box pbox(w,l,h);
        }

        else{
            Box dbox;
            dbox.setWidth(w);
            dbox.setLength(l);
            dbox.setHeight(h);
            cout<<"Volume of the box is:"<<dbox.calculateVolume(w,l,h)<<endl;
        }
    }

    }