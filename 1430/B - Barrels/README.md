<h2><a href="https://codeforces.com/contest/1430/problem/B" target="_blank" rel="noopener noreferrer">1430B — Barrels</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1430B](https://codeforces.com/contest/1430/problem/B) |

## Topics
`greedy` `implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Barrels</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have $$$n$$$ barrels lined up in a row, numbered from left to right from one. Initially, the $$$i$$$-th barrel contains $$$a_i$$$ liters of water.</p><p>You can pour water from one barrel to another. In one act of pouring, you can choose two different barrels $$$x$$$ and $$$y$$$ (the $$$x$$$-th barrel shouldn't be empty) and pour any possible amount of water from barrel $$$x$$$ to barrel $$$y$$$ (possibly, all water). You may assume that barrels have infinite capacity, so you can pour any amount of water in each of them. </p><p>Calculate the maximum possible difference between the maximum and the minimum amount of water in the barrels, if you can pour water <span class="tex-font-style-bf">at most</span> $$$k$$$ times.</p><p>Some examples: </p><ul> <li> if you have four barrels, each containing $$$5$$$ liters of water, and $$$k = 1$$$, you may pour $$$5$$$ liters from the second barrel into the fourth, so the amounts of water in the barrels are $$$[5, 0, 5, 10]$$$, and the difference between the maximum and the minimum is $$$10$$$; </li><li> if all barrels are empty, you can't make any operation, so the difference between the maximum and the minimum amount is still $$$0$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k  \lt  n \le 2 \cdot 10^5$$$) — the number of barrels and the number of pourings you can make.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \le a_i \le 10^{9}$$$), where $$$a_i$$$ is the initial amount of water the $$$i$$$-th barrel has.</p><p>It's guaranteed that the total sum of $$$n$$$ over test cases doesn't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the maximum possible difference between the maximum and the minimum amount of water in the barrels, if you can pour water <span class="tex-font-style-bf">at most</span> $$$k$$$ times.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00953226570869246" id="id006865267781515806" class="input-output-copier">Copy</div></div><pre id="id00953226570869246">2
4 1
5 5 5 5
3 2
0 0 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00818132479015041" id="id0009257628252319183" class="input-output-copier">Copy</div></div><pre id="id00818132479015041">10
0
</pre></div></div></div>