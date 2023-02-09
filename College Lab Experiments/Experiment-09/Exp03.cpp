#include<iostream>
#include<string>
using namespace std;

class animal
{
public:
     string name;
     string type;
     virtual void eat()=0;
     virtual void speak()=0;
};
class dog:public animal
{
public:
     void eat()
     {
          cout<<"Enter the animal details\n";
          cin>>name>>type;
          cout<<name<<" eats bone\n";
          cout<<name<<" is "<<type<<" dog\n";
     }
     void speak()
     {
          cout<<"A dog barks\n";
     }
};
class cat: public animal
{
public:
     void eat()
     {
          cout<<"\nEnter the animal details\n";
          cin>>name>>type;
          cout<<name<<" eats fish\n";
          cout<<name<<" is "<<type<<" cat\n";
     }
     void speak()
     {
          cout<<"A cat meows\n";
     }
};
int main()
{
     animal *a;
     dog d;
     cat c;
     a=&d;
     a->eat();
     a->speak();
     a=&c;
     a->eat();
     a->speak();
     return 0;
}