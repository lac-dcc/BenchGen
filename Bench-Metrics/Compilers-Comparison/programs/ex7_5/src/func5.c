#include "ex7_5.h" 
Array func5(ArrayParam* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   if(PATH0 & 1) {
      unsigned int loop22 = 0;
      unsigned int loopLimit22 = (rand()%loopsFactor)/1 + 1;
      for(; loop22 < loopLimit22; loop22++) {
         Array array93;
         if (pCounter > 0) {
            array93 = vars->data[--pCounter];
            array93.refC++;
         } else {
            array93.size = 725;
            array93.refC = 1;
            array93.data = (unsigned int*)malloc(array93.size*sizeof(unsigned int));
            memset(array93.data, 0, array93.size*sizeof(unsigned int));
         }
         ArrayParam params0;
         params0.size = 1;
         params0.data = (Array*)malloc(params0.size*sizeof(Array));
         params0.data[0] = array93;
         Array array94 = func12(&params0, loopsFactor);
         free(params0.data);
         Array array95;
         if (pCounter > 0) {
            array95 = vars->data[--pCounter];
            array95.refC++;
         } else {
            array95.size = 505;
            array95.refC = 1;
            array95.data = (unsigned int*)malloc(array95.size*sizeof(unsigned int));
            memset(array95.data, 0, array95.size*sizeof(unsigned int));
         }
         if(PATH0 & 2) {
            unsigned int loop23 = 0;
            unsigned int loopLimit23 = (rand()%loopsFactor)/2 + 1;
            for(; loop23 < loopLimit23; loop23++) {
            }
         }
         else {
            Array array96;
            if (pCounter > 0) {
               array96 = vars->data[--pCounter];
               array96.refC++;
            } else {
               array96.size = 139;
               array96.refC = 1;
               array96.data = (unsigned int*)malloc(array96.size*sizeof(unsigned int));
               memset(array96.data, 0, array96.size*sizeof(unsigned int));
            }
            ArrayParam params1;
            params1.size = 4;
            params1.data = (Array*)malloc(params1.size*sizeof(Array));
            params1.data[0] = array93;
            params1.data[1] = array94;
            params1.data[2] = array95;
            params1.data[3] = array96;
            Array array97 = func13(&params1, loopsFactor);
            free(params1.data);
            array97.refC--;
            if(array97.refC == 0) {
               free(array97.data);
            }
            array96.refC--;
            if(array96.refC == 0) {
               free(array96.data);
            }
         }
         for (int i = 0; i < array93.size; i++) {
            if (array93.data[i] == 82) { 
               return array93;
            }
         }
         Array array98;
         if (pCounter > 0) {
            array98 = vars->data[--pCounter];
            array98.refC++;
         } else {
            array98.size = 542;
            array98.refC = 1;
            array98.data = (unsigned int*)malloc(array98.size*sizeof(unsigned int));
            memset(array98.data, 0, array98.size*sizeof(unsigned int));
         }
         Array array99;
         if (pCounter > 0) {
            array99 = vars->data[--pCounter];
            array99.refC++;
         } else {
            array99.size = 464;
            array99.refC = 1;
            array99.data = (unsigned int*)malloc(array99.size*sizeof(unsigned int));
            memset(array99.data, 0, array99.size*sizeof(unsigned int));
         }
         for (int i = 0; i < array95.size; i++) {
            array95.data[i]++;
         }
         unsigned int loop24 = 0;
         unsigned int loopLimit24 = (rand()%loopsFactor)/2 + 1;
         for(; loop24 < loopLimit24; loop24++) {
            for (int i = 0; i < array95.size; i++) {
               array95.data[i]--;
            }
         }
         ArrayParam params1;
         params1.size = 5;
         params1.data = (Array*)malloc(params1.size*sizeof(Array));
         params1.data[0] = array93;
         params1.data[1] = array94;
         params1.data[2] = array95;
         params1.data[3] = array98;
         params1.data[4] = array99;
         Array array100 = func14(&params1, loopsFactor);
         free(params1.data);
         array100.refC--;
         if(array100.refC == 0) {
            free(array100.data);
         }
         array99.refC--;
         if(array99.refC == 0) {
            free(array99.data);
         }
         array98.refC--;
         if(array98.refC == 0) {
            free(array98.data);
         }
         array95.refC--;
         if(array95.refC == 0) {
            free(array95.data);
         }
         array94.refC--;
         if(array94.refC == 0) {
            free(array94.data);
         }
         array93.refC--;
         if(array93.refC == 0) {
            free(array93.data);
         }
      }
   }
   else {
      Array array101;
      if (pCounter > 0) {
         array101 = vars->data[--pCounter];
         array101.refC++;
      } else {
         array101.size = 348;
         array101.refC = 1;
         array101.data = (unsigned int*)malloc(array101.size*sizeof(unsigned int));
         memset(array101.data, 0, array101.size*sizeof(unsigned int));
      }
      Array array102;
      if (pCounter > 0) {
         array102 = vars->data[--pCounter];
         array102.refC++;
      } else {
         array102.size = 611;
         array102.refC = 1;
         array102.data = (unsigned int*)malloc(array102.size*sizeof(unsigned int));
         memset(array102.data, 0, array102.size*sizeof(unsigned int));
      }
      Array array103;
      if (pCounter > 0) {
         array103 = vars->data[--pCounter];
         array103.refC++;
      } else {
         array103.size = 622;
         array103.refC = 1;
         array103.data = (unsigned int*)malloc(array103.size*sizeof(unsigned int));
         memset(array103.data, 0, array103.size*sizeof(unsigned int));
      }
      for (int i = 0; i < array101.size; i++) {
         array101.data[i]++;
      }
      unsigned int loop25 = 0;
      unsigned int loopLimit25 = (rand()%loopsFactor)/1 + 1;
      for(; loop25 < loopLimit25; loop25++) {
         for (int i = 0; i < array103.size; i++) {
            array103.data[i]--;
         }
      }
      ArrayParam params0;
      params0.size = 3;
      params0.data = (Array*)malloc(params0.size*sizeof(Array));
      params0.data[0] = array101;
      params0.data[1] = array102;
      params0.data[2] = array103;
      Array array104 = func10(&params0, loopsFactor);
      free(params0.data);
      ArrayParam params1;
      params1.size = 4;
      params1.data = (Array*)malloc(params1.size*sizeof(Array));
      params1.data[0] = array101;
      params1.data[1] = array102;
      params1.data[2] = array103;
      params1.data[3] = array104;
      Array array105 = func7(&params1, loopsFactor);
      free(params1.data);
      array105.refC--;
      if(array105.refC == 0) {
         free(array105.data);
      }
      array104.refC--;
      if(array104.refC == 0) {
         free(array104.data);
      }
      array103.refC--;
      if(array103.refC == 0) {
         free(array103.data);
      }
      array102.refC--;
      if(array102.refC == 0) {
         free(array102.data);
      }
      array101.refC--;
      if(array101.refC == 0) {
         free(array101.data);
      }
   }
   Array array106;
   if (pCounter > 0) {
      array106 = vars->data[--pCounter];
      array106.refC++;
   } else {
      array106.size = 422;
      array106.refC = 1;
      array106.data = (unsigned int*)malloc(array106.size*sizeof(unsigned int));
      memset(array106.data, 0, array106.size*sizeof(unsigned int));
   }
   Array array107;
   if (pCounter > 0) {
      array107 = vars->data[--pCounter];
      array107.refC++;
   } else {
      array107.size = 311;
      array107.refC = 1;
      array107.data = (unsigned int*)malloc(array107.size*sizeof(unsigned int));
      memset(array107.data, 0, array107.size*sizeof(unsigned int));
   }
   for (int i = 0; i < array106.size; i++) {
      array106.data[i]++;
   }
   unsigned int loop26 = 0;
   unsigned int loopLimit26 = (rand()%loopsFactor)/1 + 1;
   for(; loop26 < loopLimit26; loop26++) {
      for (int i = 0; i < array107.size; i++) {
         array107.data[i]--;
      }
   }
   ArrayParam params0;
   params0.size = 2;
   params0.data = (Array*)malloc(params0.size*sizeof(Array));
   params0.data[0] = array106;
   params0.data[1] = array107;
   Array array108 = func8(&params0, rng(), loopsFactor);
   free(params0.data);
   array108.refC--;
   if(array108.refC == 0) {
      free(array108.data);
   }
   array107.refC--;
   if(array107.refC == 0) {
      free(array107.data);
   }
   return array106;
}

