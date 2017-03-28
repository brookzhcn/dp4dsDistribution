// File: DictionaryBST/DictionaryBST.hpp

#ifndef DICTIONARYBST_HPP_
#define DICTIONARYBST_HPP_

#include "../ADictionary/ADictionary.hpp"
#include "../BiTreeCSV/BiTreeCSV.hpp"
#include "DictTcontainsVis.hpp"
#include "DictTinsertVis.hpp"
#include "DictTremoveVis.hpp"
#include "DictTtoStreamVis.hpp"

// ========= DictionaryBST =========

template <class K, class V>
class DictionaryBST : public ADictionary<K, V> {
private:
    BiTreeCSV< DictPair<K, V> > *_tree;

public:

    DictionaryBST() :
        _tree(new BiTreeCSV< DictPair<K, V> >()) {
    }

    ~DictionaryBST() {
        delete _tree;
    }

    void clear() override {
        delete _tree;
        _tree = new BiTreeCSV< DictPair<K, V> >();
    }

    void insert(K const &key, V const &val) override {
        DictTinsertVis<K, V> dictTinsertVis(key, val);
        _tree->accept(dictTinsertVis);
    }

    bool remove(K const &key, V &val) override {
        DictTremoveVis<K, V> dictTremoveVis(key);
        _tree->accept(dictTremoveVis);
        return dictTremoveVis.result(val);
    }

    bool contains(K const &key, V &val) const override {
        DictTcontainsVis<K, V> dictTcontainsVis(key);
        _tree->accept(dictTcontainsVis);
        return dictTcontainsVis.result(val);
    }

    void toStream(ostream &os) const override {
        DictTtoStreamVis< DictPair<K, V> > dictTtoStreamVis(os);
        _tree->accept(dictTtoStreamVis);
    }
};

#endif
