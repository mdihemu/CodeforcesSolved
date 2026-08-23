<h2><a href="https://codeforces.com/contest/1455/problem/A" target="_blank" rel="noopener noreferrer">1455A — Strange Functions</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1455A](https://codeforces.com/contest/1455/problem/A) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Strange Functions</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's define a function $$$f(x)$$$ ($$$x$$$ is a positive integer) as follows: write all digits of the decimal representation of $$$x$$$ backwards, then get rid of the leading zeroes. For example, $$$f(321) = 123$$$, $$$f(120) = 21$$$, $$$f(1000000) = 1$$$, $$$f(111) = 111$$$.</p><p>Let's define another function $$$g(x) = \dfrac{x}{f(f(x))}$$$ ($$$x$$$ is a positive integer as well).</p><p>Your task is the following: for the given positive integer $$$n$$$, calculate the number of different values of $$$g(x)$$$ among all numbers $$$x$$$ such that $$$1 \le x \le n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases.</p><p>Each test case consists of one line containing one integer $$$n$$$ ($$$1 \le n  \lt  10^{100}$$$). This integer is given without leading zeroes.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the number of different values of the function $$$g(x)$$$, if $$$x$$$ can be any integer from $$$[1, n]$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006906383907484996" id="id005818015443473395" class="input-output-copier">Copy</div></div><pre id="id006906383907484996">5
4
37
998244353
1000000007
12345678901337426966631415
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001365155089113116" id="id002065397949456822" class="input-output-copier">Copy</div></div><pre id="id001365155089113116">1
2
9
10
26
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Explanations for the two first test cases of the example:</p><ol> <li> if $$$n = 4$$$, then for every integer $$$x$$$ such that $$$1 \le x \le n$$$, $$$\dfrac{x}{f(f(x))} = 1$$$; </li><li> if $$$n = 37$$$, then for some integers $$$x$$$ such that $$$1 \le x \le n$$$, $$$\dfrac{x}{f(f(x))} = 1$$$ (for example, if $$$x = 23$$$, $$$f(f(x)) = 23$$$,$$$\dfrac{x}{f(f(x))} = 1$$$); and for other values of $$$x$$$, $$$\dfrac{x}{f(f(x))} = 10$$$ (for example, if $$$x = 30$$$, $$$f(f(x)) = 3$$$, $$$\dfrac{x}{f(f(x))} = 10$$$). So, there are two different values of $$$g(x)$$$. </li></ol></div>