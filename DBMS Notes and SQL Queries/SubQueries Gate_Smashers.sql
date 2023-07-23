CREATE TABLE emp
(
`Emp_id` INT NOT NULL,
`Emp_name` VARCHAR(40),
`Dept` VARCHAR(40),
`Salary` INT,
PRIMARY KEY (`Emp_id`)
);

INSERT INTO emp (`Emp_id`, `Emp_name`, `Dept`, `Salary` )
VALUES
('1', 'Ram', 'HR', '10000'),
('2', 'Amrit', 'MRKT', '20000'),
('3', 'Ravi', 'HR', '30000'),
('4', 'Nitin', 'MRKT', '40000'),
('5', 'Varun', 'IT', '50000');

-- Find the max salary given
SELECT MAX(salary) FROM emp;

-- NESTED/ SUBQUERIES
-- Find employee taking the max salary 
SELECT `Emp_name` FROM emp
WHERE salary = (SELECT MAX(salary) FROM emp);

-- Find the second Highest salary from the table
SELECT MAX(salary) FROM emp 
WHERE salary <> (SELECT MAX(salary) FROM emp);

-- Find name of the employee taking home the second highest salary
SELECT `Emp_name` FROM emp
WHERE salary = (SELECT MAX(salary) FROM emp WHERE salary <> (SELECT MAX(salary) FROM emp));


-- GROUP BY CLAUSE
-- Find the no of people working in each department
SELECT Dept, COUNT(*) AS `Number of People` FROM emp 
GROUP BY Dept;

-- HAVING CLAUSE
-- Find the department having number of employess less than 2
SELECT Dept FROM emp GROUP BY Dept
HAVING COUNT(*) < 2;

-- Find the name of the employee working in the department having number of employess less than 2
SELECT Emp_name FROM emp
WHERE Dept 
IN (SELECT Dept FROM emp GROUP BY Dept
HAVING COUNT(*) < 2);

-- Find the name of the employees taking away the highest salary from each department
SELECT Emp_name, Dept, Salary FROM emp
WHERE (Dept,salary) IN 
(SELECT Dept, MAX(salary) FROM emp
GROUP BY Dept);