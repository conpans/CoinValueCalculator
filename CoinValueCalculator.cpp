#include "std_lib_facilities.h"
int main() {
    // Declare variables to hold the counts of each type of coin
    int pennies, nickels, dimes, quarters, half_dollars, one_dollars;

    // Prompt the user for the number of each coin and read the input
    cout << "How many pennies do you have? ";
    cin >> pennies;

    cout << "How many nickels do you have? ";
    cin >> nickels;

    cout << "How many dimes do you have? ";
    cin >> dimes;

    cout << "How many quarters do you have? ";
    cin >> quarters;

    cout << "How many half dollars do you have? ";
    cin >> half_dollars;

    cout << "How many one-dollar coins do you have? ";
    cin >> one_dollars;

    // Print out the number of each coin
    // Using conditional ? : operator to make the output grammatically correct
    // ? is the short hand way of writing if-else statements. Ex: (condition ? expression_if_true : expression_if_false;)
    cout << "You have " << pennies << (pennies == 1 ? " penny." : " pennies.") << "\n";
    cout << "You have " << nickels << (nickels == 1 ? " nickel." : " nickels.") << "\n";
    cout << "You have " << dimes << (dimes == 1 ? " dime." : " dimes.") << "\n";
    cout << "You have " << quarters << (quarters == 1 ? " quarter." : " quarters.") << "\n";
    cout << "You have " << half_dollars << (half_dollars == 1 ? " half dollar." : " half dollars.") << "\n";
    cout << "You have " << one_dollars << (one_dollars == 1 ? " one-dollar coin." : " one-dollar coins.") << "\n";

    // Calculate the total value in cents
    int total_cents = pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) + (one_dollars * 100);

    // Print the total value in dollars and cents
    cout << "The value of all your coins is $" << total_cents / 100 << "." << total_cents % 100 << "\n";
}
