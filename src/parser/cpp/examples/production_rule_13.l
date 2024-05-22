A = LOOP(A IF(B, CALL(new C del)));
B = CALL(A) CALL(LOOP(new contains B del)) CALL(C) CALL(D);
C = new insert LOOP(A D) new IF(remove,LOOP(insert)) new insert D del del del;
D = IF(CALL(C), new IF(CALL(B),LOOP(C)));