# Type it!
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek is extremely punctual&nbsp;but today even he is not feeling like doing his homework assignment. He must start doing it immediately in order to meet the&nbsp;deadline. For the assignment, Geek needs to type a&nbsp;string <strong>s</strong>.<br>
To reduce his workload, he has decided to perform&nbsp;one of the following two operations till he gets the string.</span></p>

<ul>
	<li><span style="font-size:18px">Append a character at the end of the string.</span></li>
	<li><span style="font-size:18px">Append the string formed thus far to the end of the string. (This can not be done&nbsp;more than once.)</span></li>
</ul>

<p><span style="font-size:18px">Help Geek find the minimum operations required to type the given string.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
s = abcabca
<strong>Output:</strong>&nbsp;5
<strong>Explanation</strong>: a -&gt; ab -&gt; abc -&gt; abcabc 
-&gt; abcabca
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
s = abcdefgh
<strong>Output:&nbsp;</strong>8
<strong>Explanation</strong>: a -&gt; ab -&gt; abc -&gt; abcd 
-&gt; abcde -&gt; abcdef -&gt; abcdefg -&gt; abcdefgh
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>minOperation()</strong>&nbsp;which takes a string s<strong>&nbsp;</strong>as input parameter&nbsp;and returns the minimum operations required to type it.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N<sup>2</sup>)<br>
<strong>Expected Auxiliary Space: </strong>O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>3</sup></span></p>
</div>