class Solution
{
public:
 int findDuplicate(vector<int> &nums)
 {
  sort(nums.begin(), nums.end());
  int ans;
  for (int i = 1; i < nums.size(); i++)
  {
   ans = nums[i - 1] ^ nums[i];
   if (ans == 0)
    return nums[i];
  }
  return -1;
 }
};