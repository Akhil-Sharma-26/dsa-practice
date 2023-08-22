clc
clear all
tol=10^(-5)
f=@(x) (x^3 + 4*x^2 - 10 );
g=@(x) (10/(4+x))^0.5;
a=input('Enter a: ');
b=input('Enter b: ');
while abs(b-a)>tol
    if(f(a)*f(b)<0)
        a=b
        b=g(a)
    else
        fprintf('error')
        break;
    end
end
fprintf('root is: ')
disp(a)