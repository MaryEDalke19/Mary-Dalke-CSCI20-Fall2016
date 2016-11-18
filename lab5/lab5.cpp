//Mary Dalke
//9-6-16

#include <iostream>
#include <string>
using namespace std;

struct MakeAMonster
{
    string name;
    string head;
    string eyes;
    string nose;
    string mouth;
};

int main () 
{
    char MonsterOne;
    char MonsterTwo;
    char MonsterThree;
    
    char Zombus;
    char Spritem;
    char Wackus;
    
    MakeAMonster monFace1;
    MakeAMonster monFace2;
    MakeAMonster monFace3;
    
    monFace1.name = MonsterOne;
    monFace2.name = MonsterTwo;
    monFace3.name = MonsterThree;
    
    
    monFace1.head = Zombus;
    monFace2.head = Spritem;
    monFace3.head = Wackus;
    
    monFace1.eyes = Wackus;
    monFace2.eyes = Spritem;
    monFace3.eyes = Zombus;
    
    monFace1.nose = Wackus;
    monFace2.nose = Spritem;
    monFace3.nose = Zombus;
    
    monFace1.mouth = Wackus;
    monFace2.mouth = Spritem;
    monFace3.mouth = Zombus;
    
    cout << "I am going to ask you a string of questions about a monster that you are going to create." << endl;
    
    cout << "What is the name of your monster?" << endl;
    cin >> monFace1.name;
    cout << endl;
    
    cout << "What is type of head you have choosen for your monster?" << endl;
    cin >> monFace1.head;
    cout << endl;
    
    cout << "What is the type of eyes do you want your monster to have?" << endl;
    cin >> monFace1.eyes;
    cout << endl;
    
    cout << "What kind of nose does your monster have?" << endl;
    cin >> monFace1.nose;
    cout << endl;
    
    cout << "Lastly, what kind of mouth does your monster have?" << endl;
    cin >> monFace1.mouth;
    cout << endl;
    
    cout << " You have choosen the name " << monFace1.name << " for your monster." << endl;
    cout << " You have choosen the head " << monFace1.head << " for your monster." << endl;
    cout << " You have choosen the eyes " << monFace1.eyes << " for your monster." << endl;
    cout << " You have choosen the nose " << monFace1.nose << " for your monster." << endl;
    cout << " You have choosen the mouth " << monFace1.mouth << " for your monster." << endl;
    
    cout << "Awesome monster! Now try to draw it on a piece of paper and share it with your friends!" << endl;

   return 0; 
}
