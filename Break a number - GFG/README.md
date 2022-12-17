# Break a number
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a really large number N, break it into 3 whole numbers such that they sum up to the original number and find the number of ways to do so. Since this number can be very large, return it modulo 10<sup>9</sup>+7.&nbsp;</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2
<strong>Output:</strong>
6
<strong>Explanation:</strong>
Possible ways to break the number:
0 + 0 + 2 = 2 
0 + 2 + 0 = 2
2 + 0 + 0 = 2
0 + 1 + 1 = 2
1 + 1 + 0 = 2
1 + 0 + 1 = 2
</span></pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
<strong>Output:</strong>
10
<strong>Explanation:</strong>
Possible ways to break the number:
0+0+3 = 3
0+3+0 = 3
3+0+0 = 3
0+1+2 = 3
0+2+1 = 3
1+0+2 = 3
1+2+0 = 3
2+0+1 = 3
2+1+0 = 3
1+1+1 = 3</span></pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function waysToBreakNumber() which takes an integer N and returns the possible ways to break the number in 3 parts.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(1)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>9</sup></span></p>

<p>&nbsp;</p>
</div>