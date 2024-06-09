A = CALL(IF(new insert remove remove, contains B)) CALL(A) CALL(LOOP(new insert contains del)) CALL(D);
B = new C CALL(new remove) remove contains del;
C = new D CALL(LOOP(B));
D = C new LOOP(B LOOP(A));