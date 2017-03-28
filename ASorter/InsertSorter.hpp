// File ASorter/InsertSorter.hpp

#ifndef INSERTSORTER_HPP_
#define INSERTSORTER_HPP_

#include "ASorter.hpp"

template<class T>
class InsertSorter : public ASorter<T> {
public:

    ~InsertSorter() {
    }

protected:
    virtual void split(ASeq<T>&, int lo, int &mid, int hi) override;
    virtual void join(ASeq<T>&, int lo, int mid, int hi) override;
};

template<class T>
void InsertSorter<T>::split(ASeq<T> &, int, int &mid, int hi) {
    // Post: mid == hi.
    mid = hi;
}

template<class T>
void InsertSorter<T>::join(ASeq<T> &a, int lo, int mid, int hi) {
    // Pre: mid == hi && sorted(a[lo..hi - 1]).
    // Post: sorted(a[lo..hi]).
    if (mid!=hi){
        cerr << "mid=hi precondition failed" << endl;
        throw -1;
    }
    T temp=a[hi];
    cout<<temp<<" "<<hi<<" "<<mid<<" "<<lo<<" "<<endl;
    int j=mid-1;
    while(j>=lo&&a[j]>temp){
        //move item at j behind
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}

#endif
