#include <gtest/gtest.h>

#include "fecha.h"


TEST(FechaTest, isbisiesto){

ClaseFecha resultado (01,12,2020);
ClaseFecha resultado1 (15,10,1997);
ClaseFecha resultado2 (3,9,2014);
ClaseFecha resultado3 (01,12,2010);

EXPECT_EQ(true, resultado.esBisiesto());
EXPECT_EQ(false, resultado1.esBisiesto());
EXPECT_EQ(false, resultado2.esBisiesto());
EXPECT_EQ(false, resultado3.esBisiesto());

}


