void Student::display(){
    cout << endl << Rno << endl << name << endl << *m1;
}
// Copy Constructor
Student::Student(Student &s){
    Rno=s.Rno;
    name=s.name;
    *m1=*(s.m1);
}
int main(){
    Student s1, s2(102,"aaaa",70.5);
    Student s3 = s2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
