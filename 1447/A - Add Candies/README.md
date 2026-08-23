<h2><a href="https://codeforces.com/contest/1447/problem/A" target="_blank" rel="noopener noreferrer">1447A — Add Candies</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1447A](https://codeforces.com/contest/1447/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Add Candies</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ bags with candies, initially the $$$i$$$-th bag contains $$$i$$$ candies. You want all the bags to contain an equal amount of candies in the end. </p><p>To achieve this, you will:</p><ul><li> <p>Choose $$$m$$$ such that $$$1 \le m \le 1000$$$</p></li><li><p>Perform $$$m$$$ operations. In the $$$j$$$-th operation, you will pick one bag and add $$$j$$$ candies to all bags apart from the chosen one.</p></li></ul><p>Your goal is to find a valid sequence of operations after which all the bags will contain an equal amount of candies. </p><ul><li><p>It can be proved that for the given constraints such a sequence always exists.</p></li><li><p>You <span class="tex-font-style-bf">don't</span> have to minimize $$$m$$$.</p></li><li><p>If there are several valid sequences, you can output <span class="tex-font-style-bf">any</span>.</p></li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases.</p><p>The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$). Description of the test cases follows.</p><p>The first and only line of each test case contains one integer $$$n$$$ ($$$2 \le n\le 100$$$). </p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, print two lines with your answer. </p><p>In the first line print $$$m$$$ ($$$1\le m \le 1000$$$) — the number of operations you want to take. </p><p>In the second line print $$$m$$$ positive integers $$$a_1, a_2, \dots, a_m$$$ ($$$1 \le a_i \le n$$$), where $$$a_j$$$ is the number of bag you chose on the $$$j$$$-th operation.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009553117655874797" id="id00641042622628297" class="input-output-copier">Copy</div></div><pre id="id009553117655874797">2
2
3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0036090752173265483" id="id0044551759412703107" class="input-output-copier">Copy</div></div><pre id="id0036090752173265483">1
2
5
3 3 3 1 2</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first case, adding $$$1$$$ candy to all bags except of the second one leads to the arrangement with $$$[2, 2]$$$ candies.</p><p>In the second case, firstly you use first three operations to add $$$1+2+3=6$$$ candies in total to each bag except of the third one, which gives you $$$[7, 8, 3]$$$. Later, you add $$$4$$$ candies to second and third bag, so you have $$$[7, 12, 7]$$$, and $$$5$$$ candies to first and third bag  — and the result is $$$[12, 12, 12]$$$.</p></div>