#include "glist0.h"

int main(int argc, char** argv) {
   int loopsFactor = 100;
   srand(0);
   for (int i = 1; i < argc; i++) {
      if (strcmp(argv[i], "-path-seed") == 0) {
         i++;
         if (i < argc) {
            srand(atoi(argv[i]));
         }
      }
      else if (strcmp(argv[i], "-loops-factor") == 0) {
         i++;
         if (i < argc) {
            loopsFactor = atoi(argv[i]);
         }
      }
   }
   unsigned int loop0 = 0;
   unsigned int loopLimit0 = (rand()%loopsFactor)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      if(rng() & 1) {
         glist_t_param params0;
         params0.size = 0;
         params0.data = (glist_t**)malloc(params0.size*sizeof(glist_t*));
         glist_t* glist0 = func0(&params0, loopsFactor);
         DEBUG_RETURN(glist0->id);
         free(params0.data);
         glist0->refC--;
         if(glist0->refC == 0){
         	g_list_free(glist0->list);
         	glist0->n = g_list_length(glist0->list);
              DEBUG_FREE(glist0->id);
         }
      }
      else {
         glist_t_param params0;
         params0.size = 0;
         params0.data = (glist_t**)malloc(params0.size*sizeof(glist_t*));
         glist_t* glist49 = func1(&params0, loopsFactor);
         DEBUG_RETURN(glist49->id);
         free(params0.data);
         glist49->refC--;
         if(glist49->refC == 0){
         	g_list_free(glist49->list);
         	glist49->n = g_list_length(glist49->list);
              DEBUG_FREE(glist49->id);
         }
      }
   }
   return 0;
}

