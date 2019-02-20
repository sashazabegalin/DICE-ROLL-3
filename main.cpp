#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(32767);
    
    cout << "Enter dice throw designators..." << endl
    << " # dice: 1 to 8, # sides: 4, 6, 8, 10, 12" << endl
    << " e.g. '2d6', or '0' to quit" << endl;
    
    int nDice = 0;
    int nSides = 0;
    char ch = ' ';
    int randSum = 0;
    int randResult = 0;
    
    
    
    // A "forever" loop...
    while (true) {
        cout << "> ";
        cin >> nDice;
        if (nDice == 0) {
            // User signal to end the prgram
            break;
        }
        cin >> ch >> nSides;
        cout << endl;
    
        // TODO (1): Validate input (skip if bad)
        if (nDice < 1 || nDice > 8 || ch != 'd' || nSides % 2 == 1 || nSides < 4 || nSides > 12) {
            cout << "Invalid Designator" << endl;
            continue;
        }
    
        
        // TODO (2): Start the output (e.g. "2d6 result: ")
        
        cout << nDice << ch << nSides;
        cout << " result: ";
        for (int i = 0; i < nDice; ++i)
        {
            randResult = (rand() % nSides) + 1;
            cout << randResult;
            if (i <(nDice - 1))
            {
                cout << " + ";
            }
            randSum += randResult;
        }
        cout << " = " << randSum << endl;
        randSum = 0;
    
        }
    // TODO (3): Throw some dice and sum/display the result
    
    
    return 0;

        }
