# Shy Geek
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Geek went to buy some chocolates from a nearby shop with <strong>k</strong> coins in his pocket. He found that the shop contains <strong>n</strong> chocolates which are arranged in <strong>sorted order (increasing)</strong> of their prices.<br>
<br>
Now geek wants to taste costlier chocolates so he decided that <strong>he will buy the costliest chocolate</strong> (of course among the ones that he can afford) till there exists at least one type of chocolate he can afford. You may assume that there is an infinite supply of chocolates in the shop Geek visited.<br>
<br>
As you know, Geek is a shy person and hence<strong> he will enquire about the prices of the chocolates at most 50 times</strong> from the shopkeeper. Now, your task is to <strong>find the number of chocolates he had enjoyed</strong>.&nbsp;<br>
<br>
<em><strong>Note:</strong>&nbsp;If you call the Shop.get function more than 50 times it will return -1. Price of chocolates are pairwise distinct.</em></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong> </span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>3 5 
2 4 6</span>

<span style="font-size:18px"><strong>Output:
</strong>1</span>

<span style="font-size:18px"><strong>Explanation:</strong> The prices of chocolates are [2, 4, 6] and Geek had 5 coins with him. So he can only buy chocolate that costs 4 coins (since he always picks the costliest one).</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong> </span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
4 9 
1 2 3 4</span>

<span style="font-size:18px"><strong>Output:
</strong>3</span>

<span style="font-size:18px"><strong>Explanation:</strong> The prices of chocolates are [1, 2, 3, 4] and Geek had 9 coins with him. So he can buy two chocolates that cost 4 coins. Thereafter, he had only 1 coin with him, hence he will have 1 more chocolate (that costs 1 coin).</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Return the number of chocolates geeks had eaten. Use the get(int i) function to inquire about the price of the i'th chocolate.&nbsp;<br>
Note that, you can only call that function 50 times after which it will return -1. <strong>Test cases are generated such that the answer can always be found.</strong></span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(logN)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(logN)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
0 &lt; n &lt; 10<sup>5</sup><br>
0 &lt; priceOfChocolate &lt; = 10<sup>7&nbsp;</sup><br>
0 &lt; k &lt;= 10<sup>12&nbsp;</sup></span></p>
</div>