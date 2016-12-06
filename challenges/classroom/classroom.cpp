#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <list>
#include <vector>

using namespace std;



int main(int argc, char** argv)
{
   //definitions
   map <int, string> names;      //map to store data
   
   int commands=0; //get number of commands
   cin >> commands;
   
   while(commands--)
   {
      int action=0;
      cin >> action;
 
      //Command 1: Insert
      if(action == 1){
        int data=0;
        cin >> data;
        vector<string> list_map;
        
        //Iterate over the arguments to be stored
        while(data--)
        {
           string s1, s2;
           cin >> s1;
           cin >> s2;
           list_map.push_back(s1 + " " + s2);
        } 

        for(int k=0;k<names.size(); k++){
            list_map.push_back(names.find(k)->second);
         }
         //sort the list
         sort(list_map.begin(), list_map.end());

         //add the sorted names to the map
         names.clear();

         //Insert sorted data into the map
         for(int k=0; k<list_map.size(); ++k){
            names.insert(pair<int, string>(k, list_map[k]));
         }
         list_map.clear();
      }
      
      // Command 2: Consult
      if(action == 2){
         int subcom, pos = 0;
         cin >> subcom;
         cin >> pos; //position requested
         
         //Print the requested line
         cout << names.find(pos-1)->second << endl;    
      }
   
   }
   return 0;
}
