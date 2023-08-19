#include <iostream>
using namespace std;
double circlearea(int);
int rectanglearea(int,int);
int squarearea(int);
void areas(double);
int main(){
    char shape;
    double area;
    cout<<"Which shape would you like to calculate the area of?"<<endl;
    cout<<"(circle:c,rectangle:r,square:s):";
    cin>>shape;
    switch(shape){
        case 'c': 
        int radius;
        cout<<"enter radius:";
        cin>>radius;
        area=circlearea(radius);
        areas(area);
        break;
        case 'r': 
        int width,lenght;
        cout<<"enter width and lenght:";
        cin>>width>>lenght;
        area=rectanglearea(width,lenght);
        areas(area);
        break;
        case 's': 
        int edge;
        cout<<"enter edge:";
        cin>>edge;
        area=squarearea(edge);
        areas(area);
        break;
        default: cout<<"wrong shape";
    }
    return 0;
}
double circlearea(int c){
    return 3.14*c*c;
}
int rectanglearea(int w,int l){
    return w*l;
}
int squarearea(int e){
    return e*e;
}
void areas(double area1){
    cout<<"area of the shape:"<<area1;
}

    


