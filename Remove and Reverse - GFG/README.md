# Remove and Reverse
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string&nbsp;<strong>S </strong>which consists of only lowercase English alphabets, you have to perform the below&nbsp;operations:<br>
If the string <strong>S</strong> contains any repeating character, remove the first repeating&nbsp;character and reverse the string&nbsp;and again perform the above operation on the modified string, otherwise, you stop.<br>
You have to find the final string.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> S = "abab"
<strong>Output:</strong> ba
<strong>Explanation:</strong>
<strong>In 1st operation:</strong> The first repeating 
character is a. After Removing the first 
character, S = "bab". After Reversing the 
string, S = "bab".
<strong>In 2nd operation:</strong> The first non repeating 
character is b. After Removing the first 
character, S = "ab". After Reversing the 
string, S = "ba".
Now the string S does not contain any 
repeating character.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> S = "dddd"
<strong>Output:</strong> d</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>removeReverse( )</strong>&nbsp;which accepts a string <strong>S</strong>&nbsp;input parameter and returns the modified string.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(|S|)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(K), K &lt;= 26.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
The string contains only lowercase English alphabets.<br>
1 <u>&lt;</u>&nbsp;|S|&nbsp;<u>&lt;</u>&nbsp;10<sup>5</sup><br>
|S| denotes the length of the string S.</span></p>
</div>