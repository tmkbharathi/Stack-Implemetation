#include"stack.h"

int main()
{
  mystack<int>arr;
  cout << "Empty or not  = "  << arr.empty() << "\n";
  cout << "Size of stack = "  << arr.size() << "\n";
  arr.push(3);
  arr.pop();
  arr.pop();
  
  return 0;
}


