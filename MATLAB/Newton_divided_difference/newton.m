clc
clear all

x=[1;1.5;2;2.5]
a=[2.7183;4.4817;7.3891;12.1825]
for i=2:4
    for j=i:4
        a(j,i)=(a(j,i-1)-a(j-1,i-1))/(x(j)-x(j-i+1));
    end
end
sum=a(1,1)
for i=2:4
    prod=1
    for j=1:i-1
        % 2.25 is the value of x which we want to find
        prod=prod*(2.25-x(j))
    end
    sum=sum+a(i,i)*prod
end
sum