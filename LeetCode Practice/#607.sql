SELECT A.name FROM SalesPerson A
WHERE A.sales_id NOT IN (
    SELECT B.sales_id FROM Orders B
    WHERE B.com_id IN (
        SELECT C.com_id FROM Company C
        WHERE C.name IS "RED"
    )
);