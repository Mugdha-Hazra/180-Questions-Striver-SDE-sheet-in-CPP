# Redundant Parenthesis
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a valid expression containing only binary operators&nbsp;<strong>'+', '-', '*', '/' </strong>and operands,&nbsp;remove all the redundant parenthesis.</span></p>

<blockquote>
<p><span style="font-size:18px">A set of parenthesis is said to be redundant&nbsp;if,&nbsp;removing them, does not change the value of the expression.</span></p>
</blockquote>

<p><span style="font-size:18px"><strong>Note: </strong>The operators&nbsp;<strong>'+'</strong> and <strong>'-'</strong> have the same priority. <strong>'*'</strong> and <strong>'/'</strong> also have the same priority. <strong>'*'</strong> and <strong>'/'</strong> have more priority than <strong>'+'</strong> and <strong>'-'</strong>.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
Exp = (A*(B+C))
<strong>Output:</strong>&nbsp;A*(B+C)
<strong>Explanation</strong>: The outermost parenthesis
are redundant.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
Exp = A+(B+(C))
<strong>Output:&nbsp;</strong>A+B+C
<strong>Explanation</strong>: All the parenthesis
are redundant.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>removeBrackets()</strong>&nbsp;which takes the string <strong>Exp&nbsp;</strong>as input parameters&nbsp;and returns the updated expression.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 <u>&lt;</u> Length of Exp <u>&lt;</u>&nbsp;10<sup>5</sup><br>
Exp contains uppercase english letters, '(' , ')', '+', '-', '*' and '/'.</span></p>
</div>