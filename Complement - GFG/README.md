# Complement
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given a binary string <strong>str</strong>. In a single operation, you can choose two indices <strong>L</strong> and <strong>R</strong> such that <strong>1 ≤ L ≤ R ≤ N</strong> and complement the characters between <strong>L</strong> and <strong>R</strong> i.e <strong>str<sub>L</sub>, str<sub>L+1</sub>, …, str<sub>R</sub></strong>. By complement, we mean change character <strong>0</strong> to <strong>1</strong> and vice-versa. </span></p>

<p><span style="font-size:18px">You task is to perform <strong>ATMOST</strong> one operation such that in final string number of <strong>1</strong>s is maximised. If there is no need to completement, i.e., string contains all <strong>1</strong>s, return <strong>-1</strong>. Else, return the two values denoting <strong>L</strong> and <strong>R</strong>. If there are multiple solutions, return the <strong>lexicographically smallest pair of L and R</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
str = "111"
<strong>Output:</strong> -1
<strong>Explanation:</strong> As all characters are&nbsp;'1', 
so don't need to complement any.
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2
str = "01"
<strong>Output:</strong> 1 1
<strong>Explanation:</strong>&nbsp;After complementing [1, 1] 
the string becomes "11".
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything</span><strong>.&nbsp;</strong><span style="font-size:18px">Complete the function <strong>findRange()</strong>&nbsp;which takes the string <strong>str</strong>&nbsp;and the size of the string, <strong>n</strong>,&nbsp;as input parameters&nbsp;and returns an array of length 2 or 1 representing the answer.&nbsp;You don't to print answer or take inputs.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
Str is a binary string i.e. contains only '0' and '1'.</span></p>
</div>