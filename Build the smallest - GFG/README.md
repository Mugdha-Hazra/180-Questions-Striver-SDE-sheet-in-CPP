# Build the smallest
## Medium
<div class="problems_problem_content__Xm_eO"><p>Given a number <strong>k</strong>&nbsp;and string <strong>num</strong>&nbsp;of digits (0 to 9) denoting a positive integer.&nbsp;Find a string denoting the lowest integer number possible&nbsp;by removing <strong>k</strong>&nbsp;digits from <strong>num</strong>,&nbsp;without changing their order.<br>
<strong>Note</strong>: num will not contain any leading zero.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong>
k = 2
num = "143729"
<strong>Output:</strong> "1329"
<strong>Explanation: </strong>1329 is the minimum number
possible after removing '4' and '7'.</pre>

<p>&nbsp;</p>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong>
k = 3
num = "10056"
<strong>Output:</strong> "0"
<strong>Explanation: </strong>0 is the minimum number
possible after removing '1' , '5' and '6'.</pre>

<p>&nbsp;</p>

<p><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>buildLowestNumber()</strong>&nbsp;which accepts string <strong>num</strong>&nbsp;and integer <strong>k</strong>&nbsp;as input parameters and returns a string denoting the smallest integer possible after removing <strong>k</strong>&nbsp;digits from <strong>num</strong>&nbsp;without changing the order.</p>

<p><br>
<strong>Expected Time Complexity: </strong>O(Length of num)&nbsp;<br>
<strong>Expected Auxiliary Space: </strong>O(Length of num)&nbsp;</p>

<p><br>
<strong>Constraints:</strong><br>
1 &lt;= Length of num &lt;= 10<sup>5</sup><br>
0 &lt;= k &lt; Length of num</p>
</div>