clc
clear all

f=@(x,y) -y+2*cos(x)
a=0
b=1
h=0.2
n=(b-a)/h
x(1)=a
y(1)=1
%{y(1)=1 is because the value of y(0) is already given in question and we
%have taken it as the y(1)}
for i=1:n
    k1=h*f(x(i),y(i))
    k2=h*f(x(i)+h/2,y(i)+k1/2)
    k3=h*f(x(i)+h/2,y(i)+k2/2)
    k4=h*f(x(i)+h,y(i)+k3)
    y(i+1)=y(i)+(k1+(2*k2)+(2*k3)+k4)/6
    x(i+1)=x(i)+h
end
y