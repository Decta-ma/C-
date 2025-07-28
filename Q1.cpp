#include <iostream>
using namespace std;

int pow(int base, int exp){
  int help = 1;
  for(int i = 0; i < exp; i++){
    help *= base;
  }

  return help;
}

int main(void){
  int n; 
  cout << "enter n : \n";
  cin >> n;
  for(int i = 0; i <= n; i++){
    cout << pow(2, i) << ", ";
  }
  cout << endl;

  return 0;
}
