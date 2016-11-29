//Mary Dalke
//11-29-16
//Copy makefile

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class MyNumbers
{
  public:
  void number_(int numOne);
  void numbers_(int numTwo);
  double GetMoreNumbers() const;
  
  MyNumbers();
  void Output();
  
  private:
  int num_;
};

MyNumbers::MyNumbers() : num_(0) 
{
}

void MyNumbers::Output()
{
    cout << "My number is: " << num_ << endl;
}

int randomNumber()
{
    srand(time(0));
    return (rand()% 10) + 1;
}

int main () 
{
    MyNumbers object;
    
    object.Output();
    
    return 0;
}