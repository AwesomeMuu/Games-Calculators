#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(int argc, char const *argv[]) {
  std::vector<string> players;
  std::vector<int> phase;
  std::vector<int> score;

  // players.push_back("Makki");
  // players.push_back("9wel7");

  players.push_back("Mhnd Mousa");
  players.push_back("Burger");
  players.push_back("8yoom");
  players.push_back("Totti");
  players.push_back("Hassan 6ar8");

  for (size_t i = 0; i < players.size(); i++) {
    phase.push_back(1);
    score.push_back(0);
  }

  while (true) {
    for (size_t i = 0; i < players.size(); i++) {
      std::cout << "Enter " << players[i] << " score: " << '\n';
      int a = 0;
      std::cin >> a;
      score[i] = score[i] + a;
      std::cout << "Did he pass to next level?" << '\n';
      bool input;
      std::cin >> input;
      if (input) {
        phase[i]++;
      }
      input = false;
    }

    for (size_t i = 0; i < players.size(); i++) {
      std::cout << players[i] << " total is " << score[i] << " and in phase " << phase[i] << '\n';
    }

  }


  return 0;
}
