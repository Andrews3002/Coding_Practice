SELECT * FROM Products
WHERE description ~ '( |^)SN[0-9]{4}-[0-9]{4}( |$)'
ORDER BY product_id ASC