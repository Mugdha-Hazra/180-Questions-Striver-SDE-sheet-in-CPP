# Number of Subarrays of 0's
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>arr</strong>&nbsp; of length<strong> N</strong> of 0's and 1's. Find the total number of subarrays of 0's</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4</span>
<span style="font-size:18px">arr[] = {0, 0, 1, 0}</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">4</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">Following are the subarrays of</span>
<span style="font-size:18px">length 1: {0}, {0}, {0} - 3</span>
<span style="font-size:18px">length 2: {0, 0} - 1</span>
<span style="font-size:18px">Total Subarrays: 3 + 1 = 4</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 4</span>
<span style="font-size:18px">arr[] = {0, 0, 0, 0}</span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">10</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">Following are the subarrays of</span>
<span style="font-size:18px">length 1: {0}, {0}, {0}, {0} - 4</span>
<span style="font-size:18px">length 2: {0, 0}, {0, 0}, {0, 0} - 3</span>
<span style="font-size:18px">length 3: {0, 0, 0}, {0, 0, 0} - 2</span>
<span style="font-size:18px">length 4: {0, 0, 0, 0} - 1</span>
<span style="font-size:18px">Total Subarrays: 4 + 3 + 2 + 1 = 10</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">Your task is to complete the function <strong>no_of_subarrays(),</strong> which takes an integer <strong>N </strong>and an integer array <strong>arr </strong>as the input parameters&nbsp;and returns an integer denoting the total number of subarrays of 0's.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= N &lt;= 10<sup>6</sup></span></li>
	<li><span style="font-size:18px">0 &lt;= arr[i] &lt;= 1</span></li>
</ul>
</div>