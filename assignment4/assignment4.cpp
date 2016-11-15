//MaryDalke
//11-11-16
//Test Grading Program

#include <iostream>
#include <ios>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class StudentAnswers
{
public:
void SetGrade (int studGrade);
void SetStudentAnswers (int studAnswers);
double GetTeacherAnswer () const;

private:
int teacherAnswer;
double studentScore;
};

void StudentAnswers::SetGrade(int studGrade)
{
    studentScore = studGrade;
}

void StudentAnswers::SetStudentAnswers (int studAnswers)
{
    teacherAnswer = studAnswers;
}

double StudentAnswers::GetTeacherAnswer () const
{
    return teacherAnswer / (studentScore / 100.00);
}


int main ()
{
    ifstream inFS;
    char fileNum1 = '';
    char fileNum2 = '';
    string filename = "";
    StudentAnswers student1;
    string firstName;
    string lastName;
    int userGrade = 0;
    
    cout << "Enter filename: " << endl;
    cin >> filename;
    
    student1.SetGrade(100);
    student1.SetStudentAnswers(23);
    cout << "student1's grade: " << student1.GetTeacherAnswer();
    
    inFS.open("studentanswers.txt");
    if (!inFS.is_open())
    {
        cout << "Could not open file 'studentanswers.txt'. " << endl;
    }
    
    inFS.open("answerkey.txt");
    if (!inFS.is_open())
    {
        cout << "Could not open file 'answerkey.txt'. " << endl;
    }
    
    cout << "Read the two files: " << endl;
    inFS >> fileNum1;
    inFS >> fileNum2;
    "fileNum1" == "fileNum2";
    cout << "Close both files. " << endl;
    inFS.close(fileNum1);
    inFS.close(FileNum2);
    
    cout << "FileNum1 output: " << fileNum1 << endl;
    cout << "FileNum2 output: " << fileNum2 << endl;
    
    int grades[11];
    grades[0] = 100;
    grades[1] = 90;
    grades[2] = 80;
    grades[3] = 70;
    grades[4] = 60;
    grades[5] = 50;
    grades[6] = 40;
    grades[7] = 30;
    grades[8] = 20;
    grades[9] = 10;
    grades[10] = 0;
    
    if (grades[0] <= 100)
    {
        cout << "Great job! You got an A!" << endl;
    }
    
    else if (grades[1] <= 90)
    {
        cout << "Great job! You got an A!" << endl;
    }
    
    else if (grades[2] <= 80)
    {
        cout << "Good job! You got an B!" << endl;
    }
    
    else if (grades[3] <= 70)
    {
        cout << "Good job! You got an C!" << endl;
    }
    
    else if (grades[4] <= 60)
    {
        cout << "Good job! You got an D!" << endl;
    }
    
    else if (grades[5] <= 50)
    {
        cout << "Bad job! You got an F!" << endl;
    }
    
    else
    {
        cout << "How did you get that??" << endl;
    }
    
    return 0;
}