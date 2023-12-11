#!/usr/bin/env python
# coding: utf-8

# Name:Rajpreet Singh Khurana
# Roll no:K033
# Python programming
# Lab 1
# 11-Dec-2023

# program 1: Write a program to study arithmetic operators
# +,-,*,/,%,**,//

# In[7]:


n1=int(input("Enter a number"))
n2=int(input("enter a number"))
print("%s + %s =%s "%(n1,n2,n1+n2))
print("%s - %s =%s "%(n1,n2,n1-n2))
print("%s * %s =%s "%(n1,n2,n1*n2))
print("%s / %s =%s "%(n1,n2,n1/n2))
print("%s %% %s =%s "%(n1,n2,n1%n2))
print("%s ** %s =%s "%(n1,n2,n1**n2))
print("%s // %s =%s "%(n1,n2,n1//n2))


# In[8]:


n1=int(input("Enter a number in decimal"))
print("Binary value=",bin(n1))
print("Hexadecimal value=",hex(n1))
print("Octal value=",oct(n1))


# Study of bitwise operators
#   &    |   ^       <<           >>            ~
# (AND, OR, XOR, Left shift, Right shift, Complement/NOT)

# In[23]:


n1=int(input("Enter number 1:"))
n2=int(input("Enter number 2:"))
print("Binary of n1= %s and Binary of n2= %s"%(bin(n1),bin(n2)))
print("And operator: ",bin(n1&n2))
print("Or operator: ",bin(n1|n2))
print("Not operator:",bin(~n1))
print("XOR operator: ",bin(n1^n2))
print("Left shift operator: ",bin(n1<<2))
print("Right shift operator: ",bin(n1>>2))


# In[24]:


n1=int(input("Enter number 1:"))
n2=int(input("Enter number 2:"))
print(bin(n1),bin(n2))

