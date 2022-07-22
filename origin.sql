create database controls;
create table control
(
UserId int not null auto_increment,
UserName varchar(255),
Password varchar(255),
Age int,
Role varchar(255),
DateJoining date,
primary key(UserId)
);
create table ic
(
BarCodeId long,
UniqueId int auto_increment,
primary key(UniqueId),
Name varchar(255),
Price float,
Quantity long,
MarketPrice float
);
create table log
(
ID int not null auto_increment,
username varchar(255),
Role varchar(255),
login varchar(255),
logout varchar(255),
primary key(ID)
);
create table people 
(
phonenumber long,
Name varchar(255),
count long,
ID int auto_increment primary key
);
