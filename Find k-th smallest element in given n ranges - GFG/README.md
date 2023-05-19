# Find k-th smallest element in given n ranges
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given <strong>n </strong>ranges of the form [p, q] which denotes all the numbers in the range [p, p + 1, p + 2,...q].&nbsp; Given another integer <strong>q </strong>denoting&nbsp;the number of queries.&nbsp;The task is to return&nbsp;the <strong>k<sup>th</sup></strong>&nbsp;smallest element for each query (assume k&gt;1) after <strong>combining</strong> all the ranges.<br>In case the <strong>k<sup>th</sup></strong> smallest element doesn't exist return -1.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:<br></strong>n = 2, q = 3
range[] = {{1, 4}, {6, 8}}
queries[] = {2, 6, 10}
<strong>Output: <br></strong>2 7 -1
<strong>Explanation:</strong> <br>After combining the given ranges, 
the numbers become 1 2 3 4 6 7 8. As here 2nd 
element is 2, so we print 2. As 6th element is 
7, so we print 7 and as 10th element doesn't <br>exist, so weprint -1.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:<br></strong>n = 2, q = 2
range[] = {{2, 6}, {5, 7}} 
queries[] = {5, 8}
<strong>Output: <br></strong>6 -1
<strong>Explantion: <br></strong></span><span style="font-size: 14pt;">After combining the ranges, we'll take <strong>Union</strong> of </span><br><span style="font-size: 14pt;">range= {2,3,4,5,6,7}, here  5th smallest number </span><br><span style="font-size: 14pt;">will be 6 and 8th smallest number does not exists.</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>kthSmallestNum</strong><strong>()</strong> which takes a n * 2 array denoting the ranges and an array denoting the queries.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(nlogn+q*n)<br><strong>Expected Auxiliary Space:</strong> O(q)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n &lt;= 10<sup>3</sup></span><br><span style="font-size: 18px;">1 &lt;= range[i][0] &lt;= range[i][1] &lt;= 2*10<sup>9</sup></span><br><span style="font-size: 18px;">1 &lt;= q &lt;= 500</span><br><span style="font-size: 18px;">1 &lt;= queries[i] &lt;= 2*10<sup>9</sup></span></p></div>