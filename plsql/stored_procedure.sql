create or replace p1(x in number, y in number, m out number, n out number) is -- a stored procedure, will not work in livesql
x number; -- local. I can declare above begin of procedure. 
begin
-- Procedure can return multiple values implicitly and function can explicitly
m:=x+y;
n:=x*y;
end;
declare 
s number;
p number;
a number;
b number;
begin
a:=53;
b:=102;
p1(a,b,s,p);
dbms_output.put_line(s || ' ' || p);