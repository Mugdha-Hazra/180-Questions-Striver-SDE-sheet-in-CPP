# Maximum Number of coins
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">We have been given N balloons, each with a number of coins associated with it. On bursting a balloon i, the number of coins gained is equal to A[i-1]*A[i]*A[i+1].<br>
Also, balloons i-1 and i+1 now become adjacent. Find the maximum possible profit earned after bursting all the balloons. Assume an extra 1 at each boundary.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input</strong><strong>:</strong> 
N=2
a[]={5, 10}
<strong>Output:</strong> 
60
<strong>Explanation:</strong> First Burst 5, Coins = 1*5*10
              Then burst 10, Coins+= 1*10*1
              Total = 60</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">N=4
a[] = {3,1,5,8}
<strong>Output:
</strong>167
<strong>Explanation:</strong>
nums = [3,1,5,8] --&gt; [3,5,8] --&gt; [3,8] --&gt; [8] --&gt; []
coins =  3*1*5    +   3*5*8   +  1*3*8  + 1*8*1 = 167.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>maxCoins()</strong>&nbsp;which takes the array arr[], its size N, and returns the maximum number of coins that can be collected.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N^3)<br>
<strong>Expected Space Complexity:</strong> O(N^2)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 400</span><br>
<span style="font-size:18px">0 &lt;= a[i] &lt;= 100</span><br>
&nbsp;</p>
</div>