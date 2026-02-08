SELECT 
    book_id,
    title,
    author,
    genre,
    publication_year,
    COALESCE(B.total_borrowed, 0) AS current_borrowers
FROM library_books
LEFT JOIN (
    SELECT 
        book_id,
        COUNT(*) AS total_borrowed
    FROM borrowing_records
    WHERE return_date IS NULL
) AS B
ON book_id = B.book_id
WHERE total_copies = B.total_borrowed
ORDER BY current_borrowers DESC, title ASC