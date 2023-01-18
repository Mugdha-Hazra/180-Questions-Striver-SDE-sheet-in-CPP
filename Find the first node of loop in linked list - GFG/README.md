# Find the first node of loop in linked list
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a singly linked list of&nbsp;<strong>N</strong>&nbsp;nodes. Find the first node of the loop if the&nbsp;linked list has a loop. If a loop is present return the node data of the&nbsp;first node of the loop else return -1.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><img alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/20211123204900/lloop-300x105.jpg" style="height:105px; width:300px"></span><span style="font-size:18px">
<strong>Output: </strong>3</span>
<span style="font-size:18px"><strong>Explanation:
</strong>We can see that there exists a loop 
in the given linked list and the first
node of the loop is 3.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px"><img alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/20211123223611/lloop2-300x87.jpg" style="height:87px; width:300px">
<strong>Output: </strong>-1
<strong>Explanation: </strong>No loop exists in the above
linked list.So the output is -1.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function&nbsp;<strong>findFirstNode</strong>() which contains reference to the head as only argument. This function should return the value of the first node of the loop if the linked list contains a loop, else return -1.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">1 &lt;= Data on Node &lt;= 10<sup>6</sup>&nbsp;<br>
0 &lt;= pos&nbsp;&lt;= N</span></p>
</div>