# 2356. Number of Unique Subjects Taught by Each teacher
# 18 Feburary 2026
  
select teacher_id,count(Distinct subject_id) as cnt from Teacher group by 1;

#This is one of the few problems that i solved myself in the first go
