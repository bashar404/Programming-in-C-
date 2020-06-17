/*
Questions Marks
Have the function QuestionsMarks(str) take the str string parameter, which will contain single digit numbers, letters, and 
question marks, and check if there are exactly 3 question marks between every pair of two numbers that add up to 10. 
If so, then your program should return the string true, otherwise it should return the string false. 
If there aren't any two numbers that add up to 10 in the string, then your program should return false as well.
For example: if str is "arrb6???4xxbl5???eee5" then your program should return true because there are exactly 3 question marks between 6 and 4, and 3 question marks between 5 and 5 at the end of the string.
Examples
Input: "aa6?9"
Output: falseInput: "acc?7??sss?3rr1??????5"
Output: true
*/

#include <iostream>
#include <string>
using namespace std;

string QuestionsMarks(string str) {
  int i,j,total=0;int count_Q_marks=0;bool correct=false;
  for(i=0;i<=str.length()-1;i++)
  {
      if(str[i]>='0'   &&  str[i]<='9')
      {
          for(j=0;j<=str.length()-1;j++)
          {
              if(str[j]>='0'   &&  str[j]<='9')
                {
                    total= ( int(str[i]) - 48 ) + ( int(str[j]) - 48 )  ;

                    if(total==10)
                      {
                        correct=true;
                     
                          //count QuestionsMarks
                        for( int x=i; x<=j; x++)
                          {
                             if(str[x]=='?')
                                count_Q_marks++;
                          }
                          if(count_Q_marks != 3)
                              return "false";
                          else
                              break;
                      }
                }
          }
      }
  }
if(correct)
    return "true";
else
    return "false";
}

int main(void) 
{ 
  cout << QuestionsMarks(gets(stdin));
  return 0; 
}
