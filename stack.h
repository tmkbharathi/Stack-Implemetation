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
     sll* l_top;
     unsigned int t_size;
   public:
     mystack()                      //default constructor
     {
        l_top=nullptr;
        t_size=0;
     }
    bool empty()                     //empty stack means return 1 if anycontains return 0; 
    {
        return (l_top==nullptr);
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
      newnode->link = l_top;
      t_size++;
      l_top = newnode;
    }
    int pop(){                      //pop the data in stack;
      if(empty())
      {
        cout << "Stack Underflow" << "\n";
        exit(1);
      }
      sll* tmp = l_top;
      int item = tmp->data;
      l_top = l_top->link;
      t_size--;
      delete tmp;
      return item;
    }
    int top(){                      //top of the stack
      if(empty())
      {
        cout << "Stack Underflow" << "\n";
        exit(1);
      }
      return l_top->data;
    }
    ~mystack(){                       //destructor
      if(l_top != nullptr)
      {
        sll* tmp = l_top;
        while(tmp->link != nullptr)
        {
            delete tmp;
            tmp=tmp->link;
        }
        delete tmp;
      }
    }
};

