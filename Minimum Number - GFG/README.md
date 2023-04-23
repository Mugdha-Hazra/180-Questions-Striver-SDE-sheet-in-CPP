# Minimum Number
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>arr </strong>of <strong>n </strong>elements. In one operation you can pick two indices <strong>i </strong>and <strong>j</strong>, such that <strong>arr[i] &gt;= arr[j]</strong>&nbsp;and replace the value of <strong>arr[i]</strong> with <strong>(arr[i] - arr[j])</strong>. You have to <strong>minimize</strong> the&nbsp;values of the array after performing any number of such operations.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 3
arr = {3,2,4}
<strong>Output:</strong>
1
<strong>Explanation:</strong>
1st Operation : We can pick 4 &amp; 3, subtract 4-3 =&gt; {3,2,1}
2nd Opeartion : We can pick 3 &amp; 2, subtarct 3-2 =&gt; {1,2,1}
3rd Operation : We can pick 1 &amp; 2, subtract 2-1 =&gt; {1,1,1}
4th Opeartion : We can pick 1 &amp; 1, subtract 1-1 =&gt; {1,0,1}
5th Operation : We can pick 1 &amp; 1, subtract 1-1 =&gt; {0,0,1}
After this no operation can be performned, so maximum no is left in the array is 1, so the ans is 1.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 2
arr = {2,4}
<strong>Output:</strong>
2
<strong>Explanation:</strong>
1st Operation : We can pick 4 &amp; 2, subtract 4-2 =&gt; {2,2}
2nd Operation : We can pick 2 &amp; 2, subtract 2-2 =&gt; {0,2}
After this no operation can be performned, so maximum no is left in the array is 2, so the ans is 2.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minimumNumber()&nbsp;</strong>which takes an integer&nbsp;<strong>n&nbsp;</strong>and&nbsp;an array <strong>arr</strong>, as input parameters and returns the <strong>maximum</strong> number which is minimized after performing operations.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(n)</span><br>
<span style="font-size:18px"><strong>Expected Space Complexity</strong>: O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n&nbsp;≤ 10<sup>5</sup><br>
1 ≤ arr[i]&nbsp;≤ 10<sup>9</sup></span></p>
</div>