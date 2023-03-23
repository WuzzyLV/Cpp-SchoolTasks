# [Problem](https://www.codechef.com/problems/SNAPCHAT)
The most popular feature on snapchat is Snapchat Streak.
A streak is maintained between two people if both of them send at least one snap to each other daily.
If, on any day, either person forgets to send at least one snap, the streak breaks and the streak count is set to 0.

Chef and Chefina like maintaining their snapchat streak. You observed the snap count of both of them for N consecutive days. On the $i_th$  day, Chef sent $A_i$ snaps to Chefina while Chefina sent $B_i$ snaps to Chef.

Find the maximum streak count they achieved in those N days.

## Input Format
The first line of input will contain a single integer 

T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer 

N — the number of days you observed.

The second lines contains N space-separated integers — $A_1$, $A_2$,…, $A_N$, the number of snaps Chef sent to Chefina on the $i_th$ day.
The third lines contains 

The third line contians N space-separated integers N space-separated integers — $B_1$, $B_2$,…, $B_N$, the number of snaps Chefina sent to Chef on the $i_th$ day.

## Output Format
For each test case, output on a new line, the maximum streak count they achieved in those N days.

## Constraints
- $1≤1001≤T≤100$
- $1≤N≤1000$
- $0≤A_i,B_i≤100$

## Sample 1:
Input | Output
-|-
4|3
3|2
3 1 2|0
2 4 1|2
2|1
0 0
10 10
4
5 4 0 2
3 1 1 0
5
0 1 1 2 0
1 1 0 0 3

## Explanation:
- Test case 1: For all 
3 days, both Chef and Chefina sent at least one snap per day. Thus, at the end of third day, the streak count is 3.

- Test case 2: Chef did not send any snap to Chefina. Thus, at the streak count remains 0 on both days.

- Test case 3: For the first two days, both Chef and Chefina send at least one snap per day. Thus, at the end of second day, the streak count is 
2 On the end of third day, since Chef did not send any snap, the streak count becomes 0.On the end of fourth day, since Chefina did not send any snap, the streak count remains 0.

- Test case 4:
    - On the end of first day, since Chef did not send any snap, the streak count remains 0.
    - On second day, both Chef and Chefina sent at least one snap. Thus, the streak count becomes 1.
    - On the end of third day, since Chefina did not send any snap, the streak count becomes 0.
    - On the end of fourth day, since Chefina did not send any snap, the streak count remains 0.
    - On the end of fifth day, since Chef did not send any snap, the streak count remains 0.
    
    The maximum streak count over 5 days is 1.