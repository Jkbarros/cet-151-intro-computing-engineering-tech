close all
clear all
clc

x = [0:0.1:10];
y = 5 .* x^4 + 4 .* x^3 - 6 .* x^2 + 11 .*x - 35;
z = 5 .* x^0.25 + 4 .* x^0.333 + 2 .* x - 1;

plot (x,z)