#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int amount = 0;
    while (amount < 10 || amount > 30) {
        cout << "要輸入幾個數字(10~30個)? ";
        cin >> amount;
        if (amount < 10 || amount > 30) {
            cout << "請重新輸入!" << endl;
        }
    }
    
    char number[amount], reverse[amount];
    int decision = 0;
    while (decision = 0) {
        cout << "請輸入數字(1~9): ";
        cin >> number;
        for (int i = 0; i < amount; i++) {
            if (number[i]-'0' <= 0) {
                break;
            } else {
                decision = 1;
            }
        }
        if (decision = 0) {
            cout << "請重新輸入!" << endl;
        } else {
            break;
        }
    }
    
    for (int i = 0; i < amount; i++) {
        reverse[amount-i-1] = number[i];
    }
    reverse[amount] = '\0';
    number[amount] = '\0';
    
    int trueOrFalse = 1;
    for (int i = 0; i < amount; i++) {
        if (number[i] != reverse[i]) {
            trueOrFalse = 0;
        }
    }
    
    for (int i = 1; i < amount; i++) {
        if (number[i]-'0' > (number[i-1]-'0')*2) {
            trueOrFalse = 0;
        }
    }
    
    int num;
    char code[num];
    int x = 0;
    for (int i = 0; i < amount; i++) {
        if ((number[i]-'0')%2 == 0) {
            code[i-x] = number[i];
        } else if ((number[i]-'0')%2 == 1) {
            x++;
        }
    }
    num = amount-x;
    code[num] = '\0';
    
    if (trueOrFalse == 0) {
        cout << "INCORRECT";
    } else {
        cout << "The code is: " << code;
    }
    
    return 0;
}
