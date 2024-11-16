#include "TrainingFakes.hpp"
#include "TrainingLib.hpp"

#include <gtest/gtest.h>

TEST(TrainingLib, example) {
    auto fake = training::ExampleFake{};
    auto result = training::example();
    EXPECT_EQ(result, 42);
}