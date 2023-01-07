#include "doubly_linked_list.h"
#include<iostream>

using namespace std;

int main() {
    DLinkedList<double> a;
    a.addFront(2.5);
    a.addBack(1.2);
    cout << a.front() << " " << a.back() << endl;
    return 1;
}