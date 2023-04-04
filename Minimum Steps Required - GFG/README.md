# Minimum Steps Required
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string <strong>str</strong> consisting of only two characters <strong>'a'</strong>&nbsp;and <strong>'b'</strong>. You need to find the minimum steps required to make the string empty by removing&nbsp;consecutive <strong>a's</strong> and <strong>b's</strong>.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">str = "bbaaabb"</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">2</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">Operation 1: Removal of all <strong>a's</strong> modifies str to "bbbb".
Operation 2: Removal of all remaining <strong>b's</strong> makes str
empty.
Therefore, the minimum number of operations required
is 2.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
str = "aababaa"
<strong>Output:</strong>
3
<strong>Explanation:</strong>
Operation 1: Removal of b's modifies str to "aaabaa".
Operation 2: Removal of b's modifies str = "aaaaa".
Operation 3: Removal of all remaining a's makes str 
empty.
Therefore, the minimum number of operations required 
is 3.</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">You need to complete the function <strong>minSteps()&nbsp;</strong>which takes a string <strong>str&nbsp;</strong>as the only input parameter and returns an integer, denoting the minimum steps required to make the string empty.</span></p>

<p><strong><span style="font-size:18px">Expected Time Complexity:&nbsp;</span></strong><span style="font-size:18px">O(N), where N = length of string <strong>str<br>
Expected Space Complexity:&nbsp;</strong>O(1)</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= str.length() &lt;= 10<sup>5</sup></span></li>
	<li><span style="font-size:18px">'a' &lt;= str[i] &lt;= 'b'&nbsp;</span></li>
</ul>
</div>