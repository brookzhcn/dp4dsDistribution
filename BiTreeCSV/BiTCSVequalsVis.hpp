// File: BiTreeCSV/BiTCSVequalsVis.hpp

#ifndef BITCSVEQUALSVIS_HPP_
#define BITCSVEQUALSVIS_HPP_

#include <iostream>
#include "BiTreeCSV.hpp"
#include "ABiTreeCSVVis.hpp"
#include "BiTCSVisEmptyVis.hpp"
using namespace std;

template<class T> class BiTCSVequalsHelperVis; // Forward declaration.

// ========= BiTCSVequalsVis =========
template<class T>
class BiTCSVequalsVis : public ABiTreeCSVVis<T> {
private:
    BiTreeCSV<T> const &_rhs; // Input parameter.
    bool _result; // Output result.

public:
    // ========= Constructor =========
    BiTCSVequalsVis(BiTreeCSV<T> const &rhs):
        _rhs(rhs) {
    }

    // ========= visit =========
    void emptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVequalsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVequalsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVequalsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVequalsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: true is returned if the host tree is equal to rhs;
    // otherwise, false is returned.
    // Two trees are equal if they contain the same number of equal elements
    // with the same shape.
    bool result() const {
        cerr << "BiTCSVequalsVis: Exercise for the student." << endl;
        throw -1;
    }
};

// ========= BiTCSVequalsHelperVis =========
template<class T>
class BiTCSVequalsHelperVis : public ABiTreeCSVVis<T> {
private:
    T const &_data; // Input parameter.
    BiTreeCSV<T> const &_left; // Input parameter.
    BiTreeCSV<T> const &_right; // Input parameter.
    bool _result; // Output result.

public:
    // ========= Constructor =========
    BiTCSVequalsHelperVis
    (T const &data, BiTreeCSV<T> const &left, BiTreeCSV<T> const &right):
        _data(data), _left(left), _right(right) {
    }

    // ========= visit =========
    void emptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVequalsHelperVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> &host) override {
        cerr << "BiTCSVequalsHelperVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVequalsHelperVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<T> const &host) override {
        cerr << "BiTCSVequalsHelperVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: true is returned if root equals host.root(),
    // left equals host.left(), and right equals host.right();
    // otherwise, false is returned.
    bool result() const {
        cerr << "BiTCSVequalsHelperVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience.
// ========= operator== =========
template<class T>
bool operator==(BiTreeCSV<T> const &lhs, BiTreeCSV<T> const &rhs) {
    cerr << "operator==: Exercise for the student." << endl;
    throw -1;
}

#endif
