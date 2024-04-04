declare
s number;
p number;
a number;
b number;
procedure p1(
    x in number, y in number, m out number,n out number) is
begin 
m:=x+y;
n:=x*y;
end;
begin 
a:=5;
b:=12;
p1(a,b,s,p);
dbms_output.put_line(s || ' ' || p);
-- dbms_output.put_line(p);
end;