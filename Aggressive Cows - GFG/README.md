# Aggressive Cows
## Medium
<div class="problems_problem_content__Xm_eO"><p>You are given an <strong>array</strong>&nbsp;consisting of <strong>n&nbsp;integers</strong> which denote the position of a <strong>stall</strong>. You are also given an <strong>integer</strong> <strong>k</strong> which denotes the number of aggressive cows. You are given the task of <strong>assigning stalls to k&nbsp;cows</strong> such that the <strong>minimum distance between any two of them is the maximum possible</strong>.<br>
The first line of input contains two&nbsp;space-separated integers <strong>n</strong> and <strong>k</strong>.<br>
The second line contains <strong>n</strong> space-separated integers denoting the position of the stalls.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong>
n=5 
k=3
stalls = [1 2 4 8 9]
<strong>Output:</strong>
3
<strong>Explanation:</strong>
The first cow can be placed at stalls[0], 
the second cow can be placed at stalls[2] and 
the third cow can be placed at stalls[3]. 
The minimum distance between cows, in this case, is 3, 
which also is the largest among all possible ways.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong>
n=5 
k=3
stalls = [10 1 2 7 5]
<strong>Output:</strong>
4
<strong>Explanation:</strong>
The first cow can be placed at stalls[0],
the second cow can be placed at stalls[1] and
the third cow can be placed at stalls[4].
The minimum distance between cows, in this case, is 4,
which also is the largest among all possible ways.</pre>

<p><strong>Your Task:</strong><br>
Complete the function int solve(), which takes integer n, k, and a vector&nbsp;stalls&nbsp;with n&nbsp;integers as input and returns the largest possible minimum distance between cows.</p>

<p><strong>Expected Time Complexity:</strong> O(n*log(10^9)).<br>
<strong>Expected Auxiliary Space:</strong> O(1).<br>
<br>
<strong>Constraints:</strong><br>
2 &lt;= n&nbsp;&lt;= 10^5<br>
2 &lt;= k &lt;= n<br>
0 &lt;= stalls[i] &lt;= 10^9</p>
</div>