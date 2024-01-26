#include<iostream>
using std::cin, std::cout, std::endl;
//structure declaration
typedef struct node{
    int data;
    struct node* link;
} sll;

template <class S>
//class declaration
class mystack{
   private:
     sll* top;
   public:
     mystack()                      //default constructor
     {
        top=nullptr;
     }
    int empty()                     //empty stack means return 1 if anycontains return 0; 
    {
        return (top==nullptr);
    }
};

