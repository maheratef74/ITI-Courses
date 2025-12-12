-- 1-	Display all data for all the countries.
select * 
from country



-- 2-   Display all the languages you have. (Remove redundant data)
select distinct language
from countrylanguage 

-- 3-	Display all countries that lie in Africa sorted Area.
select * 
from country 
where continent = 'Africa'
order by surfacearea

-- 4-	Display all cities that have population more than 2 million.
select * 
from city 
where population > 2000000


-- 5-	Display all countries that became independent from 1920 t0 1990
select * 
from country 
where indepyear between 1920 and 1990

-- 6-	Display all countries that have no independence year.
select * 
from country 
where indepyear is null


-- 7-	Display all countries that have any kind of ‘Republic’ government form.
select * 
from country 
where governmentform = 'Republic'


-- 8-	Display all countries that lie in Asia and have population more than 100 million.
select * 
from country 
where continent = 'Asia' and population > 100000000

-- 9-	Display country code for all those speak Spanish as an official language.
select countrycode 
from countrylanguage 
where language = 'Spanish' and isofficial is true 


-- 10-	Display country code for all those speak more than 2 languages.
select countrycode
from countrylanguage
group by countrycode
having count(language) > 2


-- 11-	Display the number of people on earth.
select sum(population)
from country 


-- 12-	Display all Continents along with the number of countries and total population in each continent.
select continent ,count(country), sum(population)
from country
group by continent


-- 13-	You have just discovered a new country, Add it to your database.
--       (Of course, your country have some cities and languages)
-- select * from country 

-- insert country 
insert into country (code , name , continent , region , surfacearea , indepyear , population , lifeexpectancy , gnp , gnpold , localname , governmentform ,headofstate , capital , code2)
values ('FC', 'maherco', 'Africa', 'Pacific', 150000.0, 2025, 5000000, 82.5, 90000.0, NULL, 'maherco', 'sohag', 'sohag', 5001, 'AU');

-- insert city with the next id 4080
insert into city (id , name , countrycode , district , population)
values(4080 , 'maherco_city' , 'FC' , 'East Java' , 150000 )

-- insert country language
insert into countrylanguage (countrycode , language , isofficial , percentage)
values ('FC' , 'Arabic' , true , 100)


-- 14-	In your country, increase life expectation by 5 years.
update country 
set lifeexpectancy = lifeexpectancy + 5 
where code = 'FC' 

-- 15-	Display all cities that belong to Egypt
-- by sub query 
-- first we should get the code of egypt 
-- then we can get the cities

select * 
from city 
where countrycode = (
	select code 
	from country 
	where name = 'Egypt'
	limit  1
)

-- another solation by inner join 
select * 
from city 
inner join country 
on city.countrycode = country.code
where country.code = 'EGY'


-- 16-	Display all countries that have cities with population more than 5 million.
-- first we need to get all the cities countrycode that > 5 m
-- second get the countries that in this 


-- sub query
select * 
from country 
where code in(
	select countrycode 
	from city 
	where population > 5000000
)

-- join
select distinct country.*
from country 
inner join city
on country.code = city.countrycode
where city.population > 5000000


-- 17-	Display all countries that speak “Dutch” as a secondary language

-- sub query
-- select the code of the country that use Dutch as not offical

select * 
from country 
where code in(
	select countrycode 
	from countrylanguage
	where language = 'Dutch' and isofficial is false 
)

-- by join
select *
from country 
inner join countrylanguage
on country.code = countrylanguage.countrycode
where language = 'Dutch' and isofficial is false 


-- 18-	Display all countries names along with their official language.
-- by join
select country.name , countrylanguage.language
from country 
inner join countrylanguage
on country.code = countrylanguage.countrycode
where isofficial is true 


-- 19-	Display all cities that have the same district name.
-- slef join
select
    c1.name as city1_name,
    c2.name as city2_name,
    c1.district
from city as c1 
inner join city as c2 
on c1.district = c2.district
where c1.id < c2.id -- to avoid dublication


-- 20-	Display African countries names along with number of cities in each country.

-- first get the all the country with the number of its cities beacuse we do not have continent in city 
-- second match 
select country.name , t.num_cities
from country as c
inner join (
	select countrycode , count(id) as num_cities
	from city
	group by (countrycode)
) as t on c.code = t.countrycode
where
    c.continent = 'Africa';


13- 
select customer_No , item_no count(distinct order_no)
from orders 
group by 
customer_No ,
item_no;

11-
select o.* , c.customerName , k.clerkName 
from order o 
join customer c on o.customerId = c.customerId
join clerk k on o.clerkId = k.clerkId








