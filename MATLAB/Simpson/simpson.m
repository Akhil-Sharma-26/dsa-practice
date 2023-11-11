clc
clear all

f=@(x) (cos(x)^2)
a=-0.25
b=0.25
n=4
h=(b-a)/n
simpsum=f(a)+f(b)

for i=1:n-1
    if (mod(i,2)==0)
        simpsum=simpsum+(2*f(a+(i*h)))
    else
        simpsum=simpsum+(4*f(a+(i*h)))
    end
end
simpsum*h/3

// something is missing