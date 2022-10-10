#include <string>
#include <iostream>

std::string no_space(const std::string& x)
{
   std::string str("");
   for(std::size_t i = 0; i < x.size(); i++){
     if(x[i] != ' '){
       str.push_back(x[i]);
     }
   }
   return str;
}