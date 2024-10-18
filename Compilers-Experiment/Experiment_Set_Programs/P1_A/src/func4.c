#include "P1_A.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array74;
   if (pCounter > 0) {
      array74 = vars->data[--pCounter];
      array74->refC++;
   } else {
      array74 = (array_t*)malloc(sizeof(array_t));
      array74->size = 626;
      array74->refC = 1;
      array74->data = (unsigned int*)malloc(array74->size*sizeof(unsigned int));
      memset(array74->data, 0, array74->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop31 = 0;
      unsigned int loopLimit31 = (rand()%loopsFactor)/2 + 1;
      for(; loop31 < loopLimit31; loop31++) {
         for (int i = 0; i < array74->size; i++) {
            array74->data[i]--;
         }
      }
      array_t* array75;
      if (pCounter > 0) {
         array75 = vars->data[--pCounter];
         array75->refC++;
      } else {
         array75 = (array_t*)malloc(sizeof(array_t));
         array75->size = 465;
         array75->refC = 1;
         array75->data = (unsigned int*)malloc(array75->size*sizeof(unsigned int));
         memset(array75->data, 0, array75->size*sizeof(unsigned int));
      }
      if(PATH0 & 2) {
         unsigned int loop32 = 0;
         unsigned int loopLimit32 = (rand()%loopsFactor)/2 + 1;
         for(; loop32 < loopLimit32; loop32++) {
            array_t* array76;
            if (pCounter > 0) {
               array76 = vars->data[--pCounter];
               array76->refC++;
            } else {
               array76 = (array_t*)malloc(sizeof(array_t));
               array76->size = 708;
               array76->refC = 1;
               array76->data = (unsigned int*)malloc(array76->size*sizeof(unsigned int));
               memset(array76->data, 0, array76->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array75->size; i++) {
               array75->data[i]--;
            }
            for (int i = 0; i < array74->size; i++) {
               if (array74->data[i] == 58) { 
                  return array74;
               }
            }
            array76->refC--;
            if(array76->refC == 0) {
               free(array76->data);
               free(array76);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array74;
         params0.data[1] = array75;
         array_t* array77 = func11(&params0, loopsFactor);
         free(params0.data);
         array77->refC--;
         if(array77->refC == 0) {
            free(array77->data);
            free(array77);
         }
      }
      array_t_param params0;
      params0.size = 2;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array74;
      params0.data[1] = array75;
      array_t* array78 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      unsigned int loop33 = 0;
      unsigned int loopLimit33 = (rand()%loopsFactor)/2 + 1;
      for(; loop33 < loopLimit33; loop33++) {
         for (int i = 0; i < array74->size; i++) {
            array74->data[i]++;
         }
      }
      array_t_param params1;
      params1.size = 3;
      params1.data = (array_t**)malloc(params1.size*sizeof(array_t*));
      params1.data[0] = array74;
      params1.data[1] = array75;
      params1.data[2] = array78;
      array_t* array79 = func5(&params1, rng(), loopsFactor);
      free(params1.data);
      array79->refC--;
      if(array79->refC == 0) {
         free(array79->data);
         free(array79);
      }
      array78->refC--;
      if(array78->refC == 0) {
         free(array78->data);
         free(array78);
      }
      array75->refC--;
      if(array75->refC == 0) {
         free(array75->data);
         free(array75);
      }
   }
   else {
      array_t* array80;
      if (pCounter > 0) {
         array80 = vars->data[--pCounter];
         array80->refC++;
      } else {
         array80 = (array_t*)malloc(sizeof(array_t));
         array80->size = 899;
         array80->refC = 1;
         array80->data = (unsigned int*)malloc(array80->size*sizeof(unsigned int));
         memset(array80->data, 0, array80->size*sizeof(unsigned int));
      }
      for (int i = 0; i < array80->size; i++) {
         array80->data[i]++;
      }
      for (int i = 0; i < array74->size; i++) {
         if (array74->data[i] == 68) { 
            return array74;
         }
      }
      for (int i = 0; i < array80->size; i++) {
         array80->data[i]--;
      }
      array_t* array81;
      if (pCounter > 0) {
         array81 = vars->data[--pCounter];
         array81->refC++;
      } else {
         array81 = (array_t*)malloc(sizeof(array_t));
         array81->size = 973;
         array81->refC = 1;
         array81->data = (unsigned int*)malloc(array81->size*sizeof(unsigned int));
         memset(array81->data, 0, array81->size*sizeof(unsigned int));
      }
      if(PATH0 & 4) {
         unsigned int loop34 = 0;
         unsigned int loopLimit34 = (rand()%loopsFactor)/2 + 1;
         for(; loop34 < loopLimit34; loop34++) {
            array_t* array82;
            if (pCounter > 0) {
               array82 = vars->data[--pCounter];
               array82->refC++;
            } else {
               array82 = (array_t*)malloc(sizeof(array_t));
               array82->size = 131;
               array82->refC = 1;
               array82->data = (unsigned int*)malloc(array82->size*sizeof(unsigned int));
               memset(array82->data, 0, array82->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array80->size; i++) {
               array80->data[i]--;
            }
            for (int i = 0; i < array81->size; i++) {
               if (array81->data[i] == 33) { 
                  return array81;
               }
            }
            array82->refC--;
            if(array82->refC == 0) {
               free(array82->data);
               free(array82);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array74;
         params0.data[1] = array80;
         params0.data[2] = array81;
         array_t* array83 = func11(&params0, loopsFactor);
         free(params0.data);
         array83->refC--;
         if(array83->refC == 0) {
            free(array83->data);
            free(array83);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array74;
      params0.data[1] = array80;
      params0.data[2] = array81;
      array_t* array84 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      array84->refC--;
      if(array84->refC == 0) {
         free(array84->data);
         free(array84);
      }
      array81->refC--;
      if(array81->refC == 0) {
         free(array81->data);
         free(array81);
      }
      array80->refC--;
      if(array80->refC == 0) {
         free(array80->data);
         free(array80);
      }
   }
   unsigned int loop35 = 0;
   unsigned int loopLimit35 = (rand()%loopsFactor)/2 + 1;
   for(; loop35 < loopLimit35; loop35++) {
      for (int i = 0; i < array74->size; i++) {
         array74->data[i]++;
      }
      array_t* array85;
      if (pCounter > 0) {
         array85 = vars->data[--pCounter];
         array85->refC++;
      } else {
         array85 = (array_t*)malloc(sizeof(array_t));
         array85->size = 899;
         array85->refC = 1;
         array85->data = (unsigned int*)malloc(array85->size*sizeof(unsigned int));
         memset(array85->data, 0, array85->size*sizeof(unsigned int));
      }
      for (int i = 0; i < array74->size; i++) {
         array74->data[i]++;
      }
      for (int i = 0; i < array85->size; i++) {
         if (array85->data[i] == 73) { 
            return array85;
         }
      }
      for (int i = 0; i < array85->size; i++) {
         array85->data[i]--;
      }
      array_t* array86;
      if (pCounter > 0) {
         array86 = vars->data[--pCounter];
         array86->refC++;
      } else {
         array86 = (array_t*)malloc(sizeof(array_t));
         array86->size = 668;
         array86->refC = 1;
         array86->data = (unsigned int*)malloc(array86->size*sizeof(unsigned int));
         memset(array86->data, 0, array86->size*sizeof(unsigned int));
      }
      if(PATH0 & 8) {
         unsigned int loop36 = 0;
         unsigned int loopLimit36 = (rand()%loopsFactor)/3 + 1;
         for(; loop36 < loopLimit36; loop36++) {
            array_t* array87;
            if (pCounter > 0) {
               array87 = vars->data[--pCounter];
               array87->refC++;
            } else {
               array87 = (array_t*)malloc(sizeof(array_t));
               array87->size = 190;
               array87->refC = 1;
               array87->data = (unsigned int*)malloc(array87->size*sizeof(unsigned int));
               memset(array87->data, 0, array87->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array87->size; i++) {
               array87->data[i]--;
            }
            for (int i = 0; i < array86->size; i++) {
               if (array86->data[i] == 66) { 
                  return array86;
               }
            }
            array87->refC--;
            if(array87->refC == 0) {
               free(array87->data);
               free(array87);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 3;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array74;
         params0.data[1] = array85;
         params0.data[2] = array86;
         array_t* array88 = func11(&params0, loopsFactor);
         free(params0.data);
         array88->refC--;
         if(array88->refC == 0) {
            free(array88->data);
            free(array88);
         }
      }
      array_t_param params0;
      params0.size = 3;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array74;
      params0.data[1] = array85;
      params0.data[2] = array86;
      array_t* array89 = func8(&params0, rng(), loopsFactor);
      free(params0.data);
      array89->refC--;
      if(array89->refC == 0) {
         free(array89->data);
         free(array89);
      }
      array86->refC--;
      if(array86->refC == 0) {
         free(array86->data);
         free(array86);
      }
      array85->refC--;
      if(array85->refC == 0) {
         free(array85->data);
         free(array85);
      }
   }
   return array74;
}

