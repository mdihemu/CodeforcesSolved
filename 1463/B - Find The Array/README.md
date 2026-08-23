<h2><a href="https://codeforces.com/contest/1463/problem/B" target="_blank" rel="noopener noreferrer">1463B — Find The Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1463B](https://codeforces.com/contest/1463/problem/B) |

## Topics
`bitmasks` `constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">B. Find The Array</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$[a_1, a_2, \dots, a_n]$$$ such that $$$1 \le a_i \le 10^9$$$. Let $$$S$$$ be the sum of all elements of the array $$$a$$$.</p><p>Let's call an array $$$b$$$ of $$$n$$$ integers <span class="tex-font-style-bf">beautiful</span> if:</p><ul> <li> $$$1 \le b_i \le 10^9$$$ for each $$$i$$$ from $$$1$$$ to $$$n$$$; </li><li> for every pair of adjacent integers from the array $$$(b_i, b_{i + 1})$$$, either $$$b_i$$$ divides $$$b_{i + 1}$$$, or $$$b_{i + 1}$$$ divides $$$b_i$$$ (or both); </li><li> $$$2 \sum \limits_{i = 1}^{n} |a_i - b_i| \le S$$$. </li></ul><p>Your task is to find any beautiful array. It can be shown that at least one beautiful array always exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>Each test case consists of two lines. The first line contains one integer $$$n$$$ ($$$2 \le n \le 50$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the beautiful array $$$b_1, b_2, \dots, b_n$$$ ($$$1 \le b_i \le 10^9$$$) on a separate line. It can be shown that at least one beautiful array exists under these circumstances. If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005694552632085129" id="id006799245240604352" class="input-output-copier">Copy</div></div><pre id="id005694552632085129">4
5
1 2 3 4 5
2
4 6
2
1 1000000000
6
3 4 8 1 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00024503872593741427" id="id001147409171985947" class="input-output-copier">Copy</div></div><pre id="id00024503872593741427">3 3 3 3 3
3 6
1 1000000000
4 4 8 1 3 3
</pre></div></div></div>