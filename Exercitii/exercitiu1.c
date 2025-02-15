// Exercitiu 1 din culegerea de admitere la UPB

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[21]; //definire sir a
    char b[21]; //definire sir b

    cin.get(b, 21);

    if (strlen(b) >= 3) {
        strcpy(a, strchr(b, '\0') - 3); // adauga comentarii la cod ca sa il intelegi
    } else {
        strcpy(a, "nedeterminat");
    }

    cout << a;

    return 0;
}
