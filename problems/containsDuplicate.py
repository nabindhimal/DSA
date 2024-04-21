from typing import List

nums = [1,2,3,4]

def containsDuplicate(nums: List[int]) -> bool:
    unique_set = set()

    for num in nums:
        if num in unique_set:
            return True
        else:
            unique_set.add(num)
    
    return False


print(containsDuplicate(nums))
