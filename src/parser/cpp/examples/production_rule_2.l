A = LOOP(IF(B, CALL(new C del)));
B = CALL(A) CALL(LOOP(new contains del)) CALL(C) CALL(D);
C = new insert new remove new insert D del del del;
D = IF(CALL(C), new IF(CALL(B),LOOP(C)));