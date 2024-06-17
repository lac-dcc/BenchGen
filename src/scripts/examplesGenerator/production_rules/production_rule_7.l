A = new insert B C del CALL(C);
B = new contains CALL(IF(D, del) LOOP(new LOOP(contains) remove));
C = LOOP(new insert A B remove del);
D = IF(A, new remove LOOP(insert) del);