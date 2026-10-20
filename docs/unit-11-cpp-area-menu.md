# Unit 11 — C++ area calculator menu

**Source:** [`Unit11/Unit11/11-1.cpp`](../Unit11/Unit11/11-1.cpp) (see also `11-2.cpp` … `11-4.cpp`)  
**Course:** CET 151 (EMU) · **Author:** Julio Barros

Menu-driven program for square, rectangle, and circle area:

```cpp
printf("1)Square\n2)Rectangle\n3)Circle\n");
scanf("%d", &input);
if (input == 1) {
    scanf("%f", &base);
    area = base * base;
} else if (input == 2) {
    scanf("%f", &base);
    scanf("%f", &height);
    area = base * height;
} else if (input == 3) {
    scanf("%f", &radius);
    area = pi * pow(radius, 2);
}
```

Invalid input prints a message and waits for Enter (`getche()`), matching the lab template style used in class.
