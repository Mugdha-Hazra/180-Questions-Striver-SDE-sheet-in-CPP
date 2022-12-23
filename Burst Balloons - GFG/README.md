# Burst Balloons
## Hard
<div class="problems_problem_content__Xm_eO"><p>You are given <strong>N</strong>&nbsp;balloons, indexed from <strong>0</strong> to <strong>n - 1</strong>. Each balloon is painted with a number on it represented by an array <strong>arr.</strong> You are asked to brust all the balloons.<br>
If you brust the <strong>i</strong><strong>th&nbsp;</strong>&nbsp;balloon,, you will get <strong>arr[ i - 1 ] * arr[ i ] * arr[ i + 1]</strong> coins. If <strong>i - 1</strong>, or<strong> i + 1</strong> goes out of bounds of the array, consider it as if there is a balloon with a <strong>1</strong> painted on it.<br>
Return the <strong>maximum</strong> coins you can collect by brusting the balloons wisely.</p>

<p><strong>Example 1:</strong></p>

<div style="background:#eeeeee; border:1px solid #cccccc; padding:5px 10px"><strong>Input:</strong><br>
N = 4<br>
arr[ ] = {3, 1, 5, 8}<br>
<strong>Output: </strong>167<br>
<strong>Explanation:</strong>&nbsp;<br>
arr[ ] = {3, 1, 5, 8}&nbsp; - - &gt; {3, 5, 8} - - &gt; {3, 8} - - &gt; { 8} - -&gt; { }<br>
coins = 3 *1 *5,&nbsp; &nbsp; &nbsp; +&nbsp; &nbsp; &nbsp; 3*5*8&nbsp; &nbsp; &nbsp;+&nbsp; &nbsp;1*3*8&nbsp; &nbsp;+&nbsp; 1*8*1&nbsp; &nbsp;= 167<br>
&nbsp;</div>

<p>&nbsp;</p>

<p><strong>Example 2:</strong></p>

<div style="background:#eeeeee; border:1px solid #cccccc; padding:5px 10px"><strong>Input:</strong><br>
N = 2<br>
arr[ ] = {1, 10}<br>
<strong>Output:&nbsp;</strong>20</div>

<p>&nbsp;</p>

<p><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>maxCoins()</strong>&nbsp;which takes the&nbsp;array of&nbsp;integers&nbsp;<strong>arr </strong>and <strong>N&nbsp;</strong>as parameters and returns the maximum coin you can collect.</p>

<p><strong>Expected Time Complexity:</strong>&nbsp;O(N*N*N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N*N)</p>

<p><strong>Constraints:</strong><br>
1 ≤ N ≤ 300<br>
0&nbsp;≤ arr [ i ]&nbsp; ≤ 100</p>
</div>