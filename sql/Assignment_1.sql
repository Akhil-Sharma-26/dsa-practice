-- 1.
-- @block
CREATE TABLE Student (
    Rno INT PRIMARY KEY,
    Name VARCHAR(255),
    DOB DATE,
    Gender CHAR(1),
    Class VARCHAR(50),
    College VARCHAR(50),
    City VARCHAR(50),
    Marks INT
);

-- 2. 
-- @block
INSERT INTO Student VALUES
    (1, 'Akhil', '2000-01-02', 'M', '10th', 'ABC College', 'Patiala', 75),
    (2, 'Radhika', '2000-04-05', 'F', '12th', 'XYZ College', 'Amritsar', 85),
    (3, 'Riya', '1998-03-23', 'F', '11th', 'DEF College', 'Patiala', 90),
    (4, 'Lakhan', '1999-09-24', 'M', '10th', 'GHI College', 'Chandigarh', 60),
    (5, 'Ram', '2000-05-15', 'M', '12th', 'JKL College', 'Amritsar', 55);

-- 3. 
-- @block
SELECT * FROM Student;

-- 4.
-- @block
DESCRIBE Student;

-- 5.
-- @block
SELECT Rno, Name, Class FROM Student WHERE City = 'Patiala';

-- 6. 
-- @block
SELECT * FROM Student ORDER BY Marks ASC;

-- 7. 
-- @block
UPDATE Student SET Marks = 89 WHERE Rno = 5;

-- 8. 
-- @block
UPDATE Student SET Name = 'Akhil', City = 'Delhi' WHERE Rno = 9;

-- 9. 
-- @block
DELETE FROM Student WHERE City = 'Amritsar';

-- 10. 
-- @block
DELETE FROM Student WHERE Marks < 30;


