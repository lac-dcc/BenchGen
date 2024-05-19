#include <stdio.h>
#include <stdlib.h>


unsigned long rng();
void func0(const unsigned long PATH0, const unsigned long PATH1);
void func31();
void func32();
void func33();
void func34();
void func35();
void func25(const unsigned long PATH0);
void func26(const unsigned long PATH0);
void func27();
void func28(const unsigned long PATH0);
void func29(const unsigned long PATH0);
void func36();
void func19(const unsigned long PATH0);
void func20(const unsigned long PATH0);
void func21();
void func22(const unsigned long PATH0);
void func23(const unsigned long PATH0);
void func30();
void func13(const unsigned long PATH0);
void func14(const unsigned long PATH0);
void func15();
void func16(const unsigned long PATH0);
void func17(const unsigned long PATH0);
void func24();
void func7(const unsigned long PATH0);
void func8(const unsigned long PATH0);
void func9();
void func10(const unsigned long PATH0);
void func11(const unsigned long PATH0);
void func18();
void func1(const unsigned long PATH0);
void func2(const unsigned long PATH0);
void func3();
void func4(const unsigned long PATH0);
void func5(const unsigned long PATH0);
void func12();
void func6();

int main() {
   int scalar0 = 1;
   func0(rng(), rng());
   printf("DELETE!\n");
   return 0;
}

unsigned long rng() {
   srand(0);
   unsigned long n = rand();
   srand(0);
   return (n << 32) | rand();
}

void func0(const unsigned long PATH0, const unsigned long PATH1) {
   int loop0 = 0;
   int loopLimit0 = (rand()%10)/1 + 1;
   for(; loop0 < loopLimit0; loop0++) {
      int loop1 = 0;
      int loopLimit1 = (rand()%10)/2 + 1;
      for(; loop1 < loopLimit1; loop1++) {
         int loop2 = 0;
         int loopLimit2 = (rand()%10)/3 + 1;
         for(; loop2 < loopLimit2; loop2++) {
            int loop3 = 0;
            int loopLimit3 = (rand()%10)/4 + 1;
            for(; loop3 < loopLimit3; loop3++) {
               int loop4 = 0;
               int loopLimit4 = (rand()%10)/5 + 1;
               for(; loop4 < loopLimit4; loop4++) {
                  int loop5 = 0;
                  int loopLimit5 = (rand()%10)/6 + 1;
                  for(; loop5 < loopLimit5; loop5++) {
                     int loop6 = 0;
                     int loopLimit6 = (rand()%10)/7 + 1;
                     for(; loop6 < loopLimit6; loop6++) {
                        if(PATH0 & 1) {
                        }
                        else {
                           func31();
                        }
                     }
                     if(PATH0 & 2) {
                        func32();
                        func33();
                        func34();
                        func35();
                     }
                     else {
                        func25(rng());
                     }
                  }
                  if(PATH0 & 4) {
                     func26(rng());
                     func27();
                     func28(rng());
                     func29(rng());
                  }
                  else {
                     func19(rng());
                  }
               }
               if(PATH0 & 8) {
                  func20(rng());
                  func21();
                  func22(rng());
                  func23(rng());
               }
               else {
                  func13(rng());
               }
            }
            if(PATH0 & 16) {
               func14(rng());
               func15();
               func16(rng());
               func17(rng());
            }
            else {
               func7(rng());
            }
         }
         if(PATH0 & 32) {
            func8(rng());
            func9();
            func10(rng());
            func11(rng());
         }
         else {
            func1(rng());
         }
      }
      func2(rng());
      func3();
      func4(rng());
      func5(rng());
      int scalar1 = 1;
      scalar1++;
      int loop191 = 0;
      int loopLimit191 = (rand()%10)/2 + 1;
      for(; loop191 < loopLimit191; loop191++) {
         int loop192 = 0;
         int loopLimit192 = (rand()%10)/3 + 1;
         for(; loop192 < loopLimit192; loop192++) {
            int loop193 = 0;
            int loopLimit193 = (rand()%10)/4 + 1;
            for(; loop193 < loopLimit193; loop193++) {
               int loop194 = 0;
               int loopLimit194 = (rand()%10)/5 + 1;
               for(; loop194 < loopLimit194; loop194++) {
                  int loop195 = 0;
                  int loopLimit195 = (rand()%10)/6 + 1;
                  for(; loop195 < loopLimit195; loop195++) {
                     int loop196 = 0;
                     int loopLimit196 = (rand()%10)/7 + 1;
                     for(; loop196 < loopLimit196; loop196++) {
                        if(PATH0 & 64) {
                        }
                        else {
                           func31();
                        }
                     }
                     if(PATH0 & 128) {
                        func32();
                        func33();
                        func34();
                        func35();
                     }
                     else {
                        func25(rng());
                     }
                  }
                  if(PATH0 & 256) {
                     func26(rng());
                     func27();
                     func28(rng());
                     func29(rng());
                  }
                  else {
                     func19(rng());
                  }
               }
               if(PATH0 & 512) {
                  func20(rng());
                  func21();
                  func22(rng());
                  func23(rng());
               }
               else {
                  func13(rng());
               }
            }
            if(PATH0 & 1024) {
               func14(rng());
               func15();
               func16(rng());
               func17(rng());
            }
            else {
               func7(rng());
            }
         }
         if(PATH0 & 2048) {
            func10(rng());
         }
         else {
            int scalar2 = 1;
            if(PATH0 & 4096) {
               func12();
            }
            else {
               int loop197 = 0;
               int loopLimit197 = (rand()%10)/3 + 1;
               for(; loop197 < loopLimit197; loop197++) {
                  int scalar3 = 1;
                  scalar3++;
                  int loop198 = 0;
                  int loopLimit198 = (rand()%10)/4 + 1;
                  for(; loop198 < loopLimit198; loop198++) {
                     int loop199 = 0;
                     int loopLimit199 = (rand()%10)/5 + 1;
                     for(; loop199 < loopLimit199; loop199++) {
                        int loop200 = 0;
                        int loopLimit200 = (rand()%10)/6 + 1;
                        for(; loop200 < loopLimit200; loop200++) {
                           int loop201 = 0;
                           int loopLimit201 = (rand()%10)/7 + 1;
                           for(; loop201 < loopLimit201; loop201++) {
                              if(PATH0 & 8192) {
                              }
                              else {
                                 func31();
                              }
                           }
                           if(PATH0 & 16384) {
                              func32();
                              func33();
                              func34();
                              func35();
                           }
                           else {
                              func25(rng());
                           }
                        }
                        if(PATH0 & 32768) {
                           func26(rng());
                           func27();
                           func28(rng());
                           func29(rng());
                        }
                        else {
                           func19(rng());
                        }
                     }
                     if(PATH0 & 65536) {
                        func22(rng());
                     }
                     else {
                        int scalar4 = 1;
                        if(PATH0 & 131072) {
                           func24();
                        }
                        else {
                           int loop202 = 0;
                           int loopLimit202 = (rand()%10)/5 + 1;
                           for(; loop202 < loopLimit202; loop202++) {
                              int scalar5 = 1;
                              scalar5++;
                              int loop203 = 0;
                              int loopLimit203 = (rand()%10)/6 + 1;
                              for(; loop203 < loopLimit203; loop203++) {
                                 int loop204 = 0;
                                 int loopLimit204 = (rand()%10)/7 + 1;
                                 for(; loop204 < loopLimit204; loop204++) {
                                    if(PATH0 & 262144) {
                                    }
                                    else {
                                       func31();
                                    }
                                 }
                                 if(PATH0 & 524288) {
                                    func34();
                                 }
                                 else {
                                    int scalar6 = 1;
                                    if(PATH0 & 1048576) {
                                       func36();
                                    }
                                    else {
                                       int loop205 = 0;
                                       int loopLimit205 = (rand()%10)/7 + 1;
                                       for(; loop205 < loopLimit205; loop205++) {
                                       }
                                    }
                                 }
                              }
                              int scalar6 = 1;
                              if(PATH0 & 2097152) {
                                 scalar5--;
                              }
                              else {
                                 int loop206 = 0;
                                 int loopLimit206 = (rand()%10)/6 + 1;
                                 for(; loop206 < loopLimit206; loop206++) {
                                    scalar3++;
                                 }
                              }
                              int scalar7 = 1;
                              scalar1++;
                              if(PATH0 & 4194304) {
                                 func34();
                              }
                              else {
                                 int scalar8 = 1;
                                 if(PATH0 & 8388608) {
                                    func36();
                                 }
                                 else {
                                    int loop207 = 0;
                                    int loopLimit207 = (rand()%10)/6 + 1;
                                    for(; loop207 < loopLimit207; loop207++) {
                                    }
                                 }
                              }
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                              printf("DELETE!\n");
                           }
                        }
                     }
                  }
                  int scalar4 = 1;
                  if(PATH0 & 16777216) {
                     scalar2--;
                  }
                  else {
                     int loop208 = 0;
                     int loopLimit208 = (rand()%10)/4 + 1;
                     for(; loop208 < loopLimit208; loop208++) {
                        scalar3++;
                     }
                  }
                  int scalar5 = 1;
                  scalar4++;
                  if(PATH0 & 33554432) {
                     func22(rng());
                  }
                  else {
                     int scalar6 = 1;
                     if(PATH0 & 67108864) {
                        func24();
                     }
                     else {
                        int loop209 = 0;
                        int loopLimit209 = (rand()%10)/4 + 1;
                        for(; loop209 < loopLimit209; loop209++) {
                           int scalar7 = 1;
                           scalar7++;
                           int loop210 = 0;
                           int loopLimit210 = (rand()%10)/5 + 1;
                           for(; loop210 < loopLimit210; loop210++) {
                              int loop211 = 0;
                              int loopLimit211 = (rand()%10)/6 + 1;
                              for(; loop211 < loopLimit211; loop211++) {
                                 if(PATH0 & 134217728) {
                                 }
                                 else {
                                    func31();
                                 }
                              }
                              if(PATH0 & 268435456) {
                                 func34();
                              }
                              else {
                                 int scalar8 = 1;
                                 if(PATH0 & 536870912) {
                                    func36();
                                 }
                                 else {
                                    int loop212 = 0;
                                    int loopLimit212 = (rand()%10)/6 + 1;
                                    for(; loop212 < loopLimit212; loop212++) {
                                    }
                                 }
                              }
                           }
                           int scalar8 = 1;
                           if(PATH0 & 1073741824) {
                              scalar3--;
                           }
                           else {
                              int loop213 = 0;
                              int loopLimit213 = (rand()%10)/5 + 1;
                              for(; loop213 < loopLimit213; loop213++) {
                                 scalar5++;
                              }
                           }
                           int scalar9 = 1;
                           scalar7++;
                           if(PATH0 & -2147483648) {
                              func34();
                           }
                           else {
                              int scalar10 = 1;
                              if(PATH0 & -2147483648) {
                                 func36();
                              }
                              else {
                                 int loop214 = 0;
                                 int loopLimit214 = (rand()%10)/5 + 1;
                                 for(; loop214 < loopLimit214; loop214++) {
                                 }
                              }
                           }
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                        }
                     }
                  }
                  printf("DELETE!\n");
                  printf("DELETE!\n");
                  printf("DELETE!\n");
               }
            }
         }
      }
      int scalar2 = 1;
      if(PATH0 & -2147483648) {
         scalar1--;
      }
      else {
         int loop215 = 0;
         int loopLimit215 = (rand()%10)/2 + 1;
         for(; loop215 < loopLimit215; loop215++) {
            scalar2++;
         }
      }
      int scalar3 = 1;
      scalar3++;
      if(PATH0 & -2147483648) {
         func10(rng());
      }
      else {
         int scalar4 = 1;
         if(PATH0 & -2147483648) {
            func12();
         }
         else {
            int loop216 = 0;
            int loopLimit216 = (rand()%10)/2 + 1;
            for(; loop216 < loopLimit216; loop216++) {
               int scalar5 = 1;
               scalar4++;
               int loop217 = 0;
               int loopLimit217 = (rand()%10)/3 + 1;
               for(; loop217 < loopLimit217; loop217++) {
                  int loop218 = 0;
                  int loopLimit218 = (rand()%10)/4 + 1;
                  for(; loop218 < loopLimit218; loop218++) {
                     int loop219 = 0;
                     int loopLimit219 = (rand()%10)/5 + 1;
                     for(; loop219 < loopLimit219; loop219++) {
                        int loop220 = 0;
                        int loopLimit220 = (rand()%10)/6 + 1;
                        for(; loop220 < loopLimit220; loop220++) {
                           if(PATH0 & -2147483648) {
                           }
                           else {
                              func31();
                           }
                        }
                        if(PATH0 & -2147483648) {
                           func32();
                           func33();
                           func34();
                           func35();
                        }
                        else {
                           func25(rng());
                        }
                     }
                     if(PATH0 & -2147483648) {
                        func26(rng());
                        func27();
                        func28(rng());
                        func29(rng());
                     }
                     else {
                        func19(rng());
                     }
                  }
                  if(PATH0 & -2147483648) {
                     func22(rng());
                  }
                  else {
                     int scalar6 = 1;
                     if(PATH0 & -2147483648) {
                        func24();
                     }
                     else {
                        int loop221 = 0;
                        int loopLimit221 = (rand()%10)/4 + 1;
                        for(; loop221 < loopLimit221; loop221++) {
                           int scalar7 = 1;
                           scalar1++;
                           int loop222 = 0;
                           int loopLimit222 = (rand()%10)/5 + 1;
                           for(; loop222 < loopLimit222; loop222++) {
                              int loop223 = 0;
                              int loopLimit223 = (rand()%10)/6 + 1;
                              for(; loop223 < loopLimit223; loop223++) {
                                 if(PATH0 & -2147483648) {
                                 }
                                 else {
                                    func31();
                                 }
                              }
                              if(PATH0 & -2147483648) {
                                 func34();
                              }
                              else {
                                 int scalar8 = 1;
                                 if(PATH0 & -2147483648) {
                                    func36();
                                 }
                                 else {
                                    int loop224 = 0;
                                    int loopLimit224 = (rand()%10)/6 + 1;
                                    for(; loop224 < loopLimit224; loop224++) {
                                    }
                                 }
                              }
                           }
                           int scalar8 = 1;
                           if(PATH0 & -2147483648) {
                              scalar4--;
                           }
                           else {
                              int loop225 = 0;
                              int loopLimit225 = (rand()%10)/5 + 1;
                              for(; loop225 < loopLimit225; loop225++) {
                                 scalar6++;
                              }
                           }
                           int scalar9 = 1;
                           scalar1++;
                           if(PATH0 & -2147483648) {
                              func34();
                           }
                           else {
                              int scalar10 = 1;
                              if(PATH0 & -2147483648) {
                                 func36();
                              }
                              else {
                                 int loop226 = 0;
                                 int loopLimit226 = (rand()%10)/5 + 1;
                                 for(; loop226 < loopLimit226; loop226++) {
                                 }
                              }
                           }
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                        }
                     }
                  }
               }
               int scalar6 = 1;
               if(PATH0 & -2147483648) {
                  scalar5--;
               }
               else {
                  int loop227 = 0;
                  int loopLimit227 = (rand()%10)/3 + 1;
                  for(; loop227 < loopLimit227; loop227++) {
                     scalar5++;
                  }
               }
               int scalar7 = 1;
               scalar5++;
               if(PATH0 & -2147483648) {
                  func22(rng());
               }
               else {
                  int scalar8 = 1;
                  if(PATH0 & -2147483648) {
                     func24();
                  }
                  else {
                     int loop228 = 0;
                     int loopLimit228 = (rand()%10)/3 + 1;
                     for(; loop228 < loopLimit228; loop228++) {
                        int scalar9 = 1;
                        scalar9++;
                        int loop229 = 0;
                        int loopLimit229 = (rand()%10)/4 + 1;
                        for(; loop229 < loopLimit229; loop229++) {
                           int loop230 = 0;
                           int loopLimit230 = (rand()%10)/5 + 1;
                           for(; loop230 < loopLimit230; loop230++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                                 func31();
                              }
                           }
                           if(PATH0 & -2147483648) {
                              func34();
                           }
                           else {
                              int scalar10 = 1;
                              if(PATH0 & -2147483648) {
                                 func36();
                              }
                              else {
                                 int loop231 = 0;
                                 int loopLimit231 = (rand()%10)/5 + 1;
                                 for(; loop231 < loopLimit231; loop231++) {
                                 }
                              }
                           }
                        }
                        int scalar10 = 1;
                        if(PATH0 & -2147483648) {
                           scalar9--;
                        }
                        else {
                           int loop232 = 0;
                           int loopLimit232 = (rand()%10)/4 + 1;
                           for(; loop232 < loopLimit232; loop232++) {
                              scalar6++;
                           }
                        }
                        int scalar11 = 1;
                        scalar9++;
                        if(PATH0 & -2147483648) {
                           func34();
                        }
                        else {
                           int scalar12 = 1;
                           if(PATH0 & -2147483648) {
                              func36();
                           }
                           else {
                              int loop233 = 0;
                              int loopLimit233 = (rand()%10)/4 + 1;
                              for(; loop233 < loopLimit233; loop233++) {
                              }
                           }
                        }
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
      printf("DELETE!\n");
      printf("DELETE!\n");
      printf("DELETE!\n");
      if(PATH0 & -2147483648) {
         func4(rng());
      }
      else {
         int scalar4 = 1;
         if(PATH0 & -2147483648) {
            func6();
         }
         else {
            int loop234 = 0;
            int loopLimit234 = (rand()%10)/2 + 1;
            for(; loop234 < loopLimit234; loop234++) {
               int scalar5 = 1;
               scalar5++;
               int loop235 = 0;
               int loopLimit235 = (rand()%10)/3 + 1;
               for(; loop235 < loopLimit235; loop235++) {
                  int loop236 = 0;
                  int loopLimit236 = (rand()%10)/4 + 1;
                  for(; loop236 < loopLimit236; loop236++) {
                     int loop237 = 0;
                     int loopLimit237 = (rand()%10)/5 + 1;
                     for(; loop237 < loopLimit237; loop237++) {
                        int loop238 = 0;
                        int loopLimit238 = (rand()%10)/6 + 1;
                        for(; loop238 < loopLimit238; loop238++) {
                           int loop239 = 0;
                           int loopLimit239 = (rand()%10)/7 + 1;
                           for(; loop239 < loopLimit239; loop239++) {
                              if(PATH0 & -2147483648) {
                              }
                              else {
                                 func31();
                              }
                           }
                           if(PATH0 & -2147483648) {
                              func32();
                              func33();
                              func34();
                              func35();
                           }
                           else {
                              func25(rng());
                           }
                        }
                        if(PATH0 & -2147483648) {
                           func26(rng());
                           func27();
                           func28(rng());
                           func29(rng());
                        }
                        else {
                           func19(rng());
                        }
                     }
                     if(PATH0 & -2147483648) {
                        func20(rng());
                        func21();
                        func22(rng());
                        func23(rng());
                     }
                     else {
                        func13(rng());
                     }
                  }
                  if(PATH0 & -2147483648) {
                     func16(rng());
                  }
                  else {
                     int scalar6 = 1;
                     if(PATH0 & -2147483648) {
                        func18();
                     }
                     else {
                        int loop240 = 0;
                        int loopLimit240 = (rand()%10)/4 + 1;
                        for(; loop240 < loopLimit240; loop240++) {
                           int scalar7 = 1;
                           scalar2++;
                           int loop241 = 0;
                           int loopLimit241 = (rand()%10)/5 + 1;
                           for(; loop241 < loopLimit241; loop241++) {
                              int loop242 = 0;
                              int loopLimit242 = (rand()%10)/6 + 1;
                              for(; loop242 < loopLimit242; loop242++) {
                                 int loop243 = 0;
                                 int loopLimit243 = (rand()%10)/7 + 1;
                                 for(; loop243 < loopLimit243; loop243++) {
                                    if(PATH1 & 1) {
                                    }
                                    else {
                                       func31();
                                    }
                                 }
                                 if(PATH1 & 2) {
                                    func32();
                                    func33();
                                    func34();
                                    func35();
                                 }
                                 else {
                                    func25(rng());
                                 }
                              }
                              if(PATH1 & 4) {
                                 func28(rng());
                              }
                              else {
                                 int scalar8 = 1;
                                 if(PATH1 & 8) {
                                    func30();
                                 }
                                 else {
                                    int loop244 = 0;
                                    int loopLimit244 = (rand()%10)/6 + 1;
                                    for(; loop244 < loopLimit244; loop244++) {
                                       int scalar9 = 1;
                                       scalar9++;
                                       int loop245 = 0;
                                       int loopLimit245 = (rand()%10)/7 + 1;
                                       for(; loop245 < loopLimit245; loop245++) {
                                       }
                                       int scalar10 = 1;
                                       if(PATH1 & 16) {
                                          scalar6--;
                                       }
                                       else {
                                          int loop246 = 0;
                                          int loopLimit246 = (rand()%10)/7 + 1;
                                          for(; loop246 < loopLimit246; loop246++) {
                                             scalar10++;
                                          }
                                       }
                                       int scalar11 = 1;
                                       scalar9++;
                                       printf("DELETE!\n");
                                       printf("DELETE!\n");
                                       printf("DELETE!\n");
                                    }
                                 }
                              }
                           }
                           int scalar8 = 1;
                           if(PATH1 & 32) {
                              scalar4--;
                           }
                           else {
                              int loop247 = 0;
                              int loopLimit247 = (rand()%10)/5 + 1;
                              for(; loop247 < loopLimit247; loop247++) {
                                 scalar2++;
                              }
                           }
                           int scalar9 = 1;
                           scalar6++;
                           if(PATH1 & 64) {
                              func28(rng());
                           }
                           else {
                              int scalar10 = 1;
                              if(PATH1 & 128) {
                                 func30();
                              }
                              else {
                                 int loop248 = 0;
                                 int loopLimit248 = (rand()%10)/5 + 1;
                                 for(; loop248 < loopLimit248; loop248++) {
                                    int scalar11 = 1;
                                    scalar7++;
                                    int loop249 = 0;
                                    int loopLimit249 = (rand()%10)/6 + 1;
                                    for(; loop249 < loopLimit249; loop249++) {
                                    }
                                    int scalar12 = 1;
                                    if(PATH1 & 256) {
                                       scalar4--;
                                    }
                                    else {
                                       int loop250 = 0;
                                       int loopLimit250 = (rand()%10)/6 + 1;
                                       for(; loop250 < loopLimit250; loop250++) {
                                          scalar4++;
                                       }
                                    }
                                    int scalar13 = 1;
                                    scalar12++;
                                    printf("DELETE!\n");
                                    printf("DELETE!\n");
                                    printf("DELETE!\n");
                                 }
                              }
                           }
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                        }
                     }
                  }
               }
               int scalar6 = 1;
               if(PATH1 & 512) {
                  scalar4--;
               }
               else {
                  int loop251 = 0;
                  int loopLimit251 = (rand()%10)/3 + 1;
                  for(; loop251 < loopLimit251; loop251++) {
                     scalar3++;
                  }
               }
               int scalar7 = 1;
               scalar7++;
               if(PATH1 & 1024) {
                  func16(rng());
               }
               else {
                  int scalar8 = 1;
                  if(PATH1 & 2048) {
                     func18();
                  }
                  else {
                     int loop252 = 0;
                     int loopLimit252 = (rand()%10)/3 + 1;
                     for(; loop252 < loopLimit252; loop252++) {
                        int scalar9 = 1;
                        scalar8++;
                        int loop253 = 0;
                        int loopLimit253 = (rand()%10)/4 + 1;
                        for(; loop253 < loopLimit253; loop253++) {
                           int loop254 = 0;
                           int loopLimit254 = (rand()%10)/5 + 1;
                           for(; loop254 < loopLimit254; loop254++) {
                              int loop255 = 0;
                              int loopLimit255 = (rand()%10)/6 + 1;
                              for(; loop255 < loopLimit255; loop255++) {
                                 if(PATH1 & 4096) {
                                 }
                                 else {
                                    func31();
                                 }
                              }
                              if(PATH1 & 8192) {
                                 func32();
                                 func33();
                                 func34();
                                 func35();
                              }
                              else {
                                 func25(rng());
                              }
                           }
                           if(PATH1 & 16384) {
                              func28(rng());
                           }
                           else {
                              int scalar10 = 1;
                              if(PATH1 & 32768) {
                                 func30();
                              }
                              else {
                                 int loop256 = 0;
                                 int loopLimit256 = (rand()%10)/5 + 1;
                                 for(; loop256 < loopLimit256; loop256++) {
                                    int scalar11 = 1;
                                    scalar3++;
                                    int loop257 = 0;
                                    int loopLimit257 = (rand()%10)/6 + 1;
                                    for(; loop257 < loopLimit257; loop257++) {
                                    }
                                    int scalar12 = 1;
                                    if(PATH1 & 65536) {
                                       scalar6--;
                                    }
                                    else {
                                       int loop258 = 0;
                                       int loopLimit258 = (rand()%10)/6 + 1;
                                       for(; loop258 < loopLimit258; loop258++) {
                                          scalar3++;
                                       }
                                    }
                                    int scalar13 = 1;
                                    scalar9++;
                                    printf("DELETE!\n");
                                    printf("DELETE!\n");
                                    printf("DELETE!\n");
                                 }
                              }
                           }
                        }
                        int scalar10 = 1;
                        if(PATH1 & 131072) {
                           scalar1--;
                        }
                        else {
                           int loop259 = 0;
                           int loopLimit259 = (rand()%10)/4 + 1;
                           for(; loop259 < loopLimit259; loop259++) {
                              scalar5++;
                           }
                        }
                        int scalar11 = 1;
                        scalar2++;
                        if(PATH1 & 262144) {
                           func28(rng());
                        }
                        else {
                           int scalar12 = 1;
                           if(PATH1 & 524288) {
                              func30();
                           }
                           else {
                              int loop260 = 0;
                              int loopLimit260 = (rand()%10)/4 + 1;
                              for(; loop260 < loopLimit260; loop260++) {
                                 int scalar13 = 1;
                                 scalar2++;
                                 int loop261 = 0;
                                 int loopLimit261 = (rand()%10)/5 + 1;
                                 for(; loop261 < loopLimit261; loop261++) {
                                 }
                                 int scalar14 = 1;
                                 if(PATH1 & 1048576) {
                                    scalar5--;
                                 }
                                 else {
                                    int loop262 = 0;
                                    int loopLimit262 = (rand()%10)/5 + 1;
                                    for(; loop262 < loopLimit262; loop262++) {
                                       scalar14++;
                                    }
                                 }
                                 int scalar15 = 1;
                                 scalar13++;
                                 printf("DELETE!\n");
                                 printf("DELETE!\n");
                                 printf("DELETE!\n");
                              }
                           }
                        }
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
}

void func31() {
   int scalar1 = 1;
   printf("DELETE!\n");
}

void func32() {
}

void func33() {
   int loop7 = 0;
   int loopLimit7 = (rand()%10)/7 + 1;
   for(; loop7 < loopLimit7; loop7++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      printf("DELETE!\n");
   }
}

void func34() {
}

void func35() {
}

void func25(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar1++;
   int loop8 = 0;
   int loopLimit8 = (rand()%10)/7 + 1;
   for(; loop8 < loopLimit8; loop8++) {
   }
   int scalar3 = 1;
   if(PATH0 & 1) {
      scalar1--;
   }
   else {
      int loop9 = 0;
      int loopLimit9 = (rand()%10)/7 + 1;
      for(; loop9 < loopLimit9; loop9++) {
         scalar2++;
      }
   }
   int scalar4 = 1;
   scalar2++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func26(const unsigned long PATH0) {
   int loop10 = 0;
   int loopLimit10 = (rand()%10)/6 + 1;
   for(; loop10 < loopLimit10; loop10++) {
      if(PATH0 & 1) {
      }
      else {
         func31();
      }
   }
}

void func27() {
   int loop11 = 0;
   int loopLimit11 = (rand()%10)/6 + 1;
   for(; loop11 < loopLimit11; loop11++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func32();
      func33();
      func34();
      func35();
      printf("DELETE!\n");
   }
}

void func28(const unsigned long PATH0) {
   int scalar1 = 1;
   scalar1++;
   int loop12 = 0;
   int loopLimit12 = (rand()%10)/6 + 1;
   for(; loop12 < loopLimit12; loop12++) {
   }
   int scalar2 = 1;
   if(PATH0 & 1) {
      scalar1--;
   }
   else {
      int loop13 = 0;
      int loopLimit13 = (rand()%10)/6 + 1;
      for(; loop13 < loopLimit13; loop13++) {
         scalar2++;
      }
   }
   int scalar3 = 1;
   scalar2++;
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func29(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func34();
   }
   else {
      int scalar1 = 1;
      if(PATH0 & 2) {
         func36();
      }
      else {
         int loop14 = 0;
         int loopLimit14 = (rand()%10)/6 + 1;
         for(; loop14 < loopLimit14; loop14++) {
         }
      }
   }
}

void func36() {
}

void func19(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar1++;
   int loop15 = 0;
   int loopLimit15 = (rand()%10)/6 + 1;
   for(; loop15 < loopLimit15; loop15++) {
      int loop16 = 0;
      int loopLimit16 = (rand()%10)/7 + 1;
      for(; loop16 < loopLimit16; loop16++) {
         if(PATH0 & 1) {
         }
         else {
            func31();
         }
      }
      if(PATH0 & 2) {
         func34();
      }
      else {
         int scalar3 = 1;
         if(PATH0 & 4) {
            func36();
         }
         else {
            int loop17 = 0;
            int loopLimit17 = (rand()%10)/7 + 1;
            for(; loop17 < loopLimit17; loop17++) {
            }
         }
      }
   }
   int scalar3 = 1;
   if(PATH0 & 8) {
      scalar2--;
   }
   else {
      int loop18 = 0;
      int loopLimit18 = (rand()%10)/6 + 1;
      for(; loop18 < loopLimit18; loop18++) {
         scalar3++;
      }
   }
   int scalar4 = 1;
   scalar4++;
   if(PATH0 & 16) {
      func34();
   }
   else {
      int scalar5 = 1;
      if(PATH0 & 32) {
         func36();
      }
      else {
         int loop19 = 0;
         int loopLimit19 = (rand()%10)/6 + 1;
         for(; loop19 < loopLimit19; loop19++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func20(const unsigned long PATH0) {
   int loop20 = 0;
   int loopLimit20 = (rand()%10)/5 + 1;
   for(; loop20 < loopLimit20; loop20++) {
      int loop21 = 0;
      int loopLimit21 = (rand()%10)/6 + 1;
      for(; loop21 < loopLimit21; loop21++) {
         if(PATH0 & 1) {
         }
         else {
            func31();
         }
      }
      if(PATH0 & 2) {
         func32();
         func33();
         func34();
         func35();
      }
      else {
         func25(rng());
      }
   }
}

void func21() {
   int loop22 = 0;
   int loopLimit22 = (rand()%10)/5 + 1;
   for(; loop22 < loopLimit22; loop22++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func26(rng());
      func27();
      func28(rng());
      func29(rng());
      printf("DELETE!\n");
   }
}

void func22(const unsigned long PATH0) {
   int scalar1 = 1;
   scalar1++;
   int loop23 = 0;
   int loopLimit23 = (rand()%10)/5 + 1;
   for(; loop23 < loopLimit23; loop23++) {
      int loop24 = 0;
      int loopLimit24 = (rand()%10)/6 + 1;
      for(; loop24 < loopLimit24; loop24++) {
         if(PATH0 & 1) {
         }
         else {
            func31();
         }
      }
      if(PATH0 & 2) {
         func34();
      }
      else {
         int scalar2 = 1;
         if(PATH0 & 4) {
            func36();
         }
         else {
            int loop25 = 0;
            int loopLimit25 = (rand()%10)/6 + 1;
            for(; loop25 < loopLimit25; loop25++) {
            }
         }
      }
   }
   int scalar2 = 1;
   if(PATH0 & 8) {
      scalar1--;
   }
   else {
      int loop26 = 0;
      int loopLimit26 = (rand()%10)/5 + 1;
      for(; loop26 < loopLimit26; loop26++) {
         scalar1++;
      }
   }
   int scalar3 = 1;
   scalar2++;
   if(PATH0 & 16) {
      func34();
   }
   else {
      int scalar4 = 1;
      if(PATH0 & 32) {
         func36();
      }
      else {
         int loop27 = 0;
         int loopLimit27 = (rand()%10)/5 + 1;
         for(; loop27 < loopLimit27; loop27++) {
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func23(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func28(rng());
   }
   else {
      int scalar1 = 1;
      if(PATH0 & 2) {
         func30();
      }
      else {
         int loop28 = 0;
         int loopLimit28 = (rand()%10)/5 + 1;
         for(; loop28 < loopLimit28; loop28++) {
            int scalar2 = 1;
            scalar1++;
            int loop29 = 0;
            int loopLimit29 = (rand()%10)/6 + 1;
            for(; loop29 < loopLimit29; loop29++) {
            }
            int scalar3 = 1;
            if(PATH0 & 4) {
               scalar3--;
            }
            else {
               int loop30 = 0;
               int loopLimit30 = (rand()%10)/6 + 1;
               for(; loop30 < loopLimit30; loop30++) {
                  scalar3++;
               }
            }
            int scalar4 = 1;
            scalar4++;
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func30() {
   func32();
   func33();
   func34();
   func35();
}

void func13(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar2++;
   int loop31 = 0;
   int loopLimit31 = (rand()%10)/5 + 1;
   for(; loop31 < loopLimit31; loop31++) {
      int loop32 = 0;
      int loopLimit32 = (rand()%10)/6 + 1;
      for(; loop32 < loopLimit32; loop32++) {
         int loop33 = 0;
         int loopLimit33 = (rand()%10)/7 + 1;
         for(; loop33 < loopLimit33; loop33++) {
            if(PATH0 & 1) {
            }
            else {
               func31();
            }
         }
         if(PATH0 & 2) {
            func32();
            func33();
            func34();
            func35();
         }
         else {
            func25(rng());
         }
      }
      if(PATH0 & 4) {
         func28(rng());
      }
      else {
         int scalar3 = 1;
         if(PATH0 & 8) {
            func30();
         }
         else {
            int loop34 = 0;
            int loopLimit34 = (rand()%10)/6 + 1;
            for(; loop34 < loopLimit34; loop34++) {
               int scalar4 = 1;
               scalar3++;
               int loop35 = 0;
               int loopLimit35 = (rand()%10)/7 + 1;
               for(; loop35 < loopLimit35; loop35++) {
               }
               int scalar5 = 1;
               if(PATH0 & 16) {
                  scalar1--;
               }
               else {
                  int loop36 = 0;
                  int loopLimit36 = (rand()%10)/7 + 1;
                  for(; loop36 < loopLimit36; loop36++) {
                     scalar3++;
                  }
               }
               int scalar6 = 1;
               scalar2++;
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   int scalar3 = 1;
   if(PATH0 & 32) {
      scalar2--;
   }
   else {
      int loop37 = 0;
      int loopLimit37 = (rand()%10)/5 + 1;
      for(; loop37 < loopLimit37; loop37++) {
         scalar2++;
      }
   }
   int scalar4 = 1;
   scalar2++;
   if(PATH0 & 64) {
      func28(rng());
   }
   else {
      int scalar5 = 1;
      if(PATH0 & 128) {
         func30();
      }
      else {
         int loop38 = 0;
         int loopLimit38 = (rand()%10)/5 + 1;
         for(; loop38 < loopLimit38; loop38++) {
            int scalar6 = 1;
            scalar1++;
            int loop39 = 0;
            int loopLimit39 = (rand()%10)/6 + 1;
            for(; loop39 < loopLimit39; loop39++) {
            }
            int scalar7 = 1;
            if(PATH0 & 256) {
               scalar4--;
            }
            else {
               int loop40 = 0;
               int loopLimit40 = (rand()%10)/6 + 1;
               for(; loop40 < loopLimit40; loop40++) {
                  scalar6++;
               }
            }
            int scalar8 = 1;
            scalar6++;
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func14(const unsigned long PATH0) {
   int loop41 = 0;
   int loopLimit41 = (rand()%10)/4 + 1;
   for(; loop41 < loopLimit41; loop41++) {
      int loop42 = 0;
      int loopLimit42 = (rand()%10)/5 + 1;
      for(; loop42 < loopLimit42; loop42++) {
         int loop43 = 0;
         int loopLimit43 = (rand()%10)/6 + 1;
         for(; loop43 < loopLimit43; loop43++) {
            if(PATH0 & 1) {
            }
            else {
               func31();
            }
         }
         if(PATH0 & 2) {
            func32();
            func33();
            func34();
            func35();
         }
         else {
            func25(rng());
         }
      }
      if(PATH0 & 4) {
         func26(rng());
         func27();
         func28(rng());
         func29(rng());
      }
      else {
         func19(rng());
      }
   }
}

void func15() {
   int loop44 = 0;
   int loopLimit44 = (rand()%10)/4 + 1;
   for(; loop44 < loopLimit44; loop44++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func20(rng());
      func21();
      func22(rng());
      func23(rng());
      printf("DELETE!\n");
   }
}

void func16(const unsigned long PATH0) {
   int scalar1 = 1;
   scalar1++;
   int loop45 = 0;
   int loopLimit45 = (rand()%10)/4 + 1;
   for(; loop45 < loopLimit45; loop45++) {
      int loop46 = 0;
      int loopLimit46 = (rand()%10)/5 + 1;
      for(; loop46 < loopLimit46; loop46++) {
         int loop47 = 0;
         int loopLimit47 = (rand()%10)/6 + 1;
         for(; loop47 < loopLimit47; loop47++) {
            if(PATH0 & 1) {
            }
            else {
               func31();
            }
         }
         if(PATH0 & 2) {
            func32();
            func33();
            func34();
            func35();
         }
         else {
            func25(rng());
         }
      }
      if(PATH0 & 4) {
         func28(rng());
      }
      else {
         int scalar2 = 1;
         if(PATH0 & 8) {
            func30();
         }
         else {
            int loop48 = 0;
            int loopLimit48 = (rand()%10)/5 + 1;
            for(; loop48 < loopLimit48; loop48++) {
               int scalar3 = 1;
               scalar2++;
               int loop49 = 0;
               int loopLimit49 = (rand()%10)/6 + 1;
               for(; loop49 < loopLimit49; loop49++) {
               }
               int scalar4 = 1;
               if(PATH0 & 16) {
                  scalar4--;
               }
               else {
                  int loop50 = 0;
                  int loopLimit50 = (rand()%10)/6 + 1;
                  for(; loop50 < loopLimit50; loop50++) {
                     scalar3++;
                  }
               }
               int scalar5 = 1;
               scalar5++;
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   int scalar2 = 1;
   if(PATH0 & 32) {
      scalar2--;
   }
   else {
      int loop51 = 0;
      int loopLimit51 = (rand()%10)/4 + 1;
      for(; loop51 < loopLimit51; loop51++) {
         scalar2++;
      }
   }
   int scalar3 = 1;
   scalar3++;
   if(PATH0 & 64) {
      func28(rng());
   }
   else {
      int scalar4 = 1;
      if(PATH0 & 128) {
         func30();
      }
      else {
         int loop52 = 0;
         int loopLimit52 = (rand()%10)/4 + 1;
         for(; loop52 < loopLimit52; loop52++) {
            int scalar5 = 1;
            scalar5++;
            int loop53 = 0;
            int loopLimit53 = (rand()%10)/5 + 1;
            for(; loop53 < loopLimit53; loop53++) {
            }
            int scalar6 = 1;
            if(PATH0 & 256) {
               scalar2--;
            }
            else {
               int loop54 = 0;
               int loopLimit54 = (rand()%10)/5 + 1;
               for(; loop54 < loopLimit54; loop54++) {
                  scalar3++;
               }
            }
            int scalar7 = 1;
            scalar3++;
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func17(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func22(rng());
   }
   else {
      int scalar1 = 1;
      if(PATH0 & 2) {
         func24();
      }
      else {
         int loop55 = 0;
         int loopLimit55 = (rand()%10)/4 + 1;
         for(; loop55 < loopLimit55; loop55++) {
            int scalar2 = 1;
            scalar2++;
            int loop56 = 0;
            int loopLimit56 = (rand()%10)/5 + 1;
            for(; loop56 < loopLimit56; loop56++) {
               int loop57 = 0;
               int loopLimit57 = (rand()%10)/6 + 1;
               for(; loop57 < loopLimit57; loop57++) {
                  if(PATH0 & 4) {
                  }
                  else {
                     func31();
                  }
               }
               if(PATH0 & 8) {
                  func34();
               }
               else {
                  int scalar3 = 1;
                  if(PATH0 & 16) {
                     func36();
                  }
                  else {
                     int loop58 = 0;
                     int loopLimit58 = (rand()%10)/6 + 1;
                     for(; loop58 < loopLimit58; loop58++) {
                     }
                  }
               }
            }
            int scalar3 = 1;
            if(PATH0 & 32) {
               scalar1--;
            }
            else {
               int loop59 = 0;
               int loopLimit59 = (rand()%10)/5 + 1;
               for(; loop59 < loopLimit59; loop59++) {
                  scalar3++;
               }
            }
            int scalar4 = 1;
            scalar3++;
            if(PATH0 & 64) {
               func34();
            }
            else {
               int scalar5 = 1;
               if(PATH0 & 128) {
                  func36();
               }
               else {
                  int loop60 = 0;
                  int loopLimit60 = (rand()%10)/5 + 1;
                  for(; loop60 < loopLimit60; loop60++) {
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func24() {
   func26(rng());
   func27();
   func28(rng());
   func29(rng());
}

void func7(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar2++;
   int loop61 = 0;
   int loopLimit61 = (rand()%10)/4 + 1;
   for(; loop61 < loopLimit61; loop61++) {
      int loop62 = 0;
      int loopLimit62 = (rand()%10)/5 + 1;
      for(; loop62 < loopLimit62; loop62++) {
         int loop63 = 0;
         int loopLimit63 = (rand()%10)/6 + 1;
         for(; loop63 < loopLimit63; loop63++) {
            int loop64 = 0;
            int loopLimit64 = (rand()%10)/7 + 1;
            for(; loop64 < loopLimit64; loop64++) {
               if(PATH0 & 1) {
               }
               else {
                  func31();
               }
            }
            if(PATH0 & 2) {
               func32();
               func33();
               func34();
               func35();
            }
            else {
               func25(rng());
            }
         }
         if(PATH0 & 4) {
            func26(rng());
            func27();
            func28(rng());
            func29(rng());
         }
         else {
            func19(rng());
         }
      }
      if(PATH0 & 8) {
         func22(rng());
      }
      else {
         int scalar3 = 1;
         if(PATH0 & 16) {
            func24();
         }
         else {
            int loop65 = 0;
            int loopLimit65 = (rand()%10)/5 + 1;
            for(; loop65 < loopLimit65; loop65++) {
               int scalar4 = 1;
               scalar1++;
               int loop66 = 0;
               int loopLimit66 = (rand()%10)/6 + 1;
               for(; loop66 < loopLimit66; loop66++) {
                  int loop67 = 0;
                  int loopLimit67 = (rand()%10)/7 + 1;
                  for(; loop67 < loopLimit67; loop67++) {
                     if(PATH0 & 32) {
                     }
                     else {
                        func31();
                     }
                  }
                  if(PATH0 & 64) {
                     func34();
                  }
                  else {
                     int scalar5 = 1;
                     if(PATH0 & 128) {
                        func36();
                     }
                     else {
                        int loop68 = 0;
                        int loopLimit68 = (rand()%10)/7 + 1;
                        for(; loop68 < loopLimit68; loop68++) {
                        }
                     }
                  }
               }
               int scalar5 = 1;
               if(PATH0 & 256) {
                  scalar2--;
               }
               else {
                  int loop69 = 0;
                  int loopLimit69 = (rand()%10)/6 + 1;
                  for(; loop69 < loopLimit69; loop69++) {
                     scalar4++;
                  }
               }
               int scalar6 = 1;
               scalar3++;
               if(PATH0 & 512) {
                  func34();
               }
               else {
                  int scalar7 = 1;
                  if(PATH0 & 1024) {
                     func36();
                  }
                  else {
                     int loop70 = 0;
                     int loopLimit70 = (rand()%10)/6 + 1;
                     for(; loop70 < loopLimit70; loop70++) {
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   int scalar3 = 1;
   if(PATH0 & 2048) {
      scalar3--;
   }
   else {
      int loop71 = 0;
      int loopLimit71 = (rand()%10)/4 + 1;
      for(; loop71 < loopLimit71; loop71++) {
         scalar2++;
      }
   }
   int scalar4 = 1;
   scalar2++;
   if(PATH0 & 4096) {
      func22(rng());
   }
   else {
      int scalar5 = 1;
      if(PATH0 & 8192) {
         func24();
      }
      else {
         int loop72 = 0;
         int loopLimit72 = (rand()%10)/4 + 1;
         for(; loop72 < loopLimit72; loop72++) {
            int scalar6 = 1;
            scalar4++;
            int loop73 = 0;
            int loopLimit73 = (rand()%10)/5 + 1;
            for(; loop73 < loopLimit73; loop73++) {
               int loop74 = 0;
               int loopLimit74 = (rand()%10)/6 + 1;
               for(; loop74 < loopLimit74; loop74++) {
                  if(PATH0 & 16384) {
                  }
                  else {
                     func31();
                  }
               }
               if(PATH0 & 32768) {
                  func34();
               }
               else {
                  int scalar7 = 1;
                  if(PATH0 & 65536) {
                     func36();
                  }
                  else {
                     int loop75 = 0;
                     int loopLimit75 = (rand()%10)/6 + 1;
                     for(; loop75 < loopLimit75; loop75++) {
                     }
                  }
               }
            }
            int scalar7 = 1;
            if(PATH0 & 131072) {
               scalar7--;
            }
            else {
               int loop76 = 0;
               int loopLimit76 = (rand()%10)/5 + 1;
               for(; loop76 < loopLimit76; loop76++) {
                  scalar5++;
               }
            }
            int scalar8 = 1;
            scalar8++;
            if(PATH0 & 262144) {
               func34();
            }
            else {
               int scalar9 = 1;
               if(PATH0 & 524288) {
                  func36();
               }
               else {
                  int loop77 = 0;
                  int loopLimit77 = (rand()%10)/5 + 1;
                  for(; loop77 < loopLimit77; loop77++) {
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func8(const unsigned long PATH0) {
   int loop78 = 0;
   int loopLimit78 = (rand()%10)/3 + 1;
   for(; loop78 < loopLimit78; loop78++) {
      int loop79 = 0;
      int loopLimit79 = (rand()%10)/4 + 1;
      for(; loop79 < loopLimit79; loop79++) {
         int loop80 = 0;
         int loopLimit80 = (rand()%10)/5 + 1;
         for(; loop80 < loopLimit80; loop80++) {
            int loop81 = 0;
            int loopLimit81 = (rand()%10)/6 + 1;
            for(; loop81 < loopLimit81; loop81++) {
               if(PATH0 & 1) {
               }
               else {
                  func31();
               }
            }
            if(PATH0 & 2) {
               func32();
               func33();
               func34();
               func35();
            }
            else {
               func25(rng());
            }
         }
         if(PATH0 & 4) {
            func26(rng());
            func27();
            func28(rng());
            func29(rng());
         }
         else {
            func19(rng());
         }
      }
      if(PATH0 & 8) {
         func20(rng());
         func21();
         func22(rng());
         func23(rng());
      }
      else {
         func13(rng());
      }
   }
}

void func9() {
   int loop82 = 0;
   int loopLimit82 = (rand()%10)/3 + 1;
   for(; loop82 < loopLimit82; loop82++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func14(rng());
      func15();
      func16(rng());
      func17(rng());
      printf("DELETE!\n");
   }
}

void func10(const unsigned long PATH0) {
   int scalar1 = 1;
   scalar1++;
   int loop83 = 0;
   int loopLimit83 = (rand()%10)/3 + 1;
   for(; loop83 < loopLimit83; loop83++) {
      int loop84 = 0;
      int loopLimit84 = (rand()%10)/4 + 1;
      for(; loop84 < loopLimit84; loop84++) {
         int loop85 = 0;
         int loopLimit85 = (rand()%10)/5 + 1;
         for(; loop85 < loopLimit85; loop85++) {
            int loop86 = 0;
            int loopLimit86 = (rand()%10)/6 + 1;
            for(; loop86 < loopLimit86; loop86++) {
               if(PATH0 & 1) {
               }
               else {
                  func31();
               }
            }
            if(PATH0 & 2) {
               func32();
               func33();
               func34();
               func35();
            }
            else {
               func25(rng());
            }
         }
         if(PATH0 & 4) {
            func26(rng());
            func27();
            func28(rng());
            func29(rng());
         }
         else {
            func19(rng());
         }
      }
      if(PATH0 & 8) {
         func22(rng());
      }
      else {
         int scalar2 = 1;
         if(PATH0 & 16) {
            func24();
         }
         else {
            int loop87 = 0;
            int loopLimit87 = (rand()%10)/4 + 1;
            for(; loop87 < loopLimit87; loop87++) {
               int scalar3 = 1;
               scalar2++;
               int loop88 = 0;
               int loopLimit88 = (rand()%10)/5 + 1;
               for(; loop88 < loopLimit88; loop88++) {
                  int loop89 = 0;
                  int loopLimit89 = (rand()%10)/6 + 1;
                  for(; loop89 < loopLimit89; loop89++) {
                     if(PATH0 & 32) {
                     }
                     else {
                        func31();
                     }
                  }
                  if(PATH0 & 64) {
                     func34();
                  }
                  else {
                     int scalar4 = 1;
                     if(PATH0 & 128) {
                        func36();
                     }
                     else {
                        int loop90 = 0;
                        int loopLimit90 = (rand()%10)/6 + 1;
                        for(; loop90 < loopLimit90; loop90++) {
                        }
                     }
                  }
               }
               int scalar4 = 1;
               if(PATH0 & 256) {
                  scalar2--;
               }
               else {
                  int loop91 = 0;
                  int loopLimit91 = (rand()%10)/5 + 1;
                  for(; loop91 < loopLimit91; loop91++) {
                     scalar2++;
                  }
               }
               int scalar5 = 1;
               scalar3++;
               if(PATH0 & 512) {
                  func34();
               }
               else {
                  int scalar6 = 1;
                  if(PATH0 & 1024) {
                     func36();
                  }
                  else {
                     int loop92 = 0;
                     int loopLimit92 = (rand()%10)/5 + 1;
                     for(; loop92 < loopLimit92; loop92++) {
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   int scalar2 = 1;
   if(PATH0 & 2048) {
      scalar1--;
   }
   else {
      int loop93 = 0;
      int loopLimit93 = (rand()%10)/3 + 1;
      for(; loop93 < loopLimit93; loop93++) {
         scalar2++;
      }
   }
   int scalar3 = 1;
   scalar1++;
   if(PATH0 & 4096) {
      func22(rng());
   }
   else {
      int scalar4 = 1;
      if(PATH0 & 8192) {
         func24();
      }
      else {
         int loop94 = 0;
         int loopLimit94 = (rand()%10)/3 + 1;
         for(; loop94 < loopLimit94; loop94++) {
            int scalar5 = 1;
            scalar1++;
            int loop95 = 0;
            int loopLimit95 = (rand()%10)/4 + 1;
            for(; loop95 < loopLimit95; loop95++) {
               int loop96 = 0;
               int loopLimit96 = (rand()%10)/5 + 1;
               for(; loop96 < loopLimit96; loop96++) {
                  if(PATH0 & 16384) {
                  }
                  else {
                     func31();
                  }
               }
               if(PATH0 & 32768) {
                  func34();
               }
               else {
                  int scalar6 = 1;
                  if(PATH0 & 65536) {
                     func36();
                  }
                  else {
                     int loop97 = 0;
                     int loopLimit97 = (rand()%10)/5 + 1;
                     for(; loop97 < loopLimit97; loop97++) {
                     }
                  }
               }
            }
            int scalar6 = 1;
            if(PATH0 & 131072) {
               scalar3--;
            }
            else {
               int loop98 = 0;
               int loopLimit98 = (rand()%10)/4 + 1;
               for(; loop98 < loopLimit98; loop98++) {
                  scalar4++;
               }
            }
            int scalar7 = 1;
            scalar5++;
            if(PATH0 & 262144) {
               func34();
            }
            else {
               int scalar8 = 1;
               if(PATH0 & 524288) {
                  func36();
               }
               else {
                  int loop99 = 0;
                  int loopLimit99 = (rand()%10)/4 + 1;
                  for(; loop99 < loopLimit99; loop99++) {
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func11(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func16(rng());
   }
   else {
      int scalar1 = 1;
      if(PATH0 & 2) {
         func18();
      }
      else {
         int loop100 = 0;
         int loopLimit100 = (rand()%10)/3 + 1;
         for(; loop100 < loopLimit100; loop100++) {
            int scalar2 = 1;
            scalar1++;
            int loop101 = 0;
            int loopLimit101 = (rand()%10)/4 + 1;
            for(; loop101 < loopLimit101; loop101++) {
               int loop102 = 0;
               int loopLimit102 = (rand()%10)/5 + 1;
               for(; loop102 < loopLimit102; loop102++) {
                  int loop103 = 0;
                  int loopLimit103 = (rand()%10)/6 + 1;
                  for(; loop103 < loopLimit103; loop103++) {
                     if(PATH0 & 4) {
                     }
                     else {
                        func31();
                     }
                  }
                  if(PATH0 & 8) {
                     func32();
                     func33();
                     func34();
                     func35();
                  }
                  else {
                     func25(rng());
                  }
               }
               if(PATH0 & 16) {
                  func28(rng());
               }
               else {
                  int scalar3 = 1;
                  if(PATH0 & 32) {
                     func30();
                  }
                  else {
                     int loop104 = 0;
                     int loopLimit104 = (rand()%10)/5 + 1;
                     for(; loop104 < loopLimit104; loop104++) {
                        int scalar4 = 1;
                        scalar4++;
                        int loop105 = 0;
                        int loopLimit105 = (rand()%10)/6 + 1;
                        for(; loop105 < loopLimit105; loop105++) {
                        }
                        int scalar5 = 1;
                        if(PATH0 & 64) {
                           scalar1--;
                        }
                        else {
                           int loop106 = 0;
                           int loopLimit106 = (rand()%10)/6 + 1;
                           for(; loop106 < loopLimit106; loop106++) {
                              scalar3++;
                           }
                        }
                        int scalar6 = 1;
                        scalar1++;
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
            }
            int scalar3 = 1;
            if(PATH0 & 128) {
               scalar1--;
            }
            else {
               int loop107 = 0;
               int loopLimit107 = (rand()%10)/4 + 1;
               for(; loop107 < loopLimit107; loop107++) {
                  scalar3++;
               }
            }
            int scalar4 = 1;
            scalar1++;
            if(PATH0 & 256) {
               func28(rng());
            }
            else {
               int scalar5 = 1;
               if(PATH0 & 512) {
                  func30();
               }
               else {
                  int loop108 = 0;
                  int loopLimit108 = (rand()%10)/4 + 1;
                  for(; loop108 < loopLimit108; loop108++) {
                     int scalar6 = 1;
                     scalar1++;
                     int loop109 = 0;
                     int loopLimit109 = (rand()%10)/5 + 1;
                     for(; loop109 < loopLimit109; loop109++) {
                     }
                     int scalar7 = 1;
                     if(PATH0 & 1024) {
                        scalar1--;
                     }
                     else {
                        int loop110 = 0;
                        int loopLimit110 = (rand()%10)/5 + 1;
                        for(; loop110 < loopLimit110; loop110++) {
                           scalar3++;
                        }
                     }
                     int scalar8 = 1;
                     scalar3++;
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func18() {
   func20(rng());
   func21();
   func22(rng());
   func23(rng());
}

void func1(const unsigned long PATH0) {
   int scalar1 = 1;
   int scalar2 = 1;
   scalar2++;
   int loop111 = 0;
   int loopLimit111 = (rand()%10)/3 + 1;
   for(; loop111 < loopLimit111; loop111++) {
      int loop112 = 0;
      int loopLimit112 = (rand()%10)/4 + 1;
      for(; loop112 < loopLimit112; loop112++) {
         int loop113 = 0;
         int loopLimit113 = (rand()%10)/5 + 1;
         for(; loop113 < loopLimit113; loop113++) {
            int loop114 = 0;
            int loopLimit114 = (rand()%10)/6 + 1;
            for(; loop114 < loopLimit114; loop114++) {
               int loop115 = 0;
               int loopLimit115 = (rand()%10)/7 + 1;
               for(; loop115 < loopLimit115; loop115++) {
                  if(PATH0 & 1) {
                  }
                  else {
                     func31();
                  }
               }
               if(PATH0 & 2) {
                  func32();
                  func33();
                  func34();
                  func35();
               }
               else {
                  func25(rng());
               }
            }
            if(PATH0 & 4) {
               func26(rng());
               func27();
               func28(rng());
               func29(rng());
            }
            else {
               func19(rng());
            }
         }
         if(PATH0 & 8) {
            func20(rng());
            func21();
            func22(rng());
            func23(rng());
         }
         else {
            func13(rng());
         }
      }
      if(PATH0 & 16) {
         func16(rng());
      }
      else {
         int scalar3 = 1;
         if(PATH0 & 32) {
            func18();
         }
         else {
            int loop116 = 0;
            int loopLimit116 = (rand()%10)/4 + 1;
            for(; loop116 < loopLimit116; loop116++) {
               int scalar4 = 1;
               scalar1++;
               int loop117 = 0;
               int loopLimit117 = (rand()%10)/5 + 1;
               for(; loop117 < loopLimit117; loop117++) {
                  int loop118 = 0;
                  int loopLimit118 = (rand()%10)/6 + 1;
                  for(; loop118 < loopLimit118; loop118++) {
                     int loop119 = 0;
                     int loopLimit119 = (rand()%10)/7 + 1;
                     for(; loop119 < loopLimit119; loop119++) {
                        if(PATH0 & 64) {
                        }
                        else {
                           func31();
                        }
                     }
                     if(PATH0 & 128) {
                        func32();
                        func33();
                        func34();
                        func35();
                     }
                     else {
                        func25(rng());
                     }
                  }
                  if(PATH0 & 256) {
                     func28(rng());
                  }
                  else {
                     int scalar5 = 1;
                     if(PATH0 & 512) {
                        func30();
                     }
                     else {
                        int loop120 = 0;
                        int loopLimit120 = (rand()%10)/6 + 1;
                        for(; loop120 < loopLimit120; loop120++) {
                           int scalar6 = 1;
                           scalar1++;
                           int loop121 = 0;
                           int loopLimit121 = (rand()%10)/7 + 1;
                           for(; loop121 < loopLimit121; loop121++) {
                           }
                           int scalar7 = 1;
                           if(PATH0 & 1024) {
                              scalar6--;
                           }
                           else {
                              int loop122 = 0;
                              int loopLimit122 = (rand()%10)/7 + 1;
                              for(; loop122 < loopLimit122; loop122++) {
                                 scalar1++;
                              }
                           }
                           int scalar8 = 1;
                           scalar4++;
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                        }
                     }
                  }
               }
               int scalar5 = 1;
               if(PATH0 & 2048) {
                  scalar3--;
               }
               else {
                  int loop123 = 0;
                  int loopLimit123 = (rand()%10)/5 + 1;
                  for(; loop123 < loopLimit123; loop123++) {
                     scalar2++;
                  }
               }
               int scalar6 = 1;
               scalar1++;
               if(PATH0 & 4096) {
                  func28(rng());
               }
               else {
                  int scalar7 = 1;
                  if(PATH0 & 8192) {
                     func30();
                  }
                  else {
                     int loop124 = 0;
                     int loopLimit124 = (rand()%10)/5 + 1;
                     for(; loop124 < loopLimit124; loop124++) {
                        int scalar8 = 1;
                        scalar7++;
                        int loop125 = 0;
                        int loopLimit125 = (rand()%10)/6 + 1;
                        for(; loop125 < loopLimit125; loop125++) {
                        }
                        int scalar9 = 1;
                        if(PATH0 & 16384) {
                           scalar3--;
                        }
                        else {
                           int loop126 = 0;
                           int loopLimit126 = (rand()%10)/6 + 1;
                           for(; loop126 < loopLimit126; loop126++) {
                              scalar1++;
                           }
                        }
                        int scalar10 = 1;
                        scalar1++;
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   int scalar3 = 1;
   if(PATH0 & 32768) {
      scalar3--;
   }
   else {
      int loop127 = 0;
      int loopLimit127 = (rand()%10)/3 + 1;
      for(; loop127 < loopLimit127; loop127++) {
         scalar2++;
      }
   }
   int scalar4 = 1;
   scalar4++;
   if(PATH0 & 65536) {
      func16(rng());
   }
   else {
      int scalar5 = 1;
      if(PATH0 & 131072) {
         func18();
      }
      else {
         int loop128 = 0;
         int loopLimit128 = (rand()%10)/3 + 1;
         for(; loop128 < loopLimit128; loop128++) {
            int scalar6 = 1;
            scalar4++;
            int loop129 = 0;
            int loopLimit129 = (rand()%10)/4 + 1;
            for(; loop129 < loopLimit129; loop129++) {
               int loop130 = 0;
               int loopLimit130 = (rand()%10)/5 + 1;
               for(; loop130 < loopLimit130; loop130++) {
                  int loop131 = 0;
                  int loopLimit131 = (rand()%10)/6 + 1;
                  for(; loop131 < loopLimit131; loop131++) {
                     if(PATH0 & 262144) {
                     }
                     else {
                        func31();
                     }
                  }
                  if(PATH0 & 524288) {
                     func32();
                     func33();
                     func34();
                     func35();
                  }
                  else {
                     func25(rng());
                  }
               }
               if(PATH0 & 1048576) {
                  func28(rng());
               }
               else {
                  int scalar7 = 1;
                  if(PATH0 & 2097152) {
                     func30();
                  }
                  else {
                     int loop132 = 0;
                     int loopLimit132 = (rand()%10)/5 + 1;
                     for(; loop132 < loopLimit132; loop132++) {
                        int scalar8 = 1;
                        scalar2++;
                        int loop133 = 0;
                        int loopLimit133 = (rand()%10)/6 + 1;
                        for(; loop133 < loopLimit133; loop133++) {
                        }
                        int scalar9 = 1;
                        if(PATH0 & 4194304) {
                           scalar3--;
                        }
                        else {
                           int loop134 = 0;
                           int loopLimit134 = (rand()%10)/6 + 1;
                           for(; loop134 < loopLimit134; loop134++) {
                              scalar7++;
                           }
                        }
                        int scalar10 = 1;
                        scalar3++;
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
            }
            int scalar7 = 1;
            if(PATH0 & 8388608) {
               scalar7--;
            }
            else {
               int loop135 = 0;
               int loopLimit135 = (rand()%10)/4 + 1;
               for(; loop135 < loopLimit135; loop135++) {
                  scalar2++;
               }
            }
            int scalar8 = 1;
            scalar6++;
            if(PATH0 & 16777216) {
               func28(rng());
            }
            else {
               int scalar9 = 1;
               if(PATH0 & 33554432) {
                  func30();
               }
               else {
                  int loop136 = 0;
                  int loopLimit136 = (rand()%10)/4 + 1;
                  for(; loop136 < loopLimit136; loop136++) {
                     int scalar10 = 1;
                     scalar1++;
                     int loop137 = 0;
                     int loopLimit137 = (rand()%10)/5 + 1;
                     for(; loop137 < loopLimit137; loop137++) {
                     }
                     int scalar11 = 1;
                     if(PATH0 & 67108864) {
                        scalar9--;
                     }
                     else {
                        int loop138 = 0;
                        int loopLimit138 = (rand()%10)/5 + 1;
                        for(; loop138 < loopLimit138; loop138++) {
                           scalar1++;
                        }
                     }
                     int scalar12 = 1;
                     scalar10++;
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func2(const unsigned long PATH0) {
   int loop139 = 0;
   int loopLimit139 = (rand()%10)/2 + 1;
   for(; loop139 < loopLimit139; loop139++) {
      int loop140 = 0;
      int loopLimit140 = (rand()%10)/3 + 1;
      for(; loop140 < loopLimit140; loop140++) {
         int loop141 = 0;
         int loopLimit141 = (rand()%10)/4 + 1;
         for(; loop141 < loopLimit141; loop141++) {
            int loop142 = 0;
            int loopLimit142 = (rand()%10)/5 + 1;
            for(; loop142 < loopLimit142; loop142++) {
               int loop143 = 0;
               int loopLimit143 = (rand()%10)/6 + 1;
               for(; loop143 < loopLimit143; loop143++) {
                  if(PATH0 & 1) {
                  }
                  else {
                     func31();
                  }
               }
               if(PATH0 & 2) {
                  func32();
                  func33();
                  func34();
                  func35();
               }
               else {
                  func25(rng());
               }
            }
            if(PATH0 & 4) {
               func26(rng());
               func27();
               func28(rng());
               func29(rng());
            }
            else {
               func19(rng());
            }
         }
         if(PATH0 & 8) {
            func20(rng());
            func21();
            func22(rng());
            func23(rng());
         }
         else {
            func13(rng());
         }
      }
      if(PATH0 & 16) {
         func14(rng());
         func15();
         func16(rng());
         func17(rng());
      }
      else {
         func7(rng());
      }
   }
}

void func3() {
   int loop144 = 0;
   int loopLimit144 = (rand()%10)/2 + 1;
   for(; loop144 < loopLimit144; loop144++) {
      int scalar1 = 1;
      if (scalar1 == 0) {
         printf("IS 0!");
      }
      func8(rng());
      func9();
      func10(rng());
      func11(rng());
      printf("DELETE!\n");
   }
}

void func4(const unsigned long PATH0) {
   int scalar1 = 1;
   scalar1++;
   int loop145 = 0;
   int loopLimit145 = (rand()%10)/2 + 1;
   for(; loop145 < loopLimit145; loop145++) {
      int loop146 = 0;
      int loopLimit146 = (rand()%10)/3 + 1;
      for(; loop146 < loopLimit146; loop146++) {
         int loop147 = 0;
         int loopLimit147 = (rand()%10)/4 + 1;
         for(; loop147 < loopLimit147; loop147++) {
            int loop148 = 0;
            int loopLimit148 = (rand()%10)/5 + 1;
            for(; loop148 < loopLimit148; loop148++) {
               int loop149 = 0;
               int loopLimit149 = (rand()%10)/6 + 1;
               for(; loop149 < loopLimit149; loop149++) {
                  if(PATH0 & 1) {
                  }
                  else {
                     func31();
                  }
               }
               if(PATH0 & 2) {
                  func32();
                  func33();
                  func34();
                  func35();
               }
               else {
                  func25(rng());
               }
            }
            if(PATH0 & 4) {
               func26(rng());
               func27();
               func28(rng());
               func29(rng());
            }
            else {
               func19(rng());
            }
         }
         if(PATH0 & 8) {
            func20(rng());
            func21();
            func22(rng());
            func23(rng());
         }
         else {
            func13(rng());
         }
      }
      if(PATH0 & 16) {
         func16(rng());
      }
      else {
         int scalar2 = 1;
         if(PATH0 & 32) {
            func18();
         }
         else {
            int loop150 = 0;
            int loopLimit150 = (rand()%10)/3 + 1;
            for(; loop150 < loopLimit150; loop150++) {
               int scalar3 = 1;
               scalar3++;
               int loop151 = 0;
               int loopLimit151 = (rand()%10)/4 + 1;
               for(; loop151 < loopLimit151; loop151++) {
                  int loop152 = 0;
                  int loopLimit152 = (rand()%10)/5 + 1;
                  for(; loop152 < loopLimit152; loop152++) {
                     int loop153 = 0;
                     int loopLimit153 = (rand()%10)/6 + 1;
                     for(; loop153 < loopLimit153; loop153++) {
                        if(PATH0 & 64) {
                        }
                        else {
                           func31();
                        }
                     }
                     if(PATH0 & 128) {
                        func32();
                        func33();
                        func34();
                        func35();
                     }
                     else {
                        func25(rng());
                     }
                  }
                  if(PATH0 & 256) {
                     func28(rng());
                  }
                  else {
                     int scalar4 = 1;
                     if(PATH0 & 512) {
                        func30();
                     }
                     else {
                        int loop154 = 0;
                        int loopLimit154 = (rand()%10)/5 + 1;
                        for(; loop154 < loopLimit154; loop154++) {
                           int scalar5 = 1;
                           scalar1++;
                           int loop155 = 0;
                           int loopLimit155 = (rand()%10)/6 + 1;
                           for(; loop155 < loopLimit155; loop155++) {
                           }
                           int scalar6 = 1;
                           if(PATH0 & 1024) {
                              scalar4--;
                           }
                           else {
                              int loop156 = 0;
                              int loopLimit156 = (rand()%10)/6 + 1;
                              for(; loop156 < loopLimit156; loop156++) {
                                 scalar4++;
                              }
                           }
                           int scalar7 = 1;
                           scalar5++;
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                           printf("DELETE!\n");
                        }
                     }
                  }
               }
               int scalar4 = 1;
               if(PATH0 & 2048) {
                  scalar2--;
               }
               else {
                  int loop157 = 0;
                  int loopLimit157 = (rand()%10)/4 + 1;
                  for(; loop157 < loopLimit157; loop157++) {
                     scalar4++;
                  }
               }
               int scalar5 = 1;
               scalar2++;
               if(PATH0 & 4096) {
                  func28(rng());
               }
               else {
                  int scalar6 = 1;
                  if(PATH0 & 8192) {
                     func30();
                  }
                  else {
                     int loop158 = 0;
                     int loopLimit158 = (rand()%10)/4 + 1;
                     for(; loop158 < loopLimit158; loop158++) {
                        int scalar7 = 1;
                        scalar6++;
                        int loop159 = 0;
                        int loopLimit159 = (rand()%10)/5 + 1;
                        for(; loop159 < loopLimit159; loop159++) {
                        }
                        int scalar8 = 1;
                        if(PATH0 & 16384) {
                           scalar6--;
                        }
                        else {
                           int loop160 = 0;
                           int loopLimit160 = (rand()%10)/5 + 1;
                           for(; loop160 < loopLimit160; loop160++) {
                              scalar8++;
                           }
                        }
                        int scalar9 = 1;
                        scalar4++;
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
               printf("DELETE!\n");
               printf("DELETE!\n");
               printf("DELETE!\n");
            }
         }
      }
   }
   int scalar2 = 1;
   if(PATH0 & 32768) {
      scalar1--;
   }
   else {
      int loop161 = 0;
      int loopLimit161 = (rand()%10)/2 + 1;
      for(; loop161 < loopLimit161; loop161++) {
         scalar2++;
      }
   }
   int scalar3 = 1;
   scalar1++;
   if(PATH0 & 65536) {
      func16(rng());
   }
   else {
      int scalar4 = 1;
      if(PATH0 & 131072) {
         func18();
      }
      else {
         int loop162 = 0;
         int loopLimit162 = (rand()%10)/2 + 1;
         for(; loop162 < loopLimit162; loop162++) {
            int scalar5 = 1;
            scalar2++;
            int loop163 = 0;
            int loopLimit163 = (rand()%10)/3 + 1;
            for(; loop163 < loopLimit163; loop163++) {
               int loop164 = 0;
               int loopLimit164 = (rand()%10)/4 + 1;
               for(; loop164 < loopLimit164; loop164++) {
                  int loop165 = 0;
                  int loopLimit165 = (rand()%10)/5 + 1;
                  for(; loop165 < loopLimit165; loop165++) {
                     if(PATH0 & 262144) {
                     }
                     else {
                        func31();
                     }
                  }
                  if(PATH0 & 524288) {
                     func32();
                     func33();
                     func34();
                     func35();
                  }
                  else {
                     func25(rng());
                  }
               }
               if(PATH0 & 1048576) {
                  func28(rng());
               }
               else {
                  int scalar6 = 1;
                  if(PATH0 & 2097152) {
                     func30();
                  }
                  else {
                     int loop166 = 0;
                     int loopLimit166 = (rand()%10)/4 + 1;
                     for(; loop166 < loopLimit166; loop166++) {
                        int scalar7 = 1;
                        scalar1++;
                        int loop167 = 0;
                        int loopLimit167 = (rand()%10)/5 + 1;
                        for(; loop167 < loopLimit167; loop167++) {
                        }
                        int scalar8 = 1;
                        if(PATH0 & 4194304) {
                           scalar3--;
                        }
                        else {
                           int loop168 = 0;
                           int loopLimit168 = (rand()%10)/5 + 1;
                           for(; loop168 < loopLimit168; loop168++) {
                              scalar4++;
                           }
                        }
                        int scalar9 = 1;
                        scalar6++;
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
            }
            int scalar6 = 1;
            if(PATH0 & 8388608) {
               scalar3--;
            }
            else {
               int loop169 = 0;
               int loopLimit169 = (rand()%10)/3 + 1;
               for(; loop169 < loopLimit169; loop169++) {
                  scalar5++;
               }
            }
            int scalar7 = 1;
            scalar4++;
            if(PATH0 & 16777216) {
               func28(rng());
            }
            else {
               int scalar8 = 1;
               if(PATH0 & 33554432) {
                  func30();
               }
               else {
                  int loop170 = 0;
                  int loopLimit170 = (rand()%10)/3 + 1;
                  for(; loop170 < loopLimit170; loop170++) {
                     int scalar9 = 1;
                     scalar3++;
                     int loop171 = 0;
                     int loopLimit171 = (rand()%10)/4 + 1;
                     for(; loop171 < loopLimit171; loop171++) {
                     }
                     int scalar10 = 1;
                     if(PATH0 & 67108864) {
                        scalar10--;
                     }
                     else {
                        int loop172 = 0;
                        int loopLimit172 = (rand()%10)/4 + 1;
                        for(; loop172 < loopLimit172; loop172++) {
                           scalar4++;
                        }
                     }
                     int scalar11 = 1;
                     scalar5++;
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
   printf("DELETE!\n");
   printf("DELETE!\n");
   printf("DELETE!\n");
}

void func5(const unsigned long PATH0) {
   if(PATH0 & 1) {
      func10(rng());
   }
   else {
      int scalar1 = 1;
      if(PATH0 & 2) {
         func12();
      }
      else {
         int loop173 = 0;
         int loopLimit173 = (rand()%10)/2 + 1;
         for(; loop173 < loopLimit173; loop173++) {
            int scalar2 = 1;
            scalar1++;
            int loop174 = 0;
            int loopLimit174 = (rand()%10)/3 + 1;
            for(; loop174 < loopLimit174; loop174++) {
               int loop175 = 0;
               int loopLimit175 = (rand()%10)/4 + 1;
               for(; loop175 < loopLimit175; loop175++) {
                  int loop176 = 0;
                  int loopLimit176 = (rand()%10)/5 + 1;
                  for(; loop176 < loopLimit176; loop176++) {
                     int loop177 = 0;
                     int loopLimit177 = (rand()%10)/6 + 1;
                     for(; loop177 < loopLimit177; loop177++) {
                        if(PATH0 & 4) {
                        }
                        else {
                           func31();
                        }
                     }
                     if(PATH0 & 8) {
                        func32();
                        func33();
                        func34();
                        func35();
                     }
                     else {
                        func25(rng());
                     }
                  }
                  if(PATH0 & 16) {
                     func26(rng());
                     func27();
                     func28(rng());
                     func29(rng());
                  }
                  else {
                     func19(rng());
                  }
               }
               if(PATH0 & 32) {
                  func22(rng());
               }
               else {
                  int scalar3 = 1;
                  if(PATH0 & 64) {
                     func24();
                  }
                  else {
                     int loop178 = 0;
                     int loopLimit178 = (rand()%10)/4 + 1;
                     for(; loop178 < loopLimit178; loop178++) {
                        int scalar4 = 1;
                        scalar1++;
                        int loop179 = 0;
                        int loopLimit179 = (rand()%10)/5 + 1;
                        for(; loop179 < loopLimit179; loop179++) {
                           int loop180 = 0;
                           int loopLimit180 = (rand()%10)/6 + 1;
                           for(; loop180 < loopLimit180; loop180++) {
                              if(PATH0 & 128) {
                              }
                              else {
                                 func31();
                              }
                           }
                           if(PATH0 & 256) {
                              func34();
                           }
                           else {
                              int scalar5 = 1;
                              if(PATH0 & 512) {
                                 func36();
                              }
                              else {
                                 int loop181 = 0;
                                 int loopLimit181 = (rand()%10)/6 + 1;
                                 for(; loop181 < loopLimit181; loop181++) {
                                 }
                              }
                           }
                        }
                        int scalar5 = 1;
                        if(PATH0 & 1024) {
                           scalar4--;
                        }
                        else {
                           int loop182 = 0;
                           int loopLimit182 = (rand()%10)/5 + 1;
                           for(; loop182 < loopLimit182; loop182++) {
                              scalar1++;
                           }
                        }
                        int scalar6 = 1;
                        scalar5++;
                        if(PATH0 & 2048) {
                           func34();
                        }
                        else {
                           int scalar7 = 1;
                           if(PATH0 & 4096) {
                              func36();
                           }
                           else {
                              int loop183 = 0;
                              int loopLimit183 = (rand()%10)/5 + 1;
                              for(; loop183 < loopLimit183; loop183++) {
                              }
                           }
                        }
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                        printf("DELETE!\n");
                     }
                  }
               }
            }
            int scalar3 = 1;
            if(PATH0 & 8192) {
               scalar1--;
            }
            else {
               int loop184 = 0;
               int loopLimit184 = (rand()%10)/3 + 1;
               for(; loop184 < loopLimit184; loop184++) {
                  scalar1++;
               }
            }
            int scalar4 = 1;
            scalar4++;
            if(PATH0 & 16384) {
               func22(rng());
            }
            else {
               int scalar5 = 1;
               if(PATH0 & 32768) {
                  func24();
               }
               else {
                  int loop185 = 0;
                  int loopLimit185 = (rand()%10)/3 + 1;
                  for(; loop185 < loopLimit185; loop185++) {
                     int scalar6 = 1;
                     scalar3++;
                     int loop186 = 0;
                     int loopLimit186 = (rand()%10)/4 + 1;
                     for(; loop186 < loopLimit186; loop186++) {
                        int loop187 = 0;
                        int loopLimit187 = (rand()%10)/5 + 1;
                        for(; loop187 < loopLimit187; loop187++) {
                           if(PATH0 & 65536) {
                           }
                           else {
                              func31();
                           }
                        }
                        if(PATH0 & 131072) {
                           func34();
                        }
                        else {
                           int scalar7 = 1;
                           if(PATH0 & 262144) {
                              func36();
                           }
                           else {
                              int loop188 = 0;
                              int loopLimit188 = (rand()%10)/5 + 1;
                              for(; loop188 < loopLimit188; loop188++) {
                              }
                           }
                        }
                     }
                     int scalar7 = 1;
                     if(PATH0 & 524288) {
                        scalar6--;
                     }
                     else {
                        int loop189 = 0;
                        int loopLimit189 = (rand()%10)/4 + 1;
                        for(; loop189 < loopLimit189; loop189++) {
                           scalar7++;
                        }
                     }
                     int scalar8 = 1;
                     scalar4++;
                     if(PATH0 & 1048576) {
                        func34();
                     }
                     else {
                        int scalar9 = 1;
                        if(PATH0 & 2097152) {
                           func36();
                        }
                        else {
                           int loop190 = 0;
                           int loopLimit190 = (rand()%10)/4 + 1;
                           for(; loop190 < loopLimit190; loop190++) {
                           }
                        }
                     }
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                     printf("DELETE!\n");
                  }
               }
            }
            printf("DELETE!\n");
            printf("DELETE!\n");
            printf("DELETE!\n");
         }
      }
   }
}

void func12() {
   func14(rng());
   func15();
   func16(rng());
   func17(rng());
}

void func6() {
   func8(rng());
   func9();
   func10(rng());
   func11(rng());
}

