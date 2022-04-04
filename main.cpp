#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol1940;

/*
Input: arrays = [[1,3,4],
                 [1,4,7,9]]
Output: [1,4]
Explanation: The longest common subsequence in the two arrays is [1,4].
*/

tuple<vector<vector<int>>, vector<int>> testFixture1()
{
  const auto input = vector<vector<int>>{{1, 3, 4}, {1, 4, 7, 9}};
  const auto output = vector<int>{1, 4};

  return make_tuple(input, output);
}

/*
Input: arrays = [[2,3,6,8],
                 [1,2,3,5,6,7,10],
                 [2,3,4,6,9]]
Output: [2,3,6]
Explanation: The longest common subsequence in all three arrays is [2,3,6].
*/

tuple<vector<vector<int>>, vector<int>> testFixture2()
{
  const auto input = vector<vector<int>>{{2, 3, 6, 8}, {1, 2, 3, 5, 6, 7, 10}, {2, 3, 4, 6, 9}};
  const auto output = vector<int>{2, 3, 6};

  return make_tuple(input, output);
}

/*
Input: arrays = [[1,2,3,4,5],
                 [6,7,8]]
Output: []
Explanation: There is no common subsequence between the two arrays.
*/

tuple<vector<vector<int>>, vector<int>> testFixture3()
{
  const auto input = vector<vector<int>>{{1, 2, 3, 4, 5},
                                         {6, 7, 8}};
  const auto output = vector<int>{};

  return make_tuple(input, output);
}

void test1()
{
  auto f = testFixture1();
  cout << "Test 1 - expect to see " << Util::toString(get<1>(f)) << endl;
  cout << "result: " << Util::toString(Solution::find(get<0>(f))) << endl;
}
void test2()
{
  auto f = testFixture2();
  cout << "Test 1 - expect to see " << Util::toString(get<1>(f)) << endl;
  cout << "result: " << Util::toString(Solution::find(get<0>(f))) << endl;
}

void test3()
{
  auto f = testFixture3();
  cout << "Test 1 - expect to see " << Util::toString(get<1>(f)) << endl;
  cout << "result: " << Util::toString(Solution::find(get<0>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  return 0;
}