#include <iostream>
using namespace std;

class Student {
public:
    int roll;

    void getRoll(int r){
        roll = r;
    }

    void displayRoll(){
        cout<<"Roll Number: "<<roll<<endl;
    }
};

class Test : public Student {
public:
    int marks;

    void getMarks(int m){
        marks = m;
    }

    void displayMarks(){
        cout<<"Marks: "<<marks<<endl;
    }
};

class Sports {
public:
    int score;

    void getScore(int s){
        score = s;
    }

    void displayScore(){
        cout<<"Sports Score: "<<score<<endl;
    }
};

class Result : public Test, public Sports {
public:
    void displayResult(){
        int total = marks + score;
        cout<<"Total Score: "<<total<<endl;
    }
};

int main(){

    Result r;

    r.getRoll(101);
    r.getMarks(80);
    r.getScore(15);

    r.displayRoll();
    r.displayMarks();
    r.displayScore();
    r.displayResult();

    return 0;
}