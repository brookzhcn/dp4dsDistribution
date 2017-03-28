// File: ListCSV/LCSVappendVis.hpp

#ifndef LCSVAPPENDVIS_HPP_
#define LCSVAPPENDVIS_HPP_

#include <iostream>
#include "ListCSV.hpp"
#include "AListCSVVis.hpp"
using namespace std;

// ========= LCSVappendVis =========
template<class T>
class LCSVappendVis : public AListCSVVis<T> {
private:
    T const &_data; // Input parameter.

public:
    // ========= Constructor =========
    LCSVappendVis(T const &data):
        _data(data) {
    }

    // ========= visit =========
    // Pre: This visitor has been accepted by a host list.
    // Post: data is appended to this list.

    void emptyCase(ListCSV<T> &host) override {
        cerr << "LCSVappendVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> &host) override {
        cerr << "LCSVappendVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVappendVis precondition violated: "
             << "Cannot append const list." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV<T> const &host) override {
        cerr << "LCSVappendVis precondition violated: "
             << "Cannot append const list." << endl;
        throw -1;
    }
};

// Global function for convenience.
// Post: data is appended to list.
template<class T>
void append(ListCSV<T> &list, T const &data) {
    cerr << "append: Exercise for the student." << endl;
    throw -1;
}

#endif
