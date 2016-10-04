//Mary Dalke
//9-6-16

#include <iostream>
#include <string>
using namespace std;

struct {
    int MonsterStruct;
    string monName;
    string monHead;
    string monEyes;
    string monNose;
    string monMouth;
};

int main () 
{
    
    cout << "I am going to ask you a string of questions about a monster that you are going to create." << endl;
    cout << "You can look at the spreadsheet for this assignment at the link below (note: you should type the whole web address into a new tab to find it.)." << endl;
    cout << "file:///C:Users/mc146u17/Downloads/Monster%20Page.pdf" << endl;
    
    cout << "What is the name of your monster?" << endl;
    cin >> monName;
    cout << endl;
    
    cout << "What is type of head you have choosen for your monster?" << endl;
    cin >> monHead;
    cout << endl;
    
    cout << "What is the type of eyes do you want your monster to have?" << endl;
    cin >> monEyes;
    cout << endl;
    
    cout << "What kind of nose does your monster have?" << endl;
    cin >> monNose;
    cout << endl;
    
    cout << "Lastly, what kind of mouth does your monster have?" << endl;
    cin >> monMouth;
    cout << endl;
    
    cout << " You have choosen the name " << monName << " for your monster." << endl;
    cout << " You have choosen the head " << monHead << " for your monster." << endl;
    cout << " You have choosen the eyes " << monEyes << " for your monster." << endl;
    cout << " You have choosen the nose " << monNose << " for your monster." << endl;
    cout << " You have choosen the mouth " << monMouth << " for your monster." << endl;
    
    cout << "Awesome monster! Now try to draw it on a piece of paper and share it with your friends!" << endl;

   return 0; 
}
