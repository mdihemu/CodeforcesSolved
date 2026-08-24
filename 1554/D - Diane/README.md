<h2><a href="https://codeforces.com/contest/1554/problem/D" target="_blank" rel="noopener noreferrer">1554D — Diane</a></h2>

| | |
|---|---|
| **Difficulty** | 1800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1554D](https://codeforces.com/contest/1554/problem/D) |

## Topics
`constructive algorithms` `greedy` `strings`

---

## Problem Statement

<div class="header"><div class="title">D. Diane</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$. Find any string $$$s$$$ of length $$$n$$$ consisting only of English lowercase letters such that each non-empty substring of $$$s$$$ occurs in $$$s$$$ an <span class="tex-font-style-bf">odd</span> number of times. If there are multiple such strings, output any. It can be shown that such string always exists under the given constraints.</p><p>A string $$$a$$$ is a substring of a string $$$b$$$ if $$$a$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 500$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print a single line containing the string $$$s$$$. If there are multiple such strings, output any. It can be shown that such string always exists under the given constraints.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0043193522830445596" id="id00886616399266805" class="input-output-copier">Copy</div></div><pre id="id0043193522830445596">4
3
5
9
19
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008927832825010016" id="id003947377478178352" class="input-output-copier">Copy</div></div><pre id="id008927832825010016">abc
diane
bbcaabbba
youarethecutestuwuu
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, each substring of "<span class="tex-font-style-tt">abc</span>" occurs exactly once.</p><p>In the third test case, each substring of "<span class="tex-font-style-tt">bbcaabbba</span>" occurs an odd number of times. In particular, "<span class="tex-font-style-tt">b</span>" occurs $$$5$$$ times, "<span class="tex-font-style-tt">a</span>" and "<span class="tex-font-style-tt">bb</span>" occur $$$3$$$ times each, and each of the remaining substrings occurs exactly once.</p></div>