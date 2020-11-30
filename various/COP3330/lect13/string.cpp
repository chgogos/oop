//  Πλεονεκτήματα των std::strings έναντι των c-strings

#include <iostream>
#include <cstring>
#include <string>


// συνάρτηση που χρησιμοποιεί c-string
void legacy_c_function(char *s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
}

int main()
{
    std::string s = "A text to play with"; // αρχικοποίηση ενός std::string με c-string
    std::cout << "string: " << s << std::endl;
    s.append("!");                                      // μεταβλητό μέγεθος
    std::cout << "length: " << s.length() << std::endl; // εύρεση μήκους σε σταθερό χρόνο (έναντι γραμμικού των c-strings)
    for (char c : s)                                    // αυτόματος χειρισμός ορίων λεκτικού
    {
        if (c != ' ')
        {
            std::cout << c << " ";
        }
    }
    std::cout << std::endl;

    std::string s2;
    s2 = s;      // διαισθητικά εύκολη ανάθεση τιμής με το = αντί για το strcpy των c-strings
    if (s == s2) // διαισθητικά εύκολη σύγκριση με το == αντί για το strcmp των c-strings
    {
        std::cout << "equals" << std::endl;
    }
    else
    {
        std::cout << "not equals" << std::endl;
    }
    s += s2; // Διαισθητικά εύκολη συνένωση λεκτικών με το + αντί για το strcat των c-strings
    std::cout << s << std::endl;

    char c_s[100];
    strcpy(c_s, s.c_str()); // μετατροπή σε c-string με τη συνάρτηση μέλος c_str()
    legacy_c_function(c_s);
    std::cout << c_s << std::endl;
}

/*
string: A text to play with
length: 20
A t e x t t o p l a y w i t h !
equals
A text to play with!
A TEXT TO PLAY WITH!A TEXT TO PLAY WITH!
*/