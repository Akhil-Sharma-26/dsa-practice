clc
clear all

x0=[1 1 1]
a=[4 1 0 ; 1 20 1 ; 0 1 4]
tol=10^(-2)
k=0
k0=1
while abs(k-k0)>tol
    y=x0*a
    k0=k
    k=norm(y,inf)
    x0=y/k
end
y
k