# Implement strstr
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Your task is to implement the function <strong>strstr</strong>. The function takes two strings as&nbsp;arguments <strong>(s,x)</strong> and&nbsp;&nbsp;locates the occurrence of the string<strong> x</strong>&nbsp;in the string <strong>s</strong>.&nbsp;The function returns and integer denoting the <strong>first occurrence </strong>of the string <strong>x</strong> in <strong>s</strong> (0 based indexing).</span></p>

<p><strong><span style="font-size:18px">Note:&nbsp;</span></strong><span style="font-size:18px">You are not allowed to use inbuilt function.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>s = GeeksForGeeks, x = Fr
<strong>Output: </strong>-1<strong>
Explanation: </strong>Fr is not present in the
string GeeksForGeeks as substring.<strong>
</strong></span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>s = GeeksForGeeks, x = For
<strong>Output: </strong>5<strong>
Explanation: </strong>For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).</span>
</pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't have to take any input. Just complete the <strong>strstr() </strong>function which takes two strings <strong>str, target</strong> as an input parameter. The function returns -1 if no match if found else it returns an integer denoting the first occurrence of the x in the string s.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(|s|*|x|)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Note </strong>: Try to solve the question in constant space complexity.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |s|,|x| &lt;= 100</span></p>
</div>