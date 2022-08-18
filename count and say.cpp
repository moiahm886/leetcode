#include<iostream>
#include<string>
using namespace std;
string str = "1";
class Solution {
public:
    string countAndSay(int n) {
        if (n == 1)return str;
        for (int i = 0; i < n - 1; i++)
        {
            int count = 1;
            string answer = "";
            for (int i = 0; i < str.size() - 1; i++)
            {
                if (str[i] == str[i + 1])count++;
                else
                {
                    answer += to_string(count) + str[i];
                    count = 1;
                }
            }
            answer += to_string(count) + str[str.size() - 1];
            str = answer;
        }
        return str;
    }
};
int main()
{
    Solution S;
    cout << S.countAndSay(2) << endl;
    return 0;
}