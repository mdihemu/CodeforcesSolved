<h2><a href="https://codeforces.com/contest/1255/problem/A" target="_blank" rel="noopener noreferrer">1255A — Changing Volume</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1255A](https://codeforces.com/contest/1255/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Changing Volume</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Bob watches TV every day. He always sets the volume of his TV to $$$b$$$. However, today he is angry to find out someone has changed the volume to $$$a$$$. Of course, Bob has a remote control that can change the volume.</p><p>There are six buttons ($$$-5, -2, -1, +1, +2, +5$$$) on the control, which in one press can either increase or decrease the current volume by $$$1$$$, $$$2$$$, or $$$5$$$. The volume can be arbitrarily large, but can never be negative. In other words, Bob cannot press the button if it causes the volume to be lower than $$$0$$$.</p><p>As Bob is so angry, he wants to change the volume to $$$b$$$ using as few button presses as possible. However, he forgets how to do such simple calculations, so he asks you for help. Write a program that given $$$a$$$ and $$$b$$$, finds the minimum number of presses to change the TV volume from $$$a$$$ to $$$b$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$T$$$ ($$$1 \le T \le 1\,000$$$). Then the descriptions of the test cases follow.</p><p>Each test case consists of one line containing two integers $$$a$$$ and $$$b$$$ ($$$0 \le a, b \le 10^{9}$$$) — the current volume and Bob's desired volume, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum number of presses to change the TV volume from $$$a$$$ to $$$b$$$. If Bob does not need to change the volume (i.e. $$$a=b$$$), then print $$$0$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007297514716958454" id="id009681198407220509" class="input-output-copier">Copy</div></div><pre id="id007297514716958454">3
4 0
5 14
3 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0026769266802369496" id="id00021273327446632795" class="input-output-copier">Copy</div></div><pre id="id0026769266802369496">2
3
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, Bob can press the $$$-2$$$ button twice to reach $$$0$$$. Note that Bob can not press $$$-5$$$ when the volume is $$$4$$$ since it will make the volume negative. </p><p>In the second example, one of the optimal ways for Bob is to press the $$$+5$$$ twice, then press $$$-1$$$ once.</p><p>In the last example, Bob can press the $$$+5$$$ once, then press $$$+1$$$. </p></div>