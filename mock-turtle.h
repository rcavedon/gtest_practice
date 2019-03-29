//
// Created by riccardo on 29/03/19.
//

#ifndef GTEST_PRACTICE_MOCK_TURTLE_H
#define GTEST_PRACTICE_MOCK_TURTLE_H
#include "gmock/gmock.h"  // Brings in Google Mock.

class Turtle {
        Turtle();
        virtual ~Turtle() {}
        virtual void PenUp() = 0;
        virtual void PenDown() = 0;
        virtual void Forward(int distance) = 0;
        virtual void Turn(int degrees) = 0;
        virtual void GoTo(int x, int y) = 0;
        virtual int GetX() const = 0;
        virtual int GetY() const = 0;
};
class MockTurtle : public Turtle {
    public:
        MOCK_METHOD0(PenUp, void());
        MOCK_METHOD0(PenDown, void());
        MOCK_METHOD1(Forward, void(int distance));
        MOCK_METHOD1(Turn, void(int degrees));
        MOCK_METHOD2(GoTo, void(int x, int y));
        MOCK_CONST_METHOD0(GetX, int());
        MOCK_CONST_METHOD0(GetY, int());
};
#endif //GTEST_PRACTICE_MOCK_TURTLE_H
