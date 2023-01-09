from curses import COLOR_CYAN
from tkinter import W
from turtle import *
speed(10)
color('cyan')
bgcolor('black')
b=200
while b>0 :
    left(b)
    forward(b*3)
    b=b-1;
