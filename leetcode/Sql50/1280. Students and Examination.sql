# 1280 Studens and Examination
# 17 Feburary 2026

Select s.student_id,s.student_name,b.subject_name,count(e.subject_name) as attended_exams from Students s 
join Subjects b Left Join Examinations e on e.subject_name = b.subject_name and e.student_id=s.student_id 
group by 1,2,3  order by 1,2;
