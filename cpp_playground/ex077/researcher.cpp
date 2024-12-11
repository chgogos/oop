#include "researcher.hpp"

std::string researcher::get_name() { return name; }

std::string researcher::get_affiliation() { return affiliation; }

std::vector<paper *> researcher::get_papers() { return papers; }

void researcher::add_paper(paper *p) {
  papers.push_back(p);
  p->add_author(this);
}

void researcher::display_info() {
  std::cout << "Researcher: " << name << " " << affiliation << std::endl;
  int i = 0;
  for (auto p : papers) {
    std::cout << ++i << ". " << p->get_title() << " " << p->get_journal()
              << std::endl;
  }
}