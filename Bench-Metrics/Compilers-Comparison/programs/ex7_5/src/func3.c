#include "ex7_5.h" 
Array func3(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   Array array114;
   if (pCounter > 0) {
      array114 = vars->data[--pCounter];
      array114.refC++;
   } else {
      array114.size = 624;
      array114.refC = 1;
      array114.data = (unsigned int*)malloc(array114.size*sizeof(unsigned int));
      memset(array114.data, 0, array114.size*sizeof(unsigned int));
   }
   ArrayParam params0;
   params0.size = 1;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array114;
   Array array115 = func12(&params0, loopsFactor);
   free(params0.data);
   Array array116;
   if (pCounter > 0) {
      array116 = vars->data[--pCounter];
      array116.refC++;
   } else {
      array116.size = 452;
      array116.refC = 1;
      array116.data = (unsigned int*)malloc(array116.size*sizeof(unsigned int));
      memset(array116.data, 0, array116.size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop28 = 0;
      unsigned int loopLimit28 = (rand()%loopsFactor)/1 + 1;
      for(; loop28 < loopLimit28; loop28++) {
      }
   }
   else {
      Array array117;
      if (pCounter > 0) {
         array117 = vars->data[--pCounter];
         array117.refC++;
      } else {
         array117.size = 899;
         array117.refC = 1;
         array117.data = (unsigned int*)malloc(array117.size*sizeof(unsigned int));
         memset(array117.data, 0, array117.size*sizeof(unsigned int));
      }
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array114;
      params1.data[1] = array115;
      params1.data[2] = array116;
      params1.data[3] = array117;
      Array array118 = func13(&params1, loopsFactor);
      free(params1.data);
      array118.refC--;
      if(array118.refC == 0) {
         free(array118.data);
      }
      array117.refC--;
      if(array117.refC == 0) {
         free(array117.data);
      }
   }
   for (int i = 0; i < array116.size; i++) {
      if (array116.data[i] == 71) { 
         return array116;
      }
   }
   Array array119;
   if (pCounter > 0) {
      array119 = vars->data[--pCounter];
      array119.refC++;
   } else {
      array119.size = 973;
      array119.refC = 1;
      array119.data = (unsigned int*)malloc(array119.size*sizeof(unsigned int));
      memset(array119.data, 0, array119.size*sizeof(unsigned int));
   }
   Array array120;
   if (pCounter > 0) {
      array120 = vars->data[--pCounter];
      array120.refC++;
   } else {
      array120.size = 131;
      array120.refC = 1;
      array120.data = (unsigned int*)malloc(array120.size*sizeof(unsigned int));
      memset(array120.data, 0, array120.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array115.size; i++) {
      array115.data[i]++;
   }
   unsigned int loop29 = 0;
   unsigned int loopLimit29 = (rand()%loopsFactor)/1 + 1;
   for(; loop29 < loopLimit29; loop29++) {
      for (int i = 0; i < array114.size; i++) {
         array114.data[i]--;
      }
   }
   ArrayParam params1;
   params1.size = 5;
   params1.data = (Array*)malloc(params1.size*sizeof(Array));
   params1.data[0] = array114;
   params1.data[1] = array115;
   params1.data[2] = array116;
   params1.data[3] = array119;
   params1.data[4] = array120;
   Array array121 = func14(&params1, loopsFactor);
   free(params1.data);
   Array array122;
   if (pCounter > 0) {
      array122 = vars->data[--pCounter];
      array122.refC++;
   } else {
      array122.size = 660;
      array122.refC = 1;
      array122.data = (unsigned int*)malloc(array122.size*sizeof(unsigned int));
      memset(array122.data, 0, array122.size*sizeof(unsigned int));
   }
   ArrayParam params2;
   params2.size = 7;
   params2.data = (Array*)malloc(params2.size*sizeof(Array));
   params2.data[0] = array114;
   params2.data[1] = array115;
   params2.data[2] = array116;
   params2.data[3] = array119;
   params2.data[4] = array120;
   params2.data[5] = array121;
   params2.data[6] = array122;
   Array array123 = func6(&params2, rng(), loopsFactor);
   free(params2.data);
   Array array124;
   if (pCounter > 0) {
      array124 = vars->data[--pCounter];
      array124.refC++;
   } else {
      array124.size = 981;
      array124.refC = 1;
      array124.data = (unsigned int*)malloc(array124.size*sizeof(unsigned int));
      memset(array124.data, 0, array124.size*sizeof(unsigned int));
   }
   if(PATH0 & 2) {
      unsigned int loop30 = 0;
      unsigned int loopLimit30 = (rand()%loopsFactor)/1 + 1;
      for(; loop30 < loopLimit30; loop30++) {
         for (int i = 0; i < array116.size; i++) {
            if (array116.data[i] == 96) { 
               return array116;
            }
         }
         Array array125;
         if (pCounter > 0) {
            array125 = vars->data[--pCounter];
            array125.refC++;
         } else {
            array125.size = 959;
            array125.refC = 1;
            array125.data = (unsigned int*)malloc(array125.size*sizeof(unsigned int));
            memset(array125.data, 0, array125.size*sizeof(unsigned int));
         }
         ArrayParam params3;
         params3.size = 10;
         params3.data = (Array*)malloc(params3.size*sizeof(Array));
         params3.data[0] = array114;
         params3.data[1] = array115;
         params3.data[2] = array116;
         params3.data[3] = array119;
         params3.data[4] = array120;
         params3.data[5] = array121;
         params3.data[6] = array122;
         params3.data[7] = array123;
         params3.data[8] = array124;
         params3.data[9] = array125;
         Array array126 = func12(&params3, loopsFactor);
         free(params3.data);
         Array array127;
         if (pCounter > 0) {
            array127 = vars->data[--pCounter];
            array127.refC++;
         } else {
            array127.size = 668;
            array127.refC = 1;
            array127.data = (unsigned int*)malloc(array127.size*sizeof(unsigned int));
            memset(array127.data, 0, array127.size*sizeof(unsigned int));
         }
         if(PATH0 & 4) {
            unsigned int loop31 = 0;
            unsigned int loopLimit31 = (rand()%loopsFactor)/2 + 1;
            for(; loop31 < loopLimit31; loop31++) {
            }
         }
         else {
            Array array128;
            if (pCounter > 0) {
               array128 = vars->data[--pCounter];
               array128.refC++;
            } else {
               array128.size = 190;
               array128.refC = 1;
               array128.data = (unsigned int*)malloc(array128.size*sizeof(unsigned int));
               memset(array128.data, 0, array128.size*sizeof(unsigned int));
            }
            ArrayParam params4;
            params4.size = 13;
            params4.data = (Array*)malloc(params4.size*sizeof(Array));
            params4.data[0] = array114;
            params4.data[1] = array115;
            params4.data[2] = array116;
            params4.data[3] = array119;
            params4.data[4] = array120;
            params4.data[5] = array121;
            params4.data[6] = array122;
            params4.data[7] = array123;
            params4.data[8] = array124;
            params4.data[9] = array125;
            params4.data[10] = array126;
            params4.data[11] = array127;
            params4.data[12] = array128;
            Array array129 = func13(&params4, loopsFactor);
            free(params4.data);
            array129.refC--;
            if(array129.refC == 0) {
               free(array129.data);
            }
            array128.refC--;
            if(array128.refC == 0) {
               free(array128.data);
            }
         }
         for (int i = 0; i < array116.size; i++) {
            if (array116.data[i] == 84) { 
               return array116;
            }
         }
         Array array130;
         if (pCounter > 0) {
            array130 = vars->data[--pCounter];
            array130.refC++;
         } else {
            array130.size = 340;
            array130.refC = 1;
            array130.data = (unsigned int*)malloc(array130.size*sizeof(unsigned int));
            memset(array130.data, 0, array130.size*sizeof(unsigned int));
         }
         Array array131;
         if (pCounter > 0) {
            array131 = vars->data[--pCounter];
            array131.refC++;
         } else {
            array131.size = 90;
            array131.refC = 1;
            array131.data = (unsigned int*)malloc(array131.size*sizeof(unsigned int));
            memset(array131.data, 0, array131.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array120.size; i++) {
            array120.data[i]++;
         }
         unsigned int loop32 = 0;
         unsigned int loopLimit32 = (rand()%loopsFactor)/2 + 1;
         for(; loop32 < loopLimit32; loop32++) {
            for (int i = 0; i < array126.size; i++) {
               array126.data[i]--;
            }
         }
         ArrayParam params4;
         params4.size = 14;
         params4.data = (Array*)malloc(params4.size*sizeof(Array));
         params4.data[0] = array114;
         params4.data[1] = array115;
         params4.data[2] = array116;
         params4.data[3] = array119;
         params4.data[4] = array120;
         params4.data[5] = array121;
         params4.data[6] = array122;
         params4.data[7] = array123;
         params4.data[8] = array124;
         params4.data[9] = array125;
         params4.data[10] = array126;
         params4.data[11] = array127;
         params4.data[12] = array130;
         params4.data[13] = array131;
         Array array132 = func14(&params4, loopsFactor);
         free(params4.data);
         array132.refC--;
         if(array132.refC == 0) {
            free(array132.data);
         }
         array131.refC--;
         if(array131.refC == 0) {
            free(array131.data);
         }
         array130.refC--;
         if(array130.refC == 0) {
            free(array130.data);
         }
         array127.refC--;
         if(array127.refC == 0) {
            free(array127.data);
         }
         array126.refC--;
         if(array126.refC == 0) {
            free(array126.data);
         }
         array125.refC--;
         if(array125.refC == 0) {
            free(array125.data);
         }
      }
   }
   else {
      Array array133;
      if (pCounter > 0) {
         array133 = vars->data[--pCounter];
         array133.refC++;
      } else {
         array133.size = 107;
         array133.refC = 1;
         array133.data = (unsigned int*)malloc(array133.size*sizeof(unsigned int));
         memset(array133.data, 0, array133.size*sizeof(unsigned int));
      }
      Array array134;
      if (pCounter > 0) {
         array134 = vars->data[--pCounter];
         array134.refC++;
      } else {
         array134.size = 445;
         array134.refC = 1;
         array134.data = (unsigned int*)malloc(array134.size*sizeof(unsigned int));
         memset(array134.data, 0, array134.size*sizeof(unsigned int));
      }
      Array array135;
      if (pCounter > 0) {
         array135 = vars->data[--pCounter];
         array135.refC++;
      } else {
         array135.size = 756;
         array135.refC = 1;
         array135.data = (unsigned int*)malloc(array135.size*sizeof(unsigned int));
         memset(array135.data, 0, array135.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array123.size; i++) {
         array123.data[i]++;
      }
      unsigned int loop33 = 0;
      unsigned int loopLimit33 = (rand()%loopsFactor)/1 + 1;
      for(; loop33 < loopLimit33; loop33++) {
         for (int i = 0; i < array122.size; i++) {
            array122.data[i]--;
         }
      }
      ArrayParam params3;
      params3.size = 12;
      params3.data = (Array*)malloc(params3.size*sizeof(Array));
      params3.data[0] = array114;
      params3.data[1] = array115;
      params3.data[2] = array116;
      params3.data[3] = array119;
      params3.data[4] = array120;
      params3.data[5] = array121;
      params3.data[6] = array122;
      params3.data[7] = array123;
      params3.data[8] = array124;
      params3.data[9] = array133;
      params3.data[10] = array134;
      params3.data[11] = array135;
      Array array136 = func10(&params3, loopsFactor);
      free(params3.data);
      ArrayParam params4;
      params4.size = 13;
      params4.data = (Array*)malloc(params4.size*sizeof(Array));
      params4.data[0] = array114;
      params4.data[1] = array115;
      params4.data[2] = array116;
      params4.data[3] = array119;
      params4.data[4] = array120;
      params4.data[5] = array121;
      params4.data[6] = array122;
      params4.data[7] = array123;
      params4.data[8] = array124;
      params4.data[9] = array133;
      params4.data[10] = array134;
      params4.data[11] = array135;
      params4.data[12] = array136;
      Array array137 = func7(&params4, loopsFactor);
      free(params4.data);
      array137.refC--;
      if(array137.refC == 0) {
         free(array137.data);
      }
      array136.refC--;
      if(array136.refC == 0) {
         free(array136.data);
      }
      array135.refC--;
      if(array135.refC == 0) {
         free(array135.data);
      }
      array134.refC--;
      if(array134.refC == 0) {
         free(array134.data);
      }
      array133.refC--;
      if(array133.refC == 0) {
         free(array133.data);
      }
   }
   for (int i = 0; i < array119.size; i++) {
      if (array119.data[i] == 9) { 
         return array119;
      }
   }
   Array array138;
   if (pCounter > 0) {
      array138 = vars->data[--pCounter];
      array138.refC++;
   } else {
      array138.size = 336;
      array138.refC = 1;
      array138.data = (unsigned int*)malloc(array138.size*sizeof(unsigned int));
      memset(array138.data, 0, array138.size*sizeof(unsigned int));
   }
   Array array139;
   if (pCounter > 0) {
      array139 = vars->data[--pCounter];
      array139.refC++;
   } else {
      array139.size = 210;
      array139.refC = 1;
      array139.data = (unsigned int*)malloc(array139.size*sizeof(unsigned int));
      memset(array139.data, 0, array139.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array124.size; i++) {
      array124.data[i]++;
   }
   unsigned int loop34 = 0;
   unsigned int loopLimit34 = (rand()%loopsFactor)/1 + 1;
   for(; loop34 < loopLimit34; loop34++) {
      for (int i = 0; i < array114.size; i++) {
         array114.data[i]--;
      }
   }
   ArrayParam params3;
   params3.size = 11;
   params3.data = (Array*)malloc(params3.size*sizeof(Array));
   params3.data[0] = array114;
   params3.data[1] = array115;
   params3.data[2] = array116;
   params3.data[3] = array119;
   params3.data[4] = array120;
   params3.data[5] = array121;
   params3.data[6] = array122;
   params3.data[7] = array123;
   params3.data[8] = array124;
   params3.data[9] = array138;
   params3.data[10] = array139;
   Array array140 = func8(&params3, rng(), loopsFactor);
   free(params3.data);
   for (int i = 0; i < array115.size; i++) {
      if (array115.data[i] == 72) { 
         return array115;
      }
   }
   array140.refC--;
   if(array140.refC == 0) {
      free(array140.data);
   }
   array139.refC--;
   if(array139.refC == 0) {
      free(array139.data);
   }
   array138.refC--;
   if(array138.refC == 0) {
      free(array138.data);
   }
   array124.refC--;
   if(array124.refC == 0) {
      free(array124.data);
   }
   array123.refC--;
   if(array123.refC == 0) {
      free(array123.data);
   }
   array122.refC--;
   if(array122.refC == 0) {
      free(array122.data);
   }
   array121.refC--;
   if(array121.refC == 0) {
      free(array121.data);
   }
   array120.refC--;
   if(array120.refC == 0) {
      free(array120.data);
   }
   array119.refC--;
   if(array119.refC == 0) {
      free(array119.data);
   }
   array116.refC--;
   if(array116.refC == 0) {
      free(array116.data);
   }
   array114.refC--;
   if(array114.refC == 0) {
      free(array114.data);
   }
   return array115;
}

