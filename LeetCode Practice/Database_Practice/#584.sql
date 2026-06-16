SELECT A.name FROM Customer A
WHERE A.referee_id IS NULL
OR A.referee_id != 2;