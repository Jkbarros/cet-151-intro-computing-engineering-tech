% Project 8D, Julio Barros,%

       vo = input ('Initial Velocity: ');
       
       a = input('Angle in Degreen (0 - 90 degrees):');
       
       ti= input(' Time Interval:');
       disp('-------------------------------');
       disp('Radian(s):');
       S = a*pi/180;
       fprintf('S = %6.3f \n', S);
       disp('-------------------------------');
       vxo = vo*cosd(a);
       disp ('Horizontal Velocity:vxo');
       fprintf('vxo = %6.3f \n', vxo);
       disp('-------------------------------');
       vyo = vo*sind(a);
       disp('Vertical Velocity:vyo');
       fprintf('vyo = %6.3f \n', vyo);
       tf = 2*vo*sind(a)/9.8067;
       %Gravity = 9.8067%
       disp('-------------------------------');
       disp('Time of Flight');
       fprintf('tf = %6.3f\n',tf);
       disp('-------------------------------');
       
       m = input ('Press ''Enter'' to continue');
       n = 21;
       x = linspace(0,1,n);
       y = sin(2*pi*x);
       disp('');
       disp('t   hor_dis   ver_dis   ver_vel');
       disp('-------------------------------');
       for t = 0:8
       hor_dis =0:109.45;
       ver_dis = 0:-13.11;
       ver_ver = 37.59:-40.87;
       end
       
