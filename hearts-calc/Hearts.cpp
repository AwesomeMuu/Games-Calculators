#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<string> players;
  std::vector<int> score;
  std::vector<int> oldScore;
  std::vector<int> rank;

  // Set-up players
  players.push_back("Mhnd");
  players.push_back("Burger");
  players.push_back("8yoom");
  players.push_back("Totti");

  for (size_t i = 0; i < players.size(); i++) {
    score.push_back(0);
    oldScore.push_back(0);
    rank.push_back(i+1);
  }

  // Begin Calculating
  while (true) {
    for (size_t i = 0; i < players.size(); i++) {
      std::cout << "Enter " << players[i] << " score: " << '\n';
      int a = 0;
      std::cin >> a;
      oldScore[i] = score[i];
      score[i] = score[i] + a;
    }

    for (size_t i = 0; i < players.size(); i++) {
      rank[i] = 1;
      for (size_t j = 0; j < players.size(); j++) {
        if (score[i] > score[j]) {
          rank[i]++;
        }
      }
    }

    for (size_t i = 0; i < players.size(); i++) {

      // First is blue, last is red, rest is yellow
      if (rank[i] == 1) {
        std::cout << "\033[3;94m" << rank[i]<< "\033[0m) " ;
      }else if(rank[i] == players.size()){
        std::cout << "\033[3;91m" << rank[i]<< "\033[0m) " ;
      }else{
        std::cout <<  "\033[3;93m" << rank[i]<< "\033[0m) ";
      }

      // Score in decreased is blue, Score increased red, remained the same is yellow
      if (score[i] > oldScore[i]) {
        std::cout << players[i] << " total: " << "\033[3;91m" << score[i]<< "\033[0m" << '\n';
      }else if(score[i] < oldScore[i]){
        std::cout << players[i] << " total: " << "\033[3;94m" << score[i]<< "\033[0m" << '\n';
      }else{
        std::cout << players[i] << " total: " << "\033[3;93m" << score[i]<< "\033[0m" << '\n';
      }
    }
  }
  return 0;
}
