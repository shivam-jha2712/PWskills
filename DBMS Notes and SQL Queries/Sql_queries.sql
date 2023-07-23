CREATE SCHEMA IF NOT EXISTS sql_for_business_analytics;

USE sql_for_business_analytics;

CREATE TABLE IF NOT EXISTS car_details_1 (
    name VARCHAR(255),
    year INT,
    selling_price INT,
    km_driven INT,
    fuel VARCHAR(20),
    seller_type VARCHAR(20),
    transmission VARCHAR(20),
    owner VARCHAR(20)
);


INSERT INTO sql_for_business_analytics.car_details_1 (name, year, selling_price, km_driven, fuel, seller_type, transmission, owner)
VALUES
('Maruti 800 AC', 2007, 60000, 70000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Maruti Wagon R LXI Minor', 2007, 135000, 50000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Hyundai Verna 1.6 SX', 2012, 600000, 100000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Datsun RediGO T Option', 2017, 250000, 46000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Honda Amaze VX i-DTEC', 2014, 450000, 141000, 'Diesel', 'Individual', 'Manual', 'Second Owner'),
('Maruti Alto LX BSIII', 2007, 140000, 125000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Hyundai Xcent 1.2 Kappa S', 2016, 550000, 25000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Tata Indigo Grand Petrol', 2014, 240000, 60000, 'Petrol', 'Individual', 'Manual', 'Second Owner'),
('Hyundai Creta 1.6 VTVT S', 2015, 850000, 25000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Maruti Celerio Green VXI', 2017, 365000, 78000, 'CNG', 'Individual', 'Manual', 'First Owner'),
('Chevrolet Sail 1.2 Base', 2015, 260000, 35000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Tata Indigo Grand Petrol', 2014, 250000, 100000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Toyota Corolla Altis 1.8 VL CVT', 2018, 1650000, 25000, 'Petrol', 'Dealer', 'Automatic', 'First Owner'),
('Maruti 800 AC', 2007, 60000, 70000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Maruti Wagon R LXI Minor', 2007, 135000, 50000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Hyundai Verna 1.6 SX', 2012, 600000, 100000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Datsun RediGO T Option', 2017, 250000, 46000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Honda Amaze VX i-DTEC', 2014, 450000, 141000, 'Diesel', 'Individual', 'Manual', 'Second Owner'),
('Maruti Alto LX BSIII', 2007, 140000, 125000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Hyundai Xcent 1.2 Kappa S', 2016, 550000, 25000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Tata Indigo Grand Petrol', 2014, 240000, 60000, 'Petrol', 'Individual', 'Manual', 'Second Owner'),
('Hyundai Creta 1.6 VTVT S', 2015, 850000, 25000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Maruti Celerio Green VXI', 2017, 365000, 78000, 'CNG', 'Individual', 'Manual', 'First Owner'),
('Chevrolet Sail 1.2 Base', 2015, 260000, 35000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Tata Indigo Grand Petrol', 2014, 250000, 100000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Toyota Corolla Altis 1.8 VL CVT', 2018, 1650000, 25000, 'Petrol', 'Dealer', 'Automatic', 'First Owner'),
('Maruti Ciaz VXi Plus', 2015, 585000, 24000, 'Petrol', 'Dealer', 'Manual', 'First Owner'),
('Hyundai Venue SX Opt Diesel', 2019, 1195000, 5000, 'Diesel', 'Dealer', 'Manual', 'First Owner'),
('Chevrolet Enjoy TCDi LTZ 7 Seater', 2013, 390000, 33000, 'Diesel', 'Individual', 'Manual', 'Second Owner'),
('Jaguar XF 2.2 Litre Luxury', 2014, 1964999, 28000, 'Diesel', 'Dealer', 'Automatic', 'First Owner'),
('Mercedes-Benz New C-Class 220 CDI AT', 2013, 1425000, 59000, 'Diesel', 'Dealer', 'Automatic', 'First Owner'),
('Maruti Vitara Brezza ZDi Plus AMT', 2018, 975000, 4500, 'Diesel', 'Dealer', 'Automatic', 'First Owner'),
('Audi Q5 2.0 TDI', 2011, 1190000, 175900, 'Diesel', 'Dealer', 'Automatic', 'First Owner'),
('Honda City V MT', 2018, 930000, 14500, 'Petrol', 'Dealer', 'Manual', 'First Owner'),
('Tata Tigor 1.2 Revotron XT', 2018, 525000, 15000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Audi A6 2.0 TDI Design Edition', 2013, 1735000, 50000, 'Diesel', 'Dealer', 'Automatic', 'First Owner'),
('Mercedes-Benz New C-Class C 220 CDI Avantgarde', 2012, 1375000, 33800, 'Diesel', 'Dealer', 'Automatic', 'Second Owner'),
('Skoda Superb Ambition 2.0 TDI CR AT', 2011, 450000, 130400, 'Diesel', 'Dealer', 'Automatic', 'Second Owner'),
('Toyota Corolla Altis G AT', 2016, 900000, 50000, 'Petrol', 'Individual', 'Automatic', 'First Owner'),
('Toyota Innova 2.5 G (Diesel) 7 Seater', 2015, 1300000, 80000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Jeep Compass 1.4 Sport Plus BSIV', 2019, 1400000, 10000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Mercedes-Benz E-Class E 200 CGI Elegance', 2010, 850000, 119000, 'Petrol', 'Dealer', 'Automatic', 'First Owner'),
('Hyundai i10 Magna 1.1L', 2014, 229999, 60000, 'Petrol', 'Individual', 'Manual', 'Fourth & Above Owner'),
('BMW 3 Series 320d Sport Line', 2013, 1550000, 75800, 'Diesel', 'Dealer', 'Automatic', 'Second Owner'),
('Audi Q7 35 TDI Quattro Premium', 2009, 1250000, 78000, 'Diesel', 'Dealer', 'Automatic', 'Third Owner'),
('Hyundai Elantra CRDi S', 2012, 625000, 40000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Mahindra Scorpio 1.99 S10', 2014, 1050000, 50000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Honda City i DTEC V', 2014, 560000, 74000, 'Diesel', 'Individual', 'Manual', 'Second Owner'),
('Maruti Wagon R VXI BS IV with ABS', 2014, 290000, 64000, 'Petrol', 'Individual', 'Manual', 'Second Owner'),
('Maruti Wagon R VXI BS IV', 2012, 275000, 60000, 'Petrol', 'Individual', 'Manual', 'Second Owner'),
('Mahindra Scorpio LX', 2009, 411000, 120000, 'Diesel', 'Individual', 'Manual', 'Second Owner'),
('Hyundai Santro Xing GLS', 2009, 150000, 79000, 'Petrol', 'Individual', 'Manual', 'Third Owner'),
('Hyundai Grand i10 1.2 Kappa Asta', 2019, 500000, 15000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Maruti Alto LXi', 2006, 100000, 80000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Maruti Swift Dzire VDI Optional', 2017, 725000, 18500, 'Diesel', 'Dealer', 'Manual', 'First Owner'),
('Maruti Eeco 5 Seater AC BSIV', 2018, 401000, 10200, 'Petrol', 'Dealer', 'Manual', 'First Owner'),
('Hyundai i20 Sportz 1.4 CRDi', 2018, 750000, 29000, 'Diesel', 'Dealer', 'Manual', 'First Owner'),
('Maruti Omni Maruti Omni MPI STD BSIII 5-STR W/ IMMOBILISER', 2018, 310000, 28000, 'Petrol', 'Dealer', 'Manual', 'First Owner'),
('Maruti Swift ZDi BSIV', 2016, 665000, 46000, 'Diesel', 'Dealer', 'Manual', 'First Owner'),
('Hyundai i20 2015-2017 Sportz Option 1.4 CRDi', 2014, 465000, 70000, 'Diesel', 'Dealer', 'Manual', 'First Owner'),
('Maruti Alto LXi', 2012, 160000, 60000, 'Petrol', 'Individual', 'Manual', 'Second Owner'),
('Mahindra Jeep CL 500 MDI', 1996, 250000, 35000, 'Diesel', 'Individual', 'Manual', 'Second Owner'),
('Honda City i DTEC VX', 2014, 675000, 90000, 'Diesel', 'Dealer', 'Manual', 'First Owner'),
('Maruti Wagon R VXI BS IV', 2013, 300000, 80000, 'Petrol', 'Dealer', 'Manual', 'First Owner'),
('Tata Indica DLS', 2005, 70000, 80000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Hyundai EON Magna Plus', 2014, 240000, 73300, 'Petrol', 'Dealer', 'Manual', 'Second Owner'),
('Toyota Etios GD', 2014, 525000, 92000, 'Diesel', 'Dealer', 'Manual', 'First Owner'),
('Maruti Alto LXi', 2009, 151000, 66764, 'Petrol', 'Dealer', 'Manual', 'Second Owner'),
('Maruti Alto LXi', 2009, 140000, 100000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Chevrolet Tavera Neo LS B3 - 7(C) seats BSIII', 2010, 280000, 350000, 'Diesel', 'Individual', 'Manual', 'Second Owner'),
('Toyota Corolla Altis Diesel D4DG', 2011, 350000, 230000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Mahindra Scorpio 1.99 S6 Plus', 2017, 570000, 60000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Hyundai EON Magna Plus', 2018, 300000, 31000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Tata Indigo Classic Dicor', 2007, 100000, 39000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Toyota Innova 2.5 V Diesel 8-seater', 2009, 500000, 120000, 'Diesel', 'Individual', 'Manual', 'Third Owner'),
('Tata Indica Vista Quadrajet LS', 2014, 125000, 166000, 'Diesel', 'Individual', 'Manual', 'Fourth & Above Owner'),
('Maruti Swift 1.3 VXi', 2006, 130000, 110000, 'Petrol', 'Individual', 'Manual', 'Third Owner'),
('Ford EcoSport 1.5 Diesel Titanium BSIV', 2017, 925000, 35000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Maruti Ciaz 1.3 Delta', 2018, 750000, 60000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Honda Civic 1.8 V AT', 2007, 200000, 54000, 'Petrol', 'Individual', 'Automatic', 'Second Owner'),
('Hyundai i10 Sportz 1.2', 2010, 248000, 63000, 'Petrol', 'Individual', 'Manual', 'Second Owner'),
('Skoda Rapid 1.5 TDI Elegance', 2014, 450000, 120000, 'Diesel', 'Individual', 'Manual', 'Second Owner'),
('Hyundai Getz GLS', 2005, 80000, 120000, 'Petrol', 'Individual', 'Manual', 'Third Owner'),
('Nissan Terrano XL', 2014, 650000, 76000, 'Petrol', 'Individual', 'Manual', 'Second Owner'),
('Hyundai Grand i10 CRDi Sportz', 2015, 450000, 80000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Hyundai Elite i20 Diesel Era', 2019, 650000, 25000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Honda Amaze S i-VTEC', 2016, 495000, 11958, 'Petrol', 'Dealer', 'Manual', 'First Owner'),
('Honda Brio S MT', 2015, 371000, 20000, 'Petrol', 'Dealer', 'Manual', 'First Owner'),
('Hyundai Creta 1.6 SX Option', 2017, 1025000, 9000, 'Petrol', 'Dealer', 'Manual', 'First Owner'),
('Mercedes-Benz S-Class S 350d Connoisseurs Edition', 2017, 8150000, 6500, 'Diesel', 'Dealer', 'Automatic', 'First Owner'),
('Mahindra XUV500 W8 2WD', 2015, 750000, 70000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Renault Duster 85PS Diesel RxL Optional', 2013, 600000, 120000, 'Diesel', 'Individual', 'Manual', 'First Owner'),
('Hyundai Santro Xing XO', 2007, 80000, 58000, 'Petrol', 'Dealer', 'Manual', 'Second Owner'),
('Mahindra Bolero 2011-2019 SLE', 2013, 325000, 62200, 'Diesel', 'Dealer', 'Manual', 'First Owner'),
('Audi A6 2.0 TDI Premium Plus', 2014, 1470000, 34000, 'Diesel', 'Dealer', 'Automatic', 'Second Owner'),
('Fiat Avventura MULTIJET Emotion', 2015, 350000, 53000, 'Diesel', 'Individual', 'Manual', 'Second Owner'),
('Audi A8 4.2 TDI', 2013, 2800000, 49000, 'Diesel', 'Dealer', 'Automatic', 'First Owner'),
('Datsun RediGO 1.0 S', 2017, 210000, 15000, 'Petrol', 'Dealer', 'Manual', 'Second Owner'),
('Volkswagen Jetta 1.4 TSI Comfortline', 2013, 450000, 50000, 'Petrol', 'Individual', 'Manual', 'First Owner'),
('Audi A4 2.0 TDI 177 Bhp Premium Plus', 2013, 1150000, 53000, 'Diesel', 'Dealer', 'Automatic', 'First Owner');

-- Now will be writing queries on the above populated dataset

-- To display all the columns of the table
SELECT * FROM sql_for_business_analytics.car_details_1;

-- To display car_name and selling_price from the given dataset
SELECT name, selling_price FROM sql_for_business_analytics.car_details_1;

-- To display car details where selling price is less than 50000
SELECT * FROM sql_for_business_analytics.car_details_1 
WHERE selling_price < 50000;

-- To display all the details of car which has name of "AUDI Q5 2.0 TDI"
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE name = "AUDI Q5 2.0 TDI";

--  To arrange the cars by the order of their selling price
SELECT * FROM sql_for_business_analytics.car_details_1 ORDER BY selling_price;

--  To arrange the cars by the order of their selling price
SELECT * FROM sql_for_business_analytics.car_details_1 ORDER BY selling_price DESC;

--  To find the Chaep cars by the order of their selling price and they must also be the latest ones at those prices
SELECT * FROM sql_for_business_analytics.car_details_1 ORDER BY selling_price , `year` DESC;

-- Here we needed name, selling price and km_driven ordered by selling_price in desc followed by km_driven in ascending order
SELECT `name`, `selling_price`, `km_driven` FROM sql_for_business_analytics.car_details_1 
ORDER BY selling_price DESC, km_driven; 

-- Find the top 10 most expensive cars of the set using LIMIT
SELECT * FROM sql_for_business_analytics.car_details_1 
ORDER BY selling_price DESC
LIMIT 10; 

-- Remove the confusion of the dealer that whether the year mentioned is that of manufacturing or not by renaming it as manufacturing_year
SELECT *,year AS manufacturing_year FROM sql_for_business_analytics.car_details_1;

-- We need name of the car and year but renamed as manufactured year
-- WE need to even order it on Manufactured year and show only the top 10 records
SELECT name,year manufacturing_year FROM sql_for_business_analytics.car_details_1
ORDER BY manufacturing_year 
LIMIT 10;

-- Order of Query writing SELECT > FROM > WHERE > ORDERBY > LIMIT

-- Finding All the Unique Car Names using DISTINCT Keywords
SELECT DISTINCT name FROM sql_for_business_analytics.car_details_1;

-- Removing all the names where the  name is not null
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE name IS NOT NULL; 
-- ARITHEMETIC OPERATOR
-- Make Precise Km_Driven by adding 100 km to km_driven and also alias it as new_km_driven
SELECT *,km_driven + 100 AS new_km_driven 
FROM sql_for_business_analytics.car_details_1;

-- Provide a Discount of 1000 rupees on every car sold
SELECT *, selling_price - 1000 AS new_selling_price 
FROM sql_for_business_analytics.car_details_1;

-- if suppose the prices of cars get doubled after 10 years now what would the selling price of cars in 2032
SELECT *, selling_price*2 AS selling_price_in_2032 
FROM sql_for_business_analytics.car_details_1;

-- if the general tax of 5% is levied on the selling price of the car and you are asked to find it and store it in general_tax_column
SELECT *, selling_price*5/100 AS general_tax_column 
FROM sql_for_business_analytics.car_details_1; 

-- As per the companies the selling price must be an even number check it whether it is true and if true return 0 in is_even_selling_price_column
SELECT *, selling_price, CAST(selling_price AS SIGNED) % 2 AS is_even_selling_price_column
FROM sql_for_business_analytics.car_details_1; 

-- COMPARISION OPERATOR
-- Find the selling price and km_driven for a car named "Mahindra Jeep CL 500 MDI"
SELECT name, selling_price ,km_driven FROM sql_for_business_analytics.car_details_1
WHERE name = "Mahindra Jeep CL 500 MDI";

-- Find the cars which are non petrol fuel type. Using sql
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE fuel != "petrol";

-- find the cars that have been manufactured after year 2007
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE year > "2007";

-- find the cars that have been manufactured before the year 2007
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE year < "2007";

-- LOGICAL OPERATORS
-- Find cars that are manufactured in the year 2007 AND have selling_price less than 100000
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE year = "2007" AND selling_price < "100000";

-- Find the cars that are manufactured in the year 2007 OR have selling_price less than 100000
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE year = "2007" OR selling_price < "100000";

-- Find the cars which are NOT petrol fuel type. Using sql
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE fuel != "petrol";

-- Find the cars that were manufactured BETWEEN 2007 and 2009
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE year BETWEEN 2007 AND 2009;

-- Find the cars that were manufactured IN 2009 and 2010
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE year IN (2007, 2010);

-- LIKE (A%) wala scene which means anything that starts with A
-- Find all the cars belonging to the company of Maruti
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE name LIKE "Maruti%";

-- LIKE (%A) wala scene which means that ends with A 
-- Find all the cars that have AC at the end of their name
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE name LIKE "%AC";

-- LIKE (A%B) wala scene where the it starts with A and ends with B
-- With the help of _ we can also make sure that there exists no repetition
-- Find all the cars whose name start with M and has no repetion of letter M
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE name LIKE "M_%";

-- SUBQUERY
-- Find the cars which are cheaper than 3lakh and are less than 10 thousand km_driven 
-- OR they should be more than 10 Lakh at cost and should be older tha 2010
SELECT * FROM sql_for_business_analytics.car_details_1
WHERE
(selling_price < 300000 AND km_driven < 10000)
OR
(selling_price < 1000000 AND year < 2010);