# Game Of Subsets
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Elena is the topper of the class. Once her teacher asked her a problem. He gave Elena an array of integers of length <strong>n</strong>. He calls a subset of array <strong>arr good</strong>&nbsp;if its product can be represented as a product of one or more&nbsp;<strong>distinct prime</strong>&nbsp;numbers. He asked her to find the number of different&nbsp;<strong>good</strong>&nbsp;subsets in&nbsp;<strong><code>arr</code></strong>&nbsp;modulo&nbsp;<code>10<sup>9</sup>&nbsp;+ 7</code>.</span></p>

<p><span style="font-size:18px">As a good friend of Elena help her to solve the problem.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N: 4
arr: {1,2,3,4}
<strong>Output: 6</strong>
<strong>Explanation: </strong>
The good subsets are:
- [1,2]: product is 2, which is the product of distinct
prime 2.
- [1,2,3]: product is 6, which is the product of 
distinct primes 2 and 3.
- [1,3]: product is 3, which is the product of distinct
prime 3.
- [2]: product is 2, which is the product of distinct
 prime 2.
- [2,3]: product is 6, which is the product of distinct
primes 2 and 3.
- [3]: product is 3, which is the product of distinct
prime 3.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N : 3
arr : {2, 2, 3}<strong>
Output: 5</strong><strong>
Explanantion:
</strong>The good subsets are : {2}, {2}, {2, 3}, {2, 3}, {3}</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>goodSubsets</strong>() which takes an integer<strong> n</strong>&nbsp;and an array <strong>arr </strong>as the input parameters and should return the number of different good subsets.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(NlogN)<br>
<strong>Expected Space Complexity: </strong>O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= <strong>N </strong>&lt;= 10<sup>5</sup></span></li>
	<li><span style="font-size:18px">1&lt; = <strong>arr[i] </strong>&lt;= 30</span></li>
</ul>
</div>