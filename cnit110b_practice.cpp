#include <iostream> // Include the iostream library for input/output operations
using namespace std; // Use the standard namespace to avoid prefixing std:: before cout and cin

// Function to prompt the user to enter a number and return the number entered
int getScoreInput() {
    // Declare an integer to store the score
    int score;
    // Loop until a valid integer is entered
    while (!(cin >> score)) {
        cin.clear(); // Clear the error state of cin
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the invalid input
        cout << "Invalid input. Please enter a number: ";
    }
    return score; // Return the inputted score
}

int main() {
    // Declare a constant expression integer to represent the low score threshold
    constexpr int low_score = 3;

    // Prompt the user to enter the score for the home team and store it in a constant
    cout << "Please input todays score for the home team: ";
    const int homeScore = getScoreInput();

    // Prompt the user to enter the score for the visitor team and store it in a constant
    cout << "Please input todays score for the visitor team: ";
    const int visitorScore = getScoreInput();

    // Display the scores of the home and visitor teams
    cout << "\nHome team score: " << homeScore << "\n";
    cout << "Visitor team score: " << visitorScore << "\n";

    // Check if both teams had a low score (less than 3)
    // If so, display a message indicating that both teams had a low score
    if ((homeScore < low_score) && (visitorScore < low_score)) {
        cout << "\nBoth teams had a low score.\n";
    }
    // If not, check if the home team had a low score
    else if (homeScore < low_score) {
        cout << "\nHome team had a low score.\n";
    }
    // If not, check if the visitor team had a low score
    else if (visitorScore < low_score) {
        cout << "\nVisitor team had a low score.\n";
    }

    // Determine the winner of the game based on the scores
    // If the home team's score is greater than the visitor team's score, the home team wins
    // Else if the visitor team's score is greater, the visitor team is the winner
    // Else if no team has a greater score the game is a draw (equal scores)
    if (homeScore > visitorScore) {
        cout << "\nHome team has won the game!\n";
    } else if (homeScore < visitorScore) {
        cout << "\nVisitor team has won the game!\n";
    } else {
        cout << "\nThe game ended in a draw.\n";
    }

    // Return 0 to indicate that the program has executed successfully
    return 0;
}


