# Tests — MATLAB review scripts

**Sources:** [`Test/`](../Test/), [`Test 1/`](../Test%201/), [`T3/T3/`](../T3/T3/)  
**Course:** CET 151 (EMU) · **Author:** Julio Barros

## `Test/Test1.m` — trig, vectors, roots

```matlab
A = sind(47);
B = [-0.4, 0.0, 0.4, 0.8 1.2 1.6 2.0];
C = (1.5 - 1/3) + (1/5 - 1/7 - 1/9) * 3.5;
X = [1.35 0.43 0.66 0.99 1.98 2.83];
max(X); min(X); mean(X);
P = (2 + 3 - 7 - 3);
roots(P);
```

## `Test/Test4.m` — polynomial roots

```matlab
A = (1 -4 -1);
ra = roots(A);
B = (4 -2 -1);
rb = roots(B);
```

## `Test 1/` folder

- [`Test 1.docx`](../Test%201/Test%201/Test%201.docx) — mostly empty in export; use [`Test 1.pptx`](../Test%201/Test%201/Test%201.pptx) and spreadsheet below
- [`4-6(H)2.xlsx`](../Test%201/Test%201/4-6(H)2.xlsx) — spreadsheet portion of the test

## `T3/T3/`

- [`T33.m`](../T3/T3/T33.m) — MATLAB portion
- [`t34.cpp`](../T3/T3/t34.cpp) — short C++ numeric lab (area-style calculation)
