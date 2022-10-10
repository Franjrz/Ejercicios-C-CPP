#include <string>
#include <iostream>
std::string solution(int number){
  const std::string a[4][2] = {{"I","V"},{"X","L"},{"C","D"},{"M","A"}};
  std::string snumber = std::to_string(number);
  std::string sol = "";
  for (int i = snumber.size()-1; i >= 0; i--){
    int aux = int(snumber[i])-48;
    if(aux < 4){
      for(int j = 0; j < aux; j++){
        sol = a[snumber.size()-1-i][0] + sol;
      }
    }else{
      if(aux == 4){
        sol = a[snumber.size()-1-i][0]+a[snumber.size()-1-i][1] + sol;
      }else{
        if(aux < 9){
          for(int j = 0; j < (aux-5); j++){
            sol = a[snumber.size()-1-i][0] + sol;
          }
          sol = a[snumber.size()-1-i][1] + sol;
        }else{
          if(aux == 9){
            sol = a[snumber.size()-1-i][0]+a[snumber.size()-i][0] + sol;
          }
        }
      }
    }
  }
  return sol;
}