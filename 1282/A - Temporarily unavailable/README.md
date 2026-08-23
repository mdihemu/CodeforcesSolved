<h2><a href="https://codeforces.com/contest/1282/problem/A" target="_blank" rel="noopener noreferrer">1282A — Temporarily unavailable</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1282A](https://codeforces.com/contest/1282/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Temporarily unavailable</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp lives on the coordinate axis $$$Ox$$$ and travels from the point $$$x=a$$$ to $$$x=b$$$. It moves uniformly rectilinearly at a speed of one unit of distance per minute.</p><p>On the axis $$$Ox$$$ at the point $$$x=c$$$ the base station of the mobile operator is placed. It is known that the radius of its coverage is $$$r$$$. Thus, if Polycarp is at a distance less than or equal to $$$r$$$ from the point $$$x=c$$$, then he is in the network coverage area, otherwise — no. The base station can be located both on the route of Polycarp and outside it.</p><p>Print the time in minutes during which Polycarp will <span class="tex-font-style-bf">not be</span> in the coverage area of the network, with a rectilinear uniform movement from $$$x=a$$$ to $$$x=b$$$. His speed — one unit of distance per minute.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a positive integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. In the following lines are written $$$t$$$ test cases.</p><p>The description of each test case is one line, which contains four integers $$$a$$$, $$$b$$$, $$$c$$$ and $$$r$$$ ($$$-10^8 \le a,b,c \le 10^8$$$, $$$0 \le r \le 10^8$$$) — the coordinates of the starting and ending points of the path, the base station, and its coverage radius, respectively.</p><p>Any of the numbers $$$a$$$, $$$b$$$ and $$$c$$$ can be equal (either any pair or all three numbers). The base station can be located both on the route of Polycarp and outside it.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ numbers — answers to given test cases in the order they are written in the test. Each answer is an integer — the number of minutes during which Polycarp will be <span class="tex-font-style-bf">unavailable</span> during his movement.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005957640086419862" id="id006700265968171829" class="input-output-copier">Copy</div></div><pre id="id005957640086419862">9
1 10 7 1
3 3 3 0
8 2 10 4
8 2 10 100
-10 20 -17 2
-3 2 2 0
-3 1 2 0
2 3 2 3
-1 3 -2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003100997525883754" id="id0016588680081345086" class="input-output-copier">Copy</div></div><pre id="id003100997525883754">7
0
4
0
30
5
4
0
3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The following picture illustrates the first test case. </p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/2edf718d18b3bba44d6eaf9de6ba74026b069571.png" style="max-width: 100.0%;max-height: 100.0%;">   <span class="tex-font-size-small">Polycarp goes from $$$1$$$ to $$$10$$$. The yellow area shows the coverage area of the station with a radius of coverage of $$$1$$$, which is located at the point of $$$7$$$. The green area shows a part of the path when Polycarp is out of coverage area.</span> </center></div>