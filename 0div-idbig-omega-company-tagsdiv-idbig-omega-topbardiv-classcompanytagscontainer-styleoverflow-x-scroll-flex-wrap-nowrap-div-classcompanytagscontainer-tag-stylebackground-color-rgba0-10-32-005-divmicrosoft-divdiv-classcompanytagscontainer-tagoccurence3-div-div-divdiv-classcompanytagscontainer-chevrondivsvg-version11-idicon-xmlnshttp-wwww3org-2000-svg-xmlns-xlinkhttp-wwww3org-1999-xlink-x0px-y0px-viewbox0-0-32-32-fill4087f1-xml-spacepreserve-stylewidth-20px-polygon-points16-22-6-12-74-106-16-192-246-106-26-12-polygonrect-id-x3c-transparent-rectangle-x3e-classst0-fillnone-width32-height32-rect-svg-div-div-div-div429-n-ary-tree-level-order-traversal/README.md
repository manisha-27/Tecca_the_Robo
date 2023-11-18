<h2><a href="https://leetcode.com/problems/n-ary-tree-level-order-traversal/"><div id="big-omega-company-tags"><div id="big-omega-topbar"><div class="companyTagsContainer" style="overflow-x: scroll; flex-wrap: nowrap;"><div class="companyTagsContainer--tag" style="background-color: rgba(0, 10, 32, 0.05);"><div>Microsoft</div><div class="companyTagsContainer--tagOccurence">3</div></div></div><div class="companyTagsContainer--chevron"><div><svg version="1.1" id="icon" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px" viewBox="0 0 32 32" fill="#4087F1" xml:space="preserve" style="width: 20px;"><polygon points="16,22 6,12 7.4,10.6 16,19.2 24.6,10.6 26,12 "></polygon><rect id="_x3C_Transparent_Rectangle_x3E_" class="st0" fill="none" width="32" height="32"></rect></svg></div></div></div></div>429. N-ary Tree Level Order Traversal</a></h2><h3>Medium</h3><hr><div><p>Given an n-ary tree, return the <em>level order</em> traversal of its nodes' values.</p>

<p><em>Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<p><img src="https://assets.leetcode.com/uploads/2018/10/12/narytreeexample.png" style="width: 100%; max-width: 300px;"></p>

<pre><strong>Input:</strong> root = [1,null,3,2,4,null,5,6]
<strong>Output:</strong> [[1],[3,2,4],[5,6]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2019/11/08/sample_4_964.png" style="width: 296px; height: 241px;"></p>

<pre><strong>Input:</strong> root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
<strong>Output:</strong> [[1],[2,3,4,5],[6,7,8,9,10],[11,12,13],[14]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The height of the n-ary tree is less than or equal to <code>1000</code></li>
	<li>The total number of nodes is between <code>[0, 10<sup>4</sup>]</code></li>
</ul>
</div>