A = CALL(new A insert insert D del);
B = IF(A, new contains remove del) CALL(D);
C = LOOP(IF(A,B)) LOOP(CALL(C));
D = IF(C,LOOP(C)) D;