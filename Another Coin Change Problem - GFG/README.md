# Another Coin Change Problem
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given three integers <strong>n</strong>, <strong>k</strong>,<strong> target</strong>,&nbsp;and an array of coins of size <strong>n</strong>.&nbsp;Find if it is possible to make a change of&nbsp;<strong>target&nbsp;</strong>cents by using an infinite supply of each coin&nbsp;but the total number of coins used must be exactly equal to&nbsp;<strong>k</strong>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 5, k = 3, target = 11
coins = {1, 10, 5, 8, 6}</span>

<span style="font-size:18px"><strong>Output:</strong> 
1</span>

<span style="font-size:18px"><strong>Explanation: </strong>
2 coins of 5 and 1 coins of 1 can be used 
to make change of 11 i.e. 11 =&gt; 5+5+1.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 3, k = 5, target = 25
coins = {7, 2, 4}</span>

<span style="font-size:18px"><strong>Output:</strong>
1</span>

<span style="font-size:18px"><strong>Explanation:</strong>
3 coins 7, 2 coins of 2 can be used to
make change of 25 i.e. 25 =&gt; 7+7+7+2+2.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You only need to complete the function makeChanges()&nbsp;that 3 integers&nbsp;n, k, target,&nbsp;and an array&nbsp;coins as&nbsp;parameters and return True&nbsp;or False.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(n*k*target)<br>
<strong>Expected Space Complexity: </strong>O(k*target)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n, k, coins[i]&nbsp;&lt;= 100<br>
1 &lt;= target &lt;= 1000</span></p>
</div>