#include<iostream>
#include<math.h>
using namespace std;

// This function is created for check Armstrong number of 'n' digit
void Armstrong(int number){
    int digitCount = 0,temp = number, sum = 0;
    while(temp > 0){
        temp/=10;
        digitCount++;
    }
    temp = number;
    while(temp > 0){
        sum += pow(temp%10, digitCount);
        temp/=10;
    }

    if(number == sum)
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";

}

int main(){

    cout << "Enter integer Number: " << endl;
    int number;
    cin >> number;
    Armstrong(number);
    return 0;
}