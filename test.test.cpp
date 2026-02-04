#include <gtest/gtest.h>
#include "test.h"
 
//Test case
TEST(test,addfunction){
    //arrange - preconditions, prepare input data
    int operand1 = 10;
    int operand2 = 20;
    int actualresult = 0;
    int expectedresult = 30;
    //act - invoke code under test
    actualresult = add(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}
 TEST(test,subfunction){
    //arrange - preconditions, prepare input data
    int operand1 = 20;
    int operand2 = 10;
    int actualresult = 0;
    int expectedresult = 10;
    //act - invoke code under test
    actualresult = sub(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}

 TEST(test,mulfunction){
    //arrange - preconditions, prepare input data
    int operand1 = 20;
    int operand2 = 10;
    int actualresult = 0;
    int expectedresult = 10;
    //act - invoke code under test
    actualresult = mul(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}
 
 TEST(test,divfunction){
    //arrange - preconditions, prepare input data
    int operand1 = 20;
    int operand2 = 10;
    int actualresult = 0;
    int expectedresult = 10;
    //act - invoke code under test
    actualresult = div(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}

 TEST(test,modfunction){
    //arrange - preconditions, prepare input data
    int operand1 = 20;
    int operand2 = 10;
    int actualresult = 0;
    int expectedresult = 10;
    //act - invoke code under test
    actualresult = mod(operand1,operand2);
    //Assert - validate measurment points
    ASSERT_EQ(actualresult,expectedresult);
}
 
 
 