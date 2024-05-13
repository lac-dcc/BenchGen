#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


unsigned long rng();
void func0(const unsigned long PATH0);
void func3(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func7(const unsigned long PATH0);
void func9(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func13(const unsigned long PATH0);
void func15(const unsigned long PATH0);
void func1();
void func2(const unsigned long PATH0);
void func4(const unsigned long PATH0);
void func6(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func10(const unsigned long PATH0);
void func12(const unsigned long PATH0);
void func14(const unsigned long PATH0);

int main() {
   int loop0 = 0;
   int loopLimit0 = ceil((rand()%10)/1);
   for(; loop0 < loopLimit0; loop0++) {
      if(rng() & 1) {
         func0(rng());
      }
      else {
         func1();
      }
   }
   return 0;
}

unsigned long rng() {
   srand(time(NULL));
   unsigned long n = rand();
   srand(time(NULL));
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0) {
   int* array0 = new int[383];
   int* array1 = new int[886];
   int* array2 = new int[777];
   int loop1 = 0;
   int loopLimit1 = ceil((rand()%10)/2);
   for(; loop1 < loopLimit1; loop1++) {
      if(PATH0 & 1) {
         for (int i = 0; i < 886; i++) {
            if (array1[i] == 0) { 
               printf("IS 0!");
            }
         }
      }
      else {
         for (int i = 0; i < 777; i++) {
            array2[i]--; 
         }
         for (int i = 0; i < 886; i++) {
            if (array1[i] == 0) { 
               printf("IS 0!");
            }
         }
      }
      int loop2 = 0;
      int loopLimit2 = ceil((rand()%10)/3);
      for(; loop2 < loopLimit2; loop2++) {
         int* array3 = new int[386];
         for (int i = 0; i < 383; i++) {
            array0[i]++; 
         }
         int loop3 = 0;
         int loopLimit3 = ceil((rand()%10)/4);
         for(; loop3 < loopLimit3; loop3++) {
            int* array4 = new int[649];
            for (int i = 0; i < 886; i++) {
               array1[i]++; 
            }
            int loop4 = 0;
            int loopLimit4 = ceil((rand()%10)/5);
            for(; loop4 < loopLimit4; loop4++) {
               int* array5 = new int[362];
               for (int i = 0; i < 886; i++) {
                  array1[i]++; 
               }
               int loop5 = 0;
               int loopLimit5 = ceil((rand()%10)/6);
               for(; loop5 < loopLimit5; loop5++) {
                  int* array6 = new int[690];
                  for (int i = 0; i < 649; i++) {
                     array4[i]++; 
                  }
                  int loop6 = 0;
                  int loopLimit6 = ceil((rand()%10)/7);
                  for(; loop6 < loopLimit6; loop6++) {
                     int* array7 = new int[763];
                     for (int i = 0; i < 690; i++) {
                        array6[i]++; 
                     }
                     int loop7 = 0;
                     int loopLimit7 = ceil((rand()%10)/8);
                     for(; loop7 < loopLimit7; loop7++) {
                        int* array8 = new int[540];
                        for (int i = 0; i < 383; i++) {
                           array0[i]++; 
                        }
                        int loop8 = 0;
                        int loopLimit8 = ceil((rand()%10)/9);
                        for(; loop8 < loopLimit8; loop8++) {
                           int* array9 = new int[172];
                           for (int i = 0; i < 690; i++) {
                              array6[i]++; 
                           }
                           int loop9 = 0;
                           int loopLimit9 = ceil((rand()%10)/10);
                           for(; loop9 < loopLimit9; loop9++) {
                              int* array10 = new int[211];
                              for (int i = 0; i < 540; i++) {
                                 array8[i]++; 
                              }
                              int loop10 = 0;
                              int loopLimit10 = ceil((rand()%10)/11);
                              for(; loop10 < loopLimit10; loop10++) {
                                 int* array11 = new int[567];
                                 for (int i = 0; i < 172; i++) {
                                    array9[i]++; 
                                 }
                                 int loop11 = 0;
                                 int loopLimit11 = ceil((rand()%10)/12);
                                 for(; loop11 < loopLimit11; loop11++) {
                                    int* array12 = new int[782];
                                    for (int i = 0; i < 362; i++) {
                                       array5[i]++; 
                                    }
                                    int loop12 = 0;
                                    int loopLimit12 = ceil((rand()%10)/13);
                                    for(; loop12 < loopLimit12; loop12++) {
                                       int* array13 = new int[862];
                                       for (int i = 0; i < 862; i++) {
                                          array13[i]++; 
                                       }
                                       int loop13 = 0;
                                       int loopLimit13 = ceil((rand()%10)/14);
                                       for(; loop13 < loopLimit13; loop13++) {
                                          int* array14 = new int[67];
                                          for (int i = 0; i < 211; i++) {
                                             array10[i]++; 
                                          }
                                          int loop14 = 0;
                                          int loopLimit14 = ceil((rand()%10)/15);
                                          for(; loop14 < loopLimit14; loop14++) {
                                             int* array15 = new int[929];
                                             for (int i = 0; i < 211; i++) {
                                                array10[i]++; 
                                             }
                                             for (int i = 0; i < 690; i++) {
                                                array6[i]--; 
                                             }
                                          }
                                          printf("DELETE!\n");
                                          for (int i = 0; i < 386; i++) {
                                             array3[i]--; 
                                          }
                                       }
                                       printf("DELETE!\n");
                                       for (int i = 0; i < 386; i++) {
                                          array3[i]--; 
                                       }
                                    }
                                    printf("DELETE!\n");
                                    for (int i = 0; i < 649; i++) {
                                       array4[i]--; 
                                    }
                                 }
                                 printf("DELETE!\n");
                                 for (int i = 0; i < 886; i++) {
                                    array1[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 540; i++) {
                                 array8[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 886; i++) {
                              array1[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 763; i++) {
                           array7[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 362; i++) {
                        array5[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 649; i++) {
                     array4[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 386; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 649; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 383; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func3(rng());
   }
   for (int i = 0; i < 383; i++) {
      if (array0[i] == 0) { 
         printf("IS 0!");
      }
   }
}

void func3(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop15 = 0;
      int loopLimit15 = ceil((rand()%10)/3);
      for(; loop15 < loopLimit15; loop15++) {
         int* array3 = new int[537];
         for (int i = 0; i < 537; i++) {
            array3[i]++; 
         }
         int loop16 = 0;
         int loopLimit16 = ceil((rand()%10)/4);
         for(; loop16 < loopLimit16; loop16++) {
            int* array4 = new int[324];
            for (int i = 0; i < 324; i++) {
               array4[i]++; 
            }
            int loop17 = 0;
            int loopLimit17 = ceil((rand()%10)/5);
            for(; loop17 < loopLimit17; loop17++) {
               int* array5 = new int[370];
               for (int i = 0; i < 370; i++) {
                  array5[i]++; 
               }
               int loop18 = 0;
               int loopLimit18 = ceil((rand()%10)/6);
               for(; loop18 < loopLimit18; loop18++) {
                  int* array6 = new int[526];
                  for (int i = 0; i < 526; i++) {
                     array6[i]++; 
                  }
                  int loop19 = 0;
                  int loopLimit19 = ceil((rand()%10)/7);
                  for(; loop19 < loopLimit19; loop19++) {
                     int* array7 = new int[980];
                     for (int i = 0; i < 324; i++) {
                        array4[i]++; 
                     }
                     int loop20 = 0;
                     int loopLimit20 = ceil((rand()%10)/8);
                     for(; loop20 < loopLimit20; loop20++) {
                        int* array8 = new int[873];
                        for (int i = 0; i < 370; i++) {
                           array5[i]++; 
                        }
                        int loop21 = 0;
                        int loopLimit21 = ceil((rand()%10)/9);
                        for(; loop21 < loopLimit21; loop21++) {
                           int* array9 = new int[170];
                           for (int i = 0; i < 324; i++) {
                              array4[i]++; 
                           }
                           int loop22 = 0;
                           int loopLimit22 = ceil((rand()%10)/10);
                           for(; loop22 < loopLimit22; loop22++) {
                              int* array10 = new int[281];
                              for (int i = 0; i < 324; i++) {
                                 array4[i]++; 
                              }
                              int loop23 = 0;
                              int loopLimit23 = ceil((rand()%10)/11);
                              for(; loop23 < loopLimit23; loop23++) {
                                 int* array11 = new int[925];
                                 for (int i = 0; i < 873; i++) {
                                    array8[i]++; 
                                 }
                                 int loop24 = 0;
                                 int loopLimit24 = ceil((rand()%10)/12);
                                 for(; loop24 < loopLimit24; loop24++) {
                                    int* array12 = new int[327];
                                    for (int i = 0; i < 170; i++) {
                                       array9[i]++; 
                                    }
                                    int loop25 = 0;
                                    int loopLimit25 = ceil((rand()%10)/13);
                                    for(; loop25 < loopLimit25; loop25++) {
                                       int* array13 = new int[505];
                                       for (int i = 0; i < 505; i++) {
                                          array13[i]++; 
                                       }
                                       for (int i = 0; i < 370; i++) {
                                          array5[i]--; 
                                       }
                                    }
                                    printf("DELETE!\n");
                                    for (int i = 0; i < 526; i++) {
                                       array6[i]--; 
                                    }
                                 }
                                 printf("DELETE!\n");
                                 for (int i = 0; i < 370; i++) {
                                    array5[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 980; i++) {
                                 array7[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 526; i++) {
                              array6[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 537; i++) {
                           array3[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 537; i++) {
                        array3[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 370; i++) {
                     array5[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 537; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 537; i++) {
               array3[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 537; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func5(rng());
   }
   else {
      int* array3 = new int[131];
      for (int i = 0; i < 131; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 131; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 131; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 131; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 131; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop81 = 0;
      int loopLimit81 = ceil((rand()%10)/3);
      for(; loop81 < loopLimit81; loop81++) {
         int* array4 = new int[163];
         for (int i = 0; i < 163; i++) {
            array4[i]++; 
         }
         int loop82 = 0;
         int loopLimit82 = ceil((rand()%10)/4);
         for(; loop82 < loopLimit82; loop82++) {
            int* array5 = new int[981];
            for (int i = 0; i < 981; i++) {
               array5[i]++; 
            }
            int loop83 = 0;
            int loopLimit83 = ceil((rand()%10)/5);
            for(; loop83 < loopLimit83; loop83++) {
               int* array6 = new int[996];
               for (int i = 0; i < 996; i++) {
                  array6[i]++; 
               }
               int loop84 = 0;
               int loopLimit84 = ceil((rand()%10)/6);
               for(; loop84 < loopLimit84; loop84++) {
                  int* array7 = new int[773];
                  for (int i = 0; i < 996; i++) {
                     array6[i]++; 
                  }
                  int loop85 = 0;
                  int loopLimit85 = ceil((rand()%10)/7);
                  for(; loop85 < loopLimit85; loop85++) {
                     int* array8 = new int[668];
                     for (int i = 0; i < 981; i++) {
                        array5[i]++; 
                     }
                     int loop86 = 0;
                     int loopLimit86 = ceil((rand()%10)/8);
                     for(; loop86 < loopLimit86; loop86++) {
                        int* array9 = new int[95];
                        for (int i = 0; i < 773; i++) {
                           array7[i]++; 
                        }
                        int loop87 = 0;
                        int loopLimit87 = ceil((rand()%10)/9);
                        for(; loop87 < loopLimit87; loop87++) {
                           int* array10 = new int[466];
                           for (int i = 0; i < 773; i++) {
                              array7[i]++; 
                           }
                           int loop88 = 0;
                           int loopLimit88 = ceil((rand()%10)/10);
                           for(; loop88 < loopLimit88; loop88++) {
                              int* array11 = new int[340];
                              for (int i = 0; i < 466; i++) {
                                 array10[i]++; 
                              }
                              int loop89 = 0;
                              int loopLimit89 = ceil((rand()%10)/11);
                              for(; loop89 < loopLimit89; loop89++) {
                                 int* array12 = new int[684];
                                 for (int i = 0; i < 95; i++) {
                                    array9[i]++; 
                                 }
                                 int loop90 = 0;
                                 int loopLimit90 = ceil((rand()%10)/12);
                                 for(; loop90 < loopLimit90; loop90++) {
                                    int* array13 = new int[542];
                                    for (int i = 0; i < 466; i++) {
                                       array10[i]++; 
                                    }
                                    int loop91 = 0;
                                    int loopLimit91 = ceil((rand()%10)/13);
                                    for(; loop91 < loopLimit91; loop91++) {
                                       int* array14 = new int[107];
                                       for (int i = 0; i < 684; i++) {
                                          array12[i]++; 
                                       }
                                       int loop92 = 0;
                                       int loopLimit92 = ceil((rand()%10)/14);
                                       for(; loop92 < loopLimit92; loop92++) {
                                          int* array15 = new int[756];
                                          for (int i = 0; i < 163; i++) {
                                             array4[i]++; 
                                          }
                                          for (int i = 0; i < 773; i++) {
                                             array7[i]--; 
                                          }
                                       }
                                       printf("DELETE!\n");
                                       for (int i = 0; i < 107; i++) {
                                          array14[i]--; 
                                       }
                                    }
                                    printf("DELETE!\n");
                                    for (int i = 0; i < 163; i++) {
                                       array4[i]--; 
                                    }
                                 }
                                 printf("DELETE!\n");
                                 for (int i = 0; i < 340; i++) {
                                    array11[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 163; i++) {
                                 array4[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 996; i++) {
                              array6[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 668; i++) {
                           array8[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 981; i++) {
                        array5[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 131; i++) {
                     array3[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 981; i++) {
                  array5[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 981; i++) {
               array5[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 131; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop26 = 0;
      int loopLimit26 = ceil((rand()%10)/3);
      for(; loop26 < loopLimit26; loop26++) {
         int* array3 = new int[43];
         for (int i = 0; i < 43; i++) {
            array3[i]++; 
         }
         int loop27 = 0;
         int loopLimit27 = ceil((rand()%10)/4);
         for(; loop27 < loopLimit27; loop27++) {
            int* array4 = new int[87];
            for (int i = 0; i < 43; i++) {
               array3[i]++; 
            }
            int loop28 = 0;
            int loopLimit28 = ceil((rand()%10)/5);
            for(; loop28 < loopLimit28; loop28++) {
               int* array5 = new int[276];
               for (int i = 0; i < 276; i++) {
                  array5[i]++; 
               }
               int loop29 = 0;
               int loopLimit29 = ceil((rand()%10)/6);
               for(; loop29 < loopLimit29; loop29++) {
                  int* array6 = new int[788];
                  for (int i = 0; i < 43; i++) {
                     array3[i]++; 
                  }
                  int loop30 = 0;
                  int loopLimit30 = ceil((rand()%10)/7);
                  for(; loop30 < loopLimit30; loop30++) {
                     int* array7 = new int[403];
                     for (int i = 0; i < 87; i++) {
                        array4[i]++; 
                     }
                     int loop31 = 0;
                     int loopLimit31 = ceil((rand()%10)/8);
                     for(; loop31 < loopLimit31; loop31++) {
                        int* array8 = new int[754];
                        for (int i = 0; i < 87; i++) {
                           array4[i]++; 
                        }
                        int loop32 = 0;
                        int loopLimit32 = ceil((rand()%10)/9);
                        for(; loop32 < loopLimit32; loop32++) {
                           int* array9 = new int[932];
                           for (int i = 0; i < 403; i++) {
                              array7[i]++; 
                           }
                           int loop33 = 0;
                           int loopLimit33 = ceil((rand()%10)/10);
                           for(; loop33 < loopLimit33; loop33++) {
                              int* array10 = new int[676];
                              for (int i = 0; i < 43; i++) {
                                 array3[i]++; 
                              }
                              int loop34 = 0;
                              int loopLimit34 = ceil((rand()%10)/11);
                              for(; loop34 < loopLimit34; loop34++) {
                                 int* array11 = new int[739];
                                 for (int i = 0; i < 87; i++) {
                                    array4[i]++; 
                                 }
                                 for (int i = 0; i < 676; i++) {
                                    array10[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 276; i++) {
                                 array5[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 403; i++) {
                              array7[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 754; i++) {
                           array8[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 43; i++) {
                        array3[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 276; i++) {
                     array5[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 276; i++) {
                  array5[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 43; i++) {
               array3[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 43; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func7(rng());
   }
   else {
      int* array3 = new int[343];
      for (int i = 0; i < 343; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 343; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 343; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 343; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 343; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop71 = 0;
      int loopLimit71 = ceil((rand()%10)/3);
      for(; loop71 < loopLimit71; loop71++) {
         int* array4 = new int[810];
         for (int i = 0; i < 810; i++) {
            array4[i]++; 
         }
         int loop72 = 0;
         int loopLimit72 = ceil((rand()%10)/4);
         for(; loop72 < loopLimit72; loop72++) {
            int* array5 = new int[801];
            for (int i = 0; i < 810; i++) {
               array4[i]++; 
            }
            int loop73 = 0;
            int loopLimit73 = ceil((rand()%10)/5);
            for(; loop73 < loopLimit73; loop73++) {
               int* array6 = new int[730];
               for (int i = 0; i < 801; i++) {
                  array5[i]++; 
               }
               int loop74 = 0;
               int loopLimit74 = ceil((rand()%10)/6);
               for(; loop74 < loopLimit74; loop74++) {
                  int* array7 = new int[305];
                  for (int i = 0; i < 343; i++) {
                     array3[i]++; 
                  }
                  int loop75 = 0;
                  int loopLimit75 = ceil((rand()%10)/7);
                  for(; loop75 < loopLimit75; loop75++) {
                     int* array8 = new int[736];
                     for (int i = 0; i < 305; i++) {
                        array7[i]++; 
                     }
                     int loop76 = 0;
                     int loopLimit76 = ceil((rand()%10)/8);
                     for(; loop76 < loopLimit76; loop76++) {
                        int* array9 = new int[626];
                        for (int i = 0; i < 730; i++) {
                           array6[i]++; 
                        }
                        int loop77 = 0;
                        int loopLimit77 = ceil((rand()%10)/9);
                        for(; loop77 < loopLimit77; loop77++) {
                           int* array10 = new int[465];
                           for (int i = 0; i < 305; i++) {
                              array7[i]++; 
                           }
                           int loop78 = 0;
                           int loopLimit78 = ceil((rand()%10)/10);
                           for(; loop78 < loopLimit78; loop78++) {
                              int* array11 = new int[416];
                              for (int i = 0; i < 626; i++) {
                                 array9[i]++; 
                              }
                              int loop79 = 0;
                              int loopLimit79 = ceil((rand()%10)/11);
                              for(; loop79 < loopLimit79; loop79++) {
                                 int* array12 = new int[258];
                                 for (int i = 0; i < 305; i++) {
                                    array7[i]++; 
                                 }
                                 int loop80 = 0;
                                 int loopLimit80 = ceil((rand()%10)/12);
                                 for(; loop80 < loopLimit80; loop80++) {
                                    int* array13 = new int[637];
                                    for (int i = 0; i < 305; i++) {
                                       array7[i]++; 
                                    }
                                    for (int i = 0; i < 730; i++) {
                                       array6[i]--; 
                                    }
                                 }
                                 printf("DELETE!\n");
                                 for (int i = 0; i < 343; i++) {
                                    array3[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 730; i++) {
                                 array6[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 305; i++) {
                              array7[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 810; i++) {
                           array4[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 730; i++) {
                        array6[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 343; i++) {
                     array3[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 343; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 801; i++) {
               array5[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 810; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func7(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop35 = 0;
      int loopLimit35 = ceil((rand()%10)/3);
      for(; loop35 < loopLimit35; loop35++) {
         int* array3 = new int[601];
         for (int i = 0; i < 601; i++) {
            array3[i]++; 
         }
         int loop36 = 0;
         int loopLimit36 = ceil((rand()%10)/4);
         for(; loop36 < loopLimit36; loop36++) {
            int* array4 = new int[902];
            for (int i = 0; i < 902; i++) {
               array4[i]++; 
            }
            int loop37 = 0;
            int loopLimit37 = ceil((rand()%10)/5);
            for(; loop37 < loopLimit37; loop37++) {
               int* array5 = new int[492];
               for (int i = 0; i < 902; i++) {
                  array4[i]++; 
               }
               int loop38 = 0;
               int loopLimit38 = ceil((rand()%10)/6);
               for(; loop38 < loopLimit38; loop38++) {
                  int* array6 = new int[756];
                  for (int i = 0; i < 902; i++) {
                     array4[i]++; 
                  }
                  int loop39 = 0;
                  int loopLimit39 = ceil((rand()%10)/7);
                  for(; loop39 < loopLimit39; loop39++) {
                     int* array7 = new int[280];
                     for (int i = 0; i < 902; i++) {
                        array4[i]++; 
                     }
                     int loop40 = 0;
                     int loopLimit40 = ceil((rand()%10)/8);
                     for(; loop40 < loopLimit40; loop40++) {
                        int* array8 = new int[441];
                        for (int i = 0; i < 756; i++) {
                           array6[i]++; 
                        }
                        int loop41 = 0;
                        int loopLimit41 = ceil((rand()%10)/9);
                        for(; loop41 < loopLimit41; loop41++) {
                           int* array9 = new int[689];
                           for (int i = 0; i < 689; i++) {
                              array9[i]++; 
                           }
                           for (int i = 0; i < 902; i++) {
                              array4[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 280; i++) {
                           array7[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 280; i++) {
                        array7[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 756; i++) {
                     array6[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 902; i++) {
                  array4[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 902; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 601; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func9(rng());
   }
   else {
      int* array3 = new int[917];
      for (int i = 0; i < 917; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 917; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 917; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 917; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 917; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop63 = 0;
      int loopLimit63 = ceil((rand()%10)/3);
      for(; loop63 < loopLimit63; loop63++) {
         int* array4 = new int[183];
         for (int i = 0; i < 917; i++) {
            array3[i]++; 
         }
         int loop64 = 0;
         int loopLimit64 = ceil((rand()%10)/4);
         for(; loop64 < loopLimit64; loop64++) {
            int* array5 = new int[499];
            for (int i = 0; i < 183; i++) {
               array4[i]++; 
            }
            int loop65 = 0;
            int loopLimit65 = ceil((rand()%10)/5);
            for(; loop65 < loopLimit65; loop65++) {
               int* array6 = new int[725];
               for (int i = 0; i < 917; i++) {
                  array3[i]++; 
               }
               int loop66 = 0;
               int loopLimit66 = ceil((rand()%10)/6);
               for(; loop66 < loopLimit66; loop66++) {
                  int* array7 = new int[590];
                  for (int i = 0; i < 917; i++) {
                     array3[i]++; 
                  }
                  int loop67 = 0;
                  int loopLimit67 = ceil((rand()%10)/7);
                  for(; loop67 < loopLimit67; loop67++) {
                     int* array8 = new int[139];
                     for (int i = 0; i < 499; i++) {
                        array5[i]++; 
                     }
                     int loop68 = 0;
                     int loopLimit68 = ceil((rand()%10)/8);
                     for(; loop68 < loopLimit68; loop68++) {
                        int* array9 = new int[786];
                        for (int i = 0; i < 590; i++) {
                           array7[i]++; 
                        }
                        int loop69 = 0;
                        int loopLimit69 = ceil((rand()%10)/9);
                        for(; loop69 < loopLimit69; loop69++) {
                           int* array10 = new int[82];
                           for (int i = 0; i < 786; i++) {
                              array9[i]++; 
                           }
                           int loop70 = 0;
                           int loopLimit70 = ceil((rand()%10)/10);
                           for(; loop70 < loopLimit70; loop70++) {
                              int* array11 = new int[464];
                              for (int i = 0; i < 82; i++) {
                                 array10[i]++; 
                              }
                              for (int i = 0; i < 725; i++) {
                                 array6[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 725; i++) {
                              array6[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 786; i++) {
                           array9[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 499; i++) {
                        array5[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 183; i++) {
                     array4[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 499; i++) {
                  array5[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 917; i++) {
               array3[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 183; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func9(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop42 = 0;
      int loopLimit42 = ceil((rand()%10)/3);
      for(; loop42 < loopLimit42; loop42++) {
         int* array3 = new int[481];
         for (int i = 0; i < 481; i++) {
            array3[i]++; 
         }
         int loop43 = 0;
         int loopLimit43 = ceil((rand()%10)/4);
         for(; loop43 < loopLimit43; loop43++) {
            int* array4 = new int[709];
            for (int i = 0; i < 709; i++) {
               array4[i]++; 
            }
            int loop44 = 0;
            int loopLimit44 = ceil((rand()%10)/5);
            for(; loop44 < loopLimit44; loop44++) {
               int* array5 = new int[567];
               for (int i = 0; i < 709; i++) {
                  array4[i]++; 
               }
               int loop45 = 0;
               int loopLimit45 = ceil((rand()%10)/6);
               for(; loop45 < loopLimit45; loop45++) {
                  int* array6 = new int[497];
                  for (int i = 0; i < 709; i++) {
                     array4[i]++; 
                  }
                  int loop46 = 0;
                  int loopLimit46 = ceil((rand()%10)/7);
                  for(; loop46 < loopLimit46; loop46++) {
                     int* array7 = new int[586];
                     for (int i = 0; i < 481; i++) {
                        array3[i]++; 
                     }
                     for (int i = 0; i < 709; i++) {
                        array4[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 497; i++) {
                     array6[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 567; i++) {
                  array5[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 481; i++) {
               array3[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 481; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func11(rng());
   }
   else {
      int* array3 = new int[395];
      for (int i = 0; i < 395; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 395; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 395; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 395; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 395; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop57 = 0;
      int loopLimit57 = ceil((rand()%10)/3);
      for(; loop57 < loopLimit57; loop57++) {
         int* array4 = new int[428];
         for (int i = 0; i < 428; i++) {
            array4[i]++; 
         }
         int loop58 = 0;
         int loopLimit58 = ceil((rand()%10)/4);
         for(; loop58 < loopLimit58; loop58++) {
            int* array5 = new int[11];
            for (int i = 0; i < 395; i++) {
               array3[i]++; 
            }
            int loop59 = 0;
            int loopLimit59 = ceil((rand()%10)/5);
            for(; loop59 < loopLimit59; loop59++) {
               int* array6 = new int[529];
               for (int i = 0; i < 395; i++) {
                  array3[i]++; 
               }
               int loop60 = 0;
               int loopLimit60 = ceil((rand()%10)/6);
               for(; loop60 < loopLimit60; loop60++) {
                  int* array7 = new int[404];
                  for (int i = 0; i < 529; i++) {
                     array6[i]++; 
                  }
                  int loop61 = 0;
                  int loopLimit61 = ceil((rand()%10)/7);
                  for(; loop61 < loopLimit61; loop61++) {
                     int* array8 = new int[763];
                     for (int i = 0; i < 763; i++) {
                        array8[i]++; 
                     }
                     int loop62 = 0;
                     int loopLimit62 = ceil((rand()%10)/8);
                     for(; loop62 < loopLimit62; loop62++) {
                        int* array9 = new int[538];
                        for (int i = 0; i < 395; i++) {
                           array3[i]++; 
                        }
                        for (int i = 0; i < 11; i++) {
                           array5[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 404; i++) {
                        array7[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 529; i++) {
                     array6[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 395; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 395; i++) {
               array3[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 428; i++) {
            array4[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func11(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop47 = 0;
      int loopLimit47 = ceil((rand()%10)/3);
      for(; loop47 < loopLimit47; loop47++) {
         int* array3 = new int[871];
         for (int i = 0; i < 871; i++) {
            array3[i]++; 
         }
         int loop48 = 0;
         int loopLimit48 = ceil((rand()%10)/4);
         for(; loop48 < loopLimit48; loop48++) {
            int* array4 = new int[829];
            for (int i = 0; i < 829; i++) {
               array4[i]++; 
            }
            int loop49 = 0;
            int loopLimit49 = ceil((rand()%10)/5);
            for(; loop49 < loopLimit49; loop49++) {
               int* array5 = new int[19];
               for (int i = 0; i < 871; i++) {
                  array3[i]++; 
               }
               for (int i = 0; i < 871; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 871; i++) {
               array3[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 871; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func13(rng());
   }
   else {
      int* array3 = new int[914];
      for (int i = 0; i < 914; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 914; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 914; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 914; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 914; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop53 = 0;
      int loopLimit53 = ceil((rand()%10)/3);
      for(; loop53 < loopLimit53; loop53++) {
         int* array4 = new int[365];
         for (int i = 0; i < 365; i++) {
            array4[i]++; 
         }
         int loop54 = 0;
         int loopLimit54 = ceil((rand()%10)/4);
         for(; loop54 < loopLimit54; loop54++) {
            int* array5 = new int[936];
            for (int i = 0; i < 365; i++) {
               array4[i]++; 
            }
            int loop55 = 0;
            int loopLimit55 = ceil((rand()%10)/5);
            for(; loop55 < loopLimit55; loop55++) {
               int* array6 = new int[551];
               for (int i = 0; i < 365; i++) {
                  array4[i]++; 
               }
               int loop56 = 0;
               int loopLimit56 = ceil((rand()%10)/6);
               for(; loop56 < loopLimit56; loop56++) {
                  int* array7 = new int[228];
                  for (int i = 0; i < 914; i++) {
                     array3[i]++; 
                  }
                  for (int i = 0; i < 936; i++) {
                     array5[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 936; i++) {
                  array5[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 365; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 914; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func13(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop50 = 0;
      int loopLimit50 = ceil((rand()%10)/3);
      for(; loop50 < loopLimit50; loop50++) {
         int* array3 = new int[340];
         for (int i = 0; i < 340; i++) {
            array3[i]++; 
         }
         for (int i = 0; i < 340; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      func15(rng());
   }
   else {
      int* array3 = new int[555];
      for (int i = 0; i < 555; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 555; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 555; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 555; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 555; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop51 = 0;
      int loopLimit51 = ceil((rand()%10)/3);
      for(; loop51 < loopLimit51; loop51++) {
         int* array4 = new int[350];
         for (int i = 0; i < 350; i++) {
            array4[i]++; 
         }
         int loop52 = 0;
         int loopLimit52 = ceil((rand()%10)/4);
         for(; loop52 < loopLimit52; loop52++) {
            int* array5 = new int[500];
            for (int i = 0; i < 500; i++) {
               array5[i]++; 
            }
            for (int i = 0; i < 350; i++) {
               array4[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 555; i++) {
            array3[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func15(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int* array3 = new int[723];
      for (int i = 0; i < 723; i++) {
         array3[i]++; 
      }
      for (int i = 0; i < 723; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 723; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 723; i++) {
         array3[i]--; 
      }
      for (int i = 0; i < 723; i++) {
         if (array3[i] == 0) { 
            printf("IS 0!");
         }
      }
      printf("DELETE!\n");
   }
}

void func1() {
   int loop93 = 0;
   int loopLimit93 = ceil((rand()%10)/2);
   for(; loop93 < loopLimit93; loop93++) {
      int* array0 = new int[713];
      for (int i = 0; i < 713; i++) {
         array0[i]++; 
      }
      int loop94 = 0;
      int loopLimit94 = ceil((rand()%10)/3);
      for(; loop94 < loopLimit94; loop94++) {
         int* array1 = new int[321];
         for (int i = 0; i < 321; i++) {
            array1[i]++; 
         }
         int loop95 = 0;
         int loopLimit95 = ceil((rand()%10)/4);
         for(; loop95 < loopLimit95; loop95++) {
            int* array2 = new int[819];
            for (int i = 0; i < 321; i++) {
               array1[i]++; 
            }
            int loop96 = 0;
            int loopLimit96 = ceil((rand()%10)/5);
            for(; loop96 < loopLimit96; loop96++) {
               int* array3 = new int[721];
               for (int i = 0; i < 713; i++) {
                  array0[i]++; 
               }
               int loop97 = 0;
               int loopLimit97 = ceil((rand()%10)/6);
               for(; loop97 < loopLimit97; loop97++) {
                  int* array4 = new int[939];
                  for (int i = 0; i < 321; i++) {
                     array1[i]++; 
                  }
                  int loop98 = 0;
                  int loopLimit98 = ceil((rand()%10)/7);
                  for(; loop98 < loopLimit98; loop98++) {
                     int* array5 = new int[940];
                     for (int i = 0; i < 940; i++) {
                        array5[i]++; 
                     }
                     int loop99 = 0;
                     int loopLimit99 = ceil((rand()%10)/8);
                     for(; loop99 < loopLimit99; loop99++) {
                        int* array6 = new int[705];
                        for (int i = 0; i < 705; i++) {
                           array6[i]++; 
                        }
                        int loop100 = 0;
                        int loopLimit100 = ceil((rand()%10)/9);
                        for(; loop100 < loopLimit100; loop100++) {
                           int* array7 = new int[127];
                           for (int i = 0; i < 705; i++) {
                              array6[i]++; 
                           }
                           int loop101 = 0;
                           int loopLimit101 = ceil((rand()%10)/10);
                           for(; loop101 < loopLimit101; loop101++) {
                              int* array8 = new int[984];
                              for (int i = 0; i < 939; i++) {
                                 array4[i]++; 
                              }
                              int loop102 = 0;
                              int loopLimit102 = ceil((rand()%10)/11);
                              for(; loop102 < loopLimit102; loop102++) {
                                 int* array9 = new int[920];
                                 for (int i = 0; i < 939; i++) {
                                    array4[i]++; 
                                 }
                                 int loop103 = 0;
                                 int loopLimit103 = ceil((rand()%10)/12);
                                 for(; loop103 < loopLimit103; loop103++) {
                                    int* array10 = new int[422];
                                    for (int i = 0; i < 422; i++) {
                                       array10[i]++; 
                                    }
                                    int loop104 = 0;
                                    int loopLimit104 = ceil((rand()%10)/13);
                                    for(; loop104 < loopLimit104; loop104++) {
                                       int* array11 = new int[396];
                                       for (int i = 0; i < 321; i++) {
                                          array1[i]++; 
                                       }
                                       int loop105 = 0;
                                       int loopLimit105 = ceil((rand()%10)/14);
                                       for(; loop105 < loopLimit105; loop105++) {
                                          int* array12 = new int[630];
                                          for (int i = 0; i < 127; i++) {
                                             array7[i]++; 
                                          }
                                          int loop106 = 0;
                                          int loopLimit106 = ceil((rand()%10)/15);
                                          for(; loop106 < loopLimit106; loop106++) {
                                             int* array13 = new int[292];
                                             for (int i = 0; i < 939; i++) {
                                                array4[i]++; 
                                             }
                                             for (int i = 0; i < 422; i++) {
                                                array10[i]--; 
                                             }
                                          }
                                          printf("DELETE!\n");
                                          for (int i = 0; i < 984; i++) {
                                             array8[i]--; 
                                          }
                                       }
                                       printf("DELETE!\n");
                                       for (int i = 0; i < 321; i++) {
                                          array1[i]--; 
                                       }
                                    }
                                    printf("DELETE!\n");
                                    for (int i = 0; i < 939; i++) {
                                       array4[i]--; 
                                    }
                                 }
                                 printf("DELETE!\n");
                                 for (int i = 0; i < 819; i++) {
                                    array2[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 127; i++) {
                                 array7[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 713; i++) {
                              array0[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 819; i++) {
                           array2[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 819; i++) {
                        array2[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 721; i++) {
                     array3[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 819; i++) {
                  array2[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 819; i++) {
               array2[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 713; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      for (int i = 0; i < 713; i++) {
         array0[i]--; 
      }
   }
   printf("DELETE!\n");
   func2(rng());
}

void func2(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop107 = 0;
      int loopLimit107 = ceil((rand()%10)/2);
      for(; loop107 < loopLimit107; loop107++) {
         int* array0 = new int[209];
         for (int i = 0; i < 209; i++) {
            array0[i]++; 
         }
         int loop108 = 0;
         int loopLimit108 = ceil((rand()%10)/3);
         for(; loop108 < loopLimit108; loop108++) {
            int* array1 = new int[819];
            for (int i = 0; i < 209; i++) {
               array0[i]++; 
            }
            int loop109 = 0;
            int loopLimit109 = ceil((rand()%10)/4);
            for(; loop109 < loopLimit109; loop109++) {
               int* array2 = new int[732];
               for (int i = 0; i < 819; i++) {
                  array1[i]++; 
               }
               int loop110 = 0;
               int loopLimit110 = ceil((rand()%10)/5);
               for(; loop110 < loopLimit110; loop110++) {
                  int* array3 = new int[994];
                  for (int i = 0; i < 209; i++) {
                     array0[i]++; 
                  }
                  int loop111 = 0;
                  int loopLimit111 = ceil((rand()%10)/6);
                  for(; loop111 < loopLimit111; loop111++) {
                     int* array4 = new int[379];
                     for (int i = 0; i < 379; i++) {
                        array4[i]++; 
                     }
                     int loop112 = 0;
                     int loopLimit112 = ceil((rand()%10)/7);
                     for(; loop112 < loopLimit112; loop112++) {
                        int* array5 = new int[273];
                        for (int i = 0; i < 732; i++) {
                           array2[i]++; 
                        }
                        int loop113 = 0;
                        int loopLimit113 = ceil((rand()%10)/8);
                        for(; loop113 < loopLimit113; loop113++) {
                           int* array6 = new int[850];
                           for (int i = 0; i < 732; i++) {
                              array2[i]++; 
                           }
                           int loop114 = 0;
                           int loopLimit114 = ceil((rand()%10)/9);
                           for(; loop114 < loopLimit114; loop114++) {
                              int* array7 = new int[860];
                              for (int i = 0; i < 850; i++) {
                                 array6[i]++; 
                              }
                              int loop115 = 0;
                              int loopLimit115 = ceil((rand()%10)/10);
                              for(; loop115 < loopLimit115; loop115++) {
                                 int* array8 = new int[579];
                                 for (int i = 0; i < 860; i++) {
                                    array7[i]++; 
                                 }
                                 int loop116 = 0;
                                 int loopLimit116 = ceil((rand()%10)/11);
                                 for(; loop116 < loopLimit116; loop116++) {
                                    int* array9 = new int[993];
                                    for (int i = 0; i < 273; i++) {
                                       array5[i]++; 
                                    }
                                    int loop117 = 0;
                                    int loopLimit117 = ceil((rand()%10)/12);
                                    for(; loop117 < loopLimit117; loop117++) {
                                       int* array10 = new int[621];
                                       for (int i = 0; i < 994; i++) {
                                          array3[i]++; 
                                       }
                                       int loop118 = 0;
                                       int loopLimit118 = ceil((rand()%10)/13);
                                       for(; loop118 < loopLimit118; loop118++) {
                                          int* array11 = new int[504];
                                          for (int i = 0; i < 819; i++) {
                                             array1[i]++; 
                                          }
                                          for (int i = 0; i < 819; i++) {
                                             array1[i]--; 
                                          }
                                       }
                                       printf("DELETE!\n");
                                       for (int i = 0; i < 273; i++) {
                                          array5[i]--; 
                                       }
                                    }
                                    printf("DELETE!\n");
                                    for (int i = 0; i < 850; i++) {
                                       array6[i]--; 
                                    }
                                 }
                                 printf("DELETE!\n");
                                 for (int i = 0; i < 850; i++) {
                                    array6[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 209; i++) {
                                 array0[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 850; i++) {
                              array6[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 379; i++) {
                           array4[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 819; i++) {
                        array1[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 209; i++) {
                     array0[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 819; i++) {
                  array1[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 209; i++) {
               array0[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 209; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func4(rng());
   }
   else {
      int* array0 = new int[516];
      for (int i = 0; i < 516; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 516; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 516; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 516; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 516; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop185 = 0;
      int loopLimit185 = ceil((rand()%10)/2);
      for(; loop185 < loopLimit185; loop185++) {
         int* array1 = new int[338];
         for (int i = 0; i < 516; i++) {
            array0[i]++; 
         }
         int loop186 = 0;
         int loopLimit186 = ceil((rand()%10)/3);
         for(; loop186 < loopLimit186; loop186++) {
            int* array2 = new int[218];
            for (int i = 0; i < 516; i++) {
               array0[i]++; 
            }
            int loop187 = 0;
            int loopLimit187 = ceil((rand()%10)/4);
            for(; loop187 < loopLimit187; loop187++) {
               int* array3 = new int[970];
               for (int i = 0; i < 218; i++) {
                  array2[i]++; 
               }
               int loop188 = 0;
               int loopLimit188 = ceil((rand()%10)/5);
               for(; loop188 < loopLimit188; loop188++) {
                  int* array4 = new int[812];
                  for (int i = 0; i < 812; i++) {
                     array4[i]++; 
                  }
                  int loop189 = 0;
                  int loopLimit189 = ceil((rand()%10)/6);
                  for(; loop189 < loopLimit189; loop189++) {
                     int* array5 = new int[977];
                     for (int i = 0; i < 338; i++) {
                        array1[i]++; 
                     }
                     int loop190 = 0;
                     int loopLimit190 = ceil((rand()%10)/7);
                     for(; loop190 < loopLimit190; loop190++) {
                        int* array6 = new int[536];
                        for (int i = 0; i < 812; i++) {
                           array4[i]++; 
                        }
                        int loop191 = 0;
                        int loopLimit191 = ceil((rand()%10)/8);
                        for(; loop191 < loopLimit191; loop191++) {
                           int* array7 = new int[176];
                           for (int i = 0; i < 970; i++) {
                              array3[i]++; 
                           }
                           int loop192 = 0;
                           int loopLimit192 = ceil((rand()%10)/9);
                           for(; loop192 < loopLimit192; loop192++) {
                              int* array8 = new int[207];
                              for (int i = 0; i < 176; i++) {
                                 array7[i]++; 
                              }
                              int loop193 = 0;
                              int loopLimit193 = ceil((rand()%10)/10);
                              for(; loop193 < loopLimit193; loop193++) {
                                 int* array9 = new int[857];
                                 for (int i = 0; i < 812; i++) {
                                    array4[i]++; 
                                 }
                                 int loop194 = 0;
                                 int loopLimit194 = ceil((rand()%10)/11);
                                 for(; loop194 < loopLimit194; loop194++) {
                                    int* array10 = new int[499];
                                    for (int i = 0; i < 536; i++) {
                                       array6[i]++; 
                                    }
                                    int loop195 = 0;
                                    int loopLimit195 = ceil((rand()%10)/12);
                                    for(; loop195 < loopLimit195; loop195++) {
                                       int* array11 = new int[127];
                                       for (int i = 0; i < 499; i++) {
                                          array10[i]++; 
                                       }
                                       int loop196 = 0;
                                       int loopLimit196 = ceil((rand()%10)/13);
                                       for(; loop196 < loopLimit196; loop196++) {
                                          int* array12 = new int[236];
                                          for (int i = 0; i < 176; i++) {
                                             array7[i]++; 
                                          }
                                          int loop197 = 0;
                                          int loopLimit197 = ceil((rand()%10)/14);
                                          for(; loop197 < loopLimit197; loop197++) {
                                             int* array13 = new int[818];
                                             for (int i = 0; i < 857; i++) {
                                                array9[i]++; 
                                             }
                                             for (int i = 0; i < 857; i++) {
                                                array9[i]--; 
                                             }
                                          }
                                          printf("DELETE!\n");
                                          for (int i = 0; i < 236; i++) {
                                             array12[i]--; 
                                          }
                                       }
                                       printf("DELETE!\n");
                                       for (int i = 0; i < 207; i++) {
                                          array8[i]--; 
                                       }
                                    }
                                    printf("DELETE!\n");
                                    for (int i = 0; i < 857; i++) {
                                       array9[i]--; 
                                    }
                                 }
                                 printf("DELETE!\n");
                                 for (int i = 0; i < 977; i++) {
                                    array5[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 218; i++) {
                                 array2[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 970; i++) {
                              array3[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 536; i++) {
                           array6[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 977; i++) {
                        array5[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 812; i++) {
                     array4[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 338; i++) {
                  array1[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 338; i++) {
               array1[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 338; i++) {
            array1[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop119 = 0;
      int loopLimit119 = ceil((rand()%10)/2);
      for(; loop119 < loopLimit119; loop119++) {
         int* array0 = new int[528];
         for (int i = 0; i < 528; i++) {
            array0[i]++; 
         }
         int loop120 = 0;
         int loopLimit120 = ceil((rand()%10)/3);
         for(; loop120 < loopLimit120; loop120++) {
            int* array1 = new int[872];
            for (int i = 0; i < 528; i++) {
               array0[i]++; 
            }
            int loop121 = 0;
            int loopLimit121 = ceil((rand()%10)/4);
            for(; loop121 < loopLimit121; loop121++) {
               int* array2 = new int[958];
               for (int i = 0; i < 528; i++) {
                  array0[i]++; 
               }
               int loop122 = 0;
               int loopLimit122 = ceil((rand()%10)/5);
               for(; loop122 < loopLimit122; loop122++) {
                  int* array3 = new int[36];
                  for (int i = 0; i < 528; i++) {
                     array0[i]++; 
                  }
                  int loop123 = 0;
                  int loopLimit123 = ceil((rand()%10)/6);
                  for(; loop123 < loopLimit123; loop123++) {
                     int* array4 = new int[753];
                     for (int i = 0; i < 36; i++) {
                        array3[i]++; 
                     }
                     int loop124 = 0;
                     int loopLimit124 = ceil((rand()%10)/7);
                     for(; loop124 < loopLimit124; loop124++) {
                        int* array5 = new int[303];
                        for (int i = 0; i < 872; i++) {
                           array1[i]++; 
                        }
                        int loop125 = 0;
                        int loopLimit125 = ceil((rand()%10)/8);
                        for(; loop125 < loopLimit125; loop125++) {
                           int* array6 = new int[133];
                           for (int i = 0; i < 753; i++) {
                              array4[i]++; 
                           }
                           int loop126 = 0;
                           int loopLimit126 = ceil((rand()%10)/9);
                           for(; loop126 < loopLimit126; loop126++) {
                              int* array7 = new int[890];
                              for (int i = 0; i < 958; i++) {
                                 array2[i]++; 
                              }
                              int loop127 = 0;
                              int loopLimit127 = ceil((rand()%10)/10);
                              for(; loop127 < loopLimit127; loop127++) {
                                 int* array8 = new int[567];
                                 for (int i = 0; i < 36; i++) {
                                    array3[i]++; 
                                 }
                                 int loop128 = 0;
                                 int loopLimit128 = ceil((rand()%10)/11);
                                 for(; loop128 < loopLimit128; loop128++) {
                                    int* array9 = new int[368];
                                    for (int i = 0; i < 368; i++) {
                                       array9[i]++; 
                                    }
                                    for (int i = 0; i < 528; i++) {
                                       array0[i]--; 
                                    }
                                 }
                                 printf("DELETE!\n");
                                 for (int i = 0; i < 36; i++) {
                                    array3[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 753; i++) {
                                 array4[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 753; i++) {
                              array4[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 303; i++) {
                           array5[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 528; i++) {
                        array0[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 36; i++) {
                     array3[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 872; i++) {
                  array1[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 872; i++) {
               array1[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 528; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func6(rng());
   }
   else {
      int* array0 = new int[233];
      for (int i = 0; i < 233; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 233; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 233; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 233; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 233; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop174 = 0;
      int loopLimit174 = ceil((rand()%10)/2);
      for(; loop174 < loopLimit174; loop174++) {
         int* array1 = new int[699];
         for (int i = 0; i < 699; i++) {
            array1[i]++; 
         }
         int loop175 = 0;
         int loopLimit175 = ceil((rand()%10)/3);
         for(; loop175 < loopLimit175; loop175++) {
            int* array2 = new int[839];
            for (int i = 0; i < 839; i++) {
               array2[i]++; 
            }
            int loop176 = 0;
            int loopLimit176 = ceil((rand()%10)/4);
            for(; loop176 < loopLimit176; loop176++) {
               int* array3 = new int[363];
               for (int i = 0; i < 839; i++) {
                  array2[i]++; 
               }
               int loop177 = 0;
               int loopLimit177 = ceil((rand()%10)/5);
               for(; loop177 < loopLimit177; loop177++) {
                  int* array4 = new int[794];
                  for (int i = 0; i < 363; i++) {
                     array3[i]++; 
                  }
                  int loop178 = 0;
                  int loopLimit178 = ceil((rand()%10)/6);
                  for(; loop178 < loopLimit178; loop178++) {
                     int* array5 = new int[847];
                     for (int i = 0; i < 363; i++) {
                        array3[i]++; 
                     }
                     int loop179 = 0;
                     int loopLimit179 = ceil((rand()%10)/7);
                     for(; loop179 < loopLimit179; loop179++) {
                        int* array6 = new int[462];
                        for (int i = 0; i < 462; i++) {
                           array6[i]++; 
                        }
                        int loop180 = 0;
                        int loopLimit180 = ceil((rand()%10)/8);
                        for(; loop180 < loopLimit180; loop180++) {
                           int* array7 = new int[390];
                           for (int i = 0; i < 794; i++) {
                              array4[i]++; 
                           }
                           int loop181 = 0;
                           int loopLimit181 = ceil((rand()%10)/9);
                           for(; loop181 < loopLimit181; loop181++) {
                              int* array8 = new int[791];
                              for (int i = 0; i < 839; i++) {
                                 array2[i]++; 
                              }
                              int loop182 = 0;
                              int loopLimit182 = ceil((rand()%10)/10);
                              for(; loop182 < loopLimit182; loop182++) {
                                 int* array9 = new int[115];
                                 for (int i = 0; i < 699; i++) {
                                    array1[i]++; 
                                 }
                                 int loop183 = 0;
                                 int loopLimit183 = ceil((rand()%10)/11);
                                 for(; loop183 < loopLimit183; loop183++) {
                                    int* array10 = new int[157];
                                    for (int i = 0; i < 847; i++) {
                                       array5[i]++; 
                                    }
                                    int loop184 = 0;
                                    int loopLimit184 = ceil((rand()%10)/12);
                                    for(; loop184 < loopLimit184; loop184++) {
                                       int* array11 = new int[491];
                                       for (int i = 0; i < 390; i++) {
                                          array7[i]++; 
                                       }
                                       for (int i = 0; i < 390; i++) {
                                          array7[i]--; 
                                       }
                                    }
                                    printf("DELETE!\n");
                                    for (int i = 0; i < 794; i++) {
                                       array4[i]--; 
                                    }
                                 }
                                 printf("DELETE!\n");
                                 for (int i = 0; i < 699; i++) {
                                    array1[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 791; i++) {
                                 array8[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 794; i++) {
                              array4[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 699; i++) {
                           array1[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 839; i++) {
                        array2[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 363; i++) {
                     array3[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 699; i++) {
                  array1[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 699; i++) {
               array1[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 233; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func6(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop129 = 0;
      int loopLimit129 = ceil((rand()%10)/2);
      for(; loop129 < loopLimit129; loop129++) {
         int* array0 = new int[253];
         for (int i = 0; i < 253; i++) {
            array0[i]++; 
         }
         int loop130 = 0;
         int loopLimit130 = ceil((rand()%10)/3);
         for(; loop130 < loopLimit130; loop130++) {
            int* array1 = new int[686];
            for (int i = 0; i < 686; i++) {
               array1[i]++; 
            }
            int loop131 = 0;
            int loopLimit131 = ceil((rand()%10)/4);
            for(; loop131 < loopLimit131; loop131++) {
               int* array2 = new int[152];
               for (int i = 0; i < 686; i++) {
                  array1[i]++; 
               }
               int loop132 = 0;
               int loopLimit132 = ceil((rand()%10)/5);
               for(; loop132 < loopLimit132; loop132++) {
                  int* array3 = new int[975];
                  for (int i = 0; i < 253; i++) {
                     array0[i]++; 
                  }
                  int loop133 = 0;
                  int loopLimit133 = ceil((rand()%10)/6);
                  for(; loop133 < loopLimit133; loop133++) {
                     int* array4 = new int[157];
                     for (int i = 0; i < 157; i++) {
                        array4[i]++; 
                     }
                     int loop134 = 0;
                     int loopLimit134 = ceil((rand()%10)/7);
                     for(; loop134 < loopLimit134; loop134++) {
                        int* array5 = new int[436];
                        for (int i = 0; i < 253; i++) {
                           array0[i]++; 
                        }
                        int loop135 = 0;
                        int loopLimit135 = ceil((rand()%10)/8);
                        for(; loop135 < loopLimit135; loop135++) {
                           int* array6 = new int[414];
                           for (int i = 0; i < 253; i++) {
                              array0[i]++; 
                           }
                           int loop136 = 0;
                           int loopLimit136 = ceil((rand()%10)/9);
                           for(; loop136 < loopLimit136; loop136++) {
                              int* array7 = new int[460];
                              for (int i = 0; i < 253; i++) {
                                 array0[i]++; 
                              }
                              for (int i = 0; i < 157; i++) {
                                 array4[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 436; i++) {
                              array5[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 152; i++) {
                           array2[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 975; i++) {
                        array3[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 253; i++) {
                     array0[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 152; i++) {
                  array2[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 253; i++) {
               array0[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 253; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func8(rng());
   }
   else {
      int* array0 = new int[770];
      for (int i = 0; i < 770; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 770; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 770; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 770; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 770; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop165 = 0;
      int loopLimit165 = ceil((rand()%10)/2);
      for(; loop165 < loopLimit165; loop165++) {
         int* array1 = new int[849];
         for (int i = 0; i < 849; i++) {
            array1[i]++; 
         }
         int loop166 = 0;
         int loopLimit166 = ceil((rand()%10)/3);
         for(; loop166 < loopLimit166; loop166++) {
            int* array2 = new int[205];
            for (int i = 0; i < 849; i++) {
               array1[i]++; 
            }
            int loop167 = 0;
            int loopLimit167 = ceil((rand()%10)/4);
            for(; loop167 < loopLimit167; loop167++) {
               int* array3 = new int[217];
               for (int i = 0; i < 205; i++) {
                  array2[i]++; 
               }
               int loop168 = 0;
               int loopLimit168 = ceil((rand()%10)/5);
               for(; loop168 < loopLimit168; loop168++) {
                  int* array4 = new int[945];
                  for (int i = 0; i < 217; i++) {
                     array3[i]++; 
                  }
                  int loop169 = 0;
                  int loopLimit169 = ceil((rand()%10)/6);
                  for(; loop169 < loopLimit169; loop169++) {
                     int* array5 = new int[873];
                     for (int i = 0; i < 205; i++) {
                        array2[i]++; 
                     }
                     int loop170 = 0;
                     int loopLimit170 = ceil((rand()%10)/7);
                     for(; loop170 < loopLimit170; loop170++) {
                        int* array6 = new int[873];
                        for (int i = 0; i < 873; i++) {
                           array5[i]++; 
                        }
                        int loop171 = 0;
                        int loopLimit171 = ceil((rand()%10)/8);
                        for(; loop171 < loopLimit171; loop171++) {
                           int* array7 = new int[289];
                           for (int i = 0; i < 217; i++) {
                              array3[i]++; 
                           }
                           int loop172 = 0;
                           int loopLimit172 = ceil((rand()%10)/9);
                           for(; loop172 < loopLimit172; loop172++) {
                              int* array8 = new int[607];
                              for (int i = 0; i < 770; i++) {
                                 array0[i]++; 
                              }
                              int loop173 = 0;
                              int loopLimit173 = ceil((rand()%10)/10);
                              for(; loop173 < loopLimit173; loop173++) {
                                 int* array9 = new int[757];
                                 for (int i = 0; i < 945; i++) {
                                    array4[i]++; 
                                 }
                                 for (int i = 0; i < 849; i++) {
                                    array1[i]--; 
                                 }
                              }
                              printf("DELETE!\n");
                              for (int i = 0; i < 873; i++) {
                                 array6[i]--; 
                              }
                           }
                           printf("DELETE!\n");
                           for (int i = 0; i < 945; i++) {
                              array4[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 873; i++) {
                           array6[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 205; i++) {
                        array2[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 217; i++) {
                     array3[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 849; i++) {
                  array1[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 770; i++) {
               array0[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 770; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func8(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop137 = 0;
      int loopLimit137 = ceil((rand()%10)/2);
      for(; loop137 < loopLimit137; loop137++) {
         int* array0 = new int[699];
         for (int i = 0; i < 699; i++) {
            array0[i]++; 
         }
         int loop138 = 0;
         int loopLimit138 = ceil((rand()%10)/3);
         for(; loop138 < loopLimit138; loop138++) {
            int* array1 = new int[39];
            for (int i = 0; i < 699; i++) {
               array0[i]++; 
            }
            int loop139 = 0;
            int loopLimit139 = ceil((rand()%10)/4);
            for(; loop139 < loopLimit139; loop139++) {
               int* array2 = new int[428];
               for (int i = 0; i < 699; i++) {
                  array0[i]++; 
               }
               int loop140 = 0;
               int loopLimit140 = ceil((rand()%10)/5);
               for(; loop140 < loopLimit140; loop140++) {
                  int* array3 = new int[500];
                  for (int i = 0; i < 39; i++) {
                     array1[i]++; 
                  }
                  int loop141 = 0;
                  int loopLimit141 = ceil((rand()%10)/6);
                  for(; loop141 < loopLimit141; loop141++) {
                     int* array4 = new int[647];
                     for (int i = 0; i < 500; i++) {
                        array3[i]++; 
                     }
                     int loop142 = 0;
                     int loopLimit142 = ceil((rand()%10)/7);
                     for(; loop142 < loopLimit142; loop142++) {
                        int* array5 = new int[159];
                        for (int i = 0; i < 159; i++) {
                           array5[i]++; 
                        }
                        for (int i = 0; i < 159; i++) {
                           array5[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 647; i++) {
                        array4[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 500; i++) {
                     array3[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 428; i++) {
                  array2[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 39; i++) {
               array1[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 699; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func10(rng());
   }
   else {
      int* array0 = new int[970];
      for (int i = 0; i < 970; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 970; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 970; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 970; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 970; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop158 = 0;
      int loopLimit158 = ceil((rand()%10)/2);
      for(; loop158 < loopLimit158; loop158++) {
         int* array1 = new int[627];
         for (int i = 0; i < 970; i++) {
            array0[i]++; 
         }
         int loop159 = 0;
         int loopLimit159 = ceil((rand()%10)/3);
         for(; loop159 < loopLimit159; loop159++) {
            int* array2 = new int[886];
            for (int i = 0; i < 970; i++) {
               array0[i]++; 
            }
            int loop160 = 0;
            int loopLimit160 = ceil((rand()%10)/4);
            for(; loop160 < loopLimit160; loop160++) {
               int* array3 = new int[355];
               for (int i = 0; i < 970; i++) {
                  array0[i]++; 
               }
               int loop161 = 0;
               int loopLimit161 = ceil((rand()%10)/5);
               for(; loop161 < loopLimit161; loop161++) {
                  int* array4 = new int[90];
                  for (int i = 0; i < 886; i++) {
                     array2[i]++; 
                  }
                  int loop162 = 0;
                  int loopLimit162 = ceil((rand()%10)/6);
                  for(; loop162 < loopLimit162; loop162++) {
                     int* array5 = new int[479];
                     for (int i = 0; i < 886; i++) {
                        array2[i]++; 
                     }
                     int loop163 = 0;
                     int loopLimit163 = ceil((rand()%10)/7);
                     for(; loop163 < loopLimit163; loop163++) {
                        int* array6 = new int[969];
                        for (int i = 0; i < 355; i++) {
                           array3[i]++; 
                        }
                        int loop164 = 0;
                        int loopLimit164 = ceil((rand()%10)/8);
                        for(; loop164 < loopLimit164; loop164++) {
                           int* array7 = new int[274];
                           for (int i = 0; i < 355; i++) {
                              array3[i]++; 
                           }
                           for (int i = 0; i < 627; i++) {
                              array1[i]--; 
                           }
                        }
                        printf("DELETE!\n");
                        for (int i = 0; i < 886; i++) {
                           array2[i]--; 
                        }
                     }
                     printf("DELETE!\n");
                     for (int i = 0; i < 355; i++) {
                        array3[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 886; i++) {
                     array2[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 970; i++) {
                  array0[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 627; i++) {
               array1[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 970; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func10(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop143 = 0;
      int loopLimit143 = ceil((rand()%10)/2);
      for(; loop143 < loopLimit143; loop143++) {
         int* array0 = new int[504];
         for (int i = 0; i < 504; i++) {
            array0[i]++; 
         }
         int loop144 = 0;
         int loopLimit144 = ceil((rand()%10)/3);
         for(; loop144 < loopLimit144; loop144++) {
            int* array1 = new int[49];
            for (int i = 0; i < 504; i++) {
               array0[i]++; 
            }
            int loop145 = 0;
            int loopLimit145 = ceil((rand()%10)/4);
            for(; loop145 < loopLimit145; loop145++) {
               int* array2 = new int[285];
               for (int i = 0; i < 49; i++) {
                  array1[i]++; 
               }
               int loop146 = 0;
               int loopLimit146 = ceil((rand()%10)/5);
               for(; loop146 < loopLimit146; loop146++) {
                  int* array3 = new int[343];
                  for (int i = 0; i < 343; i++) {
                     array3[i]++; 
                  }
                  for (int i = 0; i < 49; i++) {
                     array1[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 49; i++) {
                  array1[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 504; i++) {
               array0[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 504; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func12(rng());
   }
   else {
      int* array0 = new int[690];
      for (int i = 0; i < 690; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 690; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 690; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 690; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 690; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop153 = 0;
      int loopLimit153 = ceil((rand()%10)/2);
      for(; loop153 < loopLimit153; loop153++) {
         int* array1 = new int[205];
         for (int i = 0; i < 690; i++) {
            array0[i]++; 
         }
         int loop154 = 0;
         int loopLimit154 = ceil((rand()%10)/3);
         for(; loop154 < loopLimit154; loop154++) {
            int* array2 = new int[312];
            for (int i = 0; i < 205; i++) {
               array1[i]++; 
            }
            int loop155 = 0;
            int loopLimit155 = ceil((rand()%10)/4);
            for(; loop155 < loopLimit155; loop155++) {
               int* array3 = new int[100];
               for (int i = 0; i < 312; i++) {
                  array2[i]++; 
               }
               int loop156 = 0;
               int loopLimit156 = ceil((rand()%10)/5);
               for(; loop156 < loopLimit156; loop156++) {
                  int* array4 = new int[726];
                  for (int i = 0; i < 726; i++) {
                     array4[i]++; 
                  }
                  int loop157 = 0;
                  int loopLimit157 = ceil((rand()%10)/6);
                  for(; loop157 < loopLimit157; loop157++) {
                     int* array5 = new int[916];
                     for (int i = 0; i < 312; i++) {
                        array2[i]++; 
                     }
                     for (int i = 0; i < 690; i++) {
                        array0[i]--; 
                     }
                  }
                  printf("DELETE!\n");
                  for (int i = 0; i < 726; i++) {
                     array4[i]--; 
                  }
               }
               printf("DELETE!\n");
               for (int i = 0; i < 312; i++) {
                  array2[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 205; i++) {
               array1[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 205; i++) {
            array1[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func12(const unsigned long PATH0) {
   if(PATH0 & 1) {
      int loop147 = 0;
      int loopLimit147 = ceil((rand()%10)/2);
      for(; loop147 < loopLimit147; loop147++) {
         int* array0 = new int[949];
         for (int i = 0; i < 949; i++) {
            array0[i]++; 
         }
         int loop148 = 0;
         int loopLimit148 = ceil((rand()%10)/3);
         for(; loop148 < loopLimit148; loop148++) {
            int* array1 = new int[367];
            for (int i = 0; i < 949; i++) {
               array0[i]++; 
            }
            for (int i = 0; i < 949; i++) {
               array0[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 949; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      func14(rng());
   }
   else {
      int* array0 = new int[232];
      for (int i = 0; i < 232; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 232; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 232; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 232; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 232; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop150 = 0;
      int loopLimit150 = ceil((rand()%10)/2);
      for(; loop150 < loopLimit150; loop150++) {
         int* array1 = new int[761];
         for (int i = 0; i < 761; i++) {
            array1[i]++; 
         }
         int loop151 = 0;
         int loopLimit151 = ceil((rand()%10)/3);
         for(; loop151 < loopLimit151; loop151++) {
            int* array2 = new int[309];
            for (int i = 0; i < 232; i++) {
               array0[i]++; 
            }
            int loop152 = 0;
            int loopLimit152 = ceil((rand()%10)/4);
            for(; loop152 < loopLimit152; loop152++) {
               int* array3 = new int[425];
               for (int i = 0; i < 232; i++) {
                  array0[i]++; 
               }
               for (int i = 0; i < 425; i++) {
                  array3[i]--; 
               }
            }
            printf("DELETE!\n");
            for (int i = 0; i < 309; i++) {
               array2[i]--; 
            }
         }
         printf("DELETE!\n");
         for (int i = 0; i < 232; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

void func14(const unsigned long PATH0) {
   if(PATH0 & 1) {
   }
   else {
      int* array0 = new int[743];
      for (int i = 0; i < 743; i++) {
         array0[i]++; 
      }
      for (int i = 0; i < 743; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      for (int i = 0; i < 743; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 743; i++) {
         array0[i]--; 
      }
      for (int i = 0; i < 743; i++) {
         if (array0[i] == 0) { 
            printf("IS 0!");
         }
      }
      int loop149 = 0;
      int loopLimit149 = ceil((rand()%10)/2);
      for(; loop149 < loopLimit149; loop149++) {
         int* array1 = new int[541];
         for (int i = 0; i < 541; i++) {
            array1[i]++; 
         }
         for (int i = 0; i < 743; i++) {
            array0[i]--; 
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
   }
}

