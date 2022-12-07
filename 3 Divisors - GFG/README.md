# 3 Divisors
## Medium
<div class="problems_problem_content__Xm_eO"><p>You are given a list&nbsp;of q queries and for every query, you are given an integer N.&nbsp; The task is to find how many numbers(<strong>less than or equal to N)&nbsp;</strong>have number&nbsp;of divisors exactly equal to <strong>3</strong>.</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:
</strong>q = 1
query[0] = 6
<strong>Output:</strong>
1
<strong>Explanation:</strong>
There is only one number 4 which has
exactly three divisors 1, 2 and 4 and
less than equal to 6.</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:
</strong>q = 2
query[0] = 6
query[1] = 10
<strong>Output:
</strong>1
2
<strong>Explanation:
</strong>For query 1 it is covered in the
example 1.
query 2: There are two numbers 4 and 9
having exactly 3 divisors and less than
equal to 10.
</pre>

<p><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>threeDivisors()</strong>&nbsp;which takes an integer <strong>q</strong>&nbsp;and a list of integer of size <strong>q</strong> as input parameter and returns the list containing the count of the numbers having exactly 3 divisors for each query.<br>
<br>
<strong>Expected Time Complexity:</strong>&nbsp;O(q*N*log(log(N)))<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N), where N is min(10^6,N)</p>

<p><strong>Constraints :&nbsp;</strong><br>
1 &lt;= q &lt;=&nbsp;103<br>
1 &lt;= query[i]&nbsp;&lt;= 1012</p>
</div>