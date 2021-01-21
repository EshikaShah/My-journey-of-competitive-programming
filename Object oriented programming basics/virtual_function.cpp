/*Create a class telephone_directory (name, occupation, phone, address) and an virtual
function search (), that searches the object contents in a linear fashion. Extend the class in a
specific class called doctor (qualification, clinic, visiting time) and override the virtual function
such that it searches using binary search. Also create another class lawyer (qualification,
civil/criminal, cases attended, contact_no, office_address) that extends the telephone_directory
such that it won’t override the virtual function. Search for a doctor and a lawyer by taking the
option from the user. 
*/
import math
n = int(input())
pts = []
sqrs = []
sqrpts = []
nonsqrpts = []
pent = []
for i in range(n):
    t = (int(input()),int(input()))
    pts.append(t)
for i in range(n-1):
    for j in range(i+1,n):
        flag = 0
        l = 0
        t1 = pts[i]
        t2 = pts[j]
        if(t1[0]==t2[0]):
            l = abs (t1[1]-t2[1])
            flag = 1
        elif(t1[1]==t2[1]):
            l = abs(t1[0]-t2[0])
            flag = 1
        if(flag==1):
            t2 = (t1[0]+l,t1[1])
            t3 = (t1[0],t1[1]+l)
            t4 = (t1[0]+l,t1[1]+l)
            temp = sorted([t1,t2,t3,t4])
            if(t2 in pts and t3 in pts and t4 in pts and (temp not in sqrs)):
                sqrs.append(temp)
                sqrpts.append(t1)
                sqrpts.append(t2)
                sqrpts.append(t3)
                sqrpts.append(t4)
for i in range(n):
    if(pts[i] not in sqrpts):
        nonsqrpts.append(pts[i])
for i in sqrs:
    for j in nonsqrpts:
        if(i[1][0]-2 <= j[0] <= i[3][0]+2 and i[1][1]< j[1] <= i[3][1]+2):
            k = i
            k.append(j)
            temp = sorted(k)
            pent.append(temp)
        elif(i[1][0] < j[0] <= i[3][0]+2 and i[1][1]-2 <= j[1] <= i[3][1]+2):
            k = i
            k.append(j)
            temp = sorted(k)
            pent.append(temp)
        elif(i[1][0]-2 <= j[0] <= i[3][0]+2 and i[1][1]-2 <= j[1] < i[3][1]):
            k = i
            k.append(j)
            temp = sorted(k)
            pent.append(temp)
        elif(i[1][0]-2 <= j[0] < i[3][0] and i[1][1]-2 <= j[1] <= i[3][1]+2):
            k = i
            k.append(j)
            temp = sorted(k)
            pent.append(temp)
for i in sorted(pent):
    print(i)
