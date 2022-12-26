# Akku and Binary Numbers
## Easy
<div class="problems_problem_content__Xm_eO"><p>Akku likes binary numbers and she likes playing with these numbers. Her teacher once gave her a question.For given value of&nbsp; L and&nbsp;R, Akku have to find the count of number X, which have only three-set bits in it's binary representation such that "L ≤ X ≤ R".Akku is genius, she solved the problem easily. Can you do it ??</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input</strong>:
L = 11 and R = 19 
<strong>Output:</strong>&nbsp;4
<strong>Explanation</strong>:
There are 4 such numbers with 3 set bits in 
range 11 to 19.
11 -&gt; 1011
13 -&gt; 1101
14 -&gt; 1110
19 -&gt; 10011</pre>

<p>&nbsp;</p>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong>
L = 25 and R = 29
<strong>Output: 3
</strong><strong>Explanation</strong>:
There are 3 such numbers with 3 set bits in
range 25 to 29. 
25 -&gt; 11001 
26 -&gt; 11010 
28 -&gt; 11100
</pre>

<p><br>
<strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>solve()</strong>&nbsp;which takes the integer <strong>L</strong> and <strong>R</strong> as input parameters and returns&nbsp;the count of number X, which have only three-set bits in its binary representation such that "L ≤ X ≤ R".<br>
<br>
<strong>Expected Time Complexity:</strong> O(63<sup>3</sup>) + O(log(R-L))<br>
<strong>Expected Auxiliary Space:</strong> O(63<sup>3</sup>)</p>

<p><br>
<strong>Constraints:</strong><br>
1 ≤ L ≤ R ≤ 10<sup>18</sup></p>
</div>