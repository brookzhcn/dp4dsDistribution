// File: NTree/NTreeMain.cpp

#include <cstdlib> // EXIT_SUCCESS.
#include <cctype> // toupper.
#include "../Utilities/Utilities.hpp" // promptIntBetween.
#include "../ArrayP/ArrayP.hpp"

#include "NTree.hpp"
#include "NTreeRootSizeVis.hpp"
#include "NTreeInOrderVis.hpp"
#include "NTreeToStreamVis.hpp"

typedef NTree<int> NTreeInt;
typedef ArrayP<NTreeInt *> ArrayOfNTreeIntP;

const int NUM_TREES = 5;

int main() {
    char response;
    ArrayOfNTreeIntP trees(NUM_TREES);
    int value, size, index;
    int treeNum, treeNum2;
    NTreeInt *temp;
    for (int i = 0; i < NUM_TREES; i++) {
        trees[i] = new NTreeInt();
    }
    do {
        cout << "\nThere are [0.." << NUM_TREES - 1 << "] n-way trees." << endl;
        cout << "make(E)mpty  make(S)ingle  spli(c)eAt  split(U)pAt  split(D)ownAt\n"
             << "in(O)rder    (w)rite       (q)uit: ";
        cin >> response;
        switch (toupper(response)) {
        case 'E':
            treeNum = promptIntBetween("Make which tree empty? ", 0, NUM_TREES - 1);
            delete trees[treeNum];
            trees[treeNum] = new NTreeInt();
            break;
        case 'S':
            cout << "Make tree with what integer value? ";
            cin >> value;
            treeNum = promptIntBetween("Which tree? ", 0, NUM_TREES - 1);
            delete trees[treeNum];
            trees[treeNum] = new NTreeInt(value);
            break;
        case 'C':
            treeNum = promptIntBetween("Splice into which receiver tree? ", 0, NUM_TREES - 1);
            index = promptIntBetween("Splice into what position? ", 0, rootSize(*trees[treeNum]));
            treeNum2 = promptIntBetween("Splice which tree? ", 0, NUM_TREES - 1);
            if (treeNum == treeNum2) {
                cout << "The trees must be distinct." << endl;
            } else if (rootSize(*trees[treeNum]) == 0 || rootSize(*trees[treeNum2]) == 0) {
                trees[treeNum]->spliceAt(index, trees[treeNum2]);
            } else { // Must garbage collect.
                temp = trees[treeNum]->getChild(index);
                trees[treeNum]->spliceAt(index, trees[treeNum2]);
                if (rootSize(*temp) == 0) {
                    cout << "\nGarbage collecting an empty tree." << endl;
                } else {
                    cout << "\nGarbage collecting ";
                    inOrder(cout, *temp);
                    cout << endl;
                }
                delete temp;
            }
            break;
        case 'U':
            treeNum = promptIntBetween("Split up which tree? ", 0, NUM_TREES - 1);
            if (rootSize(*trees[treeNum]) == 0) {
                index = promptIntBetween("Split up at what position? ", 0, 0);
            } else {
                index = promptIntBetween("Split up at what position? ", 0, rootSize(*trees[treeNum]) - 1);
            }
            trees[treeNum]->splitUpAt(index);
            break;
        case 'D':
            treeNum = promptIntBetween("Split down which tree? ", 0, NUM_TREES - 1);
            if (rootSize(*trees[treeNum]) == 0) {
                index = promptIntBetween("Split down at what position? ", 0, 0);
            } else {
                index = promptIntBetween("Split down at what position? ", 0, rootSize(*trees[treeNum]) - 1);
            }
            trees[treeNum]->splitDownAt(index);
            break;
        case 'O':
            treeNum = promptIntBetween("Inorder traversal of which tree? ", 0, NUM_TREES - 1);
            cout << endl;
            inOrder(cout, *trees[treeNum]);
            break;
        case 'W':
            treeNum = promptIntBetween("Write which tree? ", 0, NUM_TREES - 1);
            cout << endl << *trees[treeNum] << endl;
            break;
        case 'Q':
            break;
        default:
            cout << "\nIllegal command." << endl;
            break;
        }
    } while (toupper(response) != 'Q');
    return EXIT_SUCCESS;
}
