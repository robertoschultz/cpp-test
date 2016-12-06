#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
   int entries = 0;
   cin >> entries;

   /* iterating over the list to check if each 
   text entry is a palindrome */
   while(entries--)
   {
        string s;
        cin >> s;

      if (s == string(s.rbegin(), s.rend()))
         cout << s << " is palindrome" << endl;
      else
         cout << s << " is not palindrome" << endl;
   }

   return 0;
}

