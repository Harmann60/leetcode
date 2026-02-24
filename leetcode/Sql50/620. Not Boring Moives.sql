#620. Not Boring Movies
#16 Feburary 2026
  
select id,movie,description,rating from Cinema where id%2 = 1 and description!='boring' order by rating desc;

#Abodh's Birthday was quite fun
