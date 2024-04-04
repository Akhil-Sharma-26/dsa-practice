-- read a var x and pass inn it to procedure in in out mode. find sqrt
declare
x number;
y number;
ans number;
procedure p1(a number , sd out number) is
    begin
sd:=sqrt(a);
end;
begin 
x:=4;
p1(x,ans);
dbms_output.put_line(ans);
end;
