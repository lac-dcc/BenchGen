A = new new D IF(insert del, remove del) A IF(C,new insert contains del) new del;
B = new C LOOP(contains IF(insert, D remove)) LOOP(C);
C = CALL(IF(C,B)) del new insert D;
D = new A new insert CALL(IF(LOOP(new contains D del), CALL(LOOP(A))));