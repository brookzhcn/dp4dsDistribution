// File: DictionaryL/DictLcontainsVis.hpp

#ifndef DICTLCONTAINSVIS_HPP_
#define DICTLCONTAINSVIS_HPP_

#include <iostream>
#include "../ADictionary/ADictionary.hpp"
#include "../ListCSV/ListCSV.hpp"
using namespace std;

// ========= DictLcontainsVis =========
template <class K, class V>
class DictLcontainsVis : public AListCSVVis< DictPair<K, V> > {
private:
    K const &_key; // Input parameter.
    V const *_val; // Output result.
    bool _found; // Output result.

public:
    // ========= Constructor =========
    DictLcontainsVis(K const &key):
        _key(key) {
    }

    // ========= visit =========
    void emptyCase(ListCSV< DictPair<K, V> > &host) override {
        cerr << "DictLcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV< DictPair<K, V> > &host) override {
        cerr << "DictLcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= visit const =========
    void emptyCase(ListCSV< DictPair<K, V> > const &host) override {
        cerr << "DictLcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    void nonEmptyCase(ListCSV< DictPair<K, V> > const &host) override {
        cerr << "DictLcontainsVis: Exercise for the student." << endl;
        throw -1;
    }

    // ========= result =========
    // Pre: This visitor has been accepted by a host list.
    // Post: If key is found, then val is the associated value, and true is returned;
    // otherwise false is returned.
    bool result(V &val) const {
        cerr << "DictLcontainsVis: Exercise for the student." << endl;
        throw -1;
    }
};

#endif
