# Job Sequencing Problem
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a set of <strong>N</strong> jobs where each <strong>job<sub>i</sub></strong>&nbsp;has a deadline and profit associated with it. Each job takes <strong><em>1</em></strong> unit of time to complete and only one job can be scheduled at a time. We earn the profit if and only if the job is completed by its deadline. The task is to find the number of jobs done and the&nbsp;<strong>maximum profit</strong>.</span></p>

<p><strong><span style="font-size:18px">Note: </span></strong><span style="font-size:18px">J</span><span style="font-size:18px">obs will be given in the form (Job<sub>id</sub>, Deadline,&nbsp;Profit) associated with that Job.</span><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 4
Jobs = {(1,4,20),(2,1,10),(3,1,40),(4,1,30)}
<strong>Output:
</strong>2 60<strong>
Explanation:
</strong>Job<sub>1</sub>&nbsp;and Job<sub>3 </sub>can be done with
maximum profit of 60 (20+40).</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">N = 5
Jobs = {(1,2,100),(2,1,19),(3,2,27),
&nbsp;       (4,1,25),(5,1,15)}
<strong>Output:
</strong>2 127<strong>
Explanation:
</strong>2 jobs can be done with
maximum profit of 127 (100+27).</span></pre>

<p><span style="font-size:18px"><strong>Your Task</strong> :<br>
You don't need to read input or print anything. Your task is to complete the function <strong>JobScheduling()</strong> which takes an integer <strong>N</strong> and an array of Jobs(Job id, Deadline,&nbsp;Profit) as input and returns an array <strong>ans[ ] </strong>in which<strong> ans[0] contains</strong>&nbsp;<strong>the count of jobs and</strong> <strong>ans[1] contains maximum profit</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(NlogN)<br>
<strong>Expected Auxilliary Space</strong>: O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
1 &lt;= Deadline &lt;= 100<br>
1 &lt;= Profit &lt;= 500</span></p>
</div>