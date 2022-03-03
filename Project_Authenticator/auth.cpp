#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(int argc, const char * argv[]){
  const char codeCharacter1 = 'E';
  const char codeCharacter2 = 'C';
  const char codeCharacter3 = 'A';

  string realCode;
  string userCode;

  char userCode1;
  char userCode2;
  char userCode3;

  cout << "Enter the first character of the message code: " << endl;
  cin >> userCode1;

  cout << "Enter the second character of the message code: " << endl;
  cin >> userCode2;

  cout << "Enter the third character of the message code: " << endl;
  cin >> userCode3;

  userCode += userCode1;
  userCode += userCode2;
  userCode += userCode3;

  realCode += codeCharacter1;
  realCode += codeCharacter2;
  realCode += codeCharacter3;

  cout<<endl;

  cout << "Authentic Code: " << realCode << endl;
  cout << "Message Code: " << userCode << endl;

  cout<<endl;

  if (userCode1 == codeCharacter1 && userCode2 == codeCharacter2 && userCode3 == codeCharacter3){
    cout << "Message is authentic" << endl;
  }
  else{
    cout<< "Message is invalid" << endl;
  }

  if(realCode == userCode){
    cout << "Concurrence: message is authentic" << endl;
  }
  else{
    cout << "Concurrence: message is invalid" << endl;
  }

  cout<<endl;

  cout<<endl;

  cout << "Characterization of Message Code" << endl;
  cout << "--------------------------------" << endl;

  int userValues1 = int(userCode1);
  int userValues2 = int(userCode2);
  int userValues3 = int(userCode3);
  int totalValue = userValues1 + userValues2 + userValues3;

  cout << "ASCII Values of Message Code Characters: " << userValues1 << ", " << userValues2 << ", " << userValues3 << endl;
  cout << "Sum of ASCII values for Message Code Characters: " << totalValue << endl;

  const int validCheckSum = 5;
  int checksum = (int(userCode1) + int(userCode2) + int(userCode3)) % 7;

  if (validCheckSum == checksum){
    cout << "Message code checksum is valid: " << checksum << endl;
    }
  else{
    cout << "Message Code Checksum is invalid: " << checksum <<" expected: " << validCheckSum <<endl;
  }

  if (userCode1 != codeCharacter1){
    cout << "First characters do not match: Message: " << userCode1 << "; Authenticator: " << codeCharacter1 << endl;
  }
  if (userCode2 != codeCharacter2){
    cout << "Second characters do not match: Message: " << userCode2 << "; Authenticator: " << codeCharacter2 << endl;
  }
  if (userCode3 != codeCharacter3){
    cout << "Third characters do not match: Message: " << userCode3 << "; Authenticator: " << codeCharacter3 << endl;
  }

  if (realCode > userCode){
    cout << "Message code (" << userCode << ") is lexicographically less than Authenticator code (" << realCode << ")" << endl;
  }
  else if (realCode < userCode){
    cout << "Message code (" << userCode << ") is lexicographically greater than Authenticator code (" << realCode << ")" << endl;
}
}
