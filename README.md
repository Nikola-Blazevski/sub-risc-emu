# sub-risc-emu

sub-risc-emu is a lightweight RISC CPU emulator that lets you run and experiment with simple RISC assembly programs. It’s made for learning how a CPU works at a low level, testing small programs, or just playing around with instructions without needing real hardware.  

---

## What it does

- Emulates a small subset of RISC instructions (basic arithmetic, logic, memory access, and jumps)  
- Tracks the state of registers and memory while programs run  
- Lets you step through instructions one by one, so you can see exactly how your program executes  
- Handles simple assembly programs for testing and educational purposes  
- Prints out helpful info during execution so you can debug and understand what’s happening inside the CPU  

Basically, it’s like having a tiny CPU on your computer that you can poke at, see inside, and learn from.  

---

Example of a program:

# simple.asm
```asm
MOV R1, 5
MOV R2, 10
ADD R3, R1, R2
```

Running it with sub-risc-emu simple.asm will show how each instruction updates registers and memory step by step. At the end, R3 will contain 15.
How it works (visualized)

```
            +----------------+
Program --->| Instruction    |
            |   Fetch        |
            +--------+-------+
                     |
                     v
            +----------------+
            | Instruction    |
            |   Decode       |
            +--------+-------+
                     |
                     v
            +----------------+
            | Execute        |
            | Operation      |
            +--------+-------+
                     |
       +-------------+-------------+
       |                           |
       v                           v
  +----------+                 +---------+
  | Registers|<--------------> |  Memory |
  | R0..Rn   |                 |  RAM    |
  +----------+                 +---------+
```
