def findDuplicate(nums):
  d={}                 # Create an empty dictionary
  for i in nums:
    if d.get(i):       # Searching for an element, if it is found, increase its count
      d[i]+=1
    else:
      d[i]=1           # If the element is not found, set count of that element to 1
  for k,v in d.items():
    if v>1:
      return k         # Go through the values of dictionary, if value > 1, return the key as answer
