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

