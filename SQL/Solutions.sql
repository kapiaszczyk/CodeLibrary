-- SOLUTIONS --

-- LESSON 1

-- no solutions needed

-- LESSON 2

-- 2.4
SELECT * FROM departments;

-- 2.5
SELECT * FROM employees;

-- 2.6
SELECT last_name, job_ID, hire_date AS STARTDATE, employee_ID FROM employees;

-- 2.7
SELECT DISTINCT job_id FROM employees;

-- 2.8
SELECT  employee_ID AS "Emp#", last_name AS "Employee", job_ID AS "Job", hire_date AS "Hire Date" FROM employees;

-- 2.9
SELECT last_name || ', ' || job_id AS "Employee and Title" FROM employees;

-- 2.10
SELECT employee_id || ',' || first_name || ',' || last_name || ',' || email || ',' || phone_number || ','|| job_id || ',' || manager_id || ',' || hire_date || ',' || salary || ',' || commission_pct || ',' || department_id AS "THE_OUTPUT" FROM employees;

-- Lesson 3

-- 3.1
SELECT last_name FROM employees WHERE salary > 12000; 

-- 3.2
SELECT last_name, department_id FROM employees WHERE employee_id = 176;

-- 3.3
SELECT last_name FROM employees WHERE salary > 12000 OR salary < 5000;

-- 3.4
SELECT last_name, job_ID, hire_date FROM employees WHERE last_name = 'Matos' OR last_name='Taylor' ORDER BY hire_date;

-- 3.5
SELECT last_name, department_id FROM employees WHERE department_id = '20' OR department_id = '50' ORDER BY last_name;

-- 3.6
SELECT last_name AS "Employye", salary "Monthtly Salary" FROM employees WHERE (salary BETWEEN 5000 AND 12000) AND department_id IN(20,50);

-- 3.7
SELECT last_name, hire_date FROM employees WHERE hire_date LIKE '%94';

-- 3.8
SELECT last_name, job_id FROM employees WHERE manager_id IS NULL;

-- 3.9
SELECT last_name, salary, commission_pct FROM employees WHERE commission_pct IS NOT NULL ORDER BY salary DESC, commission_pct;

-- 3.10
SELECT last_name, salary FROM employees WHERE salary> &salary;

-- 3.11
SELECT employee_id, last_name, salary, department_id FROM employees WHERE manager_id= &manager ORDER BY last_name;
SELECT employee_id, last_name, salary, department_id FROM employees WHERE manager_id= &manager  ORDER BY salary;
SELECT employee_id, last_name, salary, department_id FROM employees WHERE manager_id= &manager ORDER BY employee_id;

-- 3.12
SELECT last_name FROM employees WHERE last_name LIKE '__a%';

-- 3.13
SELECT last_name FROM employees WHERE last_name LIKE '%a%' AND last_name LIKE '%e%';

-- 3.14
SELECT last_name, job_id, salary FROM employees WHERE (job_id = 'SA_REP' OR job_id = 'ST_CLERK') AND salary NOT IN(2500,3500,7000); 

-- 3.15
SELECT last_name "Employee", salary "Monthly Salary", commission_pct FROM employees WHERE commission_pct = 0.2;

-- LESSON 4

-- 4.1

SELECT sysdate FROM dual; 

-- 4.2

SELECT employee_id, last_name, salary, ROUND(salary * 1.155, 0)AS "NewSalary" FROM employees; 

-- 4.3

-- jak wyzej

-- 4.4

SELECT employee_id, last_name, salary, ROUND(salary * 1.155, 0) AS "NewSalary",  ROUND(salary * 1.155, 0) - salary as "Increase" FROM employees; 

-- 4.5 

SELECT INITCAP(last_name) AS "Name", LENGTH(first_name) AS "Lenght" 
FROM employees 
WHERE last_name LIKE 'J%'
OR last_name LIKE 'M%'
OR last_name LIKE 'A%'
ORDER BY last_name;

SELECT INITCAP(last_name) AS "Name", LENGTH(first_name) AS "Lenght" FROM employees 
WHERE last_name LIKE  INITCAP('&First_letter%')
ORDER BY last_name;

SELECT INITCAP(last_name) AS "Name", LENGTH(first_name) AS "Lenght" FROM employees 
WHERE last_name LIKE  INITCAP('&First_letter%')
ORDER BY last_name;

-- 4.6

SELECT last_name, ROUND(MONTHS_BETWEEN(SYSDATE, hire_date)) 
AS "MONTHS_WORKED" FROM employees ORDER BY salary ASC;


-- 4.7

SELECT last_name, LPAD(salary, 15, '$') AS "SALARY" FROM employees;

-- 4.8

SELECT RPAD(last_name, 8)||' '||RPAD(' ', salary/1000+1, '*') AS
EMPLOYEES_AND_THEIR_SALARIES FROM employees ORDER BY salary DESC;

-- 4.9

SELECT last_name, TRUNC((SYSDATE-hire_date)/7) AS TENURE FROM employees 
WHERE department_id = 90 ORDER BY TENURE DESC;

-- LESSON 5

-- 5.1

SELECT last_name || ' earns '|| TO_CHAR(salary, 'fm$99,999.00')|| 
' monthly but wants '|| TO_CHAR(salary * 3, 'fm$99,999.00')|| '.' 
AS "Dream Salaries"
FROM employees;

-- 5.2

SELECT last_name, hire_date, 
TO_CHAR((NEXT_DAY(hire_date,INITCAP('Monday'))),'FMDay," the "DdSpth "of" Month, yyyy') AS "REVIEW"
FROM employees;

-- 5.3

SELECT last_name, hire_date, TO_CHAR(hire_date,'Day') "DAY"
FROM employees
ORDER BY TO_CHAR(hire_date-1,'d');

-- 5.4

SELECT last_name, NVL(TO_CHAR(commission_pct), 'No Commision') AS "COMM" FROM employees;

-- 5.5

SELECT job_id,
    DECODE(job_id,
    'ST_CLERK','E',
    'SA_REP','D',
    'IT_PROG','C',
    'ST_MAN','B',
    'AD_PRES','A',
    '0') 
AS "GRADE" FROM employees;

-- 5.6

SELECT job_id, 
    CASE
    WHEN job_id='AD_PRES' THEN 'A'
    WHEN job_id='ST_MAN' THEN 'B'
    WHEN job_id='IT_PROG' THEN 'C'
    WHEN job_id='SA_REP' THEN 'D'
    WHEN job_id='ST_CLERK' THEN 'E'  
    ELSE '0'
    END
AS "GRADE" FROM employees; 

-- Lesson 6

-- 6.1
-- T

-- 6.2
-- F (group ignoruje wartości null), trzeba użyćc funkcji NVL

-- 6.3
-- T

-- 6.4
SELECT   
ROUND(MAX(salary),0) "Maximum", 
ROUND(MIN(salary),0) "Minimum", 
ROUND(SUM(salary),0) "Sum", 
ROUND(AVG(salary),0) "Average" 
FROM employees;

-- 6.5
SELECT job_id, 
ROUND(MAX(salary),0) "Maximum", 
ROUND(MIN(salary),0) "Minimum", 
ROUND(SUM(salary),0) "Sum", 
ROUND(AVG(salary),0) "Average" 
FROM employees 
GROUP BY job_id;

-- 6.6
SELECT job_id, COUNT(job_id) 
FROM employees 
GROUP BY job_id;

-- cd

SELECT job_id, COUNT(*)
FROM employees
WHERE job_id = '&job_title'
GROUP BY job_id;

-- 6.7
SELECT COUNT(DISTINCT manager_id) "Number of managers" 
FROM employees;

-- 6.8
SELECT MAX(salary)-MIN(Salary) "Difference" 
FROM employees;

-- 6.9
SELECT manager_id,min(salary)
FROM employees 
WHERE manager_id IS NOT NULL 
GROUP BY manager_id 
HAVING MIN(salary)>6000 
ORDER BY MIN(salary) DESC;

-- 6.10
SELECT  COUNT(*) total, 
SUM(DECODE(TO_CHAR(hire_date, 'YYYY'),1995,1,0)) "1995", 
SUM(DECODE(TO_CHAR(hire_date, 'YYYY'),1996,1,0)) "1996", 
SUM(DECODE(TO_CHAR(hire_date, 'YYYY'),1997,1,0)) "1997", 
SUM(DECODE(TO_CHAR(hire_date, 'YYYY'),1998,1,0)) "1998" 
FROM employees;

-- 6.11

SELECT * FROM 
(SELECT job_id,
SUM(DECODE(department_id, 20, salary)) "Dept 20",
SUM(DECODE(department_id, 50, salary)) "Dept 50",
SUM(DECODE(department_id, 80, salary)) "Dept 80",
SUM(DECODE(department_id, 90, salary)) "Dept 90",
SUM(salary) total_sal
FROM employees GROUP BY job_id)
ORDER BY job_id asc;

-- LESSON 7

-- 7.1
SELECT location_id, street_address, city, state_province, country_name 
FROM   locations 
NATURAL JOIN countries;

-- 7.2
SELECT last_name, department_id, department_name 
FROM   employees 
JOIN  departments  
USING (department_id);

-- 7.3
SELECT emp.last_name, emp.job_id, emp.department_id, dep.department_name 
FROM   employees emp JOIN departments dep  
ON     (emp.department_id = dep.department_id) 
JOIN  locations loc 
ON     (dep.location_id = loc.location_id) 
WHERE LOWER(loc.city) = 'toronto'; 

-- 7.4
SELECT emp.last_name "Employee", emp.employee_id "EMP#",  
       man.last_name "Manager", man.employee_id  "Mgr#" 
FROM   employees emp joINemployees man 
ON     (emp.manager_id = man.employee_id); 

-- 7.5
SELECT emp.last_name "Employee",  emp.employee_id "EMP#",  
       man.last_name "Manager", man.employee_id  "Mgr#" 
FROM   employees emp  
LEFT   OUTER JOINemployees man 
ON     (emp.manager_id = man.employee_id); 

-- 7.6
SELECT dep.department_id department, dep.last_name employee, 
       col.last_name colleague 
FROM   employees dep JOINemployees col 
ON     (dep.department_id = col.department_id) 
WHERE  dep.employee_id <> col.employee_id  
ORDER BY dep.department_id, dep.last_name, col.last_name; 

-- 7.7
DESC JOB_GRADES 
SELECT emp.last_name, emp.job_id, dep.department_name, 
       emp.salary, job.grade_level 
FROM   employees emp JOINdepartments dep 
ON     (emp.department_id = dep.department_id) 
JOIN  job_grades job 
ON    (emp.salary BETWEEN job.lowest_sal AND job.highest_sal) ORDER BY job.grade_level ASC;

-- 7.8
SELECT emp.last_name, emp.hire_date 
FROM   employees emp JOINemployees davies 
ON     (davies.last_name = 'Davies') 
WHERE  davies.hire_date < emp.hire_date; 

-- 7.9
SELECT emp.last_name AS "Employee Name", emp.hire_date AS "Employee Hire Date", man.last_name  AS "Manager Name", man.hire_date AS "Manager Hire Date" 
FROM   employees emp JOINemployees man 
ON    (emp.manager_id = man.employee_id)  
WHERE    emp.hire_date <  man.hire_date;

-- LESSON 8

-- 8.1
SELECT last_name, hire_date
FROM employees
WHERE department_id =
(SELECT department_id FROM employees WHERE last_name LIKE '&name')AND last_name<> '&name';

-- 8.2
SELECT employee_id, last_name, salary
FROM employees
WHERE salary > (SELECT avg(salary) FROM employees)
order by salary;

-- 8.3
SELECT employee_id, last_name
FROM employees
WHERE department_id IN(SELECT department_id FROM employees WHERE last_name like '%u%');

-- 8.4
SELECT last_name, department_id, job_id
FROM employees
WHERE department_id IN(SELECT department_id FROM departments WHERE location_id =1700);

-- 8.5
SELECT last_name, salary
FROM employees
WHERE manager_id IN(SELECT employee_id FROM employees WHERE last_name='King');


-- 8.6
SELECT department_id, last_name, job_id
FROM employees
WHERE department_id IN(SELECT department_id FROM departments WHERE department_name = 'Executive');


-- 8.7
SELECT last_name FROM employeesWHERE salary > ANY (SELECT salary FROM employees WHERE department_id=60);

-- 8.8
SELECT employee_id, last_name, salary
FROM employees
WHERE salary > (SELECT avg(salary) FROM employees) and
department_id IN(SELECT department_id FROM employees WHERE last_name like '%u%');

-- LESSON 9

-- 9.1
SELECT department_id
FROM departments
MINUS
SELECT department_id
FROM employees
WHERE job_id = 'ST_CLERK';

-- 9.2
SELECT country_id,country_name
FROM countries
MINUS
SELECT l.country_id,c.country_name
FROM locations l JOIN countries c
ON (l.country_id = c.country_id)
JOIN departments d
ON d.location_id=l.location_id;

-- 9.3
SELECT distinct job_id, department_id
FROM employees
WHERE department_id = 10
UNION ALL
SELECT DISTINCT job_id, department_id
FROM employees
WHERE department_id = 50
UNION ALL
SELECT DISTINCT job_id, department_id
FROM employees
WHERE department_id = 20

-- 9.4
SELECT employee_id,job_id
FROM employees
INTERSECT
SELECT employee_id,job_id
FROM job_history;

-- 9.5
SELECT last_name,department_id, TO_CHAR(null)
FROM employees
UNION
SELECT TO_CHAR(null),department_id,department_name
FROM departments;

-- LESSON 10

-- 10.1

-- 10.2
DESCRIBE my_employee 

-- 10.3
INSERT INTO my_employee   VALUES (1, 'Patel', 'Ralph', 'rpatel', 895); 

-- 10.4
INSERT INTO my_employee (id, last_name, first_name, userid, salary) 
VALUES (2, 'Dancs', 'Betty', 'bdancs', 860);

-- 10.5
SELECT * 
FROM my_employee;

-- 10.6
INSERT INTO my_employee 
VALUES (&p_id, '&p_last_name', '&p_first_name', '&p_userid', &p_salary);

-- 10.7
INSERT INTO my_employee 
VALUES (&p_id, '&p_last_name', '&p_first_name', '&p_userid', &p_salary);

-- 10.8
SELECT * FROM my_employee;

-- 10.9
COMMIT;

-- 10.10
UPDATE  my_employee 
SET last_name = 'Drexler'
WHERE id = 3;

-- 10.11
UPDATE  my_employee 
SET salary = 1000 
WHERE salary < 900; 

-- 10.12
SELECT *
FROM my_employee;

-- 10.13
DELETE FROM my_employee
WHERE last_name = 'Dancs'; 

-- 10.14
SELECT * 
FROM my_employee;

-- 10.15
COMMIT;

-- 10.16
INSERT INTO my_employee 
VALUES (&p_id, '&p_last_name', '&p_first_name', '&p_userid', &p_salary);

-- 10.17
SELECT * FROM my_employee; 

-- 10.18
SAVEPOINT z17;

-- 10.19
DELETE  FROM  my_employee;

-- 10.20
SELECT *  FROM   my_employee;

-- 10.21
ROLLBACK TO z17;

-- 10.22
SELECT *  FROM   my_employee;

-- 10.23
COMMIT; 
-- 10.24
SET ECHO OFF 
SET VERIFY OFF 
INSERT INTO my_employee 
VALUES (&p_id, '&&p_last_name', '&&p_first_name',lower(substr('&p_first_name', 1, 1) ||    
substr('&p_last_name', 1, 7)), &p_salary); 

SET VERIFY ON 
SET ECHO ON 
UNDEFINE p_first_name 
UNDEFINE p_last_name 

-- 10.25

-- no solution needed

-- 10.26
SELECT *  
FROM my_employee  
WHERE ID='6'; 

-- LESSON 11

-- 11.1
CREATE TABLE dept(id NUMBER(7)CONSTRAINT department_id_pk PRIMARY KEY, name VARCHAR2(25));

DESCRIBE dept;

-- 11.2
INSERT INTO dept SELECT department_id, department_name FROM departments;

-- 11.3
CREATE TABLE emp(id NUMBER(7), last_name VARCHAR2(25), first_name VARCHAR2(25), dept_id NUMBER(7));

DESCRIBE emp;

-- 11.4
CREATE TABLE employees2 AS SELECT employee_id id, first_name, last_name, salary, department_id  FROM employees;

-- 11.5
ALTER TABLE employees2 READ ONLY;

-- 11.6
INSERT INTO employees2 VALUES(34,'Grant','Marcie',5672,10);

-- 11.7
ALTER TABLE employees2 READ WRITE;

-- 11.8
DROP TABLE employees2;


-- LESSON 12

-- 12.1
CREATE OR REPLACE VIEW employees_vu 
AS SELECT employee_id, last_name employee, department_id 
FROM employees;

-- 12.2
SELECT * 
FROM employees_vu;

-- 12.3
SELECT employee, department_id
FROM employees_vu;

-- 12.4
CREATE VIEW dept50 
AS SELECT employee_id empno, last_name employee, department_id deptno 
FROM employees 
WHERE department_id = 50 
WITH CHECK OPTION CONSTRAINT emp_dept_50;

-- 12.5
DESCRIBE dept50
SELECT *
FROM dept50;

-- 12.6
UPDATE dept50
SET deptno = 80
WHERE employee = 'Matos';

-- 12.7
CREATE SEQUENCE dept_id_seq
START WITH 200
INCREMENT BY 10
MAXVALUE 1000;

-- 12.8
INSERT INTO dept VALUES (dept_id_seq.nextval, 'Education'); 
INSERT INTO dept VALUES (dept_id_seq.nextval, 'Administration'); 

-- 12.9
CREATE INDEX dept_name_idx ON dept (name); 

-- 12.10
CREATE SYNONYM emp FOR EMPLOYEES; 

-- LESSON 13

-- 13.1
SELECT FROM employees WHERE hire_date > '1997';

-- 13.2
SELECT last_name, job_id, salary, commission_pct 
FROM employees 
WHERE commission_pct IS NOT NULL 
ORDER BY salary DESC;

-- 13.3
SELECT 'The salary of '||last_name||' after a 10% raise is '|| 
ROUND(salary*1.10) "New salary" FROM employees WHERE commission_pct IS NULL;

-- 13.4
SELECT last_name,
TRUNC(MONTHS_BETWEEN(SYSDATE, hire_date) / 12) YEARS,
TRUNC(MOD(MONTHS_BETWEEN(SYSDATE, hire_date), 12))MONTHS FROM employees 
ORDER BY years DESC, MONTHS desc;

-- 13.5
SELECT last_name FROM employees WHERE SUBSTR(last_name, 1,1) 
IN ('J', 'K', 'L', 'M');

-- 13.6
SELECT last_name, salary, 
DECODE(commission_pct, NULL, 'No', 'Yes') "Commision"
FROM employees;

-- 13.7
SELECT d.department_name, d.location_id, e.last_name, e.job_id, e.salary 
FROM employees e, departments d 
WHERE e.department_id = d.department_id 
AND d.location_id = &location_id;

-- 13.8
SELECT COUNT(*)
FROM employees WHERE
SUBSTR(last_name, -1) = 'n';

SELECT COUNT(*)
FROM employees 
WHERE last_name
LIKE '%n';

-- 13.9
SELECT d.department_id, d.department_name,d.location_id,
COUNT(e.employee_id) 
FROM employees e 
RIGHT OUTER JOIN departments d
ON e.department_id = d.department_id 
GROUP BY d.department_id, d.department_name, d.location_id;

-- 13.10
SELECT DISTINCT job_id 
FROM employees 
WHERE department_id 
IN (10, 20);

-- 13.11
SELECT e.job_id, count(e.job_id) FREQUENCY 
FROM employees e 
JOIN departments dONe.department_id = d.department_idWHEREd.department_name 
IN ('Administration', 'Executive')
GROUP BY e.job_id 
ORDER BY FREQUENCY DESC;

-- 13.12
SELECT last_name, hire_date 
FROM employees 
WHERE TO_CHAR(hire_date, 'DD') < 16;

-- 13.13
SELECT last_name, salary, 
TRUNC(salary, -3)/1000 "Thousands"
FROM employees;

-- 13.14
SELECT e.last_name, m.last_name manager, m.salary,j.grade_level 
FROM employees e 
JOIN employees m
ON e.manager_id = m.employee_id 
JOIN job_grades j 
ON m.salary 
BETWEEN j.lowest_sal 
AND j.highest_salANDm.salary > 15000;

-- 13.15
SELECT e.department_id,d.department_name,
COUNT(e.department_id),
AVG(e.salary),e.last_name,e.salary,e.job_id
FROM employees e RIGHT JOIN departments d
ON (e.department_id = d.department_id)
GROUP BY e.department_id, d.department_name, e.last_name, e.salary, e.job_id;

-- 13.16
ELECT MINIMUM_SALARY,DEPARTMENT_ID
FROM
(
 SELECT AVG(SALARY) AS AVERAGE_SALARY,
        MIN(SALARY) AS MINIMUM_SALARY,
        DEPARTMENT_ID
  FROM EMPLOYEES
 GROUP BY DEPARTMENT_ID
)EMPLOYEE_AGGREGATED
WHERE AVERAGE_SALARY = (SELECT MAX(AVG(SALARY)) FROM EMPLOYEES GROUP BY DEPARTMENT_ID);

-- 13.17
SELECT *
FROM departmentsWHERE department_id 
NOT IN(
SELECT department_id 
FROM employees 
WHERE job_id = 'SA_REP'
AND department_id IS NOT NULL
);

-- 13.18
SELECT d.department_id, d.department_name, 
COUNT(*)
FROM departments d 
JOIN employees e 
ON d.department_id = e.department_id 
GROUP BY d.department_id, d.department_name 
HAVING COUNT(*) < 3;

SELECT d.department_id, d.department_name, 
COUNT(*)FROM departments d JOIN employees e
ON d.department_id = e.department_id
GROUP BY d.department_id, d.department_name
HAVING COUNT(*) = (SELECT MAX(COUNT(*))
FROM employees
GROUP BY department_id);

SELECT d.department_id, d.department_name, 
COUNT(*)
FROM departments d 
JOIN employees e
ON d.department_id = e.department_id
GROUP BY d.department_id, d.department_name
HAVING COUNT(*) = (
SELECT MIN(COUNT(*))
FROM employees
GROUP BY department_id
);

-- 13.19

SELECT e.employee_id, e.last_name, e.department_id, e.salary,AVG(s.salary)FROM employees e JOIN employees sON e.department_id = s.department_idGROUP BY e.employee_id, e.last_name, e.department_id,e.salary;
-- 13.20
SELECT last_name, 
TO_CHAR(hire_date, 'DAY') day
FROM employees
WHERE TO_CHAR(hire_date, 'Day') = (
	SELECT TO_CHAR(hire_date, 'Day')
	FROM employees
	GROUP BY TO_CHAR(hire_date, 'Day')
		HAVING COUNT(*) = (SELECT MAX(COUNT(*))
		FROM employees
		GROUP BY TO_CHAR(hire_date,'Day')
		)
);
-- 13.21
SELECT last_name, 
TO_CHAR(hire_date, 'Month DD') 
BIRTHDAY 
FROM employees
ORDER BY TO_CHAR(hire_date, 'DDD');