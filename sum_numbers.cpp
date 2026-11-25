//Include the input/output library so we can use cin and cout
#include <iostream>

//Use the standard namespace so we can write cout instead of std::cout
using namespace std;

int main() {

    //Declare an integer variable to store the user's input (N)
    //This will hold the upper limit of our sum ( e.g., if N=5, sum 1=2+3+4+5)
    int N;

    //Declare an integer variale to store the running total
    //We initialise it to 0 because we haven't added anything yet
    int sum =0;
    //Display a prompt asking the user to enter a number
    cout << "Enter a positive number(N): ";
    
    //Read the user's input from the keyboard and store it in "N"
    cin >> N;

    //Start a for loop with three parts separated by semicolons:
    //Part 1: int = 1 -> Initialisation: start counting from 1
    //Part 2: i <=N; -> Conditions: keep looping while i is less than or equal to N
    //part 3: i++ -> Increment: increase i by 1 after each iteration
    for (int i = 1; i<=N; i++){
        //Add the current value of i to the running total (sum)
        //This is equivalent to: sum = sum + i
        sum += i;

    }//End of for loop - execution returns to the condition check
    //Display the final results to the user
    cout << "The sum of numbers from 1 to "<<N<<" is: "<<sum<< endl;

    return 0; //Return 0 to indicate that the program has completed successfully
}