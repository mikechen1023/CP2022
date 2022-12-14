## Lock free implement experiment

[ref](https://tigercosmos.xyz/post/2020/10/system/cas-lock-free/#2-Compare-and-Swap-Pseudocode)

### Intro:

- What is lockfree?
- When to use?
- Why we need to use?


### Compare and swap example (Sum)

1. Serial version
2. Sum OpenMP Multi-thread without lock
3. Sum OpenMP Multi-thread with Lock
4. Sum OpenMP Multi-thread with Lock-Free


### Result:

|        | ver1 | ver2 | ver3 | ver4 |
| :-:    | :-:  | :-:  | :-:  | :-:  |
| Time   | 7.533s   | 1.187s  |1.351s|1.330s|
| Result | 10000000 | 6378438 |10000000|10000000|


### Conclusion
Although the time of using CAS is slower than without using lock, it still faster than using lock.
Therefore, using lock will have overhead, and this phenomenon will be more obvious when the Lock is more frequently use.
