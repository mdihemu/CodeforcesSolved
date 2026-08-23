<h2><a href="https://codeforces.com/contest/1284/problem/A" target="_blank" rel="noopener noreferrer">1284A — New Year and Naming</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1284A](https://codeforces.com/contest/1284/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. New Year and Naming</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>1024 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Happy new year! The year 2020 is also known as <span class="tex-font-style-it">Year Gyeongja</span> (경자년, <span class="tex-font-style-it">gyeongja-nyeon</span>) in Korea. Where did the name come from? Let's briefly look at the <span class="tex-font-style-it">Gapja</span> system, which is traditionally used in Korea to name the years.</p><p>There are two sequences of $$$n$$$ strings $$$s_1, s_2, s_3, \ldots, s_{n}$$$ and $$$m$$$ strings $$$t_1, t_2, t_3, \ldots, t_{m}$$$. These strings contain only lowercase letters. There might be duplicates among these strings.</p><p>Let's call a concatenation of strings $$$x$$$ and $$$y$$$ as the string that is obtained by writing down strings $$$x$$$ and $$$y$$$ one right after another without changing the order. For example, the concatenation of the strings "<span class="tex-font-style-tt">code</span>" and "<span class="tex-font-style-tt">forces</span>" is the string "<span class="tex-font-style-tt">codeforces</span>".</p><p>The year 1 has a name which is the concatenation of the two strings $$$s_1$$$ and $$$t_1$$$. When the year increases by one, we concatenate the next two strings in order from each of the respective sequences. If the string that is currently being used is at the end of its sequence, we go back to the first string in that sequence.</p><p>For example, if $$$n = 3, m = 4, s = $$$<span class="tex-font-style-tt">{"a", "b", "c"}</span>, $$$t =$$$ <span class="tex-font-style-tt">{"d", "e", "f", "g"}</span>, the following table denotes the resulting year names. Note that the names of the years may repeat.</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/3198ce01f17b143429b06a758b997fb36817be1e.png" style="zoom: 50.0%;max-width: 100.0%;max-height: 100.0%;"> </center><p>You are given two sequences of strings of size $$$n$$$ and $$$m$$$ and also $$$q$$$ queries. For each query, you will be given the current year. Could you find the name corresponding to the given year, according to the <span class="tex-font-style-it">Gapja</span> system?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n, m$$$ ($$$1 \le n, m \le 20$$$).</p><p>The next line contains $$$n$$$ strings $$$s_1, s_2, \ldots, s_{n}$$$. Each string contains only lowercase letters, and they are separated by spaces. The length of each string is at least $$$1$$$ and at most $$$10$$$.</p><p>The next line contains $$$m$$$ strings $$$t_1, t_2, \ldots, t_{m}$$$. Each string contains only lowercase letters, and they are separated by spaces. The length of each string is at least $$$1$$$ and at most $$$10$$$.</p><p>Among the given $$$n + m$$$ strings may be duplicates (that is, they are not necessarily all different).</p><p>The next line contains a single integer $$$q$$$ ($$$1 \le q \le 2\,020$$$).</p><p>In the next $$$q$$$ lines, an integer $$$y$$$ ($$$1 \le y \le 10^9$$$) is given, denoting the year we want to know the name for.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$q$$$ lines. For each line, print the name of the year as per the rule described above.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003078579492586232" id="id0043014906119966323" class="input-output-copier">Copy</div></div><pre id="id003078579492586232">10 12
sin im gye gap eul byeong jeong mu gi gyeong
yu sul hae ja chuk in myo jin sa o mi sin
14
1
2
3
4
10
11
12
13
73
2016
2017
2018
2019
2020
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003403012879528292" id="id0029734775509713507" class="input-output-copier">Copy</div></div><pre id="id003403012879528292">sinyu
imsul
gyehae
gapja
gyeongo
sinmi
imsin
gyeyu
gyeyu
byeongsin
jeongyu
musul
gihae
gyeongja
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first example denotes the actual names used in the <span class="tex-font-style-it">Gapja</span> system. These strings usually are either a number or the name of some animal.</p></div>