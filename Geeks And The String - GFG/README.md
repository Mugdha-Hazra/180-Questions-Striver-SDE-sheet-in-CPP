# Geeks And The String
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Our geek loves to play with strings, Currently, he is trying to reduce the size of a string by recursively removing all the consecutive duplicate pairs. In other words, He can apply the below operations any number of times.</span></p>

<ul>
	<li><span style="font-size:18px">Remove all the consecutive duplicate pairs and concatenate the remaining string to replace the original string.</span></li>
</ul>

<p><span style="font-size:18px">Your task is to find the string with minimum length after applying the above operations.</span></p>

<p><strong><span style="font-size:18px">Note:&nbsp;</span></strong><span style="font-size:18px">If the string length become zero after applying operations, return "-1" as a string.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
aaabbaaccd
<strong>Output</strong>: 
ad
<strong>Explanation</strong>: 
Remove (aa)abbaaccd =&gt;abbaaccd
Remove a(bb)aaccd =&gt; aaaccd
Remove (aa)accd =&gt; accd
Remove a(cc)d =&gt; ad
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
aaaa
<strong>Output</strong>: 
Empty String
<strong>Explanation</strong>: 
Remove (aa)aa =&gt; aa
Again removing pair of duplicates then (aa) 
will be removed and we will get 'Empty String'.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a <strong>function </strong>problem. You only need to <strong>complete </strong>the function<strong> removePair()&nbsp;</strong>that takes a&nbsp;<strong>string </strong>as a&nbsp;<strong>parameter</strong> and <strong>returns </strong>the <strong>modified string</strong>. Return an empty string if the whole string is deleted.</span></p>

<p><span style="font-size:16px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |str| &lt;= 10<sup>4</sup></span></p>
</div>