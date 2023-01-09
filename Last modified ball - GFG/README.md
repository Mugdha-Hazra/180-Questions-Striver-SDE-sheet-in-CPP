# Last modified ball
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Samwell laid out <strong>N</strong> bowls&nbsp;in a straight line&nbsp;and put a few marbles randomly in each bowl, i<sup>th</sup> bowl has <strong>A[i]</strong> marbles. A bowl can never have more than 9 marbles at a time. A&nbsp;bowl can have zero marbles. Now Samwells friend adds one more marble to the last bowl, after this addition all the bowls must still be aligned with the rules mentioned above. Adding a marble follows the same rules as of addition with carryover. You are given the initial list of the number of marbles in each bowl find the position of the bowl&nbsp;which was last modified. It is guaranteed that there is at least one bowl which has at least one space left.</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: Consider one-based indexing.</span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 4
A[] = {3, 1, 4, 5}
<strong>Output:</strong>&nbsp;
4
<strong>Explanation</strong>: 
The last bowl has 5 marbels, we can just 
add the marbel here.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
A[] = {1, 9, 9}
<strong>Output:&nbsp;
</strong>1
<strong>Explanation</strong>: 
When we add the marbel to last bowl we 
have to move one marbel to 2nd bowl, 
to add the marbel in 2nd bowl we have 
to move one marbel to 1st bowl.
Hence the last modified bowl is 1.</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>solve( )</strong>&nbsp;which takes <strong>N</strong>&nbsp;and&nbsp;<strong>A[ ]</strong>&nbsp;as input parameters&nbsp;and returns the position of the last modified bowl.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 10<sup>5</sup><br>
0<sup>&nbsp;</sup>≤ A[i] ≤ 9</span></p>
</div>