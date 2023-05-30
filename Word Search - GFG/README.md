# Word Search
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a 2D board of letters and a word. Check if the word exists in the board. The word can be constructed from letters of adjacent cells only. ie - horizontal or vertical neighbors. The same letter cell can not be used more than once.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>board = {{a,g,b,c},{q,e,e,l},{g,b,k,s}},
word = "geeks"
<strong>Output: </strong>1
<strong>Explanation: </strong>The board is-
a <span style="color: #ff0000;">g</span> b c
q <span style="color: #ff0000;">e</span> <span style="color: #ff0000;">e</span> l
g b <span style="color: #ff0000;">k s
</span></span><span style="font-size: 18px;">The letters which are used to make the
"geeks" are colored.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>board = {{a,b,c,e},{s,f,c,s},{a,d,e,e}},
word = "sabfs"
<strong>Output: </strong>0
<strong>Explanation: </strong>The board is-
a b c e
s f c s
a d e e
Same letter can not be used twice hence ans is 0</span>
</pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>isWordExist()&nbsp;</strong>which takes board and word as input parameter and returns boolean value true if word can be found otherwise returns false.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(N * M * 4<sup>L</sup>) where N = No. of rows in board, M = No. of columns in board, L = Length of word<br><strong>Expected Space Compelxity:&nbsp;</strong>O(L), L is length of word.</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N, M ≤ 100<br>1 ≤ L ≤ N*M</span></p></div>