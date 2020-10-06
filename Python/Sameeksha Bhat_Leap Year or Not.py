#!/usr/bin/env python
# coding: utf-8

# In[1]:


#Leap year or not
year = int(input("Enter the year : ")) #Takes year input from user
if year%4==0 and year%100!=0:
    print(year, "is a leap year")
elif year%100==0:
    print(year, "is not a leap year")
elif year%400==0:
    print(year, "is a leap year")
else:
    print(year, "is not a leap year")


# In[ ]:




