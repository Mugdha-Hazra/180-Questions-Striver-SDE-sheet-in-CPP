# Ticket Counter
## Easy
<div class="problems_problem_content__Xm_eO"><p><strong>N</strong> people from 1 to N are standing in the queue at a movie ticket counter. It is a weird counter, as it distributes tickets to the <strong>first K</strong> people and then the <strong>last K</strong> people and again first K people and so on, once a person gets a ticket moves <strong>out</strong> of the queue. The task is to find the <strong>last</strong> person to get the ticket.</p>
<p><strong>Example 1</strong></p>
<pre><strong>Input:</strong><br>N = 9<br>K = 3<br><strong>Output:</strong><br>6<br><strong>Explanation:</strong><br>Starting queue will like {1, 2, 3, 4, 5, 6, 7, 8, 9}. After the first distribution queue will look like {4, 5, 6, 7, 8, 9}. And after the second distribution queue will look like {4, 5, 6}. The last person to get the ticket will be 6.</pre>
<p><strong>Example 2</strong></p>
<pre><strong>Input:</strong><br>N = 5<br>K = 1<br><strong>Output:</strong><br>3<br><strong>Explanation:</strong><br>Queue start as {1, 2, 3, 4, 5} -&gt; {2, 3, 4, 5} -&gt; {2, 3, 4} -&gt; {3, 4} -&gt; {3}<br>Last person to get ticket will be 3.</pre>
<p><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function distributeTicket() which takes N and K as inputs and returns the last person to get the ticket.</p>
<p><strong>Expected Time Complexity:</strong> O(N)<br><strong>Expected Space Complexity: </strong>O(N)<br>Try to solve it using O(1) space complexity.</p>
<p><strong>Constraints:</strong><br>1 &lt;= K&lt;= N &lt;= 10<sup>5</sup></p></div>