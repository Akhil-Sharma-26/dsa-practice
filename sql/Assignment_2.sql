-- @block
CREATE TABLE Emp (
    EmpNo INT PRIMARY KEY,
    Ename VARCHAR(100),
    Job VARCHAR(50),
    Salary DECIMAL(10, 2),
    Commission DECIMAL(10, 2),
    DeptNO INT
);

-- @block
-- Insert 5 records
INSERT INTO Emp (EmpNo, Ename, Job, Salary, Commission, DeptNO) VALUES
(1, 'John', 'Manager', 3000, NULL, 10),
(2, 'Jane', 'Clerk', 2000, NULL, 20),
(3, 'Bob', 'Salesperson', 2500, 500, 30),
(4, 'Alice', 'Clerk', 2200, NULL, 10),
(5, 'Charlie', 'Manager', 2800, 400, 20);

-- Q1
-- @block
SELECT EmpNo, Ename FROM Emp WHERE DeptNO = 10;

-- Q2
-- @block
SELECT Ename FROM Emp WHERE Job = 'Clerk' AND Salary > 2000;

-- Q3
-- @block
SELECT Ename, Job FROM Emp WHERE Job IN ('Salesperson', 'Clerk');

-- Q4
-- @block
SELECT * FROM Emp WHERE Salary BETWEEN 2000 AND 3000;

-- Q5
-- @block
SELECT * FROM Emp WHERE DeptNO IN (10, 20, 30);

-- Q6
-- @block
SELECT Ename FROM Emp WHERE Commission IS NULL;

-- Q7
-- @block
SELECT DeptNO, Salary FROM Emp ORDER BY DeptNO ASC, Salary DESC;

-- Q8
-- @block
SELECT Ename FROM Emp WHERE Ename LIKE '%a%a%' OR Ename LIKE '%A%A%';

-- Q9
-- @block
SELECT Ename FROM Emp WHERE Ename LIKE '_b%' OR Ename LIKE '_B%';

-- Q10
-- @block
SELECT Ename FROM Emp WHERE Ename LIKE 'a%' OR Ename LIKE 'A%' OR Ename LIKE '%a' OR Ename LIKE '%A';

-- Q11
-- @block
SELECT MAX(Salary), MIN(Salary), AVG(Salary) FROM Emp WHERE DeptNO = 10;

-- Q12
-- @block
SELECT COUNT(*) FROM Emp WHERE DeptNO = 20;

-- Q13
-- @block
SELECT SUM(Salary) FROM Emp WHERE Job = 'Clerk';

-- Q14
-- @block
-- SELECT CURRENT_DATE;
-- SELECT SYSDATE FROM dual;

-- Q15
-- @block
SELECT (12*12)/13 FROM dual;;

-- Q16
-- @block
SELECT * FROM Emp WHERE LOWER(Ename) = 'raj';