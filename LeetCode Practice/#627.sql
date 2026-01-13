UPDATE Salary
SET sex = CASE 
    WHERE sex = 'f' THEN 'm'
    WHERE sex = 'm' THEN 'f'
END;