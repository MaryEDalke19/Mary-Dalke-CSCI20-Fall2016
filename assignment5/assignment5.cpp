//Mary Dalke
//12-13-16
//Assignment 5

#include <iostream>
#include <string>
using namespace std;

class HorseBreedPrices
{
    public:
    void SetArabianPrice(int arabPrice);
    void SetQuarderPrice(int qtrPrice);
    void SetPaintPrice(int paintPrice);
    double GetFullPrice() const;
    private:
    int horsePrices;
    double supplyPrice;
};

void HorseBreedPrices::SetArabianPrice(int arabPrice)
{
    horsePrices = arabPrice;
    return;
}

void HorseBreedPrices::SetQuarderPrice(int qtrPrice)
{
    horsePrices = qtrPrice;
    return;
}

void HorseBreedPrices::SetPaintPrice(int paintPrice)
{
    horsePrices = paintPrice;
    return;
}

double HorseBreedPrices::GetFullPrice();
{
    return supplyPrice / ( horsePrices / 10000);
}

int main()
{
    string linkStart;
    string chooseHorse;
    string horseName;
    string horseGen;
    string horseFace;
    string horseHoof;
    
    cout << "To start creating your horse, type in 'Yes'. When you are done, type in 'No'." << endl;
    cin >> linkStart;
    
    while (linkStart == "Yes")
    {
    
    HorseBreedPrices horseBreed1;
    HorseBreedPrices horseBreed2;
    HorseBreedPrices horseBreed3;
    
    const char MT_COLOR = 4;
    char userPicks[MT_COLOR] = {"black", "red", "grey", "brown"};
    
    const char COAT_COLOR = 4;
    char userPicks1[COAT_COLOR] = {"black", "red", "white", "brown"};
    
    const char EYE_COLOR = 5;
    char userPicks2[EYE_COLOR] = {"black", "blue", "violet", "brown", "hazel"};
    
    cout << "What is your horse's name?" << endl;
    cin >> horseName;
    
    cout << "Choose your horse by typing in Arabian, Quarter, or Paint." << endl;
    cin >> chooseHorse;
    
    if (chooseHorse == "Arabian")
    {
    
    horseBreed1.SetPrice(9000);
    horseBreed1.SupplyPrice(500);
    
    cout << "Choose your horse's gender: mare, gelding, or stallion." << endl;
    cin >> horseGen;
    
    cout << "Choose your horse's face markings: none, strip, or star." << endl;
    cin >> horseFace;
    
    cout << "Choose if you want stocking on your horse's hooves? Type in yes or no." << endl;
    cin >> horseHoof;
    
    cout << "Choose your horse's mane and tail color: black(1), red(2), grey(3), or brown(4)." << endl;
    cin >> userPicks;
        
    cout << "Choose your horse's coat color: black(1), red(2), white(3), or brown(4)." << endl;
    cin >> userPicks1;
        
    cout << "Choose your horse's eye color: black(1), blue(2), violet(3), brown(4), or hazel(5)." << endl;
    cin >> userPicks2;

        cout << chooseHorse << " horse's cost: " << horseBreed1.GetFullPrice << endl;
        cout << "Your horse is an " << chooseHorse << " and named " << horseName << "." << endl;
        cout << "Your horse's gender is " << horseGen << "." << endl;
        cout << "Your horse's face marking is " << horseFace << "." << endl;
        cout << "Does your horse have stockings on its hooves? " << horseHoof << "." << endl;
        cout << "Your horse's mane and tail color is " << userPicks << "." << endl;
        cout << "Your horse's coat color is " << userPicks1 << "." << endl;
        cout << "Your horse's eye color is " << userPicks2 << "." << endl;
    }
    
    if (chooseHorse == "Quarter")
    
    {
    horseBreed2.SetPrice(5000);
    horseBreed2.SupplyPrice(500);
    
    cout << "Choose your horse's gender: mare, gelding, or stallion." << endl;
    cin >> horseGen;
    
    cout << "Choose your horse's face markings: none, strip, or star." << endl;
    cin >> horseFace;
    
    cout << "Choose if you want stocking on your horse's hooves? Type in yes or no." << endl;
    cin >> horseHoof;
    
    cout << "Choose your horse's mane and tail color: black(1), red(2), grey(3), or brown(4)." << endl;
    cin >> userPicks;
        
    cout << "Choose your horse's coat color: black(1), red(2), white(3), or brown(4)." << endl;
    cin >> userPicks1;
        
    cout << "Choose your horse's eye color: black(1), blue(2), violet(3), brown(4), or hazel(5)." << endl;
    cin >> userPicks2;

        cout << chooseHorse << " horse's cost: " << horseBreed2.GetFullPrice << endl;
        cout << "Your horse is an " << chooseHorse << " and named " << horseName << "." << endl;
        cout << "Your horse's gender is " << horseGen << "." << endl;
        cout << "Your horse's face marking is " << horseFace << "." << endl;
        cout << "Does your horse have stockings on its hooves? " << horseHoof << "." << endl;
        cout << "Your horse's mane and tail color is " << userPicks << "." << endl;
        cout << "Your horse's coat color is " << userPicks1 << "." << endl;
        cout << "Your horse's eye color is " << userPicks2 << "." << endl;
    }
    
    if (chooseHorse == "Paint")
    {
    
    horseBreed3.SetPrice(4000);
    horseBreed3.SupplyPrice(500);
    
    cout << "Choose your horse's gender: mare, gelding, or stallion." << endl;
    cin >> horseGen;
    
    cout << "Choose your horse's face markings: none, strip, or star." << endl;
    cin >> horseFace;
    
    cout << "Choose if you want stocking on your horse's hooves? Type in yes or no." << endl;
    cin >> horseHoof;
    
    cout << "Choose your horse's mane and tail color: black(1), red(2), grey(3), or brown(4)." << endl;
    cin >> userPicks;
        
    cout << "Choose your horse's coat color: black(1), red(2), white(3), or brown(4)." << endl;
    cin >> userPicks1;
        
    cout << "Choose your horse's eye color: black(1), blue(2), violet(3), brown(4), or hazel(5)." << endl;
    cin >> userPicks2;

        cout << chooseHorse << " horse's cost: " << horseBreed3.GetFullPrice << endl;
        cout << "Your horse is an " << chooseHorse << " and named " << horseName << "." << endl;
        cout << "Your horse's gender is " << horseGen << "." << endl;
        cout << "Your horse's face marking is " << horseFace << "." << endl;
        cout << "Does your horse have stockings on its hooves? " << horseHoof << "." << endl;
        cout << "Your horse's mane and tail color is " << userPicks << "." << endl;
        cout << "Your horse's coat color is " << userPicks1 << "." << endl;
        cout << "Your horse's eye color is " << userPicks2 << "." << endl;
    }
    
    cout << "If you want to play again: type in 'Yes'. If you don't, type in 'No'." << endl;
    cin >> linkStart;
    
    if (linkStart == "No")
    {
    cout << "Goodbye!" << endl;
    }
    
    }
    return 0;
}
