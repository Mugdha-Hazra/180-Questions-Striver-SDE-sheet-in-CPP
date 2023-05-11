# Palindrome with minimum sum
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string,&nbsp;<strong>S</strong>.The string can contain small case<strong>&nbsp;</strong>English letters or <strong>'?'</strong>. You can replace '?' with any small English letter. Now if it is possible to make&nbsp;the string <strong>S</strong> a palindrome after replacing all&nbsp;'?' then find the palindromic string with a <strong>minimum ascii sum</strong> of the absolute difference of adjacent characters. Otherwise, return -1.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: S = </strong>a???c??c????</span>
<span style="font-size: 18px;"><strong>Output: </strong>4<strong>
Explanation:
</strong>We can see that we can make the string
palindrome. Now to get <strong>minimum</strong> <strong>ascii</strong> <strong>sum</strong> we should
replace all the '?' between 'a' and 'c' with
'b' and all the '?' between two 'c' with 'c'.
So after replacing all the '?' the string: 
<strong>abbbccccbbba</strong>.
The sum of differences of adjacent characters is 4.<strong>   </strong></span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input: S = </strong>a???c??c???c</span><span style="font-size: 18px;"><strong>
Output: </strong>-1
<strong>Explanation:
</strong>It is not possible to make the string palindrome.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minimumSum()&nbsp;</strong>which takes a string S input parameter and returns an integer denoting the&nbsp;sum of differences of adjacent characters. If it is not possible to make string palindrome, return -1.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= |S|&nbsp;&lt;= 10<sup>5</sup></span></p></div>