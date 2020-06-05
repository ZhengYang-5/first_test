#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main() {
  vector<int> numbers = {1, 2, 3};

  for(auto& value_test : numbers){
  value_test++;
  }
  
  for(auto& value_test : numbers){
  value_test++;
  }
  
  for(auto& value_test : numbers){
  value_test++;
  }

  for(const auto& value_test : numbers){
  cout << value_test << endl;
  }
}
