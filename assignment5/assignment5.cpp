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

double HorseBreedPrices::GetFullPrice() const
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
    
    while (linkStart == "Yes")
    {
    
    HorseBreedPrices horseBreed1;
    HorseBreedPrices horseBreed2;
    HorseBreedPrices horseBreed3;
    
    const int MT_COLOR = 4;
    int userPicks[MT_COLOR] = {1, 2, 3, 4};
    
    
    const int COAT_COLOR = 4;
    int userPicks1[COAT_COLOR] = {1, 2, 3, 4};
    
    const int EYE_COLOR = 5;
    int userPicks2[EYE_COLOR] = {1, 2, 3, 4, 5};
    
    cout << "What is your horse's name?" << endl;
    cin >> horseName;
    
    cout << "Choose your horse by typing in Arabian or Quarter." << endl;
    cin >> chooseHorse;
    
    if (chooseHorse == "Arabian")
    {
    
    horseBreed1.SetArabianPrice(9000);
    
    cout << "Choose your horse's gender: mare, gelding, or stallion." << endl;
    cin >> horseGen;
    
    cout << "Choose your horse's face markings: none, strip, or star." << endl;
    cin >> horseFace;
    
    cout << "Choose if you want stocking on your horse's hooves? Type in yes or no." << endl;
    cin >> horseHoof;
    
    cout << "Choose your horse's mane and tail color: black(1), red(2), grey(3), or brown(4)." << endl;
    cin >> userPicks[MT_COLOR];
    
    if (userPicks[MT_COLOR] == userPicks[0])
    {
        cout << "You picked black." << endl;
    }
    
    else if (userPicks[MT_COLOR] == userPicks[1])
    {
        cout << "You picked red." << endl;
    }
    
    else if (userPicks[MT_COLOR] == userPicks[2])
    {
        cout << "You picked grey." << endl;
    }
    
    else if (userPicks[MT_COLOR] == userPicks[3])
    {
        cout << "You picked brown." << endl;
    }
    
    else
    {
        cout << "This is not an option. Please try again." << endl;
    }
        
    cout << "Choose your horse's coat color: black(1), red(2), white(3), or brown(4)." << endl;
    cin >> userPicks1[COAT_COLOR];
    
    if (userPicks1[COAT_COLOR] == userPicks1[0])
    {
        cout << "You picked black." << endl;
    }
    
    else if (userPicks1[COAT_COLOR] == userPicks1[1])
    {
        cout << "You picked red." << endl;
    }
    
    else if (userPicks1[COAT_COLOR] == userPicks1[2])
    {
        cout << "You picked white." << endl;
    }
    
    else if (userPicks1[COAT_COLOR] == userPicks1[3])
    {
        cout << "You picked brown." << endl;
    }
    
    else
    {
        cout << "This is not an option. Please try again." << endl;
    }
        
    cout << "Choose your horse's eye color: black(1), blue(2), violet(3), brown(4), or hazel(5)." << endl;
    cin >> userPicks2[EYE_COLOR];
    
    if (userPicks2[EYE_COLOR] == userPicks2[0])
    {
        cout << "You picked black." << endl;
        cout << endl;
    }
    
    else if (userPicks2[EYE_COLOR] == userPicks[1])
    {
        cout << "You picked blue." << endl;
        cout << endl;
    }
    
    else if (userPicks2[EYE_COLOR] == userPicks2[2])
    {
        cout << "You picked violet." << endl;
        cout << endl;
    }
    
    else if (userPicks2[EYE_COLOR] == userPicks2[3])
    {
        cout << "You picked brown." << endl;
        cout << endl;
    }
    
    else if (userPicks2[EYE_COLOR] == userPicks2[4])
    {
        cout << "You picked hazel." << endl;
        cout << endl;
    }
    
    else
    {
        cout << "This is not an option. Please try again." << endl;
    }

        cout << "Arabian horse's cost: $9000." << endl;
        cout << "Your horse is a(n) Arabian and named " << horseName << "." << endl;
        cout << "Your horse's gender is " << horseGen << "." << endl;
        cout << "Your horse's face marking is " << horseFace << "." << endl;
        cout << "Does your horse have stockings on its hooves? " << horseHoof << "." << endl;
        cout << "Your horse's mane and tail color is " << userPicks[MT_COLOR] << "." << endl;
        cout << "Your horse's coat color is " << userPicks1[COAT_COLOR] << "." << endl;
        cout << "Your horse's eye color is " << userPicks2[EYE_COLOR] << "." << endl;
    }
    
    else if (chooseHorse == "Quarter")
    
    {
    horseBreed2.SetQuarderPrice(5000);
    
    cout << "Choose your horse's gender: mare, gelding, or stallion." << endl;
    cin >> horseGen;
    
    cout << "Choose your horse's face markings: none, strip, or star." << endl;
    cin >> horseFace;
    
    cout << "Choose if you want stocking on your horse's hooves? Type in yes or no." << endl;
    cin >> horseHoof;
    
    cout << "Choose your horse's mane and tail color: black(1), red(2), grey(3), or brown(4)." << endl;
    cin >> userPicks[MT_COLOR];
    
    if (userPicks[MT_COLOR] == userPicks[0])
    {
        cout << "You picked black." << endl;
    }
    
    else if (userPicks[MT_COLOR] == userPicks[1])
    {
        cout << "You picked red." << endl;
    }
    
    else if (userPicks[MT_COLOR] == userPicks[2])
    {
        cout << "You picked grey." << endl;
    }
    
    else if (userPicks[MT_COLOR] == userPicks[3])
    {
        cout << "You picked brown." << endl;
    }
    
    else
    {
        cout << "This is not an option. Please try again." << endl;
    }
        
    cout << "Choose your horse's coat color: black(1), red(2), white(3), or brown(4)." << endl;
    cin >> userPicks1[COAT_COLOR];
    
    if (userPicks1[COAT_COLOR] == userPicks1[0])
    {
        cout << "You picked black." << endl;
    }
    
    else if (userPicks1[COAT_COLOR] == userPicks1[1])
    {
        cout << "You picked red." << endl;
    }
    
    else if (userPicks1[COAT_COLOR] == userPicks1[2])
    {
        cout << "You picked white." << endl;
    }
    
    else if (userPicks1[COAT_COLOR] == userPicks1[3])
    {
        cout << "You picked brown." << endl;
    }
    
    else
    {
        cout << "This is not an option. Please try again." << endl;
    }
        
    cout << "Choose your horse's eye color: black(1), blue(2), violet(3), brown(4), or hazel(5)." << endl;
    cin >> userPicks2[EYE_COLOR];
    
    if (userPicks2[EYE_COLOR] == userPicks2[0])
    {
        cout << "You picked black." << endl;
        cout << endl;
    }
    
    else if (userPicks2[EYE_COLOR] == userPicks2[1])
    {
        cout << "You picked blue." << endl;
        cout << endl;
    }
    
    else if (userPicks2[EYE_COLOR] == userPicks2[2])
    {
        cout << "You picked violet." << endl;
        cout << endl;
    }
    
    else if (userPicks2[EYE_COLOR] == userPicks2[3])
    {
        cout << "You picked brown." << endl;
        cout << endl;
    }
    
    else if (userPicks2[EYE_COLOR] == userPicks2[4])
    {
        cout << "You picked hazel." << endl;
        cout << endl;
    }
    
    else
    {
        cout << "This is not an option. Please try again." << endl;
    }

        cout << "Quarter horse's cost: $5000." << endl;
        cout << "Your horse is a(n) Quarter horse and named " << horseName << "." << endl;
        cout << "Your horse's gender is " << horseGen << "." << endl;
        cout << "Your horse's face marking is " << horseFace << "." << endl;
        cout << "Does your horse have stockings on its hooves? " << horseHoof << "." << endl;
        cout << "Your horse's mane and tail color is " << userPicks[MT_COLOR] << "." << endl;
        cout << "Your horse's coat color is " << userPicks1[COAT_COLOR] << "." << endl;
        cout << "Your horse's eye color is " << userPicks2[EYE_COLOR] << "." << endl;
    }
    
    else
    {
        cout << "Sorry, that is not an option. Please try again." << endl;
    }
    
    cout << "If you want to play again: type in 'Yes'. If you don't, type in 'No'." << endl;
    cin >> linkStart;
    
    if (linkStart == "No")
    {
    cout << endl;
    cout << "Goodbye!" << endl;
    }
    
    }
    return 0;
}
