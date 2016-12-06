#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

using namespace std;

int main(int argc, char** argv)
{
   int entries=0;
   cin >> entries;
   
   //store number for sorting
   vector<int> numbers;
   while(entries--){
      int n=0;
      cin >> n;
      numbers.push_back(n); 
   }
   
   //sort numbers and iterate over the vector to print
   sort(numbers.begin(), numbers.end());

   for(vector<int>::iterator it = numbers.begin(); it!=numbers.end(); ++it)
      cout << *it << endl;
	
   return 0;
}
