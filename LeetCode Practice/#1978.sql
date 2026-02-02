SELECT employee_id FROM Employees
WHERE manager_id IS NOT NULL
AND NOT IN (
    SELECT employee_id FROM Employees
)
OR salary < 30000