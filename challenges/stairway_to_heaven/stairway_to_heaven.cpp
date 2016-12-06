#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
   int n = 0;
   cin >> n;

   //Invalid entry
   if(n<=0)
   {
      cout << "Error." << endl;
      return 0;  
   }

   //building a step of the stair
   for(int i=0; i<n;i++)
   { 
      string stair="";
      for(int j=0; j<i+1; j++) stair+="#";
      cout << setw(n) << stair << endl;
   }	
   return 0;
}
