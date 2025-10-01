
// Use Chat GPT to generate cstring function examples and doc links
// https://chatgpt.com/s/t_68dd8dd805488191af4d460d601c4c1a

// COMPILE AND RUN
// g++ example-include-cstring.cpp && ./a.out && rm ./a.out

#include <iostream>
#include <cstring>   // C string functions
using namespace std;

int main() {
    // --- Copying & Concatenation ---

    char a1[20] = "Hello";
    char a2[20];
    strcpy(a2, a1);                  // https://en.cppreference.com/w/cpp/string/byte/strcpy
    cout << "strcpy: " << a2 << endl;

    char a3[20];
    strncpy(a3, "World", 3);         // https://en.cppreference.com/w/cpp/string/byte/strncpy
    a3[3] = '\0';
    cout << "strncpy: " << a3 << endl;

    char a4[20] = "Hi, ";
    strcat(a4, "there!");            // https://en.cppreference.com/w/cpp/string/byte/strcat
    cout << "strcat: " << a4 << endl;

    char a5[20] = "Hi, ";
    strncat(a5, "everyone", 3);      // https://en.cppreference.com/w/cpp/string/byte/strncat
    cout << "strncat: " << a5 << endl;

    char buf1[10], buf2[10];
    memcpy(buf1, "abcdef", 7);       // https://en.cppreference.com/w/cpp/string/byte/memcpy
    cout << "memcpy: " << buf1 << endl;

    memmove(buf2, buf1, 7);          // https://en.cppreference.com/w/cpp/string/byte/memmove
    cout << "memmove: " << buf2 << endl;

    // --- Comparison ---

    cout << "strcmp: " << strcmp("abc", "abd") << endl;   // https://en.cppreference.com/w/cpp/string/byte/strcmp
    cout << "strncmp: " << strncmp("abcd", "abce", 3) << endl; // https://en.cppreference.com/w/cpp/string/byte/strncmp
    cout << "memcmp: " << memcmp("abc", "abd", 2) << endl;     // https://en.cppreference.com/w/cpp/string/byte/memcmp

    // --- Searching ---

    const char *s1 = "banana";
    cout << "strchr: " << strchr(s1, 'n') << endl;        // https://en.cppreference.com/w/cpp/string/byte/strchr
    cout << "strrchr: " << strrchr(s1, 'n') << endl;      // https://en.cppreference.com/w/cpp/string/byte/strrchr
    cout << "strstr: " << strstr(s1, "na") << endl;       // https://en.cppreference.com/w/cpp/string/byte/strstr
    cout << "strpbrk: " << strpbrk(s1, "xyzna") << endl;  // https://en.cppreference.com/w/cpp/string/byte/strpbrk
    cout << "strcspn: " << strcspn("hello", "ole") << endl; // https://en.cppreference.com/w/cpp/string/byte/strcspn
    cout << "strspn: " << strspn("hello", "he") << endl;    // https://en.cppreference.com/w/cpp/string/byte/strspn

    char tokStr[20] = "a,b,c";
    char *token = strtok(tokStr, ","); // https://en.cppreference.com/w/cpp/string/byte/strtok
    while (token) {
        cout << "strtok: " << token << endl;
        token = strtok(NULL, ",");
    }

    // --- Length ---

    cout << "strlen: " << strlen("length") << endl;       // https://en.cppreference.com/w/cpp/string/byte/strlen

    // --- Memory Set ---

    char buf3[10];
    memset(buf3, '*', 5);              // https://en.cppreference.com/w/cpp/string/byte/memset
    buf3[5] = '\0';
    cout << "memset: " << buf3 << endl;

    // --- Error Message ---

    cout << "strerror: " << strerror(2) << endl; // https://en.cppreference.com/w/cpp/string/byte/strerror

    return 0;
}

