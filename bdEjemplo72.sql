
CREATE DATABASE IF NOT EXISTS bdEjemplo72;
USE bdEjemplo72;

-- schema
CREATE TABLE countries  (
    Id INT NOT NULL AUTO_INCREMENT,
    ISO3 VARCHAR(3) NOT NULL,
    CountryName VARCHAR(64) NOT NULL,
    Capital VARCHAR(64) NOT NULL,
    CurrencyCode VARCHAR(3) NOT NULL,
    PRIMARY KEY(Id)
)
;

-- data 9 rows
INSERT INTO Countries
    (ISO3, CountryName, Capital, CurrencyCode)
VALUES
    ('ARG', 'Argentina', 'Buenos Aires', 'ARS'),
    ('COL', 'Colombia', 'Bogota', 'COP'),
    ('MEX', 'Mexico', 'CDMX', 'MXN'),
    ('PER', 'PERU', 'Lima', 'PEN'),
    ('AUS', 'Australia', 'Canberra', 'AUD'),
    ('DEU', 'Germany', 'Berlin', 'EUR'),
    ('IND', 'India', 'New Delhi', 'INR'),
    ('LAO', 'Laos', 'Vientiane', 'LAK'),
    ('USA', 'United States', 'Washington', 'USD')   
;

