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
}

void HorseBreedPrices::SetQuarderPrice(int qtrPrice)
{
    horsePrices = qtrPrice;
}

void HorseBreedPrices::SetPaintPrice(int paintPrice)
{
    horsePrices = paintPrice;
}

double HorseBreedPrices::GetFullPrice();
{
    supplyPrice / ( horsePrices / 10000);
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
    
    while (linkStart = "Yes")
    {
    
    HorseBreedPrices horseBreed1;
    HorseBreedPrices horseBreed2;
    HorseBreedPrices horseBreed3;
    
    const char MT_COLOR = 4;
    char userPicks;
    
    MT_COLOR[0] = '1';
    MT_COLOR[1] = 2;
    MT_COLOR[2] = 3;
    MT_COLOR[3] = 4;
    
    const int COAT_COLOR = 4;
    int userPicks1 = 0;
    
    COAT_COLOR[0] = 1;
    COAT_COLOR[1] = 2;
    COAT_COLOR[2] = 3;
    COAT_COLOR[3] = 4;
    
    const int EYE_COLOR = 5;
    int userPicks2 = 0;
    
    EYE_COLOR[0] = 1;
    EYE_COLOR[1] = 2;
    EYE_COLOR[2] = 3;
    EYE_COLOR[3] = 4;
    EYE_COLOR[4] = 5;
    
    cout << "What is your horse's name?" << endl;
    cin >> horseName;
    
    cout << "Choose your horse by typing in Arabian, Quarter, or Paint." << endl;
    cin >> chooseHorse;
    
    if (chooseHorse = "Arabian")
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
    
    if (chooseHorse = "Quarter")
    
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
    
    if (chooseHorse = "Paint")
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
    
    if (linkStart = "No")
    {
    cout << "Goodbye!" << endl;
    }
    
    }
    return 0;
}
