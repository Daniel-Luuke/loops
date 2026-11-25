//Include input/output library
#include <iostream>

//Use the standard namespace
using namespace std;

int main(){
    //Display a header so we know what this program does
    cout << "Number filter: Skip multiples of 3, stop at 15" << endl;

    // Start a for loop from 1 to 20
    // Part 1: int i = 1; -> Start counting from 1
    // Part 2: i <= 20; -> Loop while i is 20 or less
    // Part 3: i++ -> Increment i by 1 each iteration
    for (int i=1; i<=20; i++){

        //CHECK 1: If i is exactly 15, stop the loop immediately
        //'break' exits the loop completely, skipping all remaining iterations
        if (i == 15){
            //Display a message to show we are breaking
            cout << "Breaking at" << "!" << endl;

            //Exit the loop immediately - no more iterations will run
            break;
        }

        //CHECK 2: If i is divisible by 3, skip it
        //the % operator gives the remainder
        if (i % 3 == 0){
            //'continue' skips the rest of thsi iteraton
            // and jumps back to the increment
            continue;
        }

        //DISPLAY: This line runs only if we did not break and did not continue
        //so it prints numbers that are not multiples of 3, until we hit 15
        cout << i << " ";
    }
    cout << endl; //Print a newline for better formatting
    return 0; //Return 0 to indicate that the program has completed successfully

}