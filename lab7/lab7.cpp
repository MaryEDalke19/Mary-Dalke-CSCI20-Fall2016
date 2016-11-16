//Mary Dalke
//9-15-16

#include <iostream>
#include <string>
using namespace std;

void ChildrenSong (string songLyric)
{
    cout << songLyric << ", " << songLyric <<  " on the range," << endl;
    cout << "where the deer and the antelope play," << endl;
    cout << "where seldom is heard," << endl;
    cout << "a discouraging word," << endl;
    cout << "and the skies are not cloudy all day," << endl;
    return;
}

int main () 
{
    ChildrenSong("home");
    
    return 0;
}