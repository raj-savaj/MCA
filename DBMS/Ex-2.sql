CREATE TABLE Flights(fno INT PRIMARY KEY,flight_from VARCHAR(50),flight_to VARCHAR(30),distance NUMBER(10),Departs varchar2(10),arrives varchar2(10),price NUMBER(10,2));
CREATE TABLE Aircraft(aid INT PRIMARY KEY,aname  VARCHAR(50), cruisingrange NUMBER(10));
CREATE TABLE Employees(eid INT PRIMARY KEY, ename VARCHAR(50), salary int);
CREATE TABLE Certified(eid int references Employees(eid),aid int  references Aircraft(aid));

INSERT ALL
INTO Flights VALUES (1,'Bangalore','Mangalore',360,'10:45:00','12:00:00',10000)
INTO Flights VALUES (2,'Bangalore','Delhi',5000,'12:15:00','04:30:00',25000)
INTO Flights VALUES (3,'Bangalore','Mumbai',3500,'02:15:00','05:25:00',30000)
INTO Flights VALUES (4,'Delhi','Mumbai',4500,'10:15:00','12:05:00',35000)
INTO Flights VALUES (5,'Delhi','Frankfurt',18000,'07:15:00','05:30:00',90000)
INTO Flights VALUES (6,'Bangalore','Frankfurt',19500,'10:00:00','07:45:00',95000)
INTO Flights VALUES (7,'Bangalore','Frankfurt',17000,'12:00:00','06:30:00',99000)
SELECT * FROM dual;


INSERT ALL
INTO Aircraft values (123,'Airbus',1000)
INTO Aircraft values (302,'Boeing',5000)
INTO Aircraft values (306,'Jet01',5000)
INTO Aircraft values (378,'Airbus380',8000)
INTO Aircraft values (456,'Aircraft',500)
INTO Aircraft values (789,'Aircraft02',800)
INTO Aircraft values (951,'Aircraft03',1000)
SELECT * FROM dual;

INSERT ALL
INTO Employees VALUES (1,'Ajay',30000)
INTO Employees VALUES (2,'Ajith',85000)
INTO Employees VALUES (3,'Arnab',50000)
INTO Employees VALUES (4,'Harry',45000)
INTO Employees VALUES (5,'Ron',90000)
INTO Employees VALUES (6,'Josh',75000)
INTO Employees VALUES (7,'Ram',100000)
SELECT * FROM dual;

INSERT ALL
INTO certified  VALUES (1,123)
INTO certified  VALUES (2,123)
INTO certified  VALUES (1,302)
INTO certified  VALUES (5,302)
INTO certified  VALUES (7,302)
INTO certified  VALUES (1,306)
INTO certified  VALUES (2,306)
INTO certified  VALUES (1,378)
INTO certified  VALUES (2,378)
INTO certified  VALUES (4,378)
INTO certified  VALUES (6,456)
INTO certified  VALUES (3,456)
INTO certified  VALUES (5,789)
INTO certified  VALUES (6,789)
INTO certified  VALUES (3,951)
INTO certified  VALUES (1,951)
INTO certified  VALUES (1,789)
SELECT * FROM dual;


--Find the names of aircraft such that all pilots certified to operate them have salaries more than Rs.80000
select a.aname from Aircraft a,Employees e,certified c where e.salary>80000 AND c.eid=e.eid AND c.aid=a.aid;



--Find the names of pilots whose salry is less than the price of the cheapest route from Bangalore to Frankfurt
select distinct e.ename from Employees e,certified c where e.eid=c.eid and e.salary<(select min(price) from flights where flight_from='Bangalore' and flight_to='Frankfurt');



--Find the names of pilots certified for some Boeing aircraft
select e.ename from Employees e,certified c,Aircraft a where c.eid=e.eid  AND a.ANAME='Boeing' AND c.aid=a.aid;



--Find the aids of all aircraft that can be used on routes from Bengaluru to New Delhi.
select aid from Aircraft a where cruisingrange>(select max(distance) from Flights where flight_from='Bangalore' and flight_to='Delhi');
