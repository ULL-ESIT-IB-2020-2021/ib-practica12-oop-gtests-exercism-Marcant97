#include <gtest/gtest.h>

#include "complejo.h"

TEST(ComplejoTest, test1){
    complejo complejo1(3,5);
    complejo complejo2(2,3);
    complejo resultado(0,0);

    //El test suma las 4 componentes en la función suma.
    EXPECT_EQ(13, resultado.suma(complejo1, complejo2));
    //El test resta la parte real total menos la parte imaginaria(función resta).
    EXPECT_EQ(-1, resultado.resta(complejo1, complejo2));


}