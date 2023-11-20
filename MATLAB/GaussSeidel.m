%Gauss-Seidel method
clc
clear all
c=[10 -1 2 0;-1 11 -1 3;2 -1 10 -1;0 3 -1 8];
b=[6;25;-11;15];
a=[c,b];
x0=[0;0;0;0];
x=[0;0;0;0];
n=size(a,1);
k=1;
while k<=100
    for i=1:n
        sum=0;
        for j=1:n
            if(i~=j)
                sum=sum+a(i,j)*x(j);
            end
        end
        x(i)=(a(i,n+1)-sum)/a(i,i);
    end
    if(abs(x-x0)<0.0001)
        break;
    end
    x0=x;
    k=k+1;
end
x
