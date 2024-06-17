A = CALL(IF(new insert remove remove, contains B)) CALL(A) del CALL(LOOP(new insert contains del)) del CALL(D);
B = new C CALL(new remove) remove contains del;
C = new D CALL(LOOP(B)) del;
D = C new LOOP(B LOOP(A) del);