CREATE TABLE branch (branch_name varchar(255) primary key, branch_city varchar(255), assets number(8,2));
CREATE TABLE account(accno int primary key, branch_name varchar(255) references branch(branch_name), balance number(8,2));
CREATE TABLE customer (c_name varchar(255) primary key,c_street varchar(255),c_city varchar(255));
CREATE TABLE depositor(c_name varchar(255) references customer (c_name), accno int references account(accno));
CREATE TABLE loan (l_num int primary key, branch_name varchar(255) references branch (branch_name), amount number(8,2));
CREATE TABLE borrower(c_name references customer(c_name), l_num int references loan(l_num));
                                                                                    
INSERT ALL
INTO branch VALUES ('CHAMRAJPET', 'BANGALORE', 50000)
INTO branch VALUES('RESIDENCY ROAD', 'BANGALORE', 10000)
INTO branch VALUES('M G ROAD', 'BOMBAY', 100000)
INTO branch VALUES('CP', 'DELHI', 100000)
INTO branch VALUES('JANTARMANTAR', 'DELHI', 100000)
SELECT * FROM DUAL;		

INSERT ALL
INTO account VALUES (1, 'CHAMRAJPET', 2000)
INTO account VALUES (2, 'RESIDENCY ROAD', 5000)
INTO account VALUES (3, 'M G ROAD', 6000)
INTO account VALUES (4, 'CP', 9999)
INTO account VALUES (5, 'JANTARMANTAR', 999)
INTO account VALUES (6, 'M G ROAD', 999)
INTO account VALUES (8, 'RESIDENCY ROAD', 999)
INTO account VALUES (9, 'CP', 10000)
INTO account VALUES (10, 'RESIDENCY ROAD', 5000)
INTO account VALUES (11, 'JANTARMANTAR', 9999)
SELECT * FROM DUAL;

INSERT ALL
INTO customer VALUES ('ANNE', 'BULL TEMPLE ROAD', 'BANGALORE')
INTO customer VALUES ('DANNY', 'BANNERGATTA ROAD', 'BANGALORE')
INTO customer VALUES ('TOM', 'J C ROAD', 'BANGALORE')
INTO customer VALUES ('NICK', 'CP', 'DELHI')
INTO customer VALUES ('ROVER', 'JANTARMANTAR', 'DELHI')
SELECT * FROM DUAL;

INSERT ALL
INTO depositor VALUES ('ANNE', 1)
INTO depositor VALUES ('DANNY', 2)	
INTO depositor VALUES ('NICK', 4)
INTO depositor VALUES ('ROVER', 5)	
INTO depositor VALUES ('ANNE', 8)
INTO depositor VALUES ('NICK', 9)
INTO depositor VALUES ('DANNY', 10)
INTO depositor VALUES ('NICK', 11)
SELECT * FROM DUAL;


INSERT ALL
INTO loan VALUES (1, 'CHAMRAJPET', 1000)
INTO loan VALUES (2, 'RESIDENCY ROAD', 2000)
INTO loan VALUES (3, 'M G ROAD', 3000)
INTO loan VALUES (4, 'CP', 4000)
INTO loan VALUES (5, 'JANTARMANTAR', 5000)
SELECT * FROM DUAL;

INSERT ALL
INTO borrower VALUES ('ANNE', 1)
INTO borrower VALUES ('ANNE', 2)
INTO borrower VALUES ('TOM', 3)
INTO borrower VALUES ('NICK', 4)
INTO borrower VALUES ('ROVER', 5)
SELECT * FROM DUAL;
                                                                                    
-- Find all the customers who have at least two accounts at the Main branch.                                                                                   
SELECT d.c_name FROM customer c,depositor d, account a WHERE a.accno=d.accno and d.c_name =c.c_name AND a.branch_name ='RESIDENCY ROAD' GROUP BY d.c_name HAVING COUNT(d.c_name) >= 2
             
--Find all the customers who have an account at all the branches located in a specific city
Select A.c_name From depositor A LEFT OUTER JOIN account B on B.accno = A.accno group by A.c_name Having count(distinct(B.branch_name)) = (select count(branch_name) from branch where branch_city = 'BANGALORE')
                                                                              
--Demonstrate how you delete all account tuples at every branch located in a specific city.
DELETE FROM depositor WHERE accno in (SELECT  accno  FROM account WHERE branch_name IN (SELECT branch_name FROM branch WHERE branch_city = 'DELHI'));
DELETE FROM account WHERE branch_name IN (SELECT branch_name FROM branch WHERE branch_city = 'DELHI');   
                                                                                        
--Generate suitable reports.
select a.accno,c.c_name,c.c_street ,a.balance from customer c,account a,depositor d where a.accno=d.accno and c.c_name=d.c_name;                                                               
