UPDATE Salary
SET sex = CASE 
    WHEN sex = 'f' THEN sex = 'm'
    WHEN sex = 'm' THEN sex = 'f'
END;