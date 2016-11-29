// Mary Dalke
//11-22-16
//Committing pointer code

#include <iostream>
#include <cstring>
using namespace std;

int main()
    { //Start main
        char firststr[10]; //Compiler appends null char
        int firstname = 0; //User defined int value
        char *head = firststr; //Pointer to the user defined char value
        char *tail = firststr; //Pointer to the user defined char value
        
        // Prompt user for input
        cout << "Please enter a 10 letter word or less" << endl; //Code output
        cin >> firststr; //User input
        
        strlen(firststr); //Returns number of characters to the choosen size
        firstname = strlen(firststr); //Assigns 10 to firststr
        
        cout << "Your word is " << firststr << endl; //Output information
        
        if (firstname<10) //Word is less than 10
        { //Start if
            while (*head != '\0') //*head cannot equal \0
            { //Start while
                cout << *head; //Output information
                head++; //Increment operator
            } //End while
        } //End if
        
        else //Word is greater than 10
        { //Start else
            cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl; //Code output
        } //End else
        
        cout << endl; //New line
        
        tail = &firststr[strlen(firststr) - 1]; //Reverse the word
        
        if (firstname < 10) //User input is less 10
        { //Start if
            while (*tail>0) //*tail is greater than 0
        { //Start while
            cout << *tail; // Output information
            tail--; //Decrement operator
        } //End while
        
        } //End if
        
        cout << endl; //New line
        
        head = firststr; //head equals firststr
        tail = &firststr[strlen(firststr) - 1]; //tail equals the reversed word
        head++; //Increment operater
        tail--; //Decrement operater
        
        if (*head == *tail) //If the word is the spelled the same backwards
        { //Start if
            cout << "It is an palindrome!" << endl; //Code output
        } //End if
        
        else //If the word is not spelled the same backwards
        { //Start else
            cout << "It is not an palindrome" << endl; //Code output
        } //End else
        
        return 0; //Finished reading code
        
} //End main