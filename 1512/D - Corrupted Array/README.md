<h2><a href="https://codeforces.com/contest/1512/problem/D" target="_blank" rel="noopener noreferrer">1512D — Corrupted Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1512D](https://codeforces.com/contest/1512/problem/D) |

## Topics
`constructive algorithms` `data structures` `greedy`

---

## Problem Statement

<div class="header"><div class="title">D. Corrupted Array</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a number $$$n$$$ and an array $$$b_1, b_2, \ldots, b_{n+2}$$$, obtained according to the following algorithm: </p><ul> <li> some array $$$a_1, a_2, \ldots, a_n$$$ was guessed; </li><li> array $$$a$$$ was written to array $$$b$$$, i.e. $$$b_i = a_i$$$ ($$$1 \le i \le n$$$); </li><li> The $$$(n+1)$$$-th element of the array $$$b$$$ is the sum of the numbers in the array $$$a$$$, i.e. $$$b_{n+1} = a_1+a_2+\ldots+a_n$$$; </li><li> The $$$(n+2)$$$-th element of the array $$$b$$$ was written some number $$$x$$$ ($$$1 \le x \le 10^9$$$), i.e. $$$b_{n+2} = x$$$; The </li><li> array $$$b$$$ was shuffled. </li></ul><p>For example, the array $$$b=[2, 3, 7, 12 ,2]$$$ it could be obtained in the following ways: </p><ul> <li> $$$a=[2, 2, 3]$$$ and $$$x=12$$$; </li><li> $$$a=[3, 2, 7]$$$ and $$$x=2$$$. </li></ul><p>For the given array $$$b$$$, find any array $$$a$$$ that could have been guessed initially.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$). Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$).</p><p>The second row of each test case contains $$$n+2$$$ integers $$$b_1, b_2, \ldots, b_{n+2}$$$ ($$$1 \le b_i \le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output: </p><ul> <li> "<span class="tex-font-style-tt">-1</span>", if the array $$$b$$$ could not be obtained from any array $$$a$$$; </li><li> $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$, otherwise. </li></ul><p>If there are several arrays of $$$a$$$, you can output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003664676730518561" id="id009814766871387827" class="input-output-copier">Copy</div></div><pre id="id003664676730518561">4
3
2 3 7 12 2
4
9 1 7 1 6 5
5
18 2 2 3 2 9 2
3
2 6 9 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0000022136576043296774" id="id00829383225832873" class="input-output-copier">Copy</div></div><pre id="id0000022136576043296774">2 3 7 
-1
2 2 2 3 9 
1 2 6 
</pre></div></div></div>