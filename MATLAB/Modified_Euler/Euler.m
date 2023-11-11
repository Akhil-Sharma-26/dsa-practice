clc
clear all

f=@(x,y) y-(x*x)+1;
a=0
b=2
h=0.2
n=(b-a)/h
x(1)=a
y(1)=0.5
for i=1:n
    k1=h*(f(x(i),y(i)));
    k2=h*(f(x(i)+h,y(i)+k1))
    x(i+1)=x(i)+h
    y(i+1)=y(i)+(k1+k2)/2;
end
x
y