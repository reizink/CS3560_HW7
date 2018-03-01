#ifndef LINKED_LIST_H
#define LINKED_LIST_H

template <typename T>
class LinkedList {

public:
  LinkedList() : head(NULL) {}
  ~LinkedList();
    
  //added for convenience
  bool isEmpty();
    
  void push_front(const T data);
  void pop_front();
  void reverse();
  void print() const;

private:
  struct ListNode {
    ListNode(const T data) : data(data), next(NULL) {}

    T data;
    ListNode* next;
  };

  ListNode* head;
};

#endif
