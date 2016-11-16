//Mary Dalke
//9-6-16

#include <iostream>
#include <string>
using namespace std;

struct MakeAMonster
{
    int MonsterStruct;
    string monName;
    string monHead;
    string monEyes;
    string monNose;
    string monMouth;
};

int main () 
{
    MakeAMonster monName1;
    MakeAMonster monName2;
    MakeAMonster monName3;
    
    monName1.MonsterStruct = OneMonster;
    monName2.MonsterStruct = TwoMonster;
    monName3.MonsterStruct = ThreeMonster;
    
    MakeAMonster monHead1;
    MakeAMonster monHead2;
    MakeAMonster monHead3;
    
    monHead1.MonsterStruct = Zombus;
    monHead2.MonsterStruct = Skeleten;
    monHead3.MonsterStruct = Normal;
    
    MakeAMonster monEyes1;
    MakeAMonster monEyes2;
    MakeAMonster monEyes3;
    
    monEyes1.MonsterStruct = Spritem;
    monEyes2.MonsterStruct = Normal;
    monEyes3.MonsterStruct = Huge;
    
    MakeAMonster monNose1;
    MakeAMonster monNose2;
    MakeAMonster monNose3;
    
    monNose1.MonsterStruct = None;
    monNose2.MonsterStruct = Round;
    monNose3.MonsterStruct = Square;
    
    MakeAMonster monMouth1;
    MakeAMonster monMouth2;
    MakeAMonster monMouth3;
    
    monMouth1.MonsterStruct = Normal;
    monMouth2.MonsterStruct = Wackus;
    monMouth3.MonsterStruct = None;
    
    
    cout << "I am going to ask you a string of questions about a monster that you are going to create." << endl;
    
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
