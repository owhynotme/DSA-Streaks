from array import *


def count_freq(arr, size, x, y):
    count_x = 0
    count_y = 0
    for i in range(size):
        if(arr[i] == x):
            count_x += 1
        if(arr[i] == y):
            count_y += 1
    if(count_x > count_y):
        return x
    elif(count_x == count_y):
        if(x < y):
            return x
        else:
            return y
    else:
        return y


arr = array("i", [1, 1, 2, 2, 3, 3, 4, 4, 4, 4, 5])
size = len(arr)
print("TestCase 1 ")
print(count_freq(arr, size, 4, 5))

arr2 = array("i", [1, 2, 3, 4, 5, 6, 7, 8])
size2 = len(arr2)
print("\nTestCase 2 ")
print(count_freq(arr2, size2, 1, 7))
