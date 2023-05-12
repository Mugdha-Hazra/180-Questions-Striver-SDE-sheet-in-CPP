# Array Operations
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given an array <strong>arr</strong> of <strong>n </strong>integers. You must return the minimum number of operations required to make this array 0. For this you can do an operation :</span></p>
<ul style="list-style-type: square;">
<li><span style="font-size: 18px;">Choose a sub-array of non-zero elements &amp; replace all with 0(0 must be present in arr, if not you can not replace it).</span></li>
</ul>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 4
arr = {3,0,4,5}
<strong>Output:</strong>
2
<strong>Explanation:
</strong>First, we can choose 3 replace with 0</span><span style="font-size: 18px;">(which is on 1st Index) </span><span style="font-size: 18px;">and in the second </span><span style="font-size: 18px;">operation, we </span><span style="font-size: 18px;">can choose 4 &amp; 5 -&gt; replace </span><span style="font-size: 18px;">with 0(1st Index).<br></span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:</span><br><br><span style="font-size: 18px;">n = 8&nbsp;<br></span><span style="font-size: 18px;">arr = {10,4,9,6,10,10,4,4}&nbsp;<br></span><strong><span style="font-size: 18px;">Output:&nbsp;<br></span></strong><span style="font-size: 18px;">-1&nbsp;<br></span><span style="font-size: 18px;"><strong>Explanation</strong>:&nbsp;<br></span><span style="font-size: 18px;">If we do operations here, we can not make the entire 0&nbsp;<br></span><span style="font-size: 18px;">because no 0 is present in the array, hence -1.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>arrayOperations()</strong> which takes an integer <strong>n</strong> and an array <strong>arr</strong> as inputs and </span><span style="font-size: 18px;">find the&nbsp;</span><strong style="font-size: 18px;">minimum</strong><span style="font-size: 18px;">&nbsp;number of operations you must perform to make all the elements of the array&nbsp;</span><strong style="font-size: 18px;">0</strong><span style="font-size: 18px;">. If not possible <strong>return -1</strong>;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n&nbsp;&lt;= 10<sup>5</sup><br>0 &lt;= arr[i] &lt;= 10<sup>9</sup></span></p></div>