%   Project 8A - Julio Barros; %
   

    disp ('1. Morning $6.00 ');
    disp('2. Afternoon $8.00');
    disp('3. Evening $10.00');
  
    
    
       T=input('Number of Tickets');
      
       if (T<=2)
           R=T*6;
           fprintf('R = %6.3f \n', R);
       elseif (T>=3||T<=5)
           R=T*6;
           fprintf('R = %6.3f \n', R);
       elseif(A>=5)
           R=T*6/25;
           fprintf('R = %6.3f \n', R);
       end
       
        disp('2. Afternoon $8.00');
        B=input('Number of Tickets');
      
       if (B<=2)
           A=B*8;
           fprintf('R = %6.3f \n', A);
       elseif (B>=3||B<=5)
           A=B*8;
           fprintf('R = %6.3f \n', A);
           
       elseif(B>=5)
           A=B*8/25;
           fprintf('R = %6.3f \n', A);
       end
          disp('3. Evening $10.00');
           EV=input('Number of Tickets');
      
       if (EV<=2)
           E=EV*8;
           fprintf('R = %6.3f \n', E);
       elseif (EV>=3||EV<=5)
           E=EV*8;
           fprintf('R = %6.3f \n', E);
           
       elseif(EV>=5)
           E=EV*8/25;
           fprintf('R = %6.3f \n', E);
       end
       
          