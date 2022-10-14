class Solution:
    array = list(map(int, input().split()))

    def validMountainArray(self) -> bool:
        if (len(self.array) < 3):
            return False

        first_half = self.array[0:self.array.index(max(self.array))]
        first_half_dupes = [x for i, x in enumerate(
            first_half) if x in first_half[:i]]
        sec_half = self.array[self.array.index(
            max(self.array))+1:len(self.array)]
        sec_half_dupes = [x for i, x in enumerate(
            sec_half) if x in sec_half[:i]]
        check_duplicates = first_half_dupes or sec_half_dupes
        check_equal_to_max = max(self.array) not in first_half and max(
            self.array) not in sec_half

        if (first_half and sec_half and not check_duplicates and check_equal_to_max and sorted(first_half) == first_half and sorted(sec_half, reverse=True) == sec_half):
            print("Given array is a valid mountain array!")
        else:
            print("Given array is not a valid mountain array!")


obj = Solution()
obj.validMountainArray()
