//Mary Dalke
//10-27-16
//Menu program with prices

#include <iostream>
using namespace std;

int main()
{
    const int NUM_MENU = 10;
    int userPicks[NUM_MENU] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int menuPrice = 10;
    int userPicks1[menuPrice] = {5, 6, 6, 7, 4, 4, 6, 7, 6, 6};
    
    cout << "Pick what you want for dinner from the Italin Menu below." << endl;
    cout << "Do you want pizza(1), pasta(2), pane(3), riso(4), or soup(5)?" << endl;
    cout << "Do you also want salad(6), pesce(7), verdura(8), carne(9), or antipasto(10)?" << endl;
    cin >> userPicks[NUM_MENU];
    
    if (userPicks[NUM_MENU] == userPicks[0])
    {
        cout << "You are having pizza for dinner. It costs: $" << userPicks1[0] << endl;
    }
    
    else if (userPicks[NUM_MENU] == userPicks[1])
    {
        cout << "You are having pasta for dinner. It costs: $" << userPicks1[1] << endl;
    }
    
    else if (userPicks[NUM_MENU] == userPicks[2])
    {
        cout << "You are having pane for dinner. It costs: $" << userPicks1[2] << endl;
    }
    else if (userPicks[NUM_MENU] == userPicks[3])
    {
        cout << "You are having riso for dinner. It costs: $" << userPicks1[3] << endl;
    }
    else if (userPicks[NUM_MENU] == userPicks[4])
    {
        cout << "You are having soup for dinner. It costs: $" << userPicks1[4] << endl;
    }
    else if (userPicks[NUM_MENU] ==  userPicks[5])
    {
        cout << "You are having salad for dinner. It costs: $" << userPicks1[5] << endl;
    }
    else if (userPicks[NUM_MENU] == userPicks[6])
    {
        cout << "You are having pesce for dinner. It costs: $" << userPicks1[6] << endl;
    }
    else if (userPicks[NUM_MENU] == userPicks[7])
    {
        cout << "You are having verdura for dinner. It costs: $" << userPicks1[7] << endl;
    }
    else if (userPicks[NUM_MENU] == userPicks[8])
    {
        cout << "You are having carne for dinner. It costs: $" << userPicks1[8] << endl;
    }
    else if (userPicks[NUM_MENU] == userPicks[9])
    {
        cout << "You are having antipasto for dinner. It costs: $" << userPicks1[9] << endl;
    }
    else
    {
        cout << "Sorry, that's not on the menu. Please try again." << endl;
    }
    
    return 0;
}
