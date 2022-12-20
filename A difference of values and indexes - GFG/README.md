# A difference of values and indexes
## Medium
<div class="problems_problem_content__Xm_eO"><p>Given an unsorted array <strong>arr[ ]</strong> of size <strong>n</strong>, you need to find the maximum difference of absolute values of elements and indexes, i.e., for <strong>i &lt;= j</strong>, calculate maximum of <strong>| arr[ i ] - arr[ j ] | + | i - j |.</strong>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input :</strong> 
n = 3
arr[ ] = {1, 3, -1}
<strong>Output:</strong> 5
<strong>Explanation:</strong>
Maximum difference comes from indexes 
1, 2 i.e | 3 - (-1) | + | 1 - 2&nbsp;| = 5
</pre>

<p><br>
<strong>Example 2:</strong></p>

<pre><strong>Input :</strong> 
n = 4
arr[ ] = {5, 9, 2, 6} <strong>
Output:</strong>  8
<strong>Explanation:</strong> 
Maximum difference comes from indexes 
1, 2 i.e | 9 - 2 | + | 1 - 2&nbsp;| = 8
</pre>

<p>&nbsp;</p>

<p><strong>Your Task:</strong><br>
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong>maxDistance()</strong> that takes an array <strong>(arr)</strong>, sizeOfArray <strong>(n)</strong>, and return the maximum difference as given in the question.&nbsp;&nbsp;The driver code takes care of the printing.</p>

<p><strong>Expected Time Complexity:</strong>&nbsp;O(n).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).<br>
&nbsp;</p>

<p><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 5*(10^5)<br>
-10^6&nbsp;&lt;= <strong>arr[ i ]</strong>&nbsp;&lt;= 10^6</p>
</div>