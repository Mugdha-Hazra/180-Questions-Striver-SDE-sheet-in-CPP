# Reverse both parts
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a linked list and a number k. You have to reverse first part of linked list with k nodes and the second part with n-k nodes.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>1 -&gt; 2 -&gt; 3 -&gt; 4 -&gt; 5</span><span style="font-size:18px">
k = 2<strong>
Output: </strong>2 -&gt; 1 -&gt; 5 -&gt; 4 -&gt; 3<strong>
Explanation: </strong>As k = 2 , so the first part 2
nodes: 1 -&gt; 2 and the second part with 3 nodes:
3 -&gt; 4 -&gt; 5. Now after reversing the first part: 
2 -&gt; 1 and the second part: 5 -&gt; 4 -&gt; 3.
So the output is: 2 -&gt; 1 -&gt; 5 -&gt; 4 -&gt; 3</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>1 -&gt; 2 -&gt; 4 -&gt; 3</span>
<span style="font-size:18px">k = 3
<strong>Output: </strong>4 -&gt; 2 -&gt; 1 -&gt; 3
<strong>Explanation: </strong>As k = 3 , so the first part 
3 nodes: 4 -&gt; 2 -&gt; 1 and the second part
with 1 nodes: 3. Now after reversing the 
first part: 1 -&gt; 2 -&gt; 4 and the 
second part: 3. So the output is: 1 -&gt; 2 -&gt; 4 -&gt; 3</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>reverse()&nbsp;</strong>which takes head node of the linked list and a integer k&nbsp;as input parameters and returns head node of the linked list after reversing both parts.&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5&nbsp;</sup><br>
1 &lt;= k &lt; N<sup>&nbsp;</sup></span></p>

<p><strong><span style="font-size:18px">Expected Time Complexity: O(N)<br>
Expected Space Complexity: O(1)</span></strong></p>

<p><br>
&nbsp;</p>
</div>