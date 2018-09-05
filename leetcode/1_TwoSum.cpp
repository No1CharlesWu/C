#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
  public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		unordered_map<int, int> hash;
		vector<int> result;

		for (int i = 0; i < nums.size(); i++)
		{
			if (hash.find(target - nums[i]) != hash.end())
			{
				result.push_back(hash[target - nums[i]]);
				result.push_back(i);
				return result;
			}
			hash[nums[i]] = i;
		}
		return result;
	}
};

int main()
{
	Solution solution;
	int a[4] = {2, 7, 11, 15};
	vector<int> b(a, a + 4);
	vector<int> c = solution.twoSum(b, 9);
	for (int i = 0; i < c.size(); i++)
	{
		cout << c[i] << endl;
	}
	// system("pause");
	return 0;
}
