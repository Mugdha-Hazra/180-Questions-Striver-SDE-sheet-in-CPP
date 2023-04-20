# Bheem Wants Ladoos
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Chhota Bheem wants to eat the maximum number of ladoos in Dholakpur&nbsp;on Independence Day. The houses in Dholakpur&nbsp;are arranged in the form of a <strong>binary tree </strong>and have ladoos the same as their house number. Chhota Bheem&nbsp;is standing at <strong>his home</strong>&nbsp;initially.&nbsp;<br>
Find the maximum ladoos he can eat if he can go to houses&nbsp;within a maximum distance <strong>k</strong> from his house. The number of ladoos at his home&nbsp;should also be included in the sum.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> Every&nbsp;house has distinct ladoos in it.&nbsp;</span><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
    &nbsp;              <strong>1</strong>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp;/&nbsp;&nbsp; &nbsp;\
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;   2&nbsp; &nbsp; &nbsp; <strong>9</strong>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;    /&nbsp; &nbsp; &nbsp;&nbsp;/&nbsp;&nbsp;\
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;     4&nbsp; &nbsp; &nbsp; <strong>5</strong>&nbsp; &nbsp; &nbsp;<strong>7</strong>
&nbsp; &nbsp; &nbsp; &nbsp;     /&nbsp; &nbsp;\&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/&nbsp; \
&nbsp; &nbsp; &nbsp;      8&nbsp; &nbsp;  19&nbsp; &nbsp; &nbsp;20&nbsp; &nbsp; 11
&nbsp; &nbsp;       /&nbsp; &nbsp; &nbsp;/&nbsp; \
 &nbsp;       30&nbsp; &nbsp;40&nbsp; &nbsp;50
home = 9, K = 1
<strong>Output:</strong>
22
<strong>Explanation:
</strong>Initially Bheem at 9, so sum = 9
In 2nd move he went to 5, sum=9+5=14
In 3rd move he went to 7, sum=14+7=21
In 4th move he went to 1, sum=21+1=22
So within K distance bheem can get 22 ladoos.  </span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
    &nbsp;              1
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp;/&nbsp;&nbsp; &nbsp;\
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;   2&nbsp; &nbsp; &nbsp; 9
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;    /&nbsp; &nbsp; &nbsp;&nbsp;/&nbsp;&nbsp;\
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;     <strong>4</strong>&nbsp; &nbsp; &nbsp; 5&nbsp; &nbsp; &nbsp;7
&nbsp; &nbsp; &nbsp; &nbsp;     /&nbsp; &nbsp;\&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;/&nbsp; \
&nbsp; &nbsp; &nbsp;      8&nbsp; &nbsp;  <strong>19</strong>&nbsp; &nbsp; &nbsp;20&nbsp; &nbsp; 11
&nbsp; &nbsp;       /&nbsp; &nbsp; &nbsp;/&nbsp; \
 &nbsp;       30&nbsp; &nbsp;<strong>40</strong>&nbsp; &nbsp;<strong>50</strong>
home = 40, K = 2
<strong>Output:</strong>
113
<strong>Explanation:</strong>
Initially Bheem at 40, so sum = 40
In 2nd move he went to 19, sum=40+19=59
In 3rd move he went to 4, sum=59+4=63
In 4th move he went to 50, sum=63+50=113
So within K distance bheem can get 113 ladoos.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Complete the function <strong>ladoos() </strong>which takes the root of the&nbsp;tree, home, and K&nbsp; as input parameters and returns the&nbsp;maximum number of ladoos he can eat.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N), where N is no. of nodes</span><br>
<span style="font-size:18px"><strong>Expected Space Complexity</strong>: O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, Home&nbsp;≤ 10<sup>5</sup><br>
1 ≤ K ≤ 20</span></p>
</div>