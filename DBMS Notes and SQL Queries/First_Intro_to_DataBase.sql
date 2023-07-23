-- The below statement is one of the methods of choosing a schema and then adding table to it
--  Or else we could even do the same using the "USE" keyword
CREATE TABLE cars_database.cars 
(
	`chasis_no`INT NOT NULL,
	`name` VARCHAR(42),
    `year` INT NOT NULL,
    `fuel` VARCHAR(10),
    `transmission` VARCHAR(45),
    `km_driven` INT,
    CONSTRAINT PK_NAME PRIMARY KEY(`chasis_no`, `year`)
);

ALTER TABLE cars ADD `qa_flag` INT DEFAULT 0;
ALTER TABLE cars MODIFY COLUMN `qa_flag` VARCHAR(40);
ALTER TABLE cars DROP COLUMN `qa_flag`;

DROP TABLE cars_details;

DROP database first_schema;

-- inserting elements into the cars_details schema
INSERT INTO cars_database.cars (chasis_no, name, year, fuel, transmission, km_driven)
VALUES 
    (123456, 'Toyota Camry', 2021, 'Petrol', 'Automatic', 50000),
    (789012, 'Honda Civic', 2020, 'Petrol', 'Manual', 40000),
    (345678, 'Ford Mustang', 2019, 'Petrol', 'Automatic', 60000),
    (901234, 'Chevrolet Cruze', 2018, 'Diesel', 'Manual', 80000),
    (567890, 'Volkswagen Golf', 2017, 'Petrol', 'Automatic', 70000),
    (234567, 'BMW X5', 2016, 'Diesel', 'Automatic', 90000),
    (890123, 'Mercedes-Benz C-Class', 2015, 'Petrol', 'Automatic', 100000);

INSERT INTO cars_database.cars (chasis_no, name, year, fuel, transmission, km_driven)
VALUES
(123456789, 'Nexa Baleno', 2018, 'Petrol', 'Manual', 28000),
(987654321, 'Maruti Swift', 2017, 'Petrol', 'Automatic', 35000),
(456789123, 'Honda City', 2019, 'Petrol', 'CVT', 25000),
(789123456, 'Hyundai Creta', 2020, 'Diesel', 'Manual', 40000),
(654321987, 'Toyota Innova', 2016, 'Diesel', 'Automatic', 80000),
(321654987, 'Volkswagen Polo', 2015, 'Petrol', 'Manual', 60000),
(951753852, 'Ford EcoSport', 2017, 'Petrol', 'Automatic', 55000);

-- Updating details into the cars table
UPDATE cars_database.cars
SET name = 'Nexa Baleno', year = 2018, fuel = 'Petrol', transmission = 'Manual', km_driven = 17000
WHERE chasis_no = 123456;

-- Deleting rows from the table
DELETE FROM cars_database.cars
WHERE km_driven > 50000;

DELETE FROM cars_database.cars
WHERE km_driven > 60000;




