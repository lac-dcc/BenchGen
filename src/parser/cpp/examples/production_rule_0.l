A = CALL(new insert insert D del);
B = IF(A, new contains remove del);
C = LOOP(IF(A,B));
D = IF(C,LOOP(C));