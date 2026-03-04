Select b.employee_id,b.name,Count(Distinct a.employee_id) as reports_count,Round(Avg(a.age)) as average_age
from employees a join employees b on a.reports_to=b.employee_id group by 1,2 order by b.employee_id;
