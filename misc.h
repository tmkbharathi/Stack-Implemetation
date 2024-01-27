#include<iostream>
using std::cin, std::cout, std::endl;
//structure declaration
typedef struct node{
    int data;
    struct node* link;
} sll;

namespace misc
{
  sll* reverselist(sll* start)     //for copy constructor (new linkedlist)
    {
      sll *prev, *ptr, *next;
      prev = nullptr;
      ptr = start;
      while(ptr != nullptr)
      {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
      }
      start = prev;
      return start;
  }
}

