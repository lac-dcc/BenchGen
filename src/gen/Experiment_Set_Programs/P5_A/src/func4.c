#include "P5_A.h" 
array_t* func4(array_t_param* vars, const unsigned long PATH0, int loopsFactor) {
   size_t pCounter = vars->size;
   array_t* array33;
   if (pCounter > 0) {
      array33 = vars->data[--pCounter];
      array33->refC++;
   } else {
      array33 = (array_t*)malloc(sizeof(array_t));
      array33->size = 481;
      array33->refC = 1;
      array33->data = (unsigned int*)malloc(array33->size*sizeof(unsigned int));
      memset(array33->data, 0, array33->size*sizeof(unsigned int));
   }
   if(PATH0 & 1) {
      unsigned int loop31 = 0;
      unsigned int loopLimit31 = (rand()%loopsFactor)/3 + 1;
      for(; loop31 < loopLimit31; loop31++) {
         for (int i = 0; i < array33->size; i++) {
            array33->data[i]--;
         }
      }
      unsigned int loop32 = 0;
      unsigned int loopLimit32 = (rand()%loopsFactor)/3 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         array_t* array34;
         if (pCounter > 0) {
            array34 = vars->data[--pCounter];
            array34->refC++;
         } else {
            array34 = (array_t*)malloc(sizeof(array_t));
            array34->size = 709;
            array34->refC = 1;
            array34->data = (unsigned int*)malloc(array34->size*sizeof(unsigned int));
            memset(array34->data, 0, array34->size*sizeof(unsigned int));
         }
         array_t* array35;
         if (pCounter > 0) {
            array35 = vars->data[--pCounter];
            array35->refC++;
         } else {
            array35 = (array_t*)malloc(sizeof(array_t));
            array35->size = 927;
            array35->refC = 1;
            array35->data = (unsigned int*)malloc(array35->size*sizeof(unsigned int));
            memset(array35->data, 0, array35->size*sizeof(unsigned int));
         }
         for (int i = 0; i < array33->size; i++) {
            if (array33->data[i] == 56) { 
               return array33;
            }
         }
         unsigned int loop33 = 0;
         unsigned int loopLimit33 = (rand()%loopsFactor)/4 + 1;
         for(; loop33 < loopLimit33; loop33++) {
            for (int i = 0; i < array35->size; i++) {
               if (array35->data[i] == 53) { 
                  return array35;
               }
            }
         }
         array35->refC--;
         if(array35->refC == 0) {
            free(array35->data);
            free(array35);
         }
         array34->refC--;
         if(array34->refC == 0) {
            free(array34->data);
            free(array34);
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array33;
      array_t* array36 = func6(&params0, rng(), loopsFactor);
      free(params0.data);
      array36->refC--;
      if(array36->refC == 0) {
         free(array36->data);
         free(array36);
      }
   }
   else {
      unsigned int loop34 = 0;
      unsigned int loopLimit34 = (rand()%loopsFactor)/3 + 1;
      for(; loop34 < loopLimit34; loop34++) {
         for (int i = 0; i < array33->size; i++) {
            array33->data[i]--;
         }
      }
      unsigned int loop35 = 0;
      unsigned int loopLimit35 = (rand()%loopsFactor)/3 + 1;
      for(; loop35 < loopLimit35; loop35++) {
         array_t* array37;
         if (pCounter > 0) {
            array37 = vars->data[--pCounter];
            array37->refC++;
         } else {
            array37 = (array_t*)malloc(sizeof(array_t));
            array37->size = 683;
            array37->refC = 1;
            array37->data = (unsigned int*)malloc(array37->size*sizeof(unsigned int));
            memset(array37->data, 0, array37->size*sizeof(unsigned int));
         }
         array_t* array38;
         if (pCounter > 0) {
            array38 = vars->data[--pCounter];
            array38->refC++;
         } else {
            array38 = (array_t*)malloc(sizeof(array_t));
            array38->size = 219;
            array38->refC = 1;
            array38->data = (unsigned int*)malloc(array38->size*sizeof(unsigned int));
            memset(array38->data, 0, array38->size*sizeof(unsigned int));
         }
         for (int i = 0; i < array38->size; i++) {
            if (array38->data[i] == 28) { 
               return array38;
            }
         }
         unsigned int loop36 = 0;
         unsigned int loopLimit36 = (rand()%loopsFactor)/4 + 1;
         for(; loop36 < loopLimit36; loop36++) {
            for (int i = 0; i < array33->size; i++) {
               if (array33->data[i] == 32) { 
                  return array33;
               }
            }
         }
         array38->refC--;
         if(array38->refC == 0) {
            free(array38->data);
            free(array38);
         }
         array37->refC--;
         if(array37->refC == 0) {
            free(array37->data);
            free(array37);
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array33;
      array_t* array39 = func6(&params0, rng(), loopsFactor);
      free(params0.data);
      array39->refC--;
      if(array39->refC == 0) {
         free(array39->data);
         free(array39);
      }
   }
   unsigned int loop37 = 0;
   unsigned int loopLimit37 = (rand()%loopsFactor)/3 + 1;
   for(; loop37 < loopLimit37; loop37++) {
      for (int i = 0; i < array33->size; i++) {
         array33->data[i]++;
      }
      unsigned int loop38 = 0;
      unsigned int loopLimit38 = (rand()%loopsFactor)/4 + 1;
      for(; loop38 < loopLimit38; loop38++) {
         for (int i = 0; i < array33->size; i++) {
            array33->data[i]--;
         }
      }
      unsigned int loop39 = 0;
      unsigned int loopLimit39 = (rand()%loopsFactor)/4 + 1;
      for(; loop39 < loopLimit39; loop39++) {
         array_t* array40;
         if (pCounter > 0) {
            array40 = vars->data[--pCounter];
            array40->refC++;
         } else {
            array40 = (array_t*)malloc(sizeof(array_t));
            array40->size = 368;
            array40->refC = 1;
            array40->data = (unsigned int*)malloc(array40->size*sizeof(unsigned int));
            memset(array40->data, 0, array40->size*sizeof(unsigned int));
         }
         array_t* array41;
         if (pCounter > 0) {
            array41 = vars->data[--pCounter];
            array41->refC++;
         } else {
            array41 = (array_t*)malloc(sizeof(array_t));
            array41->size = 708;
            array41->refC = 1;
            array41->data = (unsigned int*)malloc(array41->size*sizeof(unsigned int));
            memset(array41->data, 0, array41->size*sizeof(unsigned int));
         }
         for (int i = 0; i < array41->size; i++) {
            if (array41->data[i] == 40) { 
               return array41;
            }
         }
         unsigned int loop40 = 0;
         unsigned int loopLimit40 = (rand()%loopsFactor)/5 + 1;
         for(; loop40 < loopLimit40; loop40++) {
            for (int i = 0; i < array33->size; i++) {
               if (array33->data[i] == 96) { 
                  return array33;
               }
            }
         }
         array41->refC--;
         if(array41->refC == 0) {
            free(array41->data);
            free(array41);
         }
         array40->refC--;
         if(array40->refC == 0) {
            free(array40->data);
            free(array40);
         }
      }
      array_t_param params0;
      params0.size = 1;
      params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
      params0.data[0] = array33;
      array_t* array42 = func6(&params0, rng(), loopsFactor);
      free(params0.data);
      array42->refC--;
      if(array42->refC == 0) {
         free(array42->data);
         free(array42);
      }
   }
   for (int i = 0; i < array33->size; i++) {
      if (array33->data[i] == 46) { 
         return array33;
      }
   }
   if(PATH0 & 2) {
      array_t* array43;
      if (pCounter > 0) {
         array43 = vars->data[--pCounter];
         array43->refC++;
      } else {
         array43 = (array_t*)malloc(sizeof(array_t));
         array43->size = 451;
         array43->refC = 1;
         array43->data = (unsigned int*)malloc(array43->size*sizeof(unsigned int));
         memset(array43->data, 0, array43->size*sizeof(unsigned int));
      }
      if(PATH0 & 4) {
         unsigned int loop41 = 0;
         unsigned int loopLimit41 = (rand()%loopsFactor)/3 + 1;
         for(; loop41 < loopLimit41; loop41++) {
            array_t* array44;
            if (pCounter > 0) {
               array44 = vars->data[--pCounter];
               array44->refC++;
            } else {
               array44 = (array_t*)malloc(sizeof(array_t));
               array44->size = 921;
               array44->refC = 1;
               array44->data = (unsigned int*)malloc(array44->size*sizeof(unsigned int));
               memset(array44->data, 0, array44->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array44->size; i++) {
               if (array44->data[i] == 79) { 
                  return array44;
               }
            }
            unsigned int loop42 = 0;
            unsigned int loopLimit42 = (rand()%loopsFactor)/4 + 1;
            for(; loop42 < loopLimit42; loop42++) {
               for (int i = 0; i < array43->size; i++) {
                  array43->data[i]++;
               }
            }
            array44->refC--;
            if(array44->refC == 0) {
               free(array44->data);
               free(array44);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array33;
         params0.data[1] = array43;
         array_t* array45 = func7(&params0, loopsFactor);
         free(params0.data);
         array45->refC--;
         if(array45->refC == 0) {
            free(array45->data);
            free(array45);
         }
      }
      unsigned int loop43 = 0;
      unsigned int loopLimit43 = (rand()%loopsFactor)/3 + 1;
      for(; loop43 < loopLimit43; loop43++) {
         for (int i = 0; i < array43->size; i++) {
            array43->data[i]++;
         }
         for (int i = 0; i < array33->size; i++) {
            array33->data[i]--;
         }
         for (int i = 0; i < array43->size; i++) {
            array43->data[i]--;
         }
      }
      array43->refC--;
      if(array43->refC == 0) {
         free(array43->data);
         free(array43);
      }
   }
   else {
      array_t* array46;
      if (pCounter > 0) {
         array46 = vars->data[--pCounter];
         array46->refC++;
      } else {
         array46 = (array_t*)malloc(sizeof(array_t));
         array46->size = 500;
         array46->refC = 1;
         array46->data = (unsigned int*)malloc(array46->size*sizeof(unsigned int));
         memset(array46->data, 0, array46->size*sizeof(unsigned int));
      }
      if(PATH0 & 8) {
         unsigned int loop44 = 0;
         unsigned int loopLimit44 = (rand()%loopsFactor)/3 + 1;
         for(; loop44 < loopLimit44; loop44++) {
            array_t* array47;
            if (pCounter > 0) {
               array47 = vars->data[--pCounter];
               array47->refC++;
            } else {
               array47 = (array_t*)malloc(sizeof(array_t));
               array47->size = 34;
               array47->refC = 1;
               array47->data = (unsigned int*)malloc(array47->size*sizeof(unsigned int));
               memset(array47->data, 0, array47->size*sizeof(unsigned int));
            }
            for (int i = 0; i < array46->size; i++) {
               if (array46->data[i] == 24) { 
                  return array46;
               }
            }
            unsigned int loop45 = 0;
            unsigned int loopLimit45 = (rand()%loopsFactor)/4 + 1;
            for(; loop45 < loopLimit45; loop45++) {
               for (int i = 0; i < array46->size; i++) {
                  array46->data[i]++;
               }
            }
            array47->refC--;
            if(array47->refC == 0) {
               free(array47->data);
               free(array47);
            }
         }
      }
      else {
         array_t_param params0;
         params0.size = 2;
         params0.data = (array_t**)malloc(params0.size*sizeof(array_t*));
         params0.data[0] = array33;
         params0.data[1] = array46;
         array_t* array48 = func7(&params0, loopsFactor);
         free(params0.data);
         array48->refC--;
         if(array48->refC == 0) {
            free(array48->data);
            free(array48);
         }
      }
      unsigned int loop46 = 0;
      unsigned int loopLimit46 = (rand()%loopsFactor)/3 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         for (int i = 0; i < array46->size; i++) {
            array46->data[i]++;
         }
         for (int i = 0; i < array46->size; i++) {
            array46->data[i]--;
         }
         for (int i = 0; i < array46->size; i++) {
            array46->data[i]--;
         }
      }
      array46->refC--;
      if(array46->refC == 0) {
         free(array46->data);
         free(array46);
      }
   }
   for (int i = 0; i < array33->size; i++) {
      array33->data[i]--;
   }
   for (int i = 0; i < array33->size; i++) {
      if (array33->data[i] == 36) { 
         return array33;
      }
   }
   return array33;
}

