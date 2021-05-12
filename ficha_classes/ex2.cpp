#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Student {
public:
    Student();
    Student(const string &code, const string &name);
    void setGrades(double shortExam, double project, double exam);
    string getCode() const;
    string getName() const;
    int getFinalGrade() const;
    // other get and set methods
    bool isApproved() const; // is the student approved or not ?
    static int weightShortExam , weightProject, weightExam; // weights in percentage (ex:20,30,50)
    void readStudentData();
private:
    string code; // student code
    string name; // student complete name
    double shortExam, project, exam; // grades obtained by the student in the different components
    int finalGrade;
};
int Student::weightExam = 20;
int Student::weightShortExam = 30;
int Student::weightProject = 50;

void Student::setGrades(double shortExam, double project, double exam) {
    this -> shortExam = shortExam;
    this -> project = project;
    this -> exam = exam;
    finalGrade = round(shortExam*weightShortExam/100 + project*weightProject/100 + exam*weightExam/100);
}
Student::Student() {
    code = "up000000000";
    name = "No_Name";
}
Student::Student(const string &code, const string &name){
    this ->name = name;
    this ->code = code;
}
string Student:: getCode() const{
    return code;
}
string Student:: getName() const{
    return name;
}
int Student::getFinalGrade() const {
    return finalGrade;
}
bool Student::isApproved() const {
    if (finalGrade>=10){
        return true;
    }
    else return false;
}
Student readStudentData(){
    string code,name;
    double short_exam, exam, project;
    cout<<"Student code: ";
    cin>>code;
    cin.ignore(100000,'\n');
    cout<<"Student name: ";
    getline(cin,name);
    cout<<"Short exam grade: ";
    cin>>short_exam;
    cout<<"Project grade: ";
    cin>>project;
    cout<<"Exam grade: ";
    cin>> exam;
    Student guy(code, name);
    guy.setGrades(short_exam,project,exam);
    return guy;
}


int main(){
   Student me = readStudentData();
   cout << me.getFinalGrade()<<endl;
   return 0;
}
