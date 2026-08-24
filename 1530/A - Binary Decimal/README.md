<h2><a href="https://codeforces.com/contest/1530/problem/A" target="_blank" rel="noopener noreferrer">1530A — Binary Decimal</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1530A](https://codeforces.com/contest/1530/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Binary Decimal</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call a number a <span class="tex-font-style-it">binary decimal</span> if it's a positive integer and all digits in its decimal notation are either $$$0$$$ or $$$1$$$. For example, $$$1\,010\,111$$$ is a binary decimal, while $$$10\,201$$$ and $$$787\,788$$$ are not.</p><p>Given a number $$$n$$$, you are asked to represent $$$n$$$ as a sum of some (not necessarily distinct) binary decimals. Compute the smallest number of binary decimals required for that.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$), denoting the number of test cases.</p><p>The only line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10^9$$$), denoting the number to be represented.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the smallest number of binary decimals required to represent $$$n$$$ as a sum.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00527461597044883" id="id003588974773772172" class="input-output-copier">Copy</div></div><pre id="id00527461597044883">3
121
5
1000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0025975281406994233" id="id006510101204954465" class="input-output-copier">Copy</div></div><pre id="id0025975281406994233">2
5
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$121$$$ can be represented as $$$121 = 110 + 11$$$ or $$$121 = 111 + 10$$$.</p><p>In the second test case, $$$5$$$ can be represented as $$$5 = 1 + 1 + 1 + 1 + 1$$$.</p><p>In the third test case, $$$1\,000\,000\,000$$$ is a binary decimal itself, thus the answer is $$$1$$$.</p></div>