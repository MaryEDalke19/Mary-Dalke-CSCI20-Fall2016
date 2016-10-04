//Mary Dalke
//9-29-16

#include <iostream>
using namespace std;

int main () 
{
    bool suzyAge=25;
    bool johnAge=21;
    cout << (suzyAge < johnAge) << "The output is: False!"; 
    cout << endl; //0 equals false.
    
    int x=7;
    int y=7;
    cout << (x>=y) << "The output is: True!";
    cout << endl; //1 equals true.
    
    int a=1;
    int b=9;
    cout << (a==b) << "The output is: False!";
    cout << endl; //0 equals false.
    
    bool limit=20;
    bool count=20;
    cout << ((limit*count)/2>0) << "The output is: False!"; 
    cout << endl; //0 equals false.
    
    int t=-4;
    int z=0;
    cout << (t>5||z<2) << "The output is: True!"; 
    cout << endl; //1 equals true.
    
    bool variable=-5;
    cout << (!(variable>0)) << "The output is: False!"; 
    cout << endl; //0 equals false.
    
    int m=16;
    cout << (m/4<8&&m>=4) << "The output is: True!";
    cout << endl; //1 equals true.
    
    int g=-2;
    int h=5;
    cout << (g*h<10||h*g<10) << "The output is: True!"; 
    cout << endl; //1 equals true.
    
    int j=-2;
    int k=5;
    int l=4;
    cout << (!(j*l<10)||y/x*4<y*2) << "The output is: True!"; 
    cout << endl; //1 equals true.
    
    return 0;
}