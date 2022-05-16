-- SOLUTIONS --

-- Tydzien 1: lesson 2

-- Zadanie 2.4
SELECT * FROM departments;

-- Zadanie 2.5
SELECT * FROM employees;

-- Zadanie 2.6
SELECT last_name, job_ID, hire_date AS STARTDATE, employee_ID FROM employees;

-- Zadanie 2.7
SELECT DISTINCT job_id FROM employees;

-- Zadanie 2.8
SELECT  employee_ID AS "Emp#", last_name AS "Employee", job_ID AS "Job", hire_date AS "Hire Date" FROM employees;

-- Zadanie 2.9
SELECT last_name || ', ' || job_id AS "Employee and Title" FROM employees;

-- Zadanie 2.10
SELECT employee_id || ',' || first_name || ',' || last_name || ',' || email || ',' || phone_number || ','|| job_id || ',' || manager_id || ',' || hire_date || ',' || salary || ',' || commission_pct || ',' || department_id AS "THE_OUTPUT" FROM employees;


-- Tydzien 2: lesson 11 i lesson 3

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
SELECT last_name AS "Employye", salary "Monthtly Salary" FROM employees WHERE (salary BETWEEN 5000 AND 12000) AND department_id IN (20,50);

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
SELECT last_name, job_id, salary FROM employees WHERE (job_id = 'SA_REP' OR job_id = 'ST_CLERK') AND salary NOT IN (2500,3500,7000); 

-- 3.15
SELECT last_name "Employee", salary "Monthly Salary", commission_pct FROM employees WHERE commission_pct = 0.2;

-- Zadanie 4.1

SELECT sysdate FROM dual; 

-- Zadanie 4.2

SELECT employee_id, last_name, salary, ROUND(salary * 1.155, 0)AS "NewSalary" FROM employees; 

-- Zadanie 4.3

-- jak wyzej

-- Zadanie 4.4

SELECT employee_id, last_name, salary, ROUND(salary * 1.155, 0) AS "NewSalary",  ROUND(salary * 1.155, 0) - salary as "Increase" FROM employees; 

-- Zadanie 4.5 

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

-- Zadanie 4.6

SELECT last_name, ROUND(MONTHS_BETWEEN(SYSDATE, hire_date)) 
AS "MONTHS_WORKED" FROM employees ORDER BY salary ASC;


-- Zadanie 4.7

SELECT last_name, LPAD(salary, 15, '$') AS "SALARY" FROM employees;

-- Zadanie 4.8

SELECT RPAD(last_name, 8)||' '||RPAD(' ', salary/1000+1, '*') AS
EMPLOYEES_AND_THEIR_SALARIES FROM employees ORDER BY salary DESC;

-- Zadanie 4.9

SELECT last_name, TRUNC((SYSDATE-hire_date)/7) AS TENURE FROM employees 
WHERE department_id = 90 ORDER BY TENURE DESC;

-- Zadanie 5.1

SELECT last_name || ' earns '|| TO_CHAR(salary, 'fm$99,999.00')|| 
' monthly but wants '|| TO_CHAR(salary * 3, 'fm$99,999.00')|| '.' 
AS "Dream Salaries"
FROM employees;

-- Zadanie 5.2

SELECT last_name, hire_date, 
TO_CHAR((NEXT_DAY(hire_date,INITCAP('Monday'))),'FMDay," the "DdSpth "of" Month, yyyy') AS "REVIEW"
FROM employees;

-- Zadanie 5.3

SELECT last_name, hire_date, TO_CHAR(hire_date,'Day') "DAY"
FROM employees
ORDER BY TO_CHAR(hire_date-1,'d');

-- Zadanie 5.4

SELECT last_name, NVL(TO_CHAR(commission_pct), 'No Commision') AS "COMM" FROM employees;

-- Zadanie 5.5

SELECT job_id,
    DECODE(job_id,
    'ST_CLERK','E',
    'SA_REP','D',
    'IT_PROG','C',
    'ST_MAN','B',
    'AD_PRES','A',
    '0') 
AS "GRADE" FROM employees;

-- Zadanie 5.6

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

-- Lesson 6 & 7

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

-- 7.1
SELECT location_id, street_address, city, state_province, country_name 
FROM   locations 
NATURAL JOIN  countries;

-- 7.2
SELECT last_name, department_id, department_name 
FROM   employees 
JOIN   departments  
USING (department_id);

-- 7.3
SELECT emp.last_name, emp.job_id, emp.department_id, dep.department_name 
FROM   employees emp JOIN departments dep  
ON     (emp.department_id = dep.department_id) 
JOIN   locations loc 
ON     (dep.location_id = loc.location_id) 
WHERE LOWER(loc.city) = 'toronto'; 

-- 7.4
SELECT emp.last_name "Employee", emp.employee_id "EMP#",  
       man.last_name "Manager", man.employee_id  "Mgr#" 
FROM   employees emp join employees man 
ON     (emp.manager_id = man.employee_id); 

-- 7.5
SELECT emp.last_name "Employee",  emp.employee_id "EMP#",  
       man.last_name "Manager", man.employee_id  "Mgr#" 
FROM   employees emp  
LEFT   OUTER JOIN employees man 
ON     (emp.manager_id = man.employee_id); 

-- 7.6
SELECT dep.department_id department, dep.last_name employee, 
       col.last_name colleague 
FROM   employees dep JOIN employees col 
ON     (dep.department_id = col.department_id) 
WHERE  dep.employee_id <> col.employee_id  
ORDER BY dep.department_id, dep.last_name, col.last_name; 

-- 7.7
DESC JOB_GRADES 
SELECT emp.last_name, emp.job_id, dep.department_name, 
       emp.salary, job.grade_level 
FROM   employees emp JOIN departments dep 
ON     (emp.department_id = dep.department_id) 
JOIN   job_grades job 
ON    (emp.salary BETWEEN job.lowest_sal AND job.highest_sal) ORDER BY job.grade_level ASC;

-- 7.8
SELECT emp.last_name, emp.hire_date 
FROM   employees emp JOIN employees davies 
ON     (davies.last_name = 'Davies') 
WHERE  davies.hire_date < emp.hire_date; 

-- 7.9
SELECT emp.last_name AS "Employee Name", emp.hire_date AS "Employee Hire Date", man.last_name  AS "Manager Name", man.hire_date AS "Manager Hire Date" 
FROM   employees emp JOIN employees man 
ON    (emp.manager_id = man.employee_id)  
WHERE    emp.hire_date <  man.hire_date;