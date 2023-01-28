# Scrambled String
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two strings&nbsp;<strong>S1</strong>&nbsp;and&nbsp;<strong>S2</strong>&nbsp;of equal length, the task is to determine if S2 is a scrambled form of S1.</span></p>

<p><span style="font-size:18px"><strong>Scrambled string:</strong>&nbsp;Given string&nbsp;<strong>str</strong>, we can represent it as a binary tree&nbsp;by partitioning it into two non-empty substrings recursively.<br>
Below is one possible representation of str = <strong>coder:</strong><br>
&nbsp;</span><img src="data:image/png;base64,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"><br>
<span style="font-size:18px">To scramble the string, we may choose any non-leaf node and swap its two children.&nbsp;<br>
Suppose, we choose the node <strong>co</strong> and swap its two children, it produces a scrambled string <strong>ocder</strong>.<br>
Similarly, if we continue to swap the children of nodes <strong>der</strong> and <strong>er</strong>, it produces a scrambled string <strong>ocred</strong>.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong>&nbsp;Scrambled string is not the same as an Anagram.</span></p>

<p><span style="font-size:18px">Print "Yes" if S2 is a scrambled form of S1 otherwise print "No".</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> S1="coder", S2="ocder"
<strong>Output:</strong> Yes
<strong>Explanation:</strong> ocder is a scrambled 
form of coder.

    ocder
   /    \
  oc    der
 / \    
o   c  

As "ocder" can represent it 
as a binary tree by partitioning 
it into two non-empty substrings.
We just have to swap 'o' and 'c' 
to get "coder".</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> S1="abcde", S2="caebd" 
<strong>Output:</strong> No
<strong>Explanation:</strong> caebd is not a 
scrambled form of abcde.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.&nbsp;You only need to complete the function<strong>&nbsp;isScramble</strong><strong>()&nbsp;</strong>which takes two strings S1 and S2&nbsp;as input and returns a boolean value.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N<sup>2</sup>)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N<sup>2</sup>)</span></p>

<p><strong><span style="font-size:18px">Constrains:&nbsp;</span></strong></p>

<ul>
	<li><span style="font-size:18px">S1.length = S2.length</span></li>
	<li><span style="font-size:18px">S1.length&lt;=31</span></li>
	<li><span style="font-size:18px">S1 and S2 consist of lower-case English letters.</span></li>
</ul>
</div>