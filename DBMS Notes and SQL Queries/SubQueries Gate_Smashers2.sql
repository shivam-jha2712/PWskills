CREATE TABLE emp
(
`E_id` INT NOT NULL,
`E_name` VARCHAR(40),
`Address` VARCHAR(40),
PRIMARY KEY (`E_id`)
);

CREATE TABLE project
(
`E_id` INT NOT NULL,
`P_id` VARCHAR(40) NOT NULL,
`P_name` VARCHAR(40),
`Location` VARCHAR(40),
PRIMARY KEY (`P_id`)
);

INSERT INTO emp (`E_id`, `E_name`, `Address` )
VALUES
('1', 'Ravi', 'Chd'),
('2', 'Varun', 'Delhi'),
('3', 'Nitin', 'Pune'),
('4', 'Robin', 'Banglore'),
('5', 'Ammy', 'Chd');

INSERT INTO project (`E_id`,`P_id` ,`P_name`, `Location`)
VALUES
('1', 'P1', 'IoT', 'Banglore'),
('5', 'P2', 'Big Data', 'Delhi'),
('3', 'P3', 'Retail', 'Mumbai'),
('4', 'P4', 'Android', 'Hyderabad');

-- IN Clause
-- Find details of employees who either belong to Delhi Pune or Banglore
SELECT * FROM emp 
WHERE `Address` IN ('Delhi', 'Chd', 'Pune');

-- Find the name of the employees who are working on a Project
SELECT `E_name` FROM emp
WHERE `E_id` IN (SELECT DISTINCT(`E_id`) FROM project);

-- EXISTS
-- Find the details of the emp who is working on at least one project
SELECT * FROM emp 
WHERE EXISTS 
(SELECT E_id FROM project WHERE emp.E_id = project.E_id); 

-- NOT EXISTS
SELECT * FROM emp
WHERE NOT EXISTS
(SELECT E_id FROM project WHERE emp.E_id = project.E_id); 
