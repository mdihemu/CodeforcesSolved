<h2><a href="https://codeforces.com/contest/1417/problem/B" target="_blank" rel="noopener noreferrer">1417B — Two Arrays</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1417B](https://codeforces.com/contest/1417/problem/B) |

## Topics
`greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Two Arrays</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">RedDreamer</span> has an array $$$a$$$ consisting of $$$n$$$ non-negative integers, and an unlucky integer $$$T$$$.</p><p>Let's denote the misfortune of array $$$b$$$ having length $$$m$$$ as $$$f(b)$$$ — the number of pairs of integers $$$(i, j)$$$ such that $$$1 \le i  \lt  j \le m$$$ and $$$b_i + b_j = T$$$. <span class="tex-font-style-it">RedDreamer</span> has to paint each element of $$$a$$$ into one of two colors, white and black (for each element, the color is chosen independently), and then create two arrays $$$c$$$ and $$$d$$$ so that all white elements belong to $$$c$$$, and all black elements belong to $$$d$$$ <span class="tex-font-style-bf">(it is possible that one of these two arrays becomes empty)</span>. <span class="tex-font-style-it">RedDreamer</span> wants to paint the elements in such a way that $$$f(c) + f(d)$$$ is <span class="tex-font-style-bf">minimum</span> possible.</p><p>For example:</p><ul> <li> if $$$n = 6$$$, $$$T = 7$$$ and $$$a = [1, 2, 3, 4, 5, 6]$$$, it is possible to paint the $$$1$$$-st, the $$$4$$$-th and the $$$5$$$-th elements white, and all other elements black. So $$$c = [1, 4, 5]$$$, $$$d = [2, 3, 6]$$$, and $$$f(c) + f(d) = 0 + 0 = 0$$$; </li><li> if $$$n = 3$$$, $$$T = 6$$$ and $$$a = [3, 3, 3]$$$, it is possible to paint the $$$1$$$-st element white, and all other elements black. So $$$c = [3]$$$, $$$d = [3, 3]$$$, and $$$f(c) + f(d) = 0 + 1 = 1$$$. </li></ul><p>Help <span class="tex-font-style-it">RedDreamer</span> to paint the array optimally!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$T$$$ ($$$1 \le n \le 10^5$$$, $$$0 \le T \le 10^9$$$) — the number of elements in the array and the unlucky integer, respectively. </p><p>The second line contains $$$n$$$ integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$0 \le a_i \le 10^9$$$) — the elements of the array. </p><p>The sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print $$$n$$$ integers: $$$p_1$$$, $$$p_2$$$, ..., $$$p_n$$$ (each $$$p_i$$$ is either $$$0$$$ or $$$1$$$) denoting the colors. If $$$p_i$$$ is $$$0$$$, then $$$a_i$$$ is white and belongs to the array $$$c$$$, otherwise it is black and belongs to the array $$$d$$$.</p><p>If there are multiple answers that minimize the value of $$$f(c) + f(d)$$$, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007871753448240056" id="id002992201865776748" class="input-output-copier">Copy</div></div><pre id="id007871753448240056">2
6 7
1 2 3 4 5 6
3 6
3 3 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006492810549491275" id="id0020266863664533852" class="input-output-copier">Copy</div></div><pre id="id006492810549491275">1 0 0 1 1 0 
1 0 0</pre></div></div></div>