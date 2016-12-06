#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{

   int lines=0;
   int n_dirty=0;

   
   //iterate over the lines to count the dirty bills
   cin >> lines;
   while(lines--)
   {  
      int n_bills=0;
      cin >> n_bills;

      string type;
      cin >> type;

      if(!type.compare("dirty")) {
         n_dirty+=n_bills;
      }
   }


    // printing the result
    if(n_dirty)
       cout << "There are " << n_dirty << " dirty bills." << endl;
    else
       cout << "There are no dirty bills." << endl;

   return 0;
}
