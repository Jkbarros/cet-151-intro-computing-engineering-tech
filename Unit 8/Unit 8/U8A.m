%   Project 8A - Julio Barros; %
   

    disp ('1. Moment of Inertia of Rectangle ');
    disp('2. Moment of Inertia of Square');
    disp('3. Moment of Inertia of Circle ');
    n = input('Please select an option: ');
    
    if(n == 1)
       w = input (' Width of Rectangle W:');
       h = input('Height of Rectangular H:');
       R=w*h^(3/12);
       fprintf('R = %6.3f \n', R);
 
    elseif (n == 2)
       s = input('Lengh of the side of the square is:');
       S = ((s^4)/12);
       fprintf('S = %6.3f \n', S);

    elseif (n == 3)
       d= input(' Diameter of the Circle d:');  
       C = pi*(d^4)/4;
       fprintf('C = %6.3f \n', C);
    end 
    


