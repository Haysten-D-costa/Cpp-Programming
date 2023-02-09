#include<iostream>
#include<string>
using namespace std;

class media
{
public:
     void setdata()
     {
          string title;
          float price;
          cout<<"Enter the title of the publication\n";
          cin>>title;
          cout<<"Enter the price of the publication\n";
          cin>>price;
     }
     virtual void display()=0;
};
class book: public media
{
public:
     int n;
     void display()
     {
          cout<<"\nBook details:\n"<<endl;
          setdata();
          cout<<"Enter the number of pages in the book\n";
          cin>>n;
     }
};
class tape: public media
{
public:
     double time;
     void display()
     {
          cout<<"\nTape Publication details:\n"<<endl;
          setdata();
          cout<<"Enter the playing time of the tape\n";
          cin>>time;
     }
};
int main()
{
     media *m;
     book b;
     tape t;
     m=&b;
     m->display();
     m=&t;
     m->display();
     return 0;
}