-- Set the database name from the command-line argument
USE `dbname`;

-- Create the table if it does not exist
CREATE TABLE IF NOT EXISTS first_table (
    `id` INT,
    name VARCHAR(256)
);
