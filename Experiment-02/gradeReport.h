#include<string>
using namespace std;
namespace gradeReport
{
    class Student {
    private:
        int sRollno;
        string sName;
        string sBranch;
    public:
        void setRoll(int Rollno) {
            sRollno = Rollno;
        }
        void setName(string Name) {
            sName = Name;
        }
        void setBranch(string Branch) {
            sBranch = Branch;
        }
        int getRoll() {
            return(sRollno);
        }
        string getName() {
            return(sName);
        }
        string getBranch() {
            return(sBranch);
        }
    };
    class Marks {
    private:
        string grade;
        double mark1, mark2, mark3;
        double prcntg;
    public:
        void setMark1(double M1) {
            mark1 = M1;
        }
        void setMark2(double M2) {
            mark2 = M2;
        }
        void setMark3(double M3) {
            mark3 = M3;
        }
        double getMark1() {
            return(mark1);
        }
        double getMark2() {
            return(mark2);
        }
        double getMark3() {
            return(mark3);
        }
        double computePercentg() {
            prcntg = (mark1 + mark2 + mark3)/3;
            return(prcntg);
        }
        string computeGrade() {
            if((prcntg>=90) && (prcntg<=100) ) {
                grade = "O";
            }
            else if((prcntg<=99) && (prcntg>=75)) {
                grade = "A";
            }
            else if((prcntg<=74) && (prcntg>=61)) {
                grade = "B";
            }
            else if((prcntg<=60) && (prcntg>=40)) {
                grade = "C";
            }
            else if((prcntg<=39) && (prcntg>=0)) {
                grade = "F";
            }
            return(grade);
        }
    };
}

