# Find Kth permutation
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given two integers&nbsp;<strong>N&nbsp;</strong>(1&lt;=N&lt;=9) and&nbsp;<strong>K</strong>. Find the kth permutation sequence of first N natural numbers. Return the answer in&nbsp;<strong>string</strong>&nbsp;format.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>N =<strong> </strong>4, K = 3</span>
<span style="font-size: 18px;"><strong>Output: </strong>1324</span>
<span style="font-size: 18px;"><strong>Explanation: </strong></span>
<span style="font-size: 18px;">Permutations of first 4 natural numbers:
1234,1243,1324,1342,1423,1432.....
So the 3rd permutation is 1324. </span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>N = 3, K = 5</span>
<span style="font-size: 18px;"><strong>Output: </strong>312</span>
<span style="font-size: 18px;"><strong>Explanation: 
</strong>Permutations of first 3 natural numbers:
123,132,213,231,312,321.
So the 5th permutation is 312. </span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>kthPermutation()&nbsp;</strong>which takes two integers N and K as input parameters and returns a string denoting the kth permutation.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N<sup>2</sup>)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 9<br>1 &lt;= K &lt;= N!</span></p></div>