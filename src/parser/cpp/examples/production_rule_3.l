A = new new D IF(insert del, remove del) A B IF(C,new insert contains del) new B del;
B = new C B LOOP(contains IF(insert, remove)) LOOP(C);
C = new CALL(IF(C,B)) del new insert D;
D = new insert CALL(IF(LOOP(new contains D del), CALL(LOOP(A))));