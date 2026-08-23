<h2><a href="https://codeforces.com/contest/1438/problem/A" target="_blank" rel="noopener noreferrer">1438A — Specific Tastes of Andre </a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1438A](https://codeforces.com/contest/1438/problem/A) |

## Topics
`constructive algorithms` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Specific Tastes of Andre </div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Andre has very specific tastes. Recently he started falling in love with arrays.</p><p>Andre calls an nonempty array $$$b$$$ <span class="tex-font-style-bf">good</span>, if sum of its elements is divisible by the length of this array. For example, array $$$[2, 3, 1]$$$ is good, as sum of its elements — $$$6$$$ — is divisible by $$$3$$$, but array $$$[1, 1, 2, 3]$$$ isn't good, as $$$7$$$ isn't divisible by $$$4$$$. </p><p>Andre calls an array $$$a$$$ of length $$$n$$$ <span class="tex-font-style-bf">perfect</span> if the following conditions hold: </p><ul> <li> Every nonempty subarray of this array is <span class="tex-font-style-bf">good</span>. </li><li> For every $$$i$$$ ($$$1 \le i \le n$$$), $$$1 \leq a_i \leq 100$$$. </li></ul><p>Given a positive integer $$$n$$$, output any <span class="tex-font-style-bf">perfect</span> array of length $$$n$$$. We can show that for the given constraints such an array always exists.</p><p>An array $$$c$$$ is a subarray of an array $$$d$$$ if $$$c$$$ can be obtained from $$$d$$$ by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$). Description of the test cases follows.</p><p>The first and only line of every test case contains a single integer $$$n$$$ ($$$1 \le n \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For every test, output any <span class="tex-font-style-bf">perfect</span> array of length $$$n$$$ on a separate line. </p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0039111828747945576" id="id0020896528679414783" class="input-output-copier">Copy</div></div><pre id="id0039111828747945576">3
1
2
4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008147109698586844" id="id0023261549660158276" class="input-output-copier">Copy</div></div><pre id="id008147109698586844">24
19 33
7 37 79 49
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Array $$$[19, 33]$$$ is perfect as all $$$3$$$ its subarrays: $$$[19]$$$, $$$[33]$$$, $$$[19, 33]$$$, have sums divisible by their lengths, and therefore are good.</p></div>