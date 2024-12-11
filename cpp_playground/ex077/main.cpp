#include "paper.hpp"
#include "researcher.hpp"

int main() {
  researcher r1("Alice", "Univeristy A");
  researcher r2("Bob", "Univeristy B");
  researcher r3("Charlie", "Univeristy A");

  paper p1("Quantum Computing Advances", "Journal 1");
  paper p2("AI in Healthcare", "Journal 2");

  r1.add_paper(&p1);
  r2.add_paper(&p1);
  r3.add_paper(&p1);

  r1.add_paper(&p2);
  r3.add_paper(&p2);

  std::cout << "Papers per author" << std::endl;
  r1.display_info();
  r2.display_info();
  r3.display_info();

  std::cout << "Authors per paper" << std::endl;
  p1.display_info();
  p2.display_info();
}

/*
Papers per author
Researcher: Alice Univeristy A
1. Quantum Computing Advances Journal 1
2. AI in Healthcare Journal 2
Researcher: Bob Univeristy B
1. Quantum Computing Advances Journal 1
Researcher: Charlie Univeristy A
1. Quantum Computing Advances Journal 1
2. AI in Healthcare Journal 2
Authors per paper
Quantum Computing Advances, Journal 1
1. Alice Univeristy A
2. Bob Univeristy B
3. Charlie Univeristy A
AI in Healthcare, Journal 2
1. Alice Univeristy A
2. Charlie Univeristy A
*/