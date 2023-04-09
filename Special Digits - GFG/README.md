# Special Digits
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given 5 integers -&nbsp;<strong>N,A,B,C,D</strong>.<br>
Let us say all the integers of length&nbsp;<strong>N</strong>,&nbsp;having only <strong>A </strong>or <strong>B</strong> in their decimal representation are&nbsp;<strong>good </strong>integers. Also, among all the good integers, all those integers whose sum of digits contains either C or D or both are <strong>best </strong>integers.<br>
Find the number of best integers of length <strong>N</strong>. Since the number of best integers can be huge, print it modulo <strong>10<sup>9</sup>+7</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2, A = 1, B = 2, C = 3, D = 5
<strong>Output: 
</strong>2<strong>
Explanation: 
</strong>The following are good integers:- 
{ 12 , 22 , 11 , 21 }
And the following are best integers:- 
{ 12, 21&nbsp;} because sum of digits of 11,22
are 2 and 4, they are not equal to C or D.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 1, A = 1, B = 1, C = 2, D = 3
<strong>Output: 
</strong>0<strong>
Explanation: 
</strong>The following are good integers: - { 1 }
Since sum of digits is 1 which is not equal to
C or D, therefore, answer is 0.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function&nbsp;<strong>solve()</strong> which takes five integers <strong>N,A,B,C</strong>&nbsp;and <strong>D</strong>&nbsp;as&nbsp;input parameters&nbsp;and returns the number of best integers modulo 10<sup>9</sup>+7.</span></p>

<p><strong><span style="font-size:18px">Expected Time Complexity: O(NlogN)<br>
Expected Space Complexity: O(N)</span></strong></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤&nbsp;A, B, C, D ≤ 9<br>
1 ≤ N&nbsp;≤ 10<sup>5</sup></span></p>
</div>