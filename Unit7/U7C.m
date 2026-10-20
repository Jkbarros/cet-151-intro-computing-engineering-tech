disp('Project 7C - Julio Barros;E01963387');
format bank

W=input('Enter the Width of the Beam:');

H=input('Enter the Height of the Beam:');

L=input('Enter the Lenght of the Beam: ');

P=input('Enter the Force applied on the Beam:');

E=input('Enter the Modulus of Elasticity:');

I=W*H^3/12;

D=P*L^3/(3*E*I);

B=P*L*H/(2*I);


