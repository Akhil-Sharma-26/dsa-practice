clc
clear all
syms x;
f =@(x) (2*sin(pi*x)+x)
F=diff(f,x);
x0=1.2;
x1=1.5;
tol=10^(-3)
for i=1:1:15
     x2=x1-(f(x0)/((x1-x0)/f(x1)-f(x0)))*f(x1);
     if abs(x1-x0)<tol || abs((x1-x0)/x1) < tol
       break
    end
     x2=x1
     x1=x0
end
fprintf("Number of iterations are: %d \n",i)
fprintf("%f",x2)