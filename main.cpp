#include <iostream>
using namespace std;
/*
 * Size of 2D array calculator
 */
int main() {

    string animals[][3] = {
            {"fox",   "dog",  "cat"},
            {"mouse", "squirrel", "parrot"}
    };

    cout << "The size of each string is: " << sizeof(string) << endl;
    cout << "The size of animal 2D array is: " << sizeof(animals) << endl;

    for(int i=0; i<sizeof(animals)/sizeof(animals[0]) ; i++){
                         //   144    / 24  = 6
        for(int j=0; j<sizeof(animals[0])/sizeof(string) ; j++){
                         // 24          /  8       = 3
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

    return 0;
}
