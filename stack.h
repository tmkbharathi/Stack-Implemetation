#include"misc.h"
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
    void swap(mystack &second)         //swap the values in the classes 
    {
      std::swap(l_top, second.l_top);
      std::swap(t_size, second.t_size);
    }
    mystack(const mystack& cpystack) : l_top(nullptr), t_size(0)        //copy constructor : Initializer list 
    {
        node* tmp = cpystack.l_top;
        while (tmp != nullptr) 
        {
            push(tmp->data);
            tmp = tmp->link;
        }
        l_top = misc::reverselist(l_top);
    }
    ~mystack(){                       //destructor
      sll* cur = l_top;
      while(cur != nullptr)
      {
        sll* nxt = cur->link;
        delete cur;
        cur = nxt;
      }
    }
};

