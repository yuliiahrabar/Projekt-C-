CREATE DATABASE fresh;

USE fresh;

CREATE TABLE list(
id_product int(10) AUTO_INCREMENT,
name VARCHAR(20) NOT NULL,
category INT(10) NOT NULL,
PRIMARY KEY (id_product));

CREATE TABLE woda(
amount int(10) NOT NULL,
month TINYINT,
year INT,
id_woda int(10) NOT NULL,
FOREIGN KEY (id_woda) REFERENCES list (id_product));

INSERT INTO list VALUES ('1','Woda Zywiec', '2');
 
INSERT INTO list (name, category) VALUES ('Sluchawki', '1');

INSERT INTO list (name, category) VALUES ('Jogurt Jogobella', '4');

INSERT INTO list (name, category) VALUES ('Ryz bialy', '3');

INSERT INTO woda VALUES ('15','12', '2016', '1');