// File: DictionaryL/DictionaryL.hpp

#ifndef DICTIONARYL_HPP_
#define DICTIONARYL_HPP_

#include "../ADictionary/ADictionary.hpp"
#include "../ListCSV/ListCSV.hpp"
#include "../ListCSV/LCSVtoStreamVis.hpp"
#include "DictLcontainsVis.hpp"
#include "DictLinsertVis.hpp"
#include "DictLremoveVis.hpp"

// ========= DictionaryL =========
template <class K, class V>
class DictionaryL: public ADictionary<K, V> {
private:
    ListCSV< DictPair<K, V> > *_list;

public:
    DictionaryL():
        _list(new ListCSV< DictPair<K, V> >()) {
    }

    ~DictionaryL() {
        delete _list;
    }

    void clear() override {
        delete _list;
        _list = new ListCSV< DictPair<K, V> >();
    }

    void insert(K const &key, V const &val) override {
        DictLinsertVis<K, V> insertVis(key, val);
        _list->accept(insertVis);
    }

    bool remove(K const &key, V &val) override {
        DictLremoveVis<K, V> removeVis(key);
        _list->accept(removeVis);
        return removeVis.result(val);
    }

    bool contains(K const &key, V &val) const override {
        DictLcontainsVis<K, V> containsVis(key);
        _list->accept(containsVis);
        return containsVis.result(val);
    }

    void toStream(ostream &os) const override {
        os << *_list;
    }
};

#endif
