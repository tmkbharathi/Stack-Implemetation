#include"misc.h"
#include <initializer_list>
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
    mystack& operator= (const mystack& rhs)                 //Copy assignment operator it just copy the values its shared memory
    {                                                       
       if (this != &rhs) {                                  // Check for self-assignment
        cout << "assignment operator\n";
        misc::clear(l_top);
        
        this->t_size = rhs.t_size;                          //shallow copy not here deep copy!
        sll* rhs_cur = rhs.l_top;
        sll* prev = nullptr;
        while (rhs_cur != nullptr) 
        {
            sll* new_node = new sll;
            new_node->data = rhs_cur->data;
            if (prev == nullptr) 
            {
                l_top = new_node;
            } 
            else {
                prev->link = new_node;
            }
            prev = new_node;
            rhs_cur = rhs_cur->link;
        }
    }
    return *this;
    }
    mystack(std::initializer_list<int>list) : l_top(nullptr), t_size(0)                    //parameaterised constructor
    {
      for (auto it = list.begin(); it != list.end(); ++it)                                  //iterator
      {
            push(*it);
      }
    }
    ~mystack(){                       //destructor
      misc::clear(l_top);
    }
};

