#include <iostream>
#include <cstring>

class Stack
{
private:
    char *data_;
    int top_;
    int size_;

public:
    // κατασκευαστής με προκαθορισμένη τιμή παραμέτρου
    Stack(size_t s = 10) : top_(-1), size_(s), data_(new char[s])
    {
        std::cout << "Constructor Stack(size_t) called, created stack having size= " << s << std::endl;
    }

    Stack(const Stack &r) : size_(r.size_), top_(r.top_), data_(new char[r.size_])
    {
        for (int i = 0; i < size_; i++)
        {
            data_[i] = r.data_[i];
        }
    }

    ~Stack()
    {
        delete[] data_;
        std::cout << "Destructor ~Stack() called" << std::endl;
    }
    int empty() { return top_ == -1; }
    void push(char x) { data_[++top_] = x; }
    void pop() { --top_; }
    char top() { return data_[top_]; }
};

int main()
{
    {
        // Δημιουργία μιας στοίβας, ώθηση των 5 πρώτων χαρακτήρων του αγγλικού αλφαβήτου
        char str[] = "ABCDE";
        Stack s(strlen(str));
        for (int i = 0; i < 5; i++)
            s.push(str[i]);

        // απώθηση των στοιχείων της στοίβας μέχρι να αδειάσει η στοίβα
        while (!s.empty())
        {
            std::cout << s.top() << std::endl;
            s.pop();
        }
        // διαγραφή της στοίβας s
    }

    // Δημιουργία μιας στοίβας 100 θέσεων και ώθηση σε αυτή των 5 πρώτων χαρακτήρων του αγγλικού αλφαβήτου
    Stack s1(100);
    for (char c : std::string("ABCDE"))
    {
        s1.push(c);
    }
    Stack s2(s1); // copy constructor (αντιγραφή της στοίβας s1 στην s2, κάθε στοίβα έχει τα δικά της στοιχεία)
    s2.push('F');
    std::cout << s1.top() << " " << s2.top() << std::endl;
    // διαγραφή της στοίβας s2 και της στοίβας s1
    return 0;
}

/*
E
D
C
B
A
Destructor ~Stack() called
Constructor Stack(size_t) called, created stack having size= 100
E F
Destructor ~Stack() called
Destructor ~Stack() called
*/