//
//  main.cpp
//  PRG-5-8-Math-Tutor
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  This program started in 3.17 and was modified in 4.11.
//
//  Modify the program again so it displays a menu allowing the user
//  to select an addition, subtraction, multiplication, or division
//  problem. The final selection on the menu should let the user quit the program. After
//  the user has finished the math problem, the program should display the menu again.
//  This process is repeated until the user chooses to quit the program.
//
//  Input Validation: If the user selects an item not on the menu, display an error message
//  and display the menu again.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main()
{
    const int MIN_VALUE = 100,
              MAX_VALUE = 999;
    
    int intOperationSelector,
        intValue1,
        intValue2,
        intValueResult,
        intValueResultRemainder,
        intValueGuess,
        intValueGuessRemainder;
    
    cout << "Please select and option from the menu below:\n"
         << "1. Addition\n"
         << "2. Subtraction\n"
         << "3. Multiplication\n"
         << "4. Division\n"
         << "5. Quit\n";
    cin >> intOperationSelector;
    
    while(intOperationSelector != 1 && intOperationSelector != 2 &&
          intOperationSelector != 3 && intOperationSelector != 4 &&
          intOperationSelector != 5)
    {
        cout << "Please make a valid selection:\n"
             << "1. Addition\n"
             << "2. Subtraction\n"
             << "3. Multiplication\n"
             << "4. Division\n"
             << "5. Quit\n";
        cin >> intOperationSelector;
    }
    while(intOperationSelector != 5)
    {
        unsigned seed = time(0);
        
        switch(intOperationSelector)
        {
            case 1:
                
                srand(seed);
                
                intValue1 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
                intValue2 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
                
                intValueResult = intValue1 + intValue2;
                
                cout << setw(5) << right << intValue1 << endl;
                cout << setw(1) << right << "+"
                     << setw(4) << right << intValue2 << endl;
                cout << "-----\n";
                
                cin >> setw(5) >> right >> intValueGuess;
                while(!cin || intValueGuess < 0 || intValueGuess > 9999)
                {
                    cout << "Please enter a guess between 0 and 9999:";
                    cin.clear();
                    cin.ignore();
                    cin >> intValueGuess;
                }
                
                if(intValueGuess == intValueResult)
                {
                    cout << "Congratulations! You got the answer right!\n";
                }
                else
                {
                    cout << "The correct answer is " << intValueResult << endl;
                }
                break;
            case 2:
                
                srand(seed);
                
                intValue1 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
                intValue2 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
                
                intValueResult = intValue1 - intValue2;
                
                cout << setw(5) << right << intValue1 << endl;
                cout << setw(1) << right << "-"
                     << setw(4) << right << intValue2 << endl;
                cout << "-----\n";
                
                cin >> setw(5) >> right >> intValueGuess;
                while(!cin || intValueGuess < 0 || intValueGuess > 9999)
                {
                    cout << "Please enter a guess between 0 and 9999:";
                    cin.clear();
                    cin.ignore();
                    cin >> intValueGuess;
                }
                
                if(intValueGuess == intValueResult)
                {
                    cout << "Congratulations! You got the answer right!\n";
                }
                else
                {
                    cout << "The correct answer is " << intValueResult << endl;
                }
                break;
            case 3:
                
                srand(seed);
                
                intValue1 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
                intValue2 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
                
                intValueResult = intValue1 * intValue2;
                
                cout << setw(8) << right << intValue1 << endl;
                cout << setw(1) << right << "x"
                     << setw(7) << right << intValue2 << endl;
                cout << "--------\n";
                
                cin >> setw(8) >> right >> intValueGuess;
                while(!cin || intValueGuess < 0 || intValueGuess > 99999)
                {
                    cout << "Please enter a guess between 0 and 99999:";
                    cin.clear();
                    cin.ignore();
                    cin >> intValueGuess;
                }
                
                if(intValueGuess == intValueResult)
                {
                    cout << "Congratulations! You got the answer right!\n";
                }
                else
                {
                    cout << "The correct answer is " << intValueResult << endl;
                }
                break;
            case 4:
                
                srand(seed);
                
                intValue1 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
                intValue2 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
                
                intValueResult = intValue1 / intValue2;
                intValueResultRemainder = intValue1 % intValue2;
                
                cout << setw(6) << right << intValue1 << endl;
                cout << setw(1) << right << "/"
                     << setw(5) << right << intValue2 << endl;
                cout << "-----\n";
                
                cout << "Quotient:";
                cin >> setw(3) >> right >> intValueGuess;
                while(!cin || intValueGuess < 0 || intValueGuess > 9999)
                {
                    cout << "Please enter a quotient between 0 and 9999:";
                    cin.clear();
                    cin.ignore();
                    cin >> intValueGuess;
                }
                
                cout << "Remainder:";
                cin >> setw(3) >> right >> intValueGuessRemainder;
                while(!cin || intValueGuessRemainder < 0 || intValueGuessRemainder > 9999)
                {
                    cout << "Please enter a remainder between 0 and 9999:";
                    cin.clear();
                    cin.ignore();
                    cin >> intValueGuessRemainder;
                }
                
                if(intValueGuess == intValueResult && intValueGuessRemainder == intValueResultRemainder)
                {
                    cout << "Congratulations! You got the answer right!\n";
                }
                else
                {
                    cout << "The correct answer is " << intValueResult << 'R' << intValueResultRemainder << endl;
                }
                break;
        }
        
        cout << "Please select and option from the menu below:\n"
             << "1. Addition\n"
             << "2. Subtraction\n"
             << "3. Multiplication\n"
             << "4. Division\n"
             << "5. Quit\n";
        cin >> intOperationSelector;
        
        while(intOperationSelector != 1 && intOperationSelector != 2 &&
              intOperationSelector != 3 && intOperationSelector != 4 &&
              intOperationSelector != 5)
        {
            cout << "Please make a valid selection:\n"
                 << "1. Addition\n"
                 << "2. Subtraction\n"
                 << "3. Multiplication\n"
                 << "4. Division\n"
                 << "5. Quit\n";
            cin >> intOperationSelector;
        }
    }
    return 0;
}








