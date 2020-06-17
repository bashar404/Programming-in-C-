/*
Have the function FirstFactorial(num) take the num parameter being passed and return the factorial of it. 
For example: if num = 4, then your program should return (4 * 3 * 2 * 1) = 24. 
For the test cases, the range will be between 1 and 18 and the input will always be an integer.
*/
#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) 
{
  num=8;int fact=1;
  for(int i=num; i>=1; i--)
  {
    fact=fact*i;
    num=fact;
  }
  return num;
}

int main(void) { 
   
  // keep this function call here
  cout << FirstFactorial(gets(stdin));
  return 0; 
}
