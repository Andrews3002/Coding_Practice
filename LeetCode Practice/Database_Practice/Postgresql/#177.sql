CREATE OR REPLACE FUNCTION NthHighestSalary(N INT) RETURNS TABLE (Salary INT) AS $$
BEGIN
  RETURN QUERY (
    -- Write your PostgreSQL query statement below.
    SELECT
        CASE
            WHEN N > 0 THEN E.salary
            ELSE NULL
        END AS "salary"
    FROM Employee E
    GROUP BY E.salary
    ORDER BY E.salary DESC
    LIMIT 1
    OFFSET N-1
  );
END;
$$ LANGUAGE plpgsql;