#include <bits/stdc++.h>
using namespace std;

// Mathematical Approach:
/*
1. Extract digits: Use the modulus operator % to get the last digit of the number.
2. Reverse the number: Multiply the reversed number by 10 and add the extracted digit.
3. Remove the digit: Divide the temp number by 10 and repeate till temp>0.
3. Compare: If the reversed number matches the original, it's a palindrome.

// Extract -> Rebuild -> Remove -> Compare
*/

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int temp_num = x, digit = 0, rev_num = 0;

        while(temp_num){
            digit = temp_num % 10 ; // storing one last digit 
            rev_num = rev_num * 10 + digit ; // rebuiling reversed number
            temp_num = temp_num / 10 ; // removing last digit
        }

        return (x == rev_num);  // comparing and return bool value (true/false)
    }
};

int main()
{

    Solution s1;
    int userNum = 0;
    cout<<"Enter a number:"; 
    cin>>userNum;
    
    bool result = s1.isPalindrome(userNum);
    cout << "Answere is :" << result;

    return 0;
}