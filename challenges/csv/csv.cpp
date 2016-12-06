#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
   stringstream lineStream;
   int entries = 0;
   vector<string> lines;
   int commas = 0;
   string text;  
   vector<string> steps;
   
   // how many lines 
   cin >> entries;

   //iterate in each line
   while(entries--)
   {
      commas = 0;
      string delimiter = ",";
      size_t pos=0;
      string token;

      steps.clear();
      text.clear();
      
      //concat the line together
      while(commas!=4)
      {
         cin >> text;
         lineStream << text;
         text = lineStream.str();
         if((commas = count(text.begin(), text.end(),','))==4){
            lines.push_back(text);
            lineStream.str(string());
         }
         else{ 
            lineStream << " ";
         }   
      }
     
      // iterate over the line to separate each field
      while ((pos = text.find(delimiter)) != string::npos) {
          token = text.substr(0, pos);
          steps.push_back(token);
          text.erase(0, pos + delimiter.length());
      }
      steps.push_back(text);

      //print on screen
      cout << steps[0] << " is " << steps[4];
      cout << " years old and lives in " << steps[2];
      cout << ", " << steps[1] << "." << endl;
      
   }

   return 0;
}
