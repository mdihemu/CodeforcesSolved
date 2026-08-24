<h2><a href="https://codeforces.com/contest/1471/problem/B" target="_blank" rel="noopener noreferrer">1471B — Strange List</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1471B](https://codeforces.com/contest/1471/problem/B) |

## Topics
`brute force` `greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Strange List</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have given an array $$$a$$$ of length $$$n$$$ and an integer $$$x$$$ to a brand new robot. What the robot does is the following: it iterates over the elements of the array, let the current element be $$$q$$$. If $$$q$$$ is divisible by $$$x$$$, the robot adds $$$x$$$ copies of the integer $$$\frac{q}{x}$$$ to the end of the array, and moves on to the next element. Note that the newly added elements could be processed by the robot later. Otherwise, if $$$q$$$ is not divisible by $$$x$$$, the robot shuts down.</p><p>Please determine the sum of all values of the array at the end of the process.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first input line contains a single integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$x$$$ ($$$1 \leq n \leq 10^5$$$, $$$2 \leq x \leq 10^9$$$) — the length of the array and the value which is used by the robot.</p><p>The next line contains integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$1 \leq a_i \leq 10^9$$$) — the initial values in the array.</p><p>It is guaranteed that the sum of values $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output one integer — the sum of all elements at the end of the process.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00281354486983745" id="id00010876253172123262" class="input-output-copier">Copy</div></div><pre id="id00281354486983745">2
1 2
12
4 2
4 6 8 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002309073340248342" id="id0009446693898794467" class="input-output-copier">Copy</div></div><pre id="id002309073340248342">36
44
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case the array initially consists of a single element $$$[12]$$$, and $$$x=2$$$. After the robot processes the first element, the array becomes $$$[12, 6, 6]$$$. Then the robot processes the second element, and the array becomes $$$[12, 6, 6, 3, 3]$$$. After the robot processes the next element, the array becomes $$$[12, 6, 6, 3, 3, 3, 3]$$$, and then the robot shuts down, since it encounters an element that is not divisible by $$$x = 2$$$. The sum of the elements in the resulting array is equal to $$$36$$$.</p><p>In the second test case the array initially contains integers $$$[4, 6, 8, 2]$$$, and $$$x=2$$$. The resulting array in this case looks like $$$ [4, 6, 8, 2, 2, 2, 3, 3, 4, 4, 1, 1, 1, 1, 1, 1]$$$.</p></div>