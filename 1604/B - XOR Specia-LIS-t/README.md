<h2><a href="https://codeforces.com/contest/1604/problem/B" target="_blank" rel="noopener noreferrer">1604B — XOR Specia-LIS-t</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1604B](https://codeforces.com/contest/1604/problem/B) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">B. XOR Specia-LIS-t</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>YouKn0wWho has an integer sequence $$$a_1, a_2, \ldots a_n$$$. Now he will split the sequence $$$a$$$ into one or more consecutive subarrays so that each element of $$$a$$$ belongs to exactly one subarray. Let $$$k$$$ be the number of resulting subarrays, and $$$h_1, h_2, \ldots, h_k$$$ be the lengths of the longest increasing subsequences of corresponding subarrays.</p><p>For example, if we split $$$[2, 5, 3, 1, 4, 3, 2, 2, 5, 1]$$$ into $$$[2, 5, 3, 1, 4]$$$, $$$[3, 2, 2, 5]$$$, $$$[1]$$$, then $$$h = [3, 2, 1]$$$.</p><p>YouKn0wWho wonders if it is possible to split the sequence $$$a$$$ in such a way that the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#XOR">bitwise XOR</a> of $$$h_1, h_2, \ldots, h_k$$$ is equal to $$$0$$$. You have to tell whether it is possible.</p><p>The longest increasing subsequence (LIS) of a sequence $$$b_1, b_2, \ldots, b_m$$$ is the longest sequence of valid indices $$$i_1, i_2, \ldots, i_k$$$ such that $$$i_1 \lt i_2 \lt \ldots \lt i_k$$$ and $$$b_{i_1} \lt b_{i_2} \lt \ldots \lt b_{i_k}$$$. For example, the LIS of $$$[2, 5, 3, 3, 5]$$$ is $$$[2, 3, 5]$$$, which has length $$$3$$$.</p><p>An array $$$c$$$ is a subarray of an array $$$b$$$ if $$$c$$$ can be obtained from $$$b$$$ by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10\,000$$$)  — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$2 \le n \le 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases doesn't exceed $$$3 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">YES</span>" (without quotes) if it is possible to split into subarrays in the desired way, print "<span class="tex-font-style-tt">NO</span>" (without quotes) otherwise. You can print each letter in any register (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008191617428702392" id="id0007476014629036742" class="input-output-copier">Copy</div></div><pre id="id008191617428702392">4
7
1 3 4 2 2 1 5
3
1 3 4
5
1 3 2 4 2
4
4 3 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00007147120228448323" id="id004858231085193465" class="input-output-copier">Copy</div></div><pre id="id00007147120228448323">YES
NO
YES
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, YouKn0wWho can split the sequence in the following way: $$$[1, 3, 4]$$$, $$$[2, 2]$$$, $$$[1, 5]$$$. This way, the LIS lengths are $$$h = [3, 1, 2]$$$, and the bitwise XOR of the LIS lengths is $$$3 \oplus 1 \oplus 2 = 0$$$.</p><p>In the second test case, it can be shown that it is impossible to split the sequence into subarrays that will satisfy the condition.</p></div>