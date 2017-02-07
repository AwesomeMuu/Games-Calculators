#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char const *argv[]) {
  // HANDLE  hConsole;
  int k;





  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {

      cout << "i: " << i <<"j: " << j << " \033[" << i <<";" << j << "mbold red text\033[0m\n";
    }
  }
  // hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  // you can loop k higher to see more color choices
  // for(k = 1; k < 255; k++)
  // {
  //   // pick the colorattribute k you want
  //
  // }

  return 0;
}
