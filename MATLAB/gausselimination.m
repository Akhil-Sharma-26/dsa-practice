clc
clear all;

a=[10 8 -3 1; 2 10 1 -4; 3 -4 10 1; 2 2 -3 10];
b=[16; 9; 10; 11];
X=[0;0;0;0];
N=4;


for j=1:N-1
    for i=j+1:N
        m = a(i,j) ./ a(j,j);
        a(i,:)=a(i,:) - m.*a(j,:);
        b(i,:)=b(i,:) - m.*b(j,:);
    end
end

disp(a)
	
X(N)=b(N)/a(N,N);

for i=N-1:-1:1
   sum=0;
   for j=i+1:N
       sum=sum+(a(i,j)*X(j));
   end
   X(i)=(b(i)-sum)/a(i,i);
end
disp(X)


