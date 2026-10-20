# Unit 9 — First C++ programs

**Sources:** [`Unit 9/Unit 9/`](../Unit%209/Unit%209/) (`U9A.cpp` … `U9D.cpp`)  
**Course:** CET 151 (EMU) · **Author:** Julio Barros

## U9A — Hello World (vertical banner)

```cpp
printf(" Hello !!! My First C Program\n");
printf("\n H\n E\n L\n L\n O\n W\n O\n R\n L\n D\n");
```

## U9D — Integer arithmetic

Reads two integers and prints sum, difference, and product:

```cpp
scanf("%d", &y);
scanf("%d", &x);
int sum = (y + x);
int difference = (y - x);
int multiplication = (y * x);
```

## Build note

Sources use legacy headers (`conio.h`, `dos.h`) from the course Windows toolchain. On modern compilers you may need to remove `getche()` calls or substitute `getchar()`.

### Example compile (MinGW)

```bash
g++ -o U9D U9D.cpp
```

Run from `Unit 9/Unit 9/` after adjusting headers if needed.
