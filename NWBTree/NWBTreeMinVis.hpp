// File: NWBTree/NWBTreeMinVis.hpp

#ifndef NWBTREEMINVIS_HPP_
#define NWBTREEMINVIS_HPP_

#include <iostream>
#include "../NTree/ANTreeVis.hpp"
#include "NWBTreeIsEmptyVis.hpp"
using namespace std;

// ========= NWBTreeMinVis =========

template<class T>
class NWBTreeMinVis : public ANTreeVis<T> {
private:
    T _result; // Output result.

public:
    // ========= Constructor =========
    NWBTreeMinVis() {
    }

    // ========= visit =========
    void caseAt(int size, NTree<T> &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeMinVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeMinVis: Exercise for the student." << endl;
            throw -1;
        }
        }
    }

    // ========= visit const =========

    void caseAt(int size, NTree<T> const &host) override {
        switch (size) {
        case 0:
        {
            cerr << "NWBTreeMinVis: Exercise for the student." << endl;
            throw -1;
        }
        default:
        {
            cerr << "NWBTreeMinVis: Exercise for the student." << endl;
            throw -1;
        }

        }
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: The minimum value of the tree is returned.

    T result() const {
        cerr << "NWBTreeMinVis: Exercise for the student." << endl;
        throw -1;
    }
};

// Global function for convenience

template<class T>
T min(NTree<T> const &tree) {
    cerr << "min: Exercise for the student." << endl;
    throw -1;
}

#endif
