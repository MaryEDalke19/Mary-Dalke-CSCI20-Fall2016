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
    double GetFullPrice () const;
    private:
    int horsePrices;
    double supplyPrice;
};

void HorseBreedPrices::SetArabianPrice(int arabPrice)
{
    horsePrices = arabPrice;
return arabPrice;
}

void HorseBreedPrices::SetQuarderPrice(int qtrPrice)
{
    horsePrices = qtrPrice;
    return qtrPrice;
}

void HorseBreedPrices::SetPaintPrice(int paintPrice)
{
    horsePrices = paintPrice;
    return paintPrice;
}

double HorseBreedPrices::GetFullPrice();
{
    return supplyPrice / ( horsePrices / 20000);
}

int main()
{
    string linkStart;
    string chooseHorse;
    string horseName;
    
    cout << "To start creating your horse, type in 'Yes'. When you are done, type in 'No'." << endl;
    cin >> linkStart;
    
    while (linkStart = "Yes")
    {
    
    cout << "What is your horse's name?" << endl;
    cin >> 
    
    HorseBreedPrices horseBreed1;
    HorseBreedPrices horseBreed2;
    HorseBreedPrices horseBreed3;
    
    const int mtColor = 4;
    char userPicks[mtColor];
    int i = 0;
    
    mtColor [0] = "black";
    mtColor [1] = "red";
    mtColor [2] = "white";
    mtColor [3] = "brown";
    
    const int coatColor = [4];
    char userPicks[coatColor];
    int k = 0;
    
    coatColor [0] = "Black";
    coatColor [1] = "Red";
    coatColor [2] = "White";
    coatColor [3] = "Brown";
    
    const int eyeColor = [5];
    char userPicks[eyeColor];
    int j = 0;
    
    eyeColor [0] = "BLACK";
    eyeColor [1] = "BLUE";
    eyeColor [2] = "VIOLET";
    eyeColor [3] = "BROWN";
    eyeColor [4] = "HAZEL";
    
    cout << "Choose your horse by typing in Arabian, Quarter, or Paint." << endl;
    cin >> chooseHorse;
    
    for (chooseHorse; chooseHorse = "Arabian"; chooseHorse++)
    {
    
    horseBreed1.SetPrice(9000);
    horseBreed1.SupplyPrice(500);
    
    cout << "Choose your horse's mane and tail color: black, red, white, or brown (make sure to use lower case)." << endl;
    cin >> mtColor[i];
    
        if (mtColor[i] = "black")
        {
            cout << "You choose black." << endl;
        }
        if else (mtColor[i] = "red")
        {
            cout << "You choose red." << endl;
        }
        if else (mtColor[i] = "white")
        {
            cout << "You choose white." << endl;
        }
        if else (mtColor[i] = "brown")
        {
            cout << "You choose brown." << endl;
        }
        else
        {
            cout << "That is not a choice. Please try again." << endl;
        }
        
        cout << "Choose your horse's coat color: Black, Red, White, or Brown (make sure to use upper case on the first letter)." << endl;
        cin >> coatColor[k];
        
        if (coatColor[k] = "Black")
        {
            cout << "You choose black." << endl;
        }
        if else (coatColor[k] = "Red")
        {
            cout << "You choose red." << endl;
        }
        if else (coatColor[k] = "White")
        {
            cout << "You choose white." << endl;
        }
        if else (coatColor[k] = "Brown")
        {
            cout << "You choose brown." << endl;
        }
        else
        {
            cout << "That is not a choice. Please try again." << endl;
        }
        
        cout << "Choose your horse's eye color: BLACK, BLUE, VIOLET, BROWN, or HAZEL (make sure to use all upper case on the letters)." << endl;
        cin >> eyeColor[j];
            
        if (eyeColor[j] = "BLACK")
        {
            cout << "You choose black." << endl;
        }
        if else (eyeColor[j] = "BLUE")
        {
            cout << "You choose blue." << endl;
        }
        if else (eyeColor[j] = "VIOLET")
        {
            cout << "You choose violet." << endl;
        }
        if else (eyeColor[j] = "BROWN")
        {
            cout << "You choose brown." << endl;
        }
        if else (eyeColor[j] = "HAZEL")
        {
            cout << "You choose hazel." << endl;
        }
        else
        {
            cout << "That is not a choice. Please try again." << endl;
        }

        cout << "Arabian horse's cost: " << horseBreed1.GetFullPrice << endl;
        cout << "Your horse is an Arabian and named " << horseName << "." << endl;
        cout << "Your horse's mane and tail color is " << mtColor[i] << "." << endl;
        cout << "Your horse's coat color is " << coatColor[k] << "." << endl;
        cout << "Your horse's eye color is " << eyeColor[j] << "." << endl;
    
    }
    
    for (chooseHorse; chooseHorse = "Quarter"; chooseHorse++)
    
    {
    horseBreed2.SetPrice(5000);
    horseBreed2.SupplyPrice(500);
    
     cout << "Choose your horse's mane and tail color: black, red, white, or brown (make sure to use lower case)." << endl;
    cin >> mtColor[i];
    
        if (mtColor[i] = "black")
        {
            cout << "You choose black." << endl;
        }
        if else (mtColor[i] = "red")
        {
            cout << "You choose red." << endl;
        }
        if else (mtColor[i] = "white")
        {
            cout << "You choose white." << endl;
        }
        if else (mtColor[i] = "brown")
        {
            cout << "You choose brown." << endl;
        }
        else
        {
            cout << "That is not a choice. Please try again." << endl;
        }
        
        cout << "Choose your horse's coat color: Black, Red, White, or Brown (make sure to use upper case on the first letter)." << endl;
        cin >> coatColor[k];
        
        if (coatColor[k] = "Black")
        {
            cout << "You choose black." << endl;
        }
        if else (coatColor[k] = "Red")
        {
            cout << "You choose red." << endl;
        }
        if else (coatColor[k] = "White")
        {
            cout << "You choose white." << endl;
        }
        if else (coatColor[k] = "Brown")
        {
            cout << "You choose brown." << endl;
        }
        else
        {
            cout << "That is not a choice. Please try again." << endl;
        }
        
        cout << "Choose your horse's eye color: BLACK, BLUE, VIOLET, BROWN, or HAZEL (make sure to use all upper case on the letters)." << endl;
        cin >> eyeColor[j];
            
        if (eyeColor[j] = "BLACK")
        {
            cout << "You choose black." << endl;
        }
        if else (eyeColor[j] = "BLUE")
        {
            cout << "You choose blue." << endl;
        }
        if else (eyeColor[j] = "VIOLET")
        {
            cout << "You choose violet." << endl;
        }
        if else (eyeColor[j] = "BROWN")
        {
            cout << "You choose brown." << endl;
        }
        if else (eyeColor[j] = "HAZEL")
        {
            cout << "You choose hazel." << endl;
        }
        else
        {
            cout << "That is not a choice. Please try again." << endl;
        }

        cout << "Quarter horse's cost: " << horseBreed2.GetFullPrice << endl;
        cout << "Your horse is a Quarter horse and named " << horseName << "." << endl;
        cout << "Your horse's mane and tail color is " << mtColor[i] << "." << endl;
        cout << "Your horse's coat color is " << coatColor[k] << "." << endl;
        cout << "Your horse's eye color is " << eyeColor[j] << "." << endl;
    
    
    }
    
    for (chooseHorse; chooseHorse = "Paint"; chooseHorse++)
    {
    
    horseBreed3.SetPrice(4000);
    horseBreed3.SupplyPrice(500);
    
    cout << "Choose your horse's mane and tail color: black, red, white, or brown (make sure to use lower case)." << endl;
    cin >> mtColor[i];
    
        if (mtColor[i] = "black")
        {
            cout << "You choose black." << endl;
        }
        if else (mtColor[i] = "red")
        {
            cout << "You choose red." << endl;
        }
        if else (mtColor[i] = "white")
        {
            cout << "You choose white." << endl;
        }
        if else (mtColor[i] = "brown")
        {
            cout << "You choose brown." << endl;
        }
        else
        {
            cout << "That is not a choice. Please try again." << endl;
        }
        
        cout << "Choose your horse's coat color: Black, Red, White, or Brown (make sure to use upper case on the first letter)." << endl;
        cin >> coatColor[k];
        
        if (coatColor[k] = "Black")
        {
            cout << "You choose black." << endl;
        }
        if else (coatColor[k] = "Red")
        {
            cout << "You choose red." << endl;
        }
        if else (coatColor[k] = "White")
        {
            cout << "You choose white." << endl;
        }
        if else (coatColor[k] = "Brown")
        {
            cout << "You choose brown." << endl;
        }
        else
        {
            cout << "That is not a choice. Please try again." << endl;
        }
        
        cout << "Choose your horse's eye color: BLACK, BLUE, VIOLET, BROWN, or HAZEL (make sure to use all upper case on the letters)." << endl;
        cin >> eyeColor[j];
            
        if (eyeColor[j] = "BLACK")
        {
            cout << "You choose black." << endl;
        }
        if else (eyeColor[j] = "BLUE")
        {
            cout << "You choose blue." << endl;
        }
        if else (eyeColor[j] = "VIOLET")
        {
            cout << "You choose violet." << endl;
        }
        if else (eyeColor[j] = "BROWN")
        {
            cout << "You choose brown." << endl;
        }
        if else (eyeColor[j] = "HAZEL")
        {
            cout << "You choose hazel." << endl;
        }
        else
        {
            cout << "That is not a choice. Please try again." << endl;
        }

        cout << "Paint horse's cost: " << horseBreed3.GetFullPrice << endl;
        cout << "Your horse is a Paint and named " << horseName << "." << endl;
        cout << "Your horse's mane and tail color is " << mtColor[i] << "." << endl;
        cout << "Your horse's coat color is " << coatColor[k] << "." << endl;
        cout << "Your horse's eye color is " << eyeColor[j] << "." << endl;
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
