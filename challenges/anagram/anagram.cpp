#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

bool is_anagram(string s1, string s2);

int main(int argc, char** argv)
{
   /* Get number of entries */
   int lines;
   cin >> lines;

   /* Iterate over the arguments */   
   while(lines--){
      string s1,s2;
      cin >> s1;
      cin >> s2;
     
      if(is_anagram(s1,s2))
         cout << s1 << " is an anagram of " << s2 << endl;
      else
         cout << s1 << " is not an anagram of " << s2 << endl;
   }
   return 0;
}

/*
Function responsible for verifying if two string entries are 
anagrams between each other
*/
bool is_anagram(string s1, string s2)
{
   sort(s1.begin(), s1.end());
   sort(s2.begin(), s2.end());
   return s1 == s2;
}


