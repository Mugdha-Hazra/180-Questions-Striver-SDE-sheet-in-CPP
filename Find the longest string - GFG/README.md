# Find the longest string
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of strings <strong>arr[]</strong>. You have to find the longest string which is&nbsp;lexicographically smallest and also&nbsp;all of its prefix strings are already present in the array.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> ab a abc abd</span>
<span style="font-size:18px"><strong>Output:</strong> abc</span>
<strong><span style="font-size:18px">Explanation: </span></strong><span style="font-size:18px">We can see that length of the longest </span>
<span style="font-size:18px">string is 3. And there are two string "abc" and "abd"</span>
<span style="font-size:18px">of length 3. But for string "abc" , all of its prefix</span>
<span style="font-size:18px">"a" "ab" "abc" are present in the array. So the</span>
<span style="font-size:18px">output is "abc".</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input: </span></strong><span style="font-size:18px">ab a aa abd abc<strong><span style="font-size:18px"> </span></strong>abda abdd abde abdab</span>
<strong><span style="font-size:18px">Output: </span></strong><span style="font-size:18px">abdab</span>
<strong><span style="font-size:18px">Explanation: </span></strong><span style="font-size:18px">We can see that each string is fulfilling</span>
<span style="font-size:18px">the condition. For each string, all of its prefix </span>
<span style="font-size:18px">are present in the array.And "abdab" is the longest</span>
<span style="font-size:18px">string among them. So the ouput is "abdab".</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>longestString()</strong>&nbsp;which takes the array arr<strong>[]</strong>&nbsp;as input parameter&nbsp;and returns the <strong>longest string </strong>which is also lexicographically&nbsp;smallest.And if there is no such string return empty string.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(NlogN)<br>
<strong>Expected Space Complexity: </strong>O(N)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= length of arr[]&nbsp;&lt;= 10<sup>3</sup><br>
1 &lt;= arr[i].length&nbsp;&lt;=30</span></p>
</div>