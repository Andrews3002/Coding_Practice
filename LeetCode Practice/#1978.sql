SELECT employee_id FROM Employees
WHERE (manager_id IS NOT NULL
AND manager_id NOT IN (
    SELECT employee_id FROM Employees
))
OR (salary < 30000)