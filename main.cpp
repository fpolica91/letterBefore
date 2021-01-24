#include <iostream>

using namespace std;


char getLetterBefore(char x){
  char letter_before = '0';
  letter_before = x;
  letter_before--;
  return letter_before;

}




int main() {
  char result;
  result = getLetterBefore('Z');
  std::cout << "the letter before is " <<result<<endl;
}