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
    void push(int data){            //push the data in stack;
      sll* newnode = new sll;
      if(newnode==nullptr){
        cout << "Stack overflow" << "\n";
        return;
      }
      newnode->data = data;
      newnode->link = top;
      top = newnode;
    }
    int pop(){                      //pop the data in stack;
      if(empty())
      {
        cout << "Stack Underflow" << "\n";
        exit(1);
      }
      sll* tmp = top;
      int item = tmp->data;
      top=top->link;
      delete tmp;
      return item;
    }
};

