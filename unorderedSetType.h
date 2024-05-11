#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

template <typename T>
class unorderedSetType {
private:
    unordered_set<T> set;

public:
    //  Precond: assumes newItem is of type T and can be put into unordered_set; postcond: insertes newItem into unordered_set

    void insertEnd(const T& newItem) {
        set.insert(newItem);
    }

    // precond: none; postcond: prints all elements in unordered_set separted by spaces, followed by newline character
    void print() const {
        for (const auto& item : set) {
            cout << item << " ";
        }
        cout << endl;
    }
    // precond: assumes both current object and other object are of same type T; postcond: returns a new unorderedSetType object that contains all elements from both sets, without dupes
    unorderedSetType<T> operator+(const unorderedSetType<T>& other) const {
        unorderedSetType<T> result = *this;
        for (const auto& item : other.set) {
            result.set.insert(item);
        }
        return result;
    }
   
    // precond: assumes both current object and other object are of same type T; postcond: returns a new unorderedSetType object that contains all elements from current set that aren't present in other set
    unorderedSetType<T> operator-(const unorderedSetType<T>& other) const {
        unorderedSetType<T> result = *this;
        for (const auto& item : other.set) {
            result.set.erase(item);
        }
        return result;
    }
};
