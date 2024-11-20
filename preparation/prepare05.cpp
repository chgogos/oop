#include <algorithm>
#include <iostream>
#include <ostream>
#include <random>
#include <string>
#include <vector>

std::random_device rd;
std::mt19937 engine{rd()};
std::uniform_real_distribution<double> distribution(0.0, 1.0);

class player {
 private:
  std::string name;
  double dexterity;
  std::vector<player> wins;

 public:
  player(std::string n, double d) : name(n), dexterity(d) {}

  double get_dexterity() { return dexterity; }

  std::vector<player> get_wins() { return wins; }

  void add_win(const player &p) { wins.push_back(p); }

  friend std::ostream &operator<<(std::ostream &os, const player &aplayer) {
    os << aplayer.name << " " << aplayer.dexterity;
    return os;
  }
};

class duel {
 private:
  std::vector<player> players;

 public:
  explicit duel(int n) {
    for (int i = 0; i < n; i++) {
      std::string name = "player" + std::to_string(i + 1);
      double dex = distribution(engine) * 100.0;
      player p(name, dex);
      players.push_back(p);
    }
  }

  void next_round() {
    std::cout << "************* NEXT ROUND ***************" << std::endl;
    std::cout << "SHUFFLE" << std::endl;
    std::shuffle(players.begin(), players.end(), engine);
    display_players();
    std::vector<player> winners;
    for (int i = 0; i < players.size() / 2; i++) {
      player p1 = players[i];
      player p2 = players[players.size() - 1 - i];
      std::cout << "Duel: " << p1 << " vs " << p2 << " -> ";
      double perc_win_p1 =
          p1.get_dexterity() / (p1.get_dexterity() + p2.get_dexterity());
      double roulette = distribution(engine);
      if (perc_win_p1 > roulette) {
        std::cout << p1 << " WINS!" << std::endl;
        p1.add_win(p2);
        winners.push_back(p1);
      } else {
        std::cout << p2 << " WINS!" << std::endl;
        p2.add_win(p1);
        winners.push_back(p2);
      }
    }
    if (players.size() % 2 == 1) {
      winners.push_back(players[players.size() / 2]);
    }
    players = winners;
  }

  std::vector<player> get_players() { return players; }

  void display_players() {
    for (auto p : players) {
      std::cout << p << std::endl;
    }
  }
};

int main(int argc, char *argv[]) {
  int n = 100;
  if (argc != 2) {
    std::cout << "No argument given, assuming " << n << " players "
              << std::endl;
  } else {
    n = atoi(argv[1]);
  }
  duel d(n);
  d.display_players();
  while (d.get_players().size() != 1) {
    d.next_round();
  }
  player winner = d.get_players()[0];
  std::cout << "Winner: " << d.get_players()[0] << std::endl;
  std::cout << "List of wins:" << std::endl;
  for (player p : winner.get_wins()) {
    std::cout << "vs " << p << std::endl;
  }
  return 0;
}
