#include <iostream>
#include <string>

using namespace std;

//----------------------------------------------------------------.
// brief: Find string
// param:
//
// result: int (Found) / -1 (Not Found)
//----------------------------------------------------------------.
int findsubstr(const char* str, char* sub) {
    if (strlen(str) >= strlen(sub)) {
        for (int i = 0; i <= strlen(str) - strlen(sub); i++) {
            bool isFind = true;
            for (int j = 0; j < strlen(sub); j++) {
                if (str[i + j] != sub[j]) {
                    isFind = false;
                    break;
                }
            }
            if (isFind) {
                return i;
            }
        }
    }
    else {
        return -1;
    }
}

int main()
{
    const char str[] = "ABCDabcd";
    char sub[] = "abcd";

    if (findsubstr(str, sub) == -1) {
        cout << "sub not found on str\n";
    }
    else {
        cout << "Position of sub on str is: " << findsubstr(str,sub) << "\n";
    }
}
