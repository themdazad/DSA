#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<string> fizzBuzz(int n) {
            vector<string> arr;
            int i = 1;
            
            while(i <= n){
                if(i % 3 == 0 && i % 5 == 0){
                    arr.push_back("FizzBuzz");
                }
                else if(i % 3 == 0){
                    arr.push_back("Fizz");
                }
                else if(i % 5 == 0){
                    arr.push_back("Buzz");
                }
                else {
                    arr.push_back(to_string(i));  // pushing by converting int to string;
                }
                i++;
            }
            return arr;
        }
    };


int main(){
    int n = 0;
    Solution mySolution;

    cout<<"Enter the number: ";
    cin>>n;

    vector <string> result = mySolution.fizzBuzz(n);
    
    // range base loop
    for(const auto &i : result){
        cout<<i<<",";
    }
    
    return 0;
}