clc;
clear all;

a=[10 8 -3; 2 10 1; 3 -4 10; 2 2 -3];
X=[0; 0; 0];
b=[1; 2; 3];
p=[0; 0; 0];
error=[0; 0; 0];

tol=0.0001;
n=100;
N=3;

for k=1:n
    for i=1:N
        sum=0;
        p(i)=X(i);
        for j=1:N
            if j~=i
                sum=sum + (a(i,j)*X(j));
            end
        end
        X(i)=(b(i)-sum)/a(i,i);
        error(i)=X(i)-p(i);
        sum=0;
        p(i)=X(i);
    end
    if norm(error)<tol
        break;
    end
end

disp(X);


