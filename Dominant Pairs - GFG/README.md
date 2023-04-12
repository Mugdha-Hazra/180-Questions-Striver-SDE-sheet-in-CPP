# Dominant Pairs
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array of integers of size <strong>n </strong>where n being <strong>even</strong>.. You have to calculate the number of <strong>dominate pairs (i,j)</strong>&nbsp;.&nbsp;Where a pair is called dominant if (&nbsp;<strong>0&lt;=i&lt;n/2, n/2&lt;=j&lt;n, arr[i]&gt;=5*arr[j] </strong>)&nbsp;these&nbsp;relation are&nbsp;fulfilled.</span>&nbsp;<span style="font-size:18px">&nbsp;For example&nbsp;&nbsp;in arr=[10,3,3,1] index i=0, j=3 form a dominating pair<strong><strong> </strong></strong></span></p>

<p><strong><strong><span style="font-size:18px"><strong>Note </strong>: <strong>0</strong> based </span></strong></strong><span style="font-size:18px">indexing is used&nbsp; and n is </span><strong><strong><span style="font-size:18px"><strong>even&nbsp;</strong></span></strong></strong></p>

<p><strong><strong><span style="font-size:18px">Example 1:</span></strong></strong></p>

<pre><strong><strong><span style="font-size:18px"><strong>Input:</strong>
</span></strong></strong><span style="font-size:18px">n=4
arr={10,2,2,1}</span><strong><strong><span style="font-size:18px">
<strong>Output:
</strong></span></strong></strong><span style="font-size:18px">2</span><strong><strong><span style="font-size:18px">
<strong>Explanation:</strong>
</span></strong></strong><span style="font-size:18px">As we can see index i=0 and j=2 where
arr[0]&gt;=5*arr[2] (10&gt;=5*2)is fulfilled so
this forms a dominant pair and in same
manner index i=0 and j=3 forms dominant
pair.So total 2 dominant pairs.</span></pre>

<p><strong><strong><span style="font-size:18px">Example 2:</span></strong></strong><strong><strong> </strong></strong></p>

<pre><strong><strong><span style="font-size:18px"><strong>Input:</strong>
</span></strong></strong><span style="font-size:18px">n=6
arr={10,8,2,1,1,2}</span><strong><strong><span style="font-size:18px">
<strong>Output:
</strong></span></strong></strong><span style="font-size:18px">5<strong><strong><span style="font-size:18px">
</span></strong></strong><strong>Explanation:</strong>
As we can see index i=0 and j=3 where
arr[0]&gt;=5*arr[3] (10&gt;=5*1) is fulfilled so
this forms a dominant pair and in same
manner (0,4),(0,5),(1,3),(1,4) also form
dominant pair.So total 5 dominant pairs.</span></pre>

<p><strong><strong><span style="font-size:18px"><strong>Your Task:</strong></span></strong></strong><br>
<span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function <strong>dominantPairs()</strong> which takes an <strong>integer n</strong> and <strong>an&nbsp;array</strong> of integers <strong>arr</strong>&nbsp;respectively and returns&nbsp;the <strong>count </strong>of dominate pairs.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(nlogn)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= <strong>n</strong>&lt;= 10^4<br>
-10^4&lt;=<strong>arr[i]</strong>&lt;= 10^4<br>
The sum of n over all test cases won't exceed 10^6</span></p>
</div>