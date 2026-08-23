<h2><a href="https://codeforces.com/contest/1277/problem/A" target="_blank" rel="noopener noreferrer">1277A — Happy Birthday, Polycarp!</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1277A](https://codeforces.com/contest/1277/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Happy Birthday, Polycarp!</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Hooray! Polycarp turned $$$n$$$ years old! The Technocup Team sincerely congratulates Polycarp!</p><p>Polycarp celebrated all of his $$$n$$$ birthdays: from the $$$1$$$-th to the $$$n$$$-th. At the moment, he is wondering: how many times he turned <span class="tex-font-style-it">beautiful</span> number of years?</p><p>According to Polycarp, a positive integer is <span class="tex-font-style-it">beautiful</span> if it consists of only one digit repeated one or more times. For example, the following numbers are beautiful: $$$1$$$, $$$77$$$, $$$777$$$, $$$44$$$ and $$$999999$$$. The following numbers are not beautiful: $$$12$$$, $$$11110$$$, $$$6969$$$ and $$$987654321$$$.</p><p>Of course, Polycarpus uses the decimal numeral system (i.e. radix is 10).</p><p>Help Polycarpus to find the number of numbers from $$$1$$$ to $$$n$$$ (inclusive) that are beautiful.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases in the input. Then $$$t$$$ test cases follow.</p><p>Each test case consists of one line, which contains a positive integer $$$n$$$ ($$$1 \le n \le 10^9$$$) — how many years Polycarp has turned.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ integers — the answers to the given test cases in the order they are written in the test. Each answer is an integer: the number of beautiful years between $$$1$$$ and $$$n$$$, inclusive.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002722943965767989" id="id0046855575611189215" class="input-output-copier">Copy</div></div><pre id="id002722943965767989">6
18
1
9
100500
33
1000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003050430337767025" id="id004000041475009346" class="input-output-copier">Copy</div></div><pre id="id003050430337767025">10
1
9
45
12
81
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case of the example beautiful years are $$$1$$$, $$$2$$$, $$$3$$$, $$$4$$$, $$$5$$$, $$$6$$$, $$$7$$$, $$$8$$$, $$$9$$$ and $$$11$$$.</p></div>