# String Mirror
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a string <strong>str</strong>&nbsp;of length <strong>n</strong>. You want to choose a non-zero integer k (k&lt;=n), such that you can perform the following operation:<br>
Take the prefix of the string of length k and append the reverse of it to itself.<br>
Your task is to find the <strong>lexicographically smallest</strong> string you can get.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
str = "bvdfndkn"
<strong>Output:</strong>
bb
<strong>Explanation:
</strong>If we choose k=1, prefix of length k will be "b", reverse of
this prefix will be "b" itself, when we append both we get "bb",
"bb" is the lexicographically smallest string you can get.
If you choose k&gt;1, the resulting string will not be 
lexicographically smaller than "bb".</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
str = "casd"
<strong>Output:</strong>
caac
<strong>Explanation:
</strong>If we choose k=2, prefix of length k will be "ca", reverse of
this prefix will be "ac", when we append both we get "caac",
"caac" is the lexicographically smallest string you can get.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>stringMirror()</strong> which takes a String <strong>str</strong>&nbsp;as input, and returns&nbsp;the lexicographically smallest string.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(|str|)<br>
<strong>Expected Space Complexity:</strong> O(|str|)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |str| &lt;= 10<sup>5</sup></span></p>
</div>