//NUMBER GUESSING GAME MADE BY POOJA KUMARI...
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;                
int main() {

    cout<<"*********Made by ..."<<endl;
    srand(time(0));                               
    int RandomNum = rand() % 100 + 1;              
    int guess;
    int attempt = 0; // for counting no of Attempts.
    cout << "***Welcome to the Number Guessing Game!!****\n\n";
    cout<< "Try to guess number between 1 and 100.\n\n";
    do {
        cout << "Enter your Number by Guessing:";            
        cin >> guess;
        if (guess < RandomNum) {
            cout << "Try Again!!.. Your Guessed Number is too low.\n\n";
        } else if (guess > RandomNum) {
            cout << "Try Again!!.. Your Guessed Number is too high.\n\n";
        } else {
            cout << "Congratulations!!.. You guessed the Correct Number in " << attempt << " attempts.\n";
            break;   
        }
        attempt++;     
    } while (true);   
    return 0;
}
