-- @block
create TABLE department1(deptID INT primary key , deptName varchar(20), joinDate date);

-- @block
create TABLE IF NOT EXISTS employee1(empID int primary key, empName varchar(20),job varchar(20), salary int, deptID int references department1(deptID));

-- @block
INSERT into department1 VALUES(1, 'IT', '2024-01-01');
INSERT into department1 VALUES(2, 'CS', '2024-02-24');
INSERT into department1 VALUES(3, 'ECE', '2024-01-02');
INSERT into department1 VALUES(4, 'ME', '2023-03-24');
INSERT into department1 VALUES(5, 'CE', '2024-01-03');

-- in Oracle: use the syntax: 2024-JAN-23
-- in Oracle: use the syntax: number
-- @block
INSERT into employee1 VALUES(1, 'Akhil','Head', 10000, 1);
INSERT into employee1 VALUES(2, 'Rahul','CLERK', 20000, 2);
INSERT into employee1 VALUES(3, 'Rohit','CLERK', 30000, 2);
INSERT into employee1 VALUES(4, 'Raj','Lecturer', 40000, 4);
INSERT into employee1 VALUES(5, 'Ravi','Lab Instructor', 50000, 3);
INSERT into employee1 VALUES(6, 'Ramesh','Coordinator', 6000, 5);
INSERT into employee1 VALUES(7, 'Rajesh','CLERK', 7000, 1);
INSERT into employee1 VALUES(8, 'Amol','Lecturer', 8000, 2);
INSERT into employee1 VALUES(9, 'Alice','Lab instructor', 9000, 3);


-- @block
-- Q2
-- find the department where the max number if no of employees are working
SELECT deptID, COUNT(*) as fs
FROM employee1
GROUP BY deptID
having COUNT(*) = (select max(fs) from(
    SELECT COUNT(*) as emp_count
    FROM employee1
    GROUP BY deptID
) as subquery);

-- Q3
-- @block
select empName, department1.deptName from employee1, department1 where employee1.deptID = department1.deptID 

-- Q4
-- @block
select deptName, count(*) from department1,employee1 where employee1.job='CLERK' and employee1.deptID=department1.deptID group by deptName having count(empID) = (select max(count(empID)) from employee1 group by deptID);

-- Q5 
-- @block


-- @block
SELECT * FROM department1;

-- @block
SELECT * FROM employee1;

-- @block
DROP TABLE department1;

-- @block
DROP TABLE employee1;