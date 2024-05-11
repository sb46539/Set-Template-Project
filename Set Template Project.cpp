#include <iostream>
#include "unorderedSetType.h"

using namespace std;

int main() {
    unorderedSetType<int> intSet;
    unorderedSetType<string> strSet;


    intSet.insertEnd(10); // precond: none; postcond; inserts 10 into inSet
    intSet.insertEnd(20); // precond: none; postcond;inserts 20 into inSet
    intSet.insertEnd(30); // precond: none; postcond;inserts 30 into inSet
    intSet.insertEnd(20); // precond: none; postcond;inserts 20 into inSet

    strSet.insertEnd("apple"); // precond: none; postcond; inserts "apple" into strSet
    strSet.insertEnd("banana"); // precond: none; postcond; inserts "banana" into strSet.
    strSet.insertEnd("cherry"); // precond: none; postcond; inserts "cherry" into strSet.
    strSet.insertEnd("banana"); // precond: none; postcond; inserts "banana" into strSet.

    cout << "Integer Set: ";
    intSet.print(); // precond: none; postcond: prints elements of inSet followed by newline
    cout << endl;

    cout << "String Set: ";
    strSet.print(); // precond: none; postcond: prints elements of strSet followed by newline
    cout << endl;


    unorderedSetType<int> intSet2;
    intSet2.insertEnd(30); // precond: none; postcond: insert 30 into intSet2
    intSet2.insertEnd(40); // precond: none; postcond: insert 40 into intSet2

    unorderedSetType<int> unionSet = intSet + intSet2; // precond: assumes both intSet and intSet2 are of the same type T; postcond: creates new set unionSet that contains elements from intSet and intSet2 without dupes
    unorderedSetType<int> intersectSet = intSet - intSet2; // precond: assumes both intSet and intSet2 are of the same type T; postcond: creates net set intersectSet that contains elements present in intSet but not in intSet2

    cout << "Union of Integer Sets: ";
    unionSet.print(); // precond: none; postcond: prints elements of unionSet followed by a newline
    cout << endl;

    cout << "Intersection of Integer Sets: ";
    intersectSet.print(); // precond: none; postcond: prints elements of intersectSet followed by a newline
    cout << endl;

    return 0;
}
