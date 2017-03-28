// File: Sort/SortIntMain.cpp

#include <cstdlib> // EXIT_SUCCESS.
#include <iostream> // cout.
#include <fstream> // ifstream.
#include <cctype> // toupper.
#include "../Utilities/Utilities.hpp"
#include "../ArrayT/ArrayT.hpp" // readStream, writeStream.
#include "../ASorter/ASorter.hpp"
#include "../ASorter/MergeSorter.hpp"
#include "../ASorter/QuickSorter.hpp"
#include "../ASorter/InsertSorter.hpp"
#include "../ASorter/SelectSorter.hpp"
#include "../ASorter/HeapSorter.hpp"
using namespace std;

int main() {
    char response;
    ArrayT<int> array(promptIntGE("Enter array capacity", 1));
    ASorter<int> *sorter;
    ifstream ifs;
    promptFileOpen(ifs);
    if (ifs) {
        int length = 0;
        readStream(ifs, array, length);
        ifs.close();
        cout << "Read count == " << length << endl;
        cout << "Array data:" << endl;
        writeStream(cout, array, length);
        cout << "(m)erge  (q)uick  (i)nsert  (s)elect  (h)eap: ";
        cin >> response;
        switch (toupper(response)) {
        case 'M':
            sorter = new MergeSorter<int>(length);
            break;
        case 'Q':
            sorter = new QuickSorter<int>;
            break;
        case 'I':
            sorter = new InsertSorter<int>;
            break;
        case 'S':
            sorter = new SelectSorter<int>;
            break;
        case 'H':
            sorter = new HeapSorter<int>(array, 0, length - 1);
            break;
        default:
            break;
        }
        sorter->sort(array, 0, length - 1);
        delete sorter;
        cout << "Array data:" << endl;
        writeStream(cout, array, length);
    }
    return EXIT_SUCCESS;
}

