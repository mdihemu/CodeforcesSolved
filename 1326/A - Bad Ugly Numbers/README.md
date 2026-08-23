<h2><a href="https://codeforces.com/contest/1326/problem/A" target="_blank" rel="noopener noreferrer">1326A — Bad Ugly Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1326A](https://codeforces.com/contest/1326/problem/A) |

## Topics
`constructive algorithms` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Bad Ugly Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a integer $$$n$$$ ($$$n  \gt  0$$$). Find <span class="tex-font-style-bf">any</span> integer $$$s$$$ which satisfies these conditions, or report that there are no such numbers:</p><p>In the decimal representation of $$$s$$$: </p><ul> <li> $$$s  \gt  0$$$, </li><li> $$$s$$$ consists of $$$n$$$ digits, </li><li> no digit in $$$s$$$ equals $$$0$$$, </li><li> $$$s$$$ is not divisible by any of it's digits. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line of the input contains a single integer $$$t$$$ ($$$1 \leq t \leq 400$$$), the number of test cases. The next $$$t$$$ lines each describe a test case.</p><p>Each test case contains one positive integer $$$n$$$ ($$$1 \leq n \leq 10^5$$$).</p><p>It is guaranteed that the sum of $$$n$$$ for all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print an integer $$$s$$$ which satisfies the conditions described above, or "<span class="tex-font-style-tt">-1</span>" (without quotes), if no such number exists. If there are multiple possible solutions for $$$s$$$, print <span class="tex-font-style-bf">any</span> solution.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002975434456491769" id="id0047011032995319435" class="input-output-copier">Copy</div></div><pre id="id002975434456491769">4
1
2
3
4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007169169363468196" id="id005387327319531509" class="input-output-copier">Copy</div></div><pre id="id007169169363468196">-1
57
239
6789
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there are no possible solutions for $$$s$$$ consisting of one digit, because any such solution is divisible by itself.</p><p>For the second test case, the possible solutions are: $$$23$$$, $$$27$$$, $$$29$$$, $$$34$$$, $$$37$$$, $$$38$$$, $$$43$$$, $$$46$$$, $$$47$$$, $$$49$$$, $$$53$$$, $$$54$$$, $$$56$$$, $$$57$$$, $$$58$$$, $$$59$$$, $$$67$$$, $$$68$$$, $$$69$$$, $$$73$$$, $$$74$$$, $$$76$$$, $$$78$$$, $$$79$$$, $$$83$$$, $$$86$$$, $$$87$$$, $$$89$$$, $$$94$$$, $$$97$$$, and $$$98$$$.</p><p>For the third test case, one possible solution is $$$239$$$ because $$$239$$$ is not divisible by $$$2$$$, $$$3$$$ or $$$9$$$ and has three digits (none of which equals zero).</p></div>