// 5th January 2025
// 412. Fizz Buzz


class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                result.push_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                result.push_back("Fizz");
            }
            else if (i % 5 == 0) {
                result.push_back("Buzz");
            }
            else {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};

//Finally back in college all alone just focusing on myself doing leetcode maintaing github and completing udemy course having the feeling like no is for me here 
//but i am glad i finally got the cover that i was waiting for so long
//Kalpa ♥
