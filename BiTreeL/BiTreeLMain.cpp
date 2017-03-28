// File: BiTreeL/BiTreeLMain.cpp

#include <cstdlib> // EXIT_SUCCESS.
#include <cctype> // toupper.
#include "../Utilities/Utilities.hpp" // promptIntBetween.
#include "BiTreeL.hpp"
#include "../ArrayP/ArrayP.hpp"

const int NUM_TREES = 5;

typedef BiTreeL<int> BiTreeLInt;
typedef ArrayP<BiTreeLInt *> ArrayOftreeIntP;

int main() {
    ArrayOftreeIntP trees(NUM_TREES);
    int value;
    int treeNum, treeNum2;
    for (int i = 0; i < NUM_TREES; i++) {
        trees[i] = new BiTreeLInt();
    }
    char response;
    do {
        cout << "\nThere are [0.." << NUM_TREES - 1 << "] binary trees." << endl;
        cout << "(r)oot        (s)etRoot   (i)nsertRoot  remRoo(t)   setLe(f)t    setRi(g)ht\n"
             << "cl(o)ne       (c)lear     remLea(v)es   n(u)mNodes  numLe(a)ves  (h)eight\n"
             << "(m)ax         co(n)tains  equa(l)       (w)rite     preOrder(x)  inOrder(y)\n"
             << "postOrder(z)  (q)uit: ";
        cin >> response;
        switch (toupper(response)) {
        case 'R':
            treeNum = promptIntBetween("Root value of which tree? ", 0, NUM_TREES - 1);
            if (trees[treeNum]->isEmpty()) {
                cout << "\nThe tree is empty." << endl;
            }
            else {
                cout << "\nThe root value is " << trees[treeNum]->root() << endl;
            }
            break;
        case 'S':
            cout << "Set root to what integer value? ";
            cin >> value;
            treeNum = promptIntBetween("Set root of which tree? ", 0, NUM_TREES - 1);
            if (trees[treeNum]->isEmpty()) {
                cout << "\nThe tree is empty." << endl;
            }
            else {
                trees[treeNum]->setRoot(value);
            }
            break;
        case 'I':
            cout << "Insert what integer value? ";
            cin >> value;
            treeNum = promptIntBetween("Insert root into which tree? ", 0, NUM_TREES - 1);
            if (trees[treeNum]->isEmpty()) {
                trees[treeNum]->insertRoot(value);
            }
            else {
                cout << "\nThe tree must be empty to insert root." << endl;
            }
            break;
        case 'T':
            treeNum = promptIntBetween("Remove root from which tree? ", 0, NUM_TREES - 1);
            if (trees[treeNum]->isEmpty()) {
                cout << "\nThe tree is empty." << endl;
            }
            else {
                if (trees[treeNum]->leftIsEmpty() || trees[treeNum]->rightIsEmpty()) {
                    cout << endl << trees[treeNum]->remRoot() << " was removed." << endl;
                }
                else {
                    cout << "\nThe tree must have at least one empty child." << endl;
                }
            }
            break;
        case 'F':
            treeNum = promptIntBetween("Set the left child of which tree? ", 0, NUM_TREES - 1);
            treeNum2 = promptIntBetween("Set it to which tree? ", 0, NUM_TREES - 1);
            if (treeNum == treeNum2) {
                cout << "\nThe trees must be distinct." << endl;
            }
            else {
                if (trees[treeNum]->isEmpty()) {
                    cout << "\nThe first tree cannot be empty." << endl;
                }
                else {
                    trees[treeNum]->setLeft(*trees[treeNum2]);
                }
            }
            break;
        case 'G':
            treeNum = promptIntBetween("Set the right child of which tree? ", 0, NUM_TREES - 1);
            treeNum2 = promptIntBetween("Set it to which tree? ", 0, NUM_TREES - 1);
            if (treeNum == treeNum2) {
                cout << "\nThe trees must be distinct." << endl;
            }
            else {
                if (trees[treeNum]->isEmpty()) {
                    cout << "\nThe first tree cannot be empty." << endl;
                }
                else {
                    trees[treeNum]->setRight(*trees[treeNum2]);
                }
            }
            break;
        case 'O':
            treeNum = promptIntBetween("Clone which tree? ", 0, NUM_TREES - 1);
            treeNum2 = promptIntBetween("Copy to which tree? ", 0, NUM_TREES - 1);
            *trees[treeNum2] = *trees[treeNum];
            break;
        case 'C':
            treeNum = promptIntBetween("Clear which tree? ", 0, NUM_TREES - 1);
            trees[treeNum]->clear();
            break;
        case 'V':
            treeNum = promptIntBetween("Remove leaves from which tree? ", 0, NUM_TREES - 1);
            trees[treeNum]->remLeaves();
            break;
        case 'U':
            treeNum = promptIntBetween("Number of nodes for which tree? ", 0, NUM_TREES - 1);
            cout << "\nThe number of nodes is " << trees[treeNum]->numNodes() << endl;
            break;
        case 'A':
            treeNum = promptIntBetween("Number of leaves for which tree? ", 0, NUM_TREES - 1);
            cout << "\nThe number of leaves is " << trees[treeNum]->numLeaves() << endl;
            break;
        case 'H':
            treeNum = promptIntBetween("Height of which tree? ", 0, NUM_TREES - 1);
            cout << "\nThe height is " << trees[treeNum]->height() << endl;
            break;
        case 'M':
            treeNum = promptIntBetween("Maximum of which tree? ", 0, NUM_TREES - 1);
            if (trees[treeNum]->isEmpty()) {
                cout << "\nThe tree is empty." << endl;
            }
            else {
                cout << "\nThe maximum element is " << trees[treeNum]->max() << endl;
            }
            break;
        case 'N':
            cout << "Search for what integer value? ";
            cin >> value;
            treeNum = promptIntBetween("Search which tree? ", 0, NUM_TREES - 1);
            if (trees[treeNum]->contains(value)) {
                cout << "\nThe tree contains " << value << "." << endl;
            }
            else {
                cout << "\nThe tree does not contain " << value << "." << endl;
            }
            break;
        case 'L':
            treeNum = promptIntBetween("First tree? ", 0, NUM_TREES - 1);
            treeNum2 = promptIntBetween("Second tree? ", 0, NUM_TREES - 1);
            if (*trees[treeNum] == *trees[treeNum2]) {
                cout << "\nThe trees are equal." << endl;
            }
            else {
                cout << "\nThe trees are not equal." << endl;
            }
            break;
        case 'W':
            treeNum = promptIntBetween("Write which tree? ", 0, NUM_TREES - 1);
            cout << endl << *trees[treeNum] << endl;
            break;
        case 'X':
            treeNum = promptIntBetween("Preorder of which tree? ", 0, NUM_TREES - 1);
            cout << endl;
            trees[treeNum]->preOrder(cout);
            break;
        case 'Y':
            treeNum = promptIntBetween("Inorder of which tree? ", 0, NUM_TREES - 1);
            cout << endl;
            trees[treeNum]->inOrder(cout);
            break;
        case 'Z':
            treeNum = promptIntBetween("Postorder of which tree? ", 0, NUM_TREES - 1);
            cout << endl;
            trees[treeNum]->postOrder(cout);
            break;
        case 'Q':
            break;
        default:
            cout << "\nIllegal command." << endl;
            break;
        }
    }
    while (toupper(response) != 'Q');
    return EXIT_SUCCESS;
}
