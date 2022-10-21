from ast import List


class Solution:
    def findDisappearedNumbers(self, nums):
        temp = [num for num in range(1, len(nums)+1)]
        return list(set(temp) - set(nums))


obj = Solution().findDisappearedNumbers([1, 3, 2, 4, 5, 3, 6, 4, 7])
print(obj)
