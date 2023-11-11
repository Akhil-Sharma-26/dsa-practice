clc
clear all

f=@(x) (cos(x)^2)
a=-0.25
b=0.25
n=4
h=(b-a)/n
sum=f(a)+f(b)
for i=1:n-1
    sum=sum+(2*f(a+(i*h)))
end
sum*h/2