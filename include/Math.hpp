#ifndef _MYLIB_HPP_
#define _MYLIB_HPP_

#include <iostream>
#include <vector>

#include "Vector2.hpp"

namespace math
{   
    /// @brief Compute Cosinus of an angle in radian
    /// @remark Using Taylor series
    /// @param x angle in radian
    float Cos(float x);

    /// @brief Compute Sinus of an angle in radian
    /// @remark Using Taylor series
    /// @param x angle in radian
    float Sin(float x);

    /// @brief Compute Tan of an angle in radian
    /// @remark Using tan(x) = sin(x) / cos(x)
    /// @param x angle in radian
    float Tan(float x);

    /// @brief Compute Acos of an angle in radian
    /// @remark Use the acos() method from <cmath>
    /// @param x angle in radian
    float Acos (float x);

    /// @brief Compute Asin of an angle in radian
    /// @remark Use the asin() method from <cmath>
    /// @param x angle in radian
    float Asin (float x);

    /// @brief 
    /// @param x 
    /// @return 
    float IsNegative (float x);

    /// @brief 
    /// @param x 
    /// @param y 
    /// @return 
    float Mod(float x, float y);

    /// @brief 
    /// @param r 
    /// @param min 
    /// @param max 
    /// @return 
    float Clamp (const float r, const float min, const float max);

    /// @brief Normalize an angle
    /// @note A normalized angle maps the full range of angles to the range zero to one
    /// @param angleInRadian 
    /// @return a normalized angle
    float NormalizeAngle(float angleInRadian);
}


#endif // _MYLIB_HPP_