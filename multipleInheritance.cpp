//two parent class: Academic with marks and Sports with score
// a child class Results

#include<iostream>
using namespace std;
class Academic{
    int marks;
    public:
    Academic(){
        marks=0;
    }
    Academic(int m){
        marks=m;
    }
    int getmarks(){
        return marks;
    }
};
class Sports{
    int score;
    public:
    Sports(){
        score=0;
    }
    Sports(int s){
        score=s;
    }
    int getscore(){
        return score;
    }
};
class Result:public Academic,public Sports{
    public:
    Result():Academic(0),Sports(0){
    cout<<"\n Result Default";
    }
    Result(int m, int s):Academic(m),Sports(s){
        cout<<"\n Result Parameterised";
    }
    void display(){
        cout<<"\nMarks : "<<getmarks()<<"\nScore : "<<getscore();
    }
}; 
int main(){
    Result s1,s2(97,10);
    s1.display();
    s2.display();
    return 0;
}
