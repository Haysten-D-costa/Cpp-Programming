#include<iostream>
using namespace std;

class shape
{
public:
     int b,h,side;
     void setdata()
     {
          cout<<"\nEnter the dimensions of the shape\n";
          cin>>b>>h;
     }
     void setsquare()
     {
          cout<<"\nEnter the side of the square\n";
          cin>>side;
     }
     virtual void area()=0;
};
class rectangle: public shape
{
public:
     void area()
     {
          setdata();
          cout<<"Area of rectangle="<<b*h<<endl;
     }
};
class triangle: public shape
{
public:
     void area()
     {
          setdata();
          cout<<"Area of triangle="<<0.5*b*h<<endl;
     }
};
class square: public shape
{
public:
     void area()
     {
          setsquare();
          cout<<"Area of square="<<side*side<<endl;
     }
};
int main()
{
     shape *s;
     rectangle r;
     triangle t;
     square s1;
     s=&r;
     s->area();
     s=&t;
     s->area();
     s=&s1;
     s->area();
     return 0;
}