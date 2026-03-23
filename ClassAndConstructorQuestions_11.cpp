//online learning platform


#include<iostream>
using namespace std;
class Course{
    string courseName;
    string instructorName;
    int duration;
    public:
    Course(){
        courseName="Unknown";
        instructorName="Unknown";
        duration=0;
    }
    Course(string c, string i, int d){
        courseName=c;
        instructorName=i;
        duration=d;
    }
    void displayCourse(){
        cout<<"\nCourse Name  : "<<courseName;
        cout<<"\nInstructor   : "<<instructorName;
        cout<<"\nDuration     : "<<duration;
    }
    ~Course(){
        cout<<"\nCourse Deleted:"<<courseName;
    }
};
int main(){
    Course c1("FOCP","Richa Singh",15),c2("Engineering Physics","Arjun Singh",5),c3;
    c1.displayCourse();
    c2.displayCourse();
    c3.displayCourse();
    return 0;
}
