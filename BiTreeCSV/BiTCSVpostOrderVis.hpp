// File: BiTreeCSV/BiTCSVpostOrderVis.hpp

#ifndef BITCSVPOSTORDERVIS_HPP_
#define BITCSVPOSTORDERVIS_HPP_

#include <iostream>
#include "BiTreeCSV.hpp"
#include "ABiTreeCSVVis.hpp"
using namespace std;

// ========= BiTCSVpostOrderVis =========
template<class T>
class BiTCSVpostOrderVis : public ABiTreeCSVVis<T> {
private:
    ostream &_os; // Input paramter.

public:
    // ========= Constructor =========
    BiTCSVpostOrderVis(ostream &os):
        _os(os) {
    }

    // ========= visit =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: A postOrder representation of this tree is sent to os.
    void emptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVpostOrderVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVpostOrderVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVpostOrderVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVpostOrderVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience
template<class T>
void postOrder(ostream &os, BiTreeCSV<T> const &tree) {
    cerr << "concat: Exercise for the student." << endl;
    throw -1;
}

#endif
