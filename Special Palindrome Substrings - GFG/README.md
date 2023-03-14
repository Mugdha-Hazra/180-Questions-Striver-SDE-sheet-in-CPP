# Special Palindrome Substrings
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two strings s1 and s2, The task is to convert s1 into a palindrome such that s1 contain s2 as a substring in a minimum number of operation.<br>
In a&nbsp;single operation, we can replace any word of s1 with any character.</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>If it is not possible to convert s1 such that it is a palindrome as well as contains substring of s2, then return -1.</span></p>

<p><span style="font-size:18px"><span style="font-family:Arial"><span style="color:#000000"><strong>Example 1:</strong></span></span></span></p>

<pre><span style="font-size:18px"><span style="font-family:Arial"><span style="color:#000000"><strong>Input:</strong>
s1="abaa" s2="bb"
<strong>Output:</strong> 1
<strong>Explanation:</strong>
we can replace s1[2]='a' with 'b'.
So the new s1 will be like "abba",
having s2 as a substring.</span></span></span>
</pre>

<p><span style="font-size:18px"><span style="font-family:Arial"><span style="color:#000000"><strong>Example 2:</strong></span></span></span></p>

<pre><span style="font-size:18px"><span style="font-family:Arial"><span style="color:#000000"><strong>Input:</strong>
</span></span></span><span style="font-size:13.5pt"><span style="font-family:Arial"><span style="color:#000000">s1="abbd" s2="mr"</span></span></span><span style="font-size:18px"><span style="font-family:Arial"><span style="color:#000000">
<strong>Output:</strong> 4
<strong>Explanation:</strong>
</span></span></span><span style="font-size:13.5pt"><span style="font-family:Arial"><span style="color:#000000">1st: s1="mrbd" --&gt; 2 operations (this is the 
minimum operation to make s2 a substring of s1) 
2nd: s1="mrrm" --&gt; 2 operations 
(this is the minimum operation to make s1 palindrome)</span></span></span><span style="font-size:18px"><span style="font-family:Arial"><span style="color:#000000">
</span></span></span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp; </strong><br>
You don't need to read input or print anything. Complete the function <strong>specialPalindrome()</strong> which takes the two strings <strong>s1</strong> and <strong>s2</strong> as input parameters. Return the minimum number of operations needs to convert s1 such that it is a palindrome and having s2 as a substring in s1.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N*M) [N: size of s1 and M: size of s2]<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |s2|&nbsp;≤ |s1| ≤&nbsp; 1000</span></p>
</div>