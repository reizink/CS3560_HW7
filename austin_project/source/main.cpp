#include <iostream>
#include "linked_list.h"
#include "linked_list.cpp"

using namespace std;

int main(int argc, char** argv) {
  LinkedList<int> list;
    
    string in;
    cin >> in;
    
    while (!in.empty() && (in.compare("q") != 0)) {
        if (in.compare("p") == 0) {
            if (!list.isEmpty()) {
                list.print();
            } else {
                cout << "Empty" << endl;
            }
        }
        if (in.compare("a") == 0) {
            int i;
            cin >> i;
            list.push_front(i);
        }
        if (in.compare("d") == 0) {
            if (!list.isEmpty()) {
                list.pop_front();
            } else {
                cout << "Empty" << endl;
            }
        }
        if (in.compare("r") == 0) {
            if (!list.isEmpty()) {
                list.reverse();
            } else {
                cout << "Empty" << endl;
            }
        }
        cin >> in;
    }
}
