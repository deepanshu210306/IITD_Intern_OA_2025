/*1. String‑Rotation Synchronisation

Problem
You are given a vector v containing N strings. At second t = 1 every string is rotated left by 1 position, at t = 2 every string is (again) rotated left by 2 positions, at t = 3 by 3 positions, and so on.
Let T be the first positive integer such that the number of strings that exactly match their original form after performing the rotations for all seconds from 1 through T is maximised. Output this minimum T.

Key insight
For a single string of length L, the sequence of cumulative rotations returns it to its original configuration every L seconds; the global behaviour is governed by least‑common‑multiple relationships between these lengths.


---

2. Jealous Cities (Graph Problem)

Problem
A kingdom has several cities connected by bidirectional roads (an undirected graph). A designated “root” city is given. Jealousy arises between directly connected cities, and the overall “kingdom jealousy” depends on the structure of the graph (exact formula supplied in the original statement). Determine the minimum possible jealousy value for the kingdom, starting from the root, by choosing appropriate paths or sub‑structures as specified.

> Note: The original phrasing was narrative (“cities are jealous of each other during a war”). The computational task is a pure graph‑algorithm problem; you must first model the cities and roads as a graph, then apply the required optimisation (e.g., shortest path, minimum spanning tree, or another metric specified in the full statement).




---

3. Cursed Gems (Scheduling / Greedy Optimisation)

Problem
A treasure chest contains M gems. Gem i is described by two integers (tᵢ, bᵢ):

tᵢ — seconds after which the gem’s curse (“bad‑luck”) activates if the gem is kept.

bᵢ — the magnitude of bad‑luck suffered when it activates.


You must select exactly one gem to keep; it cannot be destroyed and its bad‑luck will strike after tᵢ seconds. During that countdown you may destroy other gems, one per second. Destroying a gem prevents its curse entirely.

Your goal is to choose which gem to keep and decide the order in which to destroy the rest so that the total bad‑luck incurred is minimised.*/