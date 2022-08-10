#include<iostream>
#include<vector>
#include<string>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
	if (strs.size() == 0)
	{
		return strs[0];
	}
	int index=0;
	int minimum = INT_MAX;
	for (int i = 0; i < strs.size(); i++)
	{
		if (strs[i].size() < minimum)
		{
			index = i;
			minimum = strs[i].size();
		}
	}
	string str = strs[index];
	string result = "";
	bool found = true;
	for (int i = 0; i < str.size(); i++)
	{
		for (auto x : strs)
		{
			if (str[i] != x.at(i))
			{
				found = false;
			}
		}
		if (found)
		{
			result += str[i];
		}
		else
		{
			return result;
		}
	}

}
int main()
{
	vector<string>vect{ "flower","flow","flight" };
	cout<<longestCommonPrefix(vect)<<"\t";
}