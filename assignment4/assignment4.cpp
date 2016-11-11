//MaryDalke
//11-11-16
//Test Grading Program

#include <iostream>
#include <ios>
#include <iomanip>
#include <fstream>
using namespace std;

class StudentAnswers
{
public:
void SetGrade (int studGrade);
void SetStudentAnswers (int studAnswers);
double GetTeacherAnswers () const;

private:
int teacherAnswer;
double studentScore;
};

void StudentAnswers::SetGrade(int studGrade)
{
    studentScore = studGrade;
}

void StudentAnswers::SetStudentAnswers (double studAnswer)
{
    teacherAnswers = studAnswers;
}

double StudentAnswers::GetTeacherAnsers () const
{
    return teacherAnswers / (studentScore / 100.00);
}


int main ()
{
    string studentName = "Chirstian Smith";
    istringstream inSS(studentName);
    string firstName;
    string lastName;
    int userGrade = 0;
    
    inFS.open("studentanswers.txt")
    if (!inFS.is_open())
    {
        cout << "Could not open file 'studentanswers.txt'. " << endl;
    }
    
    inFS.open("answerkey.txt")
    if (!inFS.is_open())
    {
        cout << "Could not open file 'answerkey.txt'. " << endl;
    }
    
    studentanswers.txt = filenum1;
    answerkey.txt = filenum2;
    
    inFS >> filenum1;
    inFS >> filenum2;
    
    int StudentGrade[11];
    studentGrade[0] = 100;
    studentGrade[1] = 90;
    studentGrade[2] = 80;
    studentGrade[3] = 70;
    studentGrade[4] = 60;
    studentGrade[5] = 50;
    studentGrade[6] = 40;
    studentGrade[7] = 30;
    studentGrade[8] = 20;
    studentGrade[9] = 10;
    studentGrade[10] = 0;
    
    if (studentGrade <= 100)
    {
        cout << "Great job! You got an A!" << endl;
    }
    
    if else (studentGrade <= 90)
    {
        cout << "Great job! You got an A!" << endl;
    }
    
    if else (studentGrade <= 80)
    {
        cout << "Good job! You got an B!" << endl;
    }
    
    if else (studentGrade <= 70)
    {
        cout << "Good job! You got an C!" << endl;
    }
    
    if else (studentGrade <= 60)
    {
        cout << "Good job! You got an D!" << endl;
    }
    
    if else (studentGrade <= 50)
    {
        cout << "Bad job! You got an F!" << endl;
    }
    
    else
    {
        cout << "How did you get that??" << endl;
    }
    
    return 0;
}