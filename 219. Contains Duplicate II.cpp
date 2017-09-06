#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
using namespace std;
bool containsNearbyDuplicate(vector<int>& nums, int k);
vector<int>nums;
int k;
int main(){
	int x;
	cin >> k;
	while (cin >> x){
		nums.push_back(x);
	}
	bool flag = containsNearbyDuplicate(nums, k);
	cout << flag;
	return 0;
}
bool containsNearbyDuplicate(vector<int>& nums, int k){


	set<int> s;

	if (k <= 0) return false;
	if (k >= nums.size()) k = nums.size() - 1;

	for (int i = 0; i < nums.size(); i++)
	{
		if (i > k){
			s.erase(nums[i - k - 1]);
		}
		if (s.find(nums[i]) != s.end()) return true;
		s.insert(nums[i]);
	}

	return false;
}