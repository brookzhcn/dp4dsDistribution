// File: StackL/StackLMain.cpp

#include <cstdlib>  // EXIT_SUCCESS.
#include <cctype>    // toupper.
#include "StackL.hpp"

int main() {
    StackL<double> stackL;
    double value;
    char cResponse;
    do {
        cout << "\n(e)mpty  (p)ush  p(o)p  (t)op  (w)rite  (q)uit: ";
        cin >> cResponse;
        switch (toupper(cResponse)) {
        case 'E':
            if (stackL.isEmpty())
                cout << "\nThe stack is empty." << endl;
            else
                cout << "\nThe stack is not empty." << endl;
            break;
        case 'P':
            cout << "Value to push: ";
            cin >> value;
            stackL.push(value);
            break;
        case 'O':
            cout << "\nValue popped: " << stackL.pop() << endl;
            break;
        case 'T':
            cout << "\nStack top: " << stackL.topOf() << endl;
            break;
        case 'W':
            cout << "\nTop --> Bottom" << endl;
            cout << stackL;
            break;
        case 'Q':
            break;
        default:
            cout << "\nIllegal command." << endl;
            break;
        }
    }
    while (toupper(cResponse) != 'Q');
    return EXIT_SUCCESS;
}

