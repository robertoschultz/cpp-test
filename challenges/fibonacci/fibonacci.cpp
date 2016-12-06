#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
   int number = 0;
   cin >> number;   

   //Fibonacci number position to be found must be bigger than 0
   if ((number) < 0) return 0;

   vector<unsigned long> values;
   values.push_back(0);
   values.push_back(1);
   values.push_back(1);

   //based on number position, calculate the fibonacci number
   if(number >= values.size()){
      for (unsigned long i = values.size(); i-1 < number; ++i){

         values.push_back(values[i-2] + values[i-1]);
      }
   }

   cout << values[number] << endl;

   return 0;
}
