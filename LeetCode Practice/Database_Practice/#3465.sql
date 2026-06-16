SELECT * FROM Products
WHERE description ~ '( |^)SN[0-9][0-9][0-9][0-9]-[0-9][0-9][0-9][0-9]( |$)'
ORDER BY product_id ASC