clc
clear all
f=@(x) (x^2-29);
tol=10^(-5)
a=input('Enter a : \n');
b=input('Enter b : \n');
if(f(a)*f(b)<0)
    while(abs(b-a)>tol)
        c=(a+b)/2;
        if(f(c)==0)
            break;
        end
        if(f(a)*f(c)<0)
            b=c;
        else
            a=c;
        end
    end
else
    fprintf('Error');
end
fprintf('Root is: ')
c
