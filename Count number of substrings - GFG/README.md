# Count number of substrings
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string of lowercase alphabets, count all possible <strong>substrings </strong>(not necessarily distinct) that have <strong>exactly k distinct</strong> characters.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
S = "aba", K = 2
<strong>Output:</strong>
3
<strong>Explanation</strong>:
The substrings are: "ab", "ba" and "aba".</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: 
S = "abaaca", K = 1
<strong>Output:</strong>
7
<strong>Explanation</strong>:
The substrings are: "a", "b", "a", "aa", "a", "c", "a". </span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>substrCount()&nbsp;</strong>which takes the string S and an integer K as inputs and returns the number of substrings having exactly K distinct characters.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(|S|).<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ |S| ≤ 10<sup>6</sup><br>1 ≤ K ≤ 26</span></p></div>