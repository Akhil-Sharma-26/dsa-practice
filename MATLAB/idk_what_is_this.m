clc
clear all
syms x;
% f =@(x) (2*sin(pi*x)+x)
f=@(x) (x^2)-29
F=diff(f,x);
x0=5;
x1=6;
tol=10^(-3)
for i=1:1:15
     %x2=x1-(f(x0)/((x1-x0)/f(x1)-f(x0)))*f(x1);
     x2=x1-((x1-x0)/(f(x1)-f(x0)))*f(x1);
     if abs(x2-x1)<tol || abs((x2-x1)/x1) < tol
       break;
    end
    x0=x1;
    x1=x2;  
end
fprintf("Number of iterations are: %d \n",i)
fprintf("%f",x1)
// answer is right
