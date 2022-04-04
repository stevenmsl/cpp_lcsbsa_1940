#include "solution.h"

#include <unordered_map>
#include <functional>

using namespace sol1940;
using namespace std;

/*takeaways
  - to be qualified as part of common subsqeucne, the number
    needs to be appeared exactly once in each input array
  - we record the occurrences of each number from all arrays
    - since each input array is sorted in strickly increasing
      order that means each number is distinct inside an input
      array
    - so if a number its occurrences is the same as the number
      of input arrays, that means that number must be in each
      input array
  - we can pick any input array and loop through its numbers
    to construct the longest common subsequence as it
    really doesn't matter which input array you pick - your
    goal is to pick all the numbers with certain occurrences
    (equal to the number of input arrays) from the map,
    and it guarantees the numbers you pick will be in all
    input arrays

*/

vector<int> Solution::find(vector<vector<int>> &nums)
{
  /*number of input arrays, and is the frequency
    of a given number we are looking for
  */
  const int n = nums.size();

  auto freq = unordered_map<int, int>();

  /*record the occurrences of every number from all
    input arrays
  */
  for (auto i = 0; i < nums.size(); i++)
    for (auto num : nums[i])
      freq[num]++;

  auto result = vector<int>();

  /* pick any array will do  */
  for (auto i = 0; i < nums[0].size(); i++)
    if (freq.count(nums[0][i]) && freq[nums[0][i]] == n)
      result.push_back(nums[0][i]);

  return result;
}