class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()

        res = []
        print(nums)

        for i in range(len(nums)):
            l = i + 1
            if i >= 1:
                if (nums[i] == nums[i - 1]):
                    continue
            r = len(nums) - 1
            start = nums[i]


            while l < r:
                if start + nums[l] + nums[r] == 0:
                    res.append([start, nums[l], nums[r]])
                    l += 1
                    while l < len(nums):
                        if nums[l] == nums[l - 1]:
                            l += 1
                        else:
                            break
                elif start + nums[l] + nums[r]  > 0:
                    r -= 1
                else:
                    l += 1
            
        
        return res
        