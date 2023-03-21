# Taxi Booking
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are going to book a taxi. There are infinite number of points 1, 2, 3... on the X axis and your current position is <strong>cur</strong>. There are <strong>N</strong> Taxis near you, and the position of those taxis is given as an array <strong>pos</strong>. Where <strong>pos[i]</strong> denotes the position of the <strong>ith</strong> taxi. You are also given an array <strong>time</strong>. Where <strong>time[i]</strong> denotes the time taken by the <strong>ith</strong> taxi to cover <strong>1 unit</strong> of distance. Your task is to find the <strong>minimum</strong> time to board a taxi.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3, cur = 4
pos = [1, 5, 6]
time = [2, 3, 1]
<strong>Output:</strong>
2
<strong>Explanation:</strong>
Total time taken by the 1st taxi will be: (4-1)*2 = 6
Total time taken by the 2nd taxi will be: (5-4)*3 = 3
Total time taken by the 3rd taxi will be: (6-4)*1 = 2
So, the minimum time will be 2 sec.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2, cur = 1
pos = [1, 6]
time = [10, 3]
<strong>Output:</strong>
0
<strong>Explanation:</strong>
Total time taken by the 1st taxi will be: (1-1)*10 = 0
Total time taken by the 2nd taxi will be: (6-1)*3 = 15
So, the minimum time will be 0 sec.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minimumTime()</strong>&nbsp;which takes two&nbsp;integers&nbsp;<strong>N </strong>and<strong> cur</strong>, and<strong> 2</strong>&nbsp;arrays&nbsp;<strong>pos</strong>, and<strong> time&nbsp;</strong>as input parameters and returns the minimum time required to board the taxi.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 10<sup>5</sup><br>
1&nbsp;≤ cur&nbsp;≤ 10<sup>5</sup><br>
1&nbsp;≤ pos[i] ≤ 10<sup>5</sup><br>
1&nbsp;≤ time[i]&nbsp;≤ 10<sup>3</sup></span></p>
</div>