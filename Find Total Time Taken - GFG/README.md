# Find Total Time Taken
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>arr</strong> of size <strong>n</strong>, containing the values in between <strong>1</strong> to <strong>n </strong>&amp;<strong> time </strong>of size<strong> n, </strong>containing time in sec, you are asked to determine the total time taken in order to pick all the array elements from left to right but there is a condition, If from left, previous elements are different it takes <strong>1 Sec</strong> to pick &amp; if element got repeated then it will take&nbsp;<strong>time[arr[i]].</strong></span></p>

<p><span style="font-size:18px"><strong>NOTE:</strong><br>
1. It takes <strong>1 sec </strong>to move from index i to i+1 (1 &lt;= i &lt; n).<br>
2. <strong>1-based indexing.</strong></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 4
arr = {1, 2, 3, 3}
time = {1, 2, 3, 4}
<strong>Output:</strong>
5
<strong>Explanation:</strong>
for 1st element(1) = 0 Sec-&gt; total = 0
&nbsp;   2nd element(2) = 1 Sec-&gt; total = 1+0=1
&nbsp;   3rd element(3) = 1 Sec-&gt; total = 1+1=2
&nbsp;   4th element(3) : here element 3 is repeated
&nbsp;   so we have to calculate time by <strong>time[arr[i]]</strong>
&nbsp;   <strong>: </strong>time[arr[4]] =&gt; time[3] =&gt; 3 -&gt; total = 2+3 =5
here you can see 4th element(3) is repeated
so time will be not 1 sec &amp; we have to
calculate time by this: time[arr[i]],there
<strong>Index is 4</strong> which means <strong>arr[4]</strong> gives <strong>3</strong> &amp; then
<strong>time[3]=3</strong>.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 4
arr = {1, 2, 3, 4}
time = {1, 2, 3, 4}
<strong>Output:</strong>
3
<strong>Explanation:</strong>
for 1st element(1) = 0 Sec-&gt; total = 0
&nbsp;   2nd element(2) = 1 Sec-&gt; total = 1
&nbsp;   3rd element(3) = 1 Sec-&gt; total = 2
&nbsp;   4th element(4) = 1 Sec-&gt; total = 3
here you can see no elements are repeated
so time will be 1 sec else will have to 
calculate time by this: <strong>time[arr[i]].</strong></span>
</pre>

<p><span style="font-size:13.5pt"><span style="font-family:Arial"><span style="color:#000000"><strong>Example 3:</strong></span></span></span></p>

<pre><span style="font-size:18px"><span style="font-family:Arial"><span style="color:#000000"><strong>Input:</strong>
n = 8
arr = {6, 6, 1, 8, 1, 1, 3, 1}
time ={8, 4, 1, 5, 2, 8, 9, 3}<strong>
Output:</strong>
35<strong>
Explanation:</strong>
for 1st element(6) = 0 Sec-&gt;<strong> total = 0</strong>
&nbsp; &nbsp; 2nd element(6) = repeated element so
&nbsp; &nbsp; time[arr[i]] = time[6] = 8 Sec-&gt; <strong>total=8+0=8</strong>
&nbsp; &nbsp; 3rd element(1) = 1 Sec-&gt; <strong>total = 8+1=9</strong>
&nbsp; &nbsp; 4th element(8) = 1 Sec-&gt;<strong> total = 9+1=10</strong>
&nbsp; &nbsp; 5th element(1) = repeated 
&nbsp;   So, time[arr[i]] =time[1]=8 Sec-&gt; <strong>total = 8+10 = 18</strong>
&nbsp; &nbsp; 6th element(1) = again repeated = 8 sec
<strong>&nbsp; &nbsp; total = 18+8 = 26</strong>
&nbsp; &nbsp; 7th element(3) = 1 sec-&gt; <strong>total = 26+1=27</strong>
&nbsp; &nbsp; 8th element(1) = 8 Sec (repeated)-&gt;
&nbsp; &nbsp;<strong> total = 27+8 = 35</strong></span></span></span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function totalTime() which takes three variables n, arr, time, as explained in the problem statement, and returns the total time taken to pick all the elements.<br>
<br>
<strong>Expected Time Complexity:</strong> O(n)<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10^5<br>
1 &lt;= arr[i] &lt;= n<br>
1 &lt;= time[i] &lt;= 10^5</span></p>
</div>