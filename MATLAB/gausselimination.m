%Gauss elimination method
clc
clear all
a=[6 2 8;3 5 2;0 8 2];
b=[26;8;-7];
A=[a,b];
n=size(A,1); %number of rows
for j=1:n-1
    for i=j+1:n
        A(i,:)=A(i,:)-(A(i,j)/A(j,j))*A(j,:)
    end
end
X(n)=A(n,n+1)/A(n,n);
for i=n-1:-1:1
    sum=0;
    for j=i+1:n
        sum=sum+(A(i,j)*X(j));
    end
    X(i)=(A(i,n+1)-sum)/A(i,i)
end

