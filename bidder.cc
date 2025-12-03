#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// ============================================================================
// INSTRUCTIONS
// ============================================================================
// 1. Implement the three functions below.
// 2. You may use the main() function at the bottom to test your code locally.
// 3. Do not change the function signatures.
// ============================================================================

// TODO: Implement this function to return a vector of strings
// containing the names of everyone on your team.
std::vector<std::string> GetTeamMembers() {
  
  return {"Denny Nguyen", "Isabella Tran"};
}

// TODO: Implement this function to return a string that describes
// the strategy your logic uses to bid (e.g., "We bid high early on").
std::string GetStrategy() {
  // Your code here
  return "WE USED A RANDOM NUMBER GENERATOR AS WELL AS INTENSE LOGICAL THINKING AND PROBLEM SOLVING SKILLS.";
}

// TODO: Implement the bidding logic.
// parameters:
//   rounds: The total number of rounds in the game.
//   budget: The total points available to spend across all rounds.
//   output_filename: The name of the file where the bids should be written.
//
// Logic:
//   1. Calculate how much to bid in each round.
//   2. Open 'output_filename' for writing.
//   3. Write the bid for each round on a new line in the file.
//
// Constraints:
//   - You must write exactly 'rounds' number of lines.
//   - The sum of all bids must not exceed 'budget'.
//   - Bids must be non-negative integers.
std::vector<int> Choices{0, 31, 11, 0, 22, 0, 21, 0, 15, 0};
int Used_Budget{0};

void GenerateBids(int rounds, int budget, std::string output_filename) {
  // Your code here
  std::ofstream output{output_filename};
  for (int round = 0; round < rounds; ++round) {
    if (round >= 10) {

    else if (round < 10 && budget >= Used_Budget) {
      int Chosen_Number = Choices.at(round);
      Used_Budget += Chosen_Number;
        

      //std::cout << Chosen_Number << "\n";

       output << Chosen_Number << "\n";
    }
  }
}

// ============================================================================
// MAIN FUNCTION
// Use this to test your code.
// This function will be ignored by the "make test" command.
// ============================================================================
int main() {
  // You can write code here to call your functions and see if they work.
  // Example:
  // GenerateBids(10, 100, "test_output.txt");
  GenerateBids(10, 100, "test_output.txt");
  return 0;
}
