-- Set the database name from the command-line argument
USE `hbtn_0c_0`;

-- List all records of the second_table ordered by score (top first)
SELECT `score`, `name`
FROM `second_table`
ORDER BY `score` DESC;