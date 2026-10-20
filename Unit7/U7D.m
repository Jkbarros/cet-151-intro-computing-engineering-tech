close all
clear all
clc

x = [0:pi/10.:2*pi];
y = exp(-x/3.).* sin(x);
plot (x,y)