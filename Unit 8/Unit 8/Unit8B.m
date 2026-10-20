%Project 8B, Julio Barros, %
 




function grade = Unit8B(~)
a = input('1st Test Score:');
b = input('2nd Test Score:');
c = input('Final Exam Score:');
d = input('Assigments Score:');
n = (a*0.15)+(b*0.15)+(c*0.20)+(d*0.50);

if n >= 95 && n>=100
   grade ='A';
elseif n >= 90 && n>=94
    grade = 'A-';
elseif n >= 87 && n>=89
  grade ='B+';
elseif n >= 84 && n>=86
    grade = 'B';
elseif n >= 80 && n>=83
    grade = 'B-';
elseif n >= 77 && n>=79
    grade = 'C+';
elseif n >= 74 && n>=76
    grade = 'C';
elseif n >= 70 && n>=3
    grade ='C-';
elseif n >= 67 && n>=69
    grade ='D+';
elseif n >= 64 && n>=66
    grade = 'D';
elseif n >= 60 && n>=63
    grade = 'D-';
elseif n <60 
   grade ='F';

end