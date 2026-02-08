SELECT 
    A.book_id,
    A.title,
    A.author,
    A.genre,
    A.publication_year,
    COALESCE(B.total_borrowed, 0) AS current_borrowers
FROM library_books A
LEFT JOIN (
    SELECT 
        book_id,
        COUNT(*) AS total_borrowed
    FROM borrowing_records
    WHERE return_date IS NULL
    GROUP BY book_id
) AS B
ON A.book_id = B.book_id
WHERE A.total_copies = B.total_borrowed
ORDER BY current_borrowers DESC, A.title ASC