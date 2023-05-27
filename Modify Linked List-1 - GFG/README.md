# Modify Linked List-1
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a singly linked list containing&nbsp;<strong>N</strong>&nbsp;nodes. Modify the Linked list as follows:</span></p>
<p><span style="font-size: 18px;">1. Modify the value of the first half nodes such that 1st node's&nbsp;new value is equal to the value of the last node minus the first node's current value, 2nd node's new value is equal to the second last nodes value minus 2nd nodes current value, likewise for first half nodes.<br>2. Replace the second half of nodes with the initial values of the first half nodes(values before modifying the nodes).<br>3. If&nbsp;<strong>N</strong>&nbsp;is odd then the value of the middle node remains unchanged.<br><br><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 5
linked list = 10 -&gt; 4 -&gt; 5 -&gt; 3 -&gt; 6</span>
<span style="font-size: 18px;"><strong>Output:
</strong>-4 -1 5 4 10
<strong>Explanation:
</strong>For first half nodes modified list will be:
-4 -&gt; -1 -&gt; 5 -&gt; 3 -&gt; 6
For second half nodes modified list will be:
-4 -&gt; -1 -&gt; 5 -&gt; 4 -&gt; 10</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 6
linked list = 2 -&gt; 9 -&gt; 8 -&gt; 12 -&gt; 7 -&gt; 10</span>
<span style="font-size: 18px;"><strong>Output:</strong>
8 -2 4 8 9 2</span>
<span style="font-size: 18px;"><strong>Explanation:
</strong>After modifying the linked list as required,
we have a new linked list containing the elements as
8 -&gt; -2 -&gt; 4 -&gt; 8 -&gt; 9 -&gt; 2.</span></pre>
<p><span style="font-size: 18px;"><strong>YourTask:</strong><br>The task is to complete the function&nbsp;<strong>modifyTheList</strong>() which should modify the list as required.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;=&nbsp;</span><span style="font-size: 18px;">10</span><sup>5</sup><br><span style="font-size: 14pt;">-10<sup>5&nbsp; </sup>&lt;= Node-&gt;data &lt;= 10<sup>5</sup></span></p></div>