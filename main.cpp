#include"stack.h"

int main()
{
  mystack<int>arr1;
  arr1.push(3);
  arr1.push(5);
  mystack<int>arr2(arr1);
  arr2.push(1);
  arr2.push(8);
  arr2.push(10);
  arr1.pop();
  arr1.push(11);
  cout << "Empty or not  = "  << arr1.empty() << "\n";
  cout << "Size of stack = "  << arr1.size() << "\n";
  cout << "Empty or not  = "  << arr2.empty() << "\n";
  cout << "Size of stack = "  << arr2.size() << "\n";
 cout<< "Array one:\n";
  while(!arr1.empty())
  {
      cout << arr1.top() << "\n";
      arr1.pop();
  }
  cout<< "Array two:\n";
  while(!arr2.empty())
  {
      cout << arr2.top() << "\n";
      arr2.pop();
  }
 // arr1.swap(arr2);
  /*cout<< "Array one:\n";
  while(!arr1.empty())
  {
      cout << arr1.top() << "\n";
      arr1.pop();
  }
  cout<< "Array two:\n";
  while(!arr2.empty())
  {
      cout << arr2.top() << "\n";
      arr2.pop();
  }*/
  
  return 0;
}


