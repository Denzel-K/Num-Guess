#include <iostream> 
#include <ctime> 
using namespace std;

int main() {
  
  int num, times, guess;
  
  srand (time(0));
  num = (rand() % 50);
  
  cout << "Guess a number between (1 - 50)" << '\n';
  
  do {
    cin >> guess;
    times++;
    
    if (guess <= 0 || guess > 50) {
      cout << "Please enter a number between (1- 50)" << '\n';
    }
    else if (guess > num) {
      cout << "Too high!" << '\n';
    }
    else if (guess < num) {
      cout << "Too low!" << '\n';
    }
    else if (guess == num) {
      cout << "CORRECT !! " << num << " is the right number." << '\n';
      cout << "Trials: "<< times << '\n';
    }
  }
  while (guess != num);
  
  return 0;
}