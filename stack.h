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
     unsigned int t_size;
   public:
     mystack()                      //default constructor
     {
        top=nullptr;
        t_size=0;
     }
    bool empty()                     //empty stack means return 1 if anycontains return 0; 
    {
        return (top==nullptr);
    }
    unsigned int size()
    {
      return t_size;
    }
    ~mystack(){                       //destructor
      if(top != nullptr)
      {
        sll* tmp = top;
        while(tmp != nullptr)
        {
            delete tmp;
            tmp=tmp->link;
        }
      }
    }
};

