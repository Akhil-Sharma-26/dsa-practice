clc
clear all;

a=[10 8 -3 1; 2 10 1 -4; 3 -4 10 1; 2 2 -3 10];
b=[16; 9; 10; 11];

N=4;
m=eye(N);

for j=1:N-1
    for i=j+1:N
        m(i,j) = a(i,j) ./ a(j,j);
        a(i,:)=a(i,:) - m(i,j).*a(j,:);
        %b(i,:)=b(i,:) - m(i,j).*b(j,:);
    end
end

disp(a)
disp(m)

Y=m\b;
X=inv(a)*Y;

disp(X)