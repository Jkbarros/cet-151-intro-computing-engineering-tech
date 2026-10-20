# Unit 8 — MATLAB menus and grade calculator

**Sources:** [`Unit 8/Unit 8/`](../Unit%208/Unit%208/) (`U8A.m`, `Unit8B.m`, `U8C.m`, `U8D.m`)  
**Course:** CET 151 (EMU) · **Author:** Julio Barros

## Project 8A — moment of inertia menu (`U8A.m`)

Interactive menu for rectangle, square, and circle cross-sections:

```matlab
n = input('Please select an option: ');
if (n == 1)
   w = input(' Width of Rectangle W:');
   h = input('Height of Rectangular H:');
   R = w*h^(3/12);
elseif (n == 2)
   s = input('Lengh of the side of the square is:');
   S = ((s^4)/12);
elseif (n == 3)
   d = input(' Diameter of the Circle d:');
   C = pi*(d^4)/4;
end
```

## Project 8B — weighted grade function (`Unit8B.m`)

Function `Unit8B` reads four score components and maps a weighted average to a letter grade with nested `if` / `elseif` branches (course rubric weights: 15% / 15% / 20% / 50%).

## Run locally

Open `Unit 8/Unit 8/` in MATLAB and execute `U8A` or `Unit8B` from the editor or command window.
