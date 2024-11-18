#include <iostream>

int main() {
    int catScore, mainExamScore;

    // Prompt the user to enter the CAT score
    std::cout << "Enter the CAT score (out of 40): ";
    std::cin >> catScore;

    // Validate the CAT score
    if (catScore < 0 || catScore > 40) {
        std::cerr << "Invalid CAT score! The score must be between 0 and 40." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Prompt the user to enter the main exam score
    std::cout << "Enter the main exam score (out of 60): ";
    std::cin >> mainExamScore;

    // Validate the main exam score
    if (mainExamScore < 0 || mainExamScore > 60) {
        std::cerr << "Invalid main exam score! The score must be between 0 and 60." << std::endl;
        return 1; // Exit the program with an error code
    }

    // Calculate the total score
    int totalScore = catScore + mainExamScore;

    // Determine the grade based on the total score
    char grade;
    std::string feedback;

    if (totalScore > 69) {
        grade = 'A';
        feedback = "Excellent performance!";
    } else if (totalScore >= 60) {
        grade = 'B';
        feedback = "Good job!";
    } else if (totalScore >= 50) {
        grade = 'C';
        feedback = "Fair performance.";
    } else if (totalScore >= 40) {
        grade = 'D';
        feedback = "Needs improvement.";
    } else {
        grade = 'E';
        feedback = "Poor performance. Work harder next time.";
    }

    // Display the results
    std::cout << "CAT Score: " << catScore << std::endl;
    std::cout << "Main Exam Score: " << mainExamScore << std::endl;
    std::cout << "Total Score (out of 100): " << totalScore << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Feedback: " << feedback << std::endl;

    return 0; // Exit the program successfully
}
