// File: DictionaryBST/DictTremoveVis.hpp

#ifndef DICTTREMOVEVIS_HPP_
#define DICTTREMOVEVIS_HPP_

#include <iostream>
#include "../ADictionary/ADictionary.hpp"
#include "../BiTreeCSV/BiTreeCSV.hpp"
#include "../BiTreeCSV/BiTCSVisEmptyVis.hpp"
using namespace std;

// ========= DictTremoveVis =========

template <class K, class V>
class DictTremoveVis : public ABiTreeCSVVis< DictPair<K, V> > {
private:
    K const &_key; // Input parameter.
    V _val; // Output result.
    bool _found; // Output result.

public:
    // ========= Constructor =========

    DictTremoveVis(K const &key) :
            _key(key) {
    }

    // ========= visit =========

    void emptyCase(BiTreeCSV<DictPair<K, V> > &host) override {
        cerr << "DictTremoveVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<DictPair<K, V> > &host) override {
        cerr << "DictTremoveVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========

    void emptyCase(BiTreeCSV<DictPair<K, V> > const &host) override {
        cerr << "DictTremoveVis precondition violated: "
             << "Cannot remove from a const tree." << endl;
        throw -1;
    }

    void nonEmptyCase(BiTreeCSV<DictPair<K, V> > const &host) override {
        cerr << "DictTremoveVis precondition violated: "
             << "Cannot remove from a const tree." << endl;
        throw -1;
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host tree.
    // Post: If key is found, then val is the associated value, and true is returned;
    // otherwise false is returned.
    // The host dictionary does not contain key and its associated value.

    bool result(V &val) const {
        if (_found) {
            cerr << "DictTremoveVis: Exercise for the student." << endl;
            throw -1;
        }
    };
};
#endif
