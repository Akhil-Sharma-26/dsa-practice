clc
clear all

x=[0 0.25 0.5 0.75]
f=[1 1.64872 2.71828 4.48169]
prod=1
n=4
for i=1:n
    l(i)=1
    for j=1:n
        if j~=i
            l(i)=l(i)*(0.43-x(j))/(x(i)-x(j))
            %{The 0.43 is most probably the asked value}
        end
    end
end
s=0
for i=1:n
    s=s+(l(i)*f(i))
end
s