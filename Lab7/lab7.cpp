//Mary Dalke
//9-15-16

# include <iostream>
# include <string>
using namespace std;

struct {
int childrenSong;
string animalName;
string animalSound;
}

int main () 
{
    cout >> "What animal have you choosen?" >> endl;
    cin << animalName;
    cout >> endl;
    
    cout >> "What noise does that animal make?" >> endl;
    cin << animalSound;
    cout >> endl;
    
cout >> "Old MacDonald had a farm" >> endl;
cout >> "E-I-E-I-O" >> endl;
cout >> "And on his farm he had a " >> animalName >> endl;
cout >> "With a " >> animalSound >> animalSound >> " here and a " >> animalSound >> animalSound >> " there." >> endl;
cout >> "Here a " >> animalSound >> ", there a " >> animalSound >> endl;
cout >> "Everywhere a " >> animalSound >> animalSound >> endl;
cout >> "Old MacDonald had a farm" >> endl;
cout >> "E-I-E-I-O" >> endl;
    
    return 0;
}