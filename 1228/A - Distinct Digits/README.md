<h2><a href="https://codeforces.com/contest/1228/problem/A" target="_blank" rel="noopener noreferrer">1228A — Distinct Digits</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1228A](https://codeforces.com/contest/1228/problem/A) |

## Topics
`brute force` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Distinct Digits</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have two integers $$$l$$$ and $$$r$$$. Find an integer $$$x$$$ which satisfies the conditions below:</p><ul> <li> $$$l \le x \le r$$$. </li><li> All digits of $$$x$$$ are different. </li></ul><p>If there are multiple answers, print any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$l$$$ and $$$r$$$ ($$$1 \le l \le r \le 10^{5}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>If an answer exists, print any of them. Otherwise, print $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00778900208734247" id="id00832336962658791" class="input-output-copier">Copy</div></div><pre id="id00778900208734247">121 130
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00530767845566973" id="id0025728733406042936" class="input-output-copier">Copy</div></div><pre id="id00530767845566973">123
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003175338831018786" id="id008481596866102313" class="input-output-copier">Copy</div></div><pre id="id003175338831018786">98766 100000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008298471699222739" id="id0009933672837912311" class="input-output-copier">Copy</div></div><pre id="id008298471699222739">-1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, $$$123$$$ is one of the possible answers. However, $$$121$$$ can't be the answer, because there are multiple $$$1$$$s on different digits.</p><p>In the second example, there is no valid answer.</p></div>