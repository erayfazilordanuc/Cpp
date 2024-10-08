#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main(){
  int inputAmount;

  cout << endl << "Enter how many numbers do you want to type : ";
  cin >> inputAmount;

  int numbers[inputAmount];

  int total = 0;

  for(int i=0; i<inputAmount; i++){
    int number;

    cout << endl << "Enter the number " << (i+1) << " : ";
    cin >> number;

    numbers[i] = number;

    total += number;
  }

  int numbersArraySize = sizeof(numbers) / sizeof(numbers[0]);

  int average = total / numbersArraySize;

  int upAverageAmount = 0;

  vector<int> biggerThanAverageNumbers;

  for(int i=0; i<inputAmount; i++){
    if(numbers[i] > average){
      biggerThanAverageNumbers.push_back(numbers[i]);
      upAverageAmount++;
    }
  }

  cout << endl << "Total : " << total << endl << endl;

  cout << "Average : " << average << endl << endl;

  if(upAverageAmount > 1){
    cout << "There are " << upAverageAmount << " numbers that are bigger than average";
  }else if(upAverageAmount == 1){
    cout << "There is 1 number that is bigger than average";
  } else {
    cout << "There is no numbers that is bigger than average ";
  }

  cout << endl << endl;
  
  if(upAverageAmount > 0){
    for(int i=0; i<biggerThanAverageNumbers.size(); i++){
      cout << biggerThanAverageNumbers[i] << endl;
    }
  }

  // for(int i=0; i<inputAmount; i++){
  //   cout << numbers[i];
  // }

  return 0;
}
