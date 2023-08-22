clc
clear all
tol=10^(-5)
f=@(x) (x^3 + 4*x^2 - 10 );
g=@(x) (10/(4+x))^0.5;
a=input('Enter a: ');
b=input('Enter b: ');
if(f(a)*f(b)<0)
    c=(a+b)/2;
    for i=1:1:10
        y=g(c);
        c=y; 
    end
else
    fprintf('errooorrr')
end
fprintf('root is: ')
y