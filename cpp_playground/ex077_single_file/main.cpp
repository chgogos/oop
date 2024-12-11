#include <iostream>
#include <string>
#include <vector>

using namespace std;

class researcher;

class paper {
 private:
  string title;
  string journal;
  vector<researcher *> authors;

 public:
  paper(string t, string j) : title(t), journal(j) {}
  string get_title() { return title; };
  string get_journal() { return journal; };
  vector<researcher *> get_authors() { return authors; }
  void add_author(researcher *author);
  void display_info();
};

class researcher {
 private:
  string name;
  string affiliation;
  vector<paper *> papers;

 public:
  researcher(string n, string a) : name(n), affiliation(a) {}
  string get_name() { return name; }
  string get_affiliation() { return affiliation; }
  vector<paper *> get_papers() { return papers; }
  void add_paper(paper *p) {
    papers.push_back(p);
    p->add_author(this);
  }
  void display_info();
};

void paper::add_author(researcher *author) { authors.push_back(author); }

void paper::display_info() {
  int i = 0;
  cout << title << ", " << journal << endl;
  for (auto a : authors) {
    cout << ++i << ". " << a->get_name() << " " << a->get_affiliation() << endl;
  }
}

void researcher::display_info() {
  cout << "Researcher: " << name << " " << affiliation << endl;
  int i = 0;
  for (auto p : papers) {
    cout << ++i << ". " << p->get_title() << " " << p->get_journal() << endl;
  }
}

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
  
  cout << "Papers per author" << endl;
  r1.display_info();
  r2.display_info();
  r3.display_info();
  
  cout << "Authors per paper" << endl;
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