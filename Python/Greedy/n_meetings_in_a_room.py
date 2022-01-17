'''
N meetings in one room
There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?

Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.
'''

def maximumMeetings(n,start,end):
    l = []
    for i in range(n):
        l.append([start[i], end[i]])
    l.sort(key = lambda x: x[1])
    limit = 0
    count = 0
    for i in range(len(l)):
        if(l[i][0]>limit):
            limit = l[i][1]
            count += 1
    return count
