#include<string>
using namespace std;
namespace paySlip
{
    class Employee {
    private:
        int ID;
        string Name;
        long int Num;
    public:
        void setID(int id) {
            ID = id;
        }
        void setName(string name) {
            Name = name;
        }
        void setNumber(long int num) {
            Num = num;
        }
        int getID() {
            return(ID);
        }
        string getName() {
            return(Name);
        }
        long int getNumber() {
            return(Num);
        }
    };
    class PayScale {
    private:
        float Accno;
        float Amount;
        double Salary;
    public:
        void setAccno(float accno) {
            Accno = accno;
        }
        void setAmount(float amount) {
            Amount = amount;
        }
        //void setSalary(double S) {
        //    Salary = S;
        //}
        float getAccno() {
            return(Accno);
        }
        float getAmount() {
            return(Amount);
        }
        void computeSalary(float S) {
            double Gp = (S +((S*15)/100)+((S*5)/100));
            cout<<endl<<"-----------------------------------------------------";
            cout<<endl<<"|  TYPE      |  HRA  |  OTHER ALLOWANCE  |  SALARY  |"<<endl;
            cout<<"-----------------------------------------------------";
            cout<<endl<<"   Employee     15%     5%                  "<<Gp<<endl;
            cout<<"-----------------------------------------------------"<<endl;
        }
    };
}
