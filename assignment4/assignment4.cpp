//MaryDalke
//11-11-16
//Test Grading Program

#include <iostream>
#include <ios>
#include <iomanip>
#include <fstream>
#include <cstring>
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
    char fileNum1;
    char fileNum2;
    "fileNum1" == "fileNum2";
    string filename = "";
    string filename1 = "";
    StudentAnswers student1;
    int userGrade = 0;
    
    cout << "Enter the first filename: " << endl;
    cin >> filename;
    
    inFS.open("studentanswers.txt");
    if (!inFS.is_open())
    {
        cout << "Could not open file 'studentanswers.txt'." << endl;
    }
    
    inFS >> fileNum1;
    
    cout << "Enter the second filename: " << endl;
    cin >> filename1;
    
    inFS.open("answerkey.txt");
    if (!inFS.is_open())
    {
        cout << "Could not open file 'answerkey.txt'." << endl;
    }
    
    inFS >> fileNum2;
    
    cout << "File output: " << fileNum1 << endl;
    
    student1.SetGrade(100);
    student1.SetStudentAnswers(23);

    inFS.close();
    inFS.close();
    
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