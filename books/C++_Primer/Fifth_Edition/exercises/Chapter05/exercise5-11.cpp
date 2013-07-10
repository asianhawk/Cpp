#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    // initialize counters for each vowel
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned spaceCnt = 0, tabCnt = 0, newlineCnt = 0;

    char ch;

    while (cin.get(ch)) {

        // if ch is a vowel, increment the appropriate counter

        switch (ch) {
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i': case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
                ++uCnt;
                break;
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newlineCnt;
                break;
        }

    }

    // print results
    cout << "Number of vowel a or A: \t" << aCnt << '\n'
         << "Number of vowel e or E: \t" << eCnt << '\n'
         << "Number of vowel i or I: \t" << iCnt << '\n'
         << "Number of vowel o or O: \t" << oCnt << '\n'
         << "Number of vowel u or U: \t" << uCnt << '\n'
         << "Number of spaces:       \t" << spaceCnt << '\n'
         << "Number of tabs:         \t" << tabCnt << '\n'
         << "Number of newlines:     \t" << newlineCnt << endl;
}
