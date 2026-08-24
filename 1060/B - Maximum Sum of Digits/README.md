<h2><a href="https://codeforces.com/contest/1060/problem/B" target="_blank" rel="noopener noreferrer">1060B — Maximum Sum of Digits</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1060B](https://codeforces.com/contest/1060/problem/B) |

## Topics
`greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Maximum Sum of Digits</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a positive integer $$$n$$$.</p><p>Let $$$S(x)$$$ be sum of digits in base 10 representation of $$$x$$$, for example, $$$S(123) = 1 + 2 + 3 = 6$$$, $$$S(0) = 0$$$.</p><p>Your task is to find two integers $$$a, b$$$, such that $$$0 \leq a, b \leq n$$$, $$$a + b = n$$$ and $$$S(a) + S(b)$$$ is the largest possible among all such pairs.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line of input contains an integer $$$n$$$ $$$(1 \leq n \leq 10^{12})$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print largest $$$S(a) + S(b)$$$ among all pairs of integers $$$a, b$$$, such that $$$0 \leq a, b \leq n$$$ and $$$a + b = n$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0007982419384364481" id="id008963858538557592" class="input-output-copier">Copy</div></div><pre id="id0007982419384364481">35<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0024231594104525533" id="id008793169691692535" class="input-output-copier">Copy</div></div><pre id="id0024231594104525533">17<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009533524208775845" id="id006821352965110896" class="input-output-copier">Copy</div></div><pre id="id009533524208775845">10000000000<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004959069024528635" id="id0021646758466606697" class="input-output-copier">Copy</div></div><pre id="id004959069024528635">91<br></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, you can choose, for example, $$$a = 17$$$ and $$$b = 18$$$, so that $$$S(17) + S(18) = 1 + 7 + 1 + 8 = 17$$$. It can be shown that it is impossible to get a larger answer.</p><p>In the second test example, you can choose, for example, $$$a = 5000000001$$$ and $$$b = 4999999999$$$, with $$$S(5000000001) + S(4999999999) = 91$$$. It can be shown that it is impossible to get a larger answer.</p></div>