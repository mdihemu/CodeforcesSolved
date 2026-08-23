<h2><a href="https://codeforces.com/contest/1183/problem/A" target="_blank" rel="noopener noreferrer">1183A — Nearest Interesting Number</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1183A](https://codeforces.com/contest/1183/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Nearest Interesting Number</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp knows that if the sum of the digits of a number is divisible by $$$3$$$, then the number itself is divisible by $$$3$$$. He assumes that the numbers, the sum of the digits of which is divisible by $$$4$$$, are also somewhat interesting. Thus, he considers a positive integer $$$n$$$ interesting if its sum of digits is divisible by $$$4$$$.</p><p>Help Polycarp find the nearest larger or equal interesting number for the given number $$$a$$$. That is, find the interesting number $$$n$$$ such that $$$n \ge a$$$ and $$$n$$$ is minimal.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line in the input contains an integer $$$a$$$ ($$$1 \le a \le 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the nearest greater or equal interesting number for the given number $$$a$$$. In other words, print the interesting number $$$n$$$ such that $$$n \ge a$$$ and $$$n$$$ is minimal.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006724196988696676" id="id0019128140961239537" class="input-output-copier">Copy</div></div><pre id="id006724196988696676">432
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0028432309397035993" id="id0091798637971461" class="input-output-copier">Copy</div></div><pre id="id0028432309397035993">435
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006139614824997397" id="id00526080936509791" class="input-output-copier">Copy</div></div><pre id="id006139614824997397">99
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011554608303415659" id="id003426040398773814" class="input-output-copier">Copy</div></div><pre id="id0011554608303415659">103
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007428007395404373" id="id003938528562966763" class="input-output-copier">Copy</div></div><pre id="id007428007395404373">237
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0040926656969643704" id="id007375411537306574" class="input-output-copier">Copy</div></div><pre id="id0040926656969643704">237
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00996868550206555" id="id006328373196254446" class="input-output-copier">Copy</div></div><pre id="id00996868550206555">42
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0012536827094487535" id="id005401544588508246" class="input-output-copier">Copy</div></div><pre id="id0012536827094487535">44
</pre></div></div></div>