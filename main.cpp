#include"stack.h"

int main()
{
  mystack<int>arr;
  cout << "Empty or not  = "  << arr.empty() << "\n";
  cout << "Size of stack = "  << arr.size() << "\n";
  arr.push(3);
  arr.push(5);
  cout << arr.top() << endl;
  arr.pop();
  cout << arr.top() << endl;
  cout << "Empty or not  = "  << arr.empty() << "\n";
  cout << "Size of stack = "  << arr.size() << "\n";
  
  return 0;
}


