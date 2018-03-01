//
//  linked_list.cpp
//  
//
//  Created by Austin Hugenberg on 1/23/18.
//

#include <stdio.h>
#include "linked_list.h"

using namespace std;

template <typename T>
LinkedList<T>::~LinkedList() {
    
    while (head != NULL) {
        ListNode* nextNode = head->next;
        delete head;
        head = nextNode;
    }
}

template<typename T>
bool LinkedList<T>::isEmpty() {
    return (head == NULL);
}

template <typename T>
void LinkedList<T>::push_front(const T data) {
    ListNode* l = new ListNode(data);
    l->next = head;
    head = l;
}

template <typename T>
void LinkedList<T>::pop_front() {
    if (head != NULL) {
        ListNode* nextNode = head->next;
        delete head;
        head = nextNode;
    }
}

template <typename T>
void LinkedList<T>::reverse() {
    if (head != NULL) {
        ListNode* nextNode = head->next;
        //this is so we don't have cyclical pointers when we reverse pointers
        head->next = NULL;
        while (nextNode != NULL) {
            ListNode* holder = nextNode->next;
            nextNode->next = head;
            head = nextNode;
            nextNode = holder;
        }
    }
}

template <typename T>
void LinkedList<T>::print() const {
    if (head != NULL) {
        cout << head->data << " ";
        ListNode* nextNode = head->next;
        while (nextNode != NULL) {
            cout << nextNode->data << " ";;
            nextNode = nextNode->next;
        }
        cout << endl;
    }
}
