#include <iostream>
#include <iomanip> //Include the iomanip library for formatting output
using namespace std;
int main(){
    cout << "==============================" << endl;
    cout << "  MULTIPLICATION TABLE(1 to 10)" << endl;
    cout << "==============================" << endl;

    //OUTER LOOP: Controls the rows (multiplicand 1 to 10)
    //Part 1: int i = 1; ->S Start with row 1
    //Part 2: i <= 10;   -> Continue until row 10
    //Part 3: i++        -> Move to the next row
    for (int i = 1; i <= 10; i++){

        //INNER LOOP: Controls the columns (multiplier 1 to 10)
        //Part 1: int j = 1; -> Start with column 1
        //Part 2: j <= 10;   -> Continue until column 10
        //Part 3: j++        -> Move to the next column
        for (int j = 1; j <= 10; j++){

            //Calculate the product of the current row and column
            int product = i * j;

            //Display the product with a field width of 5 characters
            //setw(5) endsures each number takes up 5 spaces for alignment
            cout << setw(5) << i * j;
        }
        cout << endl; //Move to the next line after finishing a row
    }
    cout << "==============================" << endl;
    return 0;
}