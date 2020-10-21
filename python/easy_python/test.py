#! /usr/bin/python3
























# """
# Bars Module
# ============
# 这是一个打印不同分割线的示例模块
# """

# def starbar(num):
#     """打印 * 分割线

#     :arg num: 线长
#     """
#     print('*' * num)

# def hashbar(num):
#     """打印 # 分割线

#     :arg num: 线长
#     """
#     print('#' * num)

# def simplebar(num):
#     """打印 - 分割线

#     :arg num: 线长
#     """
#     print('-' * num)



# class Counter(object):
#     def __init__(self, low, high):
#         self.current = low
#         self.high = high
    
#     def __iter__(self):
#         return self

#     def __next__(self):
#         if self.current > self.high:
#             raise StopIteration
#         else:
#             self.current += 1
#             return self.current - 1


# c = Counter(5,10)
# for i in c:
#     print(i, end=' ')




# s = input("please enter a string: ")
# z = s[::-1]
# if s == z:
#     print("the string is a palindrome")
# else:
#     print("the string is not")

# n = int(input("enter the number of students:"))  
# data = {}
# Subjects = ('physics', 'Maths', 'History')
# for i in range(0,n):
#     name  = input('Enter the name of student  {}:'.format(i + 1))
#     marks = []
#     for x in Subjects:
#         marks.append(int(input('Enter marks of {}:'.format(x))))
#     data[name] = marks

# for x, y in data.items():
#     total = sum(y)
#     print("{}'s total marks {}".format(x,total))
#     if total < 120:
#         print(x,"failed ")
#     else:
#         print(x, "passed ")

# n = int(input("Enter the value of n: "))
# print("Enter values for the Matrix A")
# a = []
# for i in range(n):
#     a.append([int(x) for x in input().split()])

# print("Enter values for the Matrix B")
# b = []
# for i in range(n):
#     b.append([int(x) for x in input().split()])

# c = []
# for i in range(n):
#     c.append([a[i][j] * b[i][j] for j in range(n)])
# print("After matrix multiplication")

# print("-" * 7 * n)
# for x in c:
#     for y in x:
#         print(str(y).rjust(5), end=' ')
#     print()
# print("-" * 7 * n)