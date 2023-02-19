#include <iostream>

using namespace std;

/* Right Side Triangle
         *
       * *
     * * *
   * * * *
 * * * * *
*/

void Draw(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main(void) {
    Draw(5);
    return 0;
}