clc
clear all
syms x;
f=@(x) ((atan(4*x))-x);
F=diff(f,x);

x0=1.35 % idk why
tol=10^(-3)
for i=1:1:15
     x1=x0-(f(x0)/(subs(F,x,x0)));
    % x1=x0-(f(x0)/F(x0))
     x0=x1
    if abs(x1-x0)<tol || abs((x1-x0)/x1) < tol
       break
    end
end
fprintf("%f",x1)