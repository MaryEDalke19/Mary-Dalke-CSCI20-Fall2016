//Mary Dalke
//9-29-16

#include <iostream>
using namespace std;

int main () 
{
    cout << "False = 0 while True = 1!" << endl;
    
    bool suzyAge=25;
    bool johnAge=21;
    cout << (suzyAge < johnAge); 
    cout << endl; //0 equals false.
    
    int x=7;
    int y=7;
    cout << (x>=y);
    cout << endl; //1 equals true.
    
    int a=1;
    int b=9;
    cout << (a==b);
    cout << endl; //0 equals false.
    
    bool limit=20;
    bool count=20;
    cout << ((limit*count)/2>0); 
    cout << endl; //0 equals false.
    
    int t=-4;
    int z=0;
    cout << (t>5||z<2); 
    cout << endl; //1 equals true.
    
    bool variable=-5;
    cout << (!(variable>0)); 
    cout << endl; //0 equals false.
    
    int m=16;
    cout << (m/4<8&&m>=4);
    cout << endl; //1 equals true.
    
    int g=-2;
    int h=5;
    cout << (g*h<10||h*g<10); 
    cout << endl; //1 equals true.
    
    int j=-2;
    int k=5;
    int l=4;
    cout << (!(j*l<10)||y/x*4<y*2); 
    cout << endl; //1 equals true.
    
    return 0;
}