# Maximum Identical Bowls
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">There are <strong>N</strong> bowls containing cookies. In one operation, you can take one cookie from any of the non-empty bowls and put it into another bowl. If the bowl becomes empty you discard it. You can perform the above operation any number of times. You want to know the <strong>maximum</strong> number of bowls you can have with an identical number of cookies.</span></p>
<p><span style="font-size: 18px;"><strong>Note: </strong>All the non-discarded bowls should contain the identical number of cookies.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>:
N = 3
arr[] = {3, 1, 5}
<strong>Output:</strong> 3
<strong>Explanation</strong>: We can put 2 cookies from the 3rd bowl
and put them into the 2nd bowl.Now the array
becomes {3, 3, 3}. Each bowl now contains 3 cookies.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
N = 4
arr[] = {1, 2, 6, 5}
<strong>Output: </strong>2
<strong>Explanation</strong>: We can take 6 cookies from the 3rd bowl 
and put them into 1st bowl, now the array becomes 
{7, 2, 0, 5}. We discard the 3rd array as it becomes
 empty. Hence, arr={7, 2, 5}. Now, we take 5 cookies 
from 3rd bowl and put them into the 2nd bowl. Hence 
arr={7, 7, 0}. Discarding 3rd empty bowl, number of 
bowls containing identical number of cookies i.e 7 is 2.</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp; </strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>getMaximum()</strong> which takes the array arr[] and its size N as input parameters and returns the maximum number of bowls we can have with an identical number of cookies.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= N &lt;= 10<sup>5</sup><br>1 &lt;= arr[i] &lt;= 10<sup>9</sup><br>Array may contain duplicate elements.</span></p></div>