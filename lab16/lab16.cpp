 //Mary Dalke
//10-27-16
//Menu program with prices

#include <iostream>
using namespace std;

float division (float menuPrices[10], int menuInv);
int main()
{
    const int NUM_MENU = 10;
    char userPicks[NUM_MENU];
    int i = 0;
    float menuPrices[10];
    int menuInv;
    
    userPicks[0] = 1;
    userPicks[1] = 2;
    userPicks[2] = 3;
    userPicks[3] = 4;
    userPicks[4] = 5;
    userPicks[5] = 6;
    userPicks[6] = 7;
    userPicks[7] = 8;
    userPicks[8] = 9;
    userPicks[9] = 10;
    
    
    cout << "Pick what you want for dinner from the Italin Menu below." << endl;
    cout << "Do you want pizza(type in 1) for $5.00 plus $0.50 per topping added, pasta(type in 2) for $6.00, pane(type in 3) for $6.50, riso(type in 4) for $7.00, or soup(type in 5) for $4.00?" << endl;
    cout << "Do you also want salad(type in 6) for $4.00, pesce(type in 7) for $6.50, verdura(type in 8) for $7.00, carne(type in 9) for $6.50, or antipasto(type in 10) for $6.00?" << endl;
    cin >> userPicks[i];
    
    for (userPicks[i] = 0; userPicks[i] < menuInv; menuInv = menuInv - 1)
    {
        cout << "Input the price that you see above that you are paying for your food." << endl;
        cin >> menuPrices;
    }
    
    if (userPicks[i] == userPicks[0])
    {
        cout << "You are having pizza for dinner and paying " << menuPrices << " plus $0.50 per topping." << endl;
    }
    else if (userPicks[i] == userPicks[1])
    {
        cout << "You are having pasta for dinner and paying " << menuPrices << "." << endl;
    }
    else if (userPicks[i] == userPicks[2])
    {
        cout << "You are having pane for dinner and paying " << menuPrices << "." << endl;
    }
    else if (userPicks[i] == userPicks[3])
    {
        cout << "You are having riso for dinner and paying " << menuPrices << "." << endl;
    }
    else if (userPicks[i] == userPicks[4])
    {
        cout << "You are having soup for dinner and paying " << menuPrices << "." << endl;
    }
    else if (userPicks[i] ==  userPicks[5])
    {
        cout << "You are having salad for dinner and paying " << menuPrices << "." << endl;
    }
    else if (userPicks[i] == userPicks[6])
    {
        cout << "You are having pesce for dinner and paying " << menuPrices << "." << endl;
    }
    else if (userPicks[i] == userPicks[7])
    {
        cout << "You are having verdura for dinner and paying " << menuPrices << "." << endl;
    }
    else if (userPicks[i] == userPicks[8])
    {
        cout << "You are having carne for dinner and paying " << menuPrices << "." << endl;
    }
    else if (userPicks[i] == userPicks[9])
    {
        cout << "You are having antipasto for dinner and paying " << menuPrices << "." << endl;
    }
    else
    {
        cout << "Sorry, that's not on the menu. Please try again." << endl;
    }
    
    return 0;
}