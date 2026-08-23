<h2><a href="https://codeforces.com/contest/1444/problem/A" target="_blank" rel="noopener noreferrer">1444A — Division</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1444A](https://codeforces.com/contest/1444/problem/A) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Division</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Oleg's favorite subjects are History and Math, and his favorite branch of mathematics is division.</p><p>To improve his division skills, Oleg came up with $$$t$$$ pairs of integers $$$p_i$$$ and $$$q_i$$$ and for each pair decided to find the <span class="tex-font-style-bf">greatest</span> integer $$$x_i$$$, such that: </p><ul> <li> $$$p_i$$$ is divisible by $$$x_i$$$; </li><li> $$$x_i$$$ is not divisible by $$$q_i$$$. </li></ul> Oleg is really good at division and managed to find all the answers quickly, how about you?</div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 50$$$) — the number of pairs.</p><p>Each of the following $$$t$$$ lines contains two integers $$$p_i$$$ and $$$q_i$$$ ($$$1 \le p_i \le 10^{18}$$$; $$$2 \le q_i \le 10^{9}$$$) — the $$$i$$$-th pair of integers.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ integers: the $$$i$$$-th integer is the largest $$$x_i$$$ such that $$$p_i$$$ is divisible by $$$x_i$$$, but $$$x_i$$$ is not divisible by $$$q_i$$$.</p><p>One can show that there is always at least one value of $$$x_i$$$ satisfying the divisibility conditions for the given constraints.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00866371437718371" id="id0016206009322861126" class="input-output-copier">Copy</div></div><pre id="id00866371437718371">3
10 4
12 6
179 822
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0018472119811682564" id="id006178166244801377" class="input-output-copier">Copy</div></div><pre id="id0018472119811682564">10
4
179
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For the first pair, where $$$p_1 = 10$$$ and $$$q_1 = 4$$$, the answer is $$$x_1 = 10$$$, since it is the greatest divisor of $$$10$$$ and $$$10$$$ is not divisible by $$$4$$$.</p><p>For the second pair, where $$$p_2 = 12$$$ and $$$q_2 = 6$$$, note that </p><ul> <li> $$$12$$$ is not a valid $$$x_2$$$, since $$$12$$$ is divisible by $$$q_2 = 6$$$; </li><li> $$$6$$$ is not valid $$$x_2$$$ as well: $$$6$$$ is also divisible by $$$q_2 = 6$$$. </li></ul> The next available divisor of $$$p_2 = 12$$$ is $$$4$$$, which is the answer, since $$$4$$$ is not divisible by $$$6$$$.</div>