/*  *    
   * *
  * * *
 * * * *
* * * * *    */
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int width = 2 * n - 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= width; j++) {

            if (j >= n - i + 1 && j <= n + i - 1 &&
                (j - (n - i)) % 2 == 1) {

                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
