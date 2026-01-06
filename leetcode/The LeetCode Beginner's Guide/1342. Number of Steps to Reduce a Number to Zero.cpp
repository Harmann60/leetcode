//6th January 2026
// 1342. Number of Steps to Reduce a Number to Zero

class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while(num!=0)
        {
        if(num%2==0)
        num/=2;
        else
        num-=1;
        step++ ;
    }
    return step;
    }
};

// I solved this question myself , not that thing to be proud of as it is very easy question but yeah feeling is great, finally meet Ayush afer a long time and spend some good quality time wuth him
//College this sem till now is pretty go , lets see what'll happen next
// Today i start playing basketball again and gave that crazy assist that i always dreamt of giving 
