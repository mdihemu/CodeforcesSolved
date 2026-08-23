<h2><a href="https://codeforces.com/contest/1370/problem/B" target="_blank" rel="noopener noreferrer">1370B — GCD Compression</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1370B](https://codeforces.com/contest/1370/problem/B) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. GCD Compression</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ashish has an array $$$a$$$ of consisting of $$$2n$$$ positive integers. He wants to compress $$$a$$$ into an array $$$b$$$ of size $$$n-1$$$. To do this, he first discards exactly $$$2$$$ (any two) elements from $$$a$$$. He then performs the following operation until there are no elements left in $$$a$$$: </p><ul> <li> Remove any two elements from $$$a$$$ and append their sum to $$$b$$$. </li></ul><p>The compressed array $$$b$$$ has to have a special property. The greatest common divisor ($$$\mathrm{gcd}$$$) of all its elements should be greater than $$$1$$$.</p><p>Recall that the $$$\mathrm{gcd}$$$ of an array of positive integers is the biggest integer that is a divisor of all integers in the array.</p><p>It can be proven that it is always possible to compress array $$$a$$$ into an array $$$b$$$ of size $$$n-1$$$ such that $$$gcd(b_1, b_2..., b_{n-1})  \gt  1$$$. </p><p>Help Ashish find a way to do so.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \leq n \leq 1000$$$).</p><p>The second line of each test case contains $$$2n$$$ integers $$$a_1, a_2, \ldots, a_{2n}$$$ ($$$1 \leq a_i \leq 1000$$$) — the elements of the array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output $$$n-1$$$ lines — the operations performed to compress the array $$$a$$$ to the array $$$b$$$. <span class="tex-font-style-bf">The initial discard of the two elements is not an operation, you don't need to output anything about it.</span></p><p>The $$$i$$$-th line should contain two integers, the indices ($$$1$$$ —based) of the two elements from the array $$$a$$$ that are used in the $$$i$$$-th operation. All $$$2n-2$$$ indices should be distinct integers from $$$1$$$ to $$$2n$$$.</p><p>You don't need to output two initially discarded elements from $$$a$$$.</p><p>If there are multiple answers, you can find any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009188143363681793" id="id007304485206028766" class="input-output-copier">Copy</div></div><pre id="id009188143363681793">3
3
1 2 3 4 5 6
2
5 7 9 10
5
1 3 3 4 5 90 100 101 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0012080790444005407" id="id0019389923412652554" class="input-output-copier">Copy</div></div><pre id="id0012080790444005407">3 6
4 5
3 4
1 9
2 3
4 5
6 10
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$b = \{3+6, 4+5\} = \{9, 9\}$$$ and $$$\mathrm{gcd}(9, 9) = 9$$$.</p><p>In the second test case, $$$b = \{9+10\} = \{19\}$$$ and $$$\mathrm{gcd}(19) = 19$$$.</p><p>In the third test case, $$$b = \{1+2, 3+3, 4+5, 90+3\} = \{3, 6, 9, 93\}$$$ and $$$\mathrm{gcd}(3, 6, 9, 93) = 3$$$.</p></div>