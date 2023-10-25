# Minimum cmake version
cmake_minimum_required(VERSION 3.13.4)

# Project properties: C project
project(LanguageC
  VERSION 1.0.0
  LANGUAGES C
)

# Add executables of projects
add_executable(break break.c)
add_executable(comaop comaop.c)
add_executable(comatest comatest.c)
#add_executable(constchars constchars.c)
add_executable(continue continue.c)
add_executable(dowhile dowhile.c)
set_target_properties(dowhile
  PROPERTIES COMPILE_FLAGS "-Wno-unused-result"
  )
add_executable(dynalloc dynalloc.c)
add_executable(echange echange.c)
add_executable(echangeadr echangeadr.c)
add_executable(enum-2 enum-2.c)
add_executable(enum enum.c)
add_executable(fact fact.c)
add_executable(for for.c)
add_executable(iochar2 iochar2.c)
add_executable(iochar iochar.c)
add_executable(ioprintf ioprintf.c)
add_executable(ioscanf ioscanf.c)
set_target_properties(ioscanf
  PROPERTIES COMPILE_FLAGS "-Wno-unused-result"
  )
add_executable(listechainee listechainee.c)
add_executable(memalloca memalloca.c)
add_executable(multitab multitab.c)
add_executable(power power.c)
add_executable(produit produit.c)
add_executable(ptr1 ptr1.c)
add_executable(ptr2 ptr2.c)
add_executable(ptr3 ptr3.c)
add_executable(ptrarithm ptrarithm.c)
add_executable(ptrarithmdbl ptrarithmdbl.c)
add_executable(ptrarithmtab ptrarithmtab.c)
add_executable(relationalop relationalop.c)
add_executable(sizes_32 sizes.c)
# Set compile/link flags for sizes_32 target file
set_target_properties(sizes_32
  PROPERTIES COMPILE_FLAGS "-m32"
             LINK_FLAGS "-m32"
)
add_executable(sizes_64 sizes.c)
add_executable(sommeproduit sommeproduit.c)
add_executable(stringconcat stringconcat.c)
add_executable(stringconcat2 stringconcat2.c)
set_target_properties(stringconcat2
  PROPERTIES COMPILE_FLAGS "-Wno-stringop-overread"
  )
add_executable(struct struct.c)
# Link math library for the struct target
target_link_libraries(struct "-lm")
add_executable(tab tab.c)
add_executable(tab2 tab2.c)
add_executable(tab3 tab3.c)
add_executable(tab4 tab4.c)
add_executable(tab5 tab5.c)
add_executable(tab6 tab6.c)
add_executable(tabptr tabptr.c)
add_executable(testcast testcast.c)
add_executable(typecast typecast.c)
add_executable(union union.c)
add_executable(varadrval varadrval.c)
add_executable(varglobal varglobal.c)
add_executable(varlocal varlocal.c)
add_executable(varstatic varstatic.c)
add_executable(varptr varptr.c)
add_executable(vartemp vartemp.c)
add_executable(while while.c)
