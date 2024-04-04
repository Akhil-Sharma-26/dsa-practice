-- local function-> NO out in the argumnent of the function as it returns only explicitly
declare
s number;
ans number;
a number;
b number;
function f1(x in number, y in number) return number is -- can use is or as
begin 
	s:=x+y;
	return s;
end;
begin 
a:=5;
b:=12;
ans:= f1(a,b);
dbms_output.put_line(ans);
end;