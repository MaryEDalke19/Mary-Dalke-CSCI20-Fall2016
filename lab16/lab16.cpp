 //Mary Dalke
//10-27-16
//Menu program with prices

#include <iostream>
using namespace std;

double calculateMenu(double menuItemPrice[], int menuItemInvetory)
{
    double itemPrice = 0.0;
    int itemInvetory = 0;
    i = 0;
    
    for (i = 0; i < menuItemInvetory; ++i)
    {
    itemPrice = itemPrice = menuItemPrice[i];
    }
    
    return itemPrice / (menuItemInvetory - 1);
}

int main()
{
    const int NUM_MENU = 10;
    char userPicks[NUM_MENU];
    int i = 0;
    double averagePrices = 0.0;
    
    
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
    
    for (i = 0; i < NUM_MENU; ++i)
    {
        cout << "Item price: ";
        cin >> userPicks[i];
    }
    
    cout << "Pick what you want for dinner from the Italin Menu below." << endl;
    cout << "Do you want pizza(1), pasta(2), pane(3), riso(4), or soup(5)?" << endl;
    cout << "Do you also want salad(6), pesce(7), verdura(8), carne(9), or antipasto(10)?" << endl;
    cin >> userPicks[i];
    
    if (userPicks[i] == userPicks[0])
    {
        cout << "You are having pizza for dinner." << endl;
    }
    else if (userPicks[i] == userPicks[1])
    {
        cout << "You are having pasta for dinner." << endl;
    }
    else if (userPicks[i] == userPicks[2])
    {
        cout << "You are having pane for dinner." << endl;
    }
    else if (userPicks[i] == userPicks[3])
    {
        cout << "You are having riso for dinner." << endl;
    }
    else if (userPicks[i] == userPicks[4])
    {
        cout << "You are having soup for dinner." << endl;
    }
    else if (userPicks[i] ==  userPicks[5])
    {
        cout << "You are having salad for dinner." << endl;
    }
    else if (userPicks[i] == userPicks[6])
    {
        cout << "You are having pesce for dinner." << endl;
    }
    else if (userPicks[i] == userPicks[7])
    {
        cout << "You are having verdura for dinner." << endl;
    }
    else if (userPicks[i] == userPicks[8])
    {
        cout << "You are having carne for dinner." << endl;
    }
    else if (userPicks[i] == userPicks[9])
    {
        cout << "You are having antipasto for dinner." << endl;
    }
    else
    {
        cout << "Sorry, that's not on the menu. Please try again." << endl;
    }
    
    return 0;
}