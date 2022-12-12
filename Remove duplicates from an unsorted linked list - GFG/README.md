# Remove duplicates from an unsorted linked list
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an unsorted linked list of <strong>N</strong> nodes. The task is to remove duplicate&nbsp;elements from this&nbsp;unsorted Linked List. When a value appears in multiple nodes, the node which appeared first should be kept, all others duplicates are to be removed.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
value[] = {5,2,2,4}
<strong>Output: </strong>5 2 4<strong>
Explanation:</strong>Given linked list elements are
5-&gt;2-&gt;2-&gt;4, in which 2 is repeated only.
So, we will delete the extra repeated
elements 2 from the linked list and the
resultant linked list will contain 5-&gt;2-&gt;4</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
value[] = {2,2,2,2,2}
<strong>Output: </strong>2<strong>
Explanation:</strong>Given linked list elements are
2-&gt;2-&gt;2-&gt;2-&gt;2, in which 2 is repeated. So,
we will delete the extra repeated elements
2 from the linked list and the resultant
linked list will contain only 2.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You have to complete the method&nbsp;<strong>removeDuplicates</strong>() which takes <strong>1</strong>&nbsp;argument: the <strong>head</strong> of the linked list. &nbsp;Your function should&nbsp;return a pointer to a linked list with no duplicate element.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= size of linked lists &lt;= 10<sup>6</sup></span><br>
<span style="font-size:18px">0 &lt;= numbers in list &lt;= 10</span><sup>4</sup></p>

<p>&nbsp;</p>
</div>