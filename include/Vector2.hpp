#ifndef _Vector2_HPP_
#define _Vector2_HPP_

#include <iostream>
#include <string>
#include <cassert>

namespace math{
    /// @struct Vector2
    /// @brief Representation of a 2D vector
    struct Vector2
    {
        /* ## ATTRIBUTES ## */

        /// @brief Name of the point
        std::string label;

        /// @brief Position on the x axis
        float x;

        /// @brief Position on the y axis
        float y;

        /* ## CONSTRUCTORS ## */

        /// @fn Vector2()
        /// @brief Construct a new default Vector2 object 
        Vector2();

        /// @fn Vector2(std::string, int, int)
        /// @brief Construct a new default Vector2 object 
        /// @param label Name given to the point
        /// @param[in] _x Position on the x axis
        /// @param[in] _y Position on the y axis
        Vector2(float _x, float _y, std::string _label = "unknown");

        /// @fn Vector2(const Vector2&)
        /// @brief Construct a new Vector2 object per copy 
        /// @param[in] p {Vector2&} Vector2 reference to copy
        Vector2(const Vector2& p);

        /// @brief Destructor per default
        ~Vector2() = default;

        /* ## METHODS ## */

        /// @fn Vector2 absolute() const
        /// @brief Return a vector with the absolute value of each element
        /// 
        /// @return Vector2 All components are converted into their absolute value
        Vector2 absolute() const;

        
        /// @fn float magnitude()
        /// @brief Return the length/magnitude of this vector.
        /// @see sqrMagnitude
        /// @return float Magnitude of this vector
        float magnitude();


        /// @fn float sqrMagnitude()
        /// @brief Return the squared length/magnitude of this vector.
        /// @see magnitude()
        /// @return float Squared magnitude of this vector
        float sqrMagnitude();


        /// @fn float normalize()
        /// @brief Makes this vector have a length/magnitude of 1.
        /// @return float Previous magnitude of this vector 
        float normalize();


        /// @fn Vector2 normalized()
        /// @brief Returns this vector with a length/magnitude of 1.
        /// @return Vector2 This vector with a magnitude of 1.
        /// @see Normalize()
        Vector2 normalized();


        /// @fn float dot(const Vector2& v)
        /// @brief Return the scalar product between this vector and an other Vector2
        /// 
        /// @param v Vector2&
        /// @return float Scalar product
        float dot(const Vector2& v);


        /// @fn Vector2 project(const Vector2& v)
        /// @brief Return the projection of this vector onto a vector v
        /// 
        /// @param v Vector2& On normal of a plane.
        /// @return Vector2 Projection of this vector into v vector.
        Vector2 project(const Vector2& v);

        /// @fn Vector2 project(const Vector2* v)
        /// @brief Return the projection of this vector onto a vector v
        /// 
        /// @param v Vector2* On normal of a plane.
        /// @return Vector2 Projection of this vector into v vector.
        Vector2 project(const Vector2* v);

        /* ## FRIENDS ##*/

        /// @fn std::ostream& operator<<(std::ostream&, const Vector2&)
        /// @brief 
        /// @param[in] os output stream where characters are written
        /// @param[in] p Vector2
        /// @return std::ostream& output stream
        friend std::ostream& operator<<(std::ostream& os, const Vector2& v)
        {
            os << "(" << v.x << ", " << v.y << ")";
            return os;
        }

        friend Vector2 operator *(const Vector2& v, float s)
        {
            return;
        }

        friend Vector2 operator *(float s, const Vector2& v)
        {
            return;
        }

        friend Vector2 operator *(const Vector2& v0, const Vector2& v1)
        {
            return;
        }

        friend Vector2 operator /(const Vector2& v, float s)
        {
            return;
        }
        
        friend Vector2 operator /(const Vector2& v0, const Vector2& v1)
        {

            return;
        }

        friend Vector2 operator +(const Vector2& v0, const Vector2& v1)
        {
            return;
        }

        friend Vector2 operator -(const Vector2& v0, const Vector2& v1)
        {
            return;
        }

        friend Vector2 operator -(const Vector2& v)
        {
            return;
        }

        friend bool operator ==(const Vector2& v0, const Vector2& v1)
        {
            return;
        }
    };

    namespace
    {
        
         /// @fn Vector2 Lerp (const Vector2& a, const Vector2& b, const float t)
         /// @brief Lineraly interpolates between two 2D points a and b by the interpolant t. 
         /// @note The t parameter is clamped to the range [1, 0].
         /// 
         /// @param a Vector2& Start point
         /// @param b Vector2& End point
         /// @param t float Interpolant value between a and b
         /// @return Vector2 Interpolated vector.
        Vector2 Lerp (const Vector2& a, const Vector2& b, const float t)
        {
            // Ensure to clamp the value of t

            // Use the formula V1 + (V2 - V1) * T

        }

        /// @fn float Angle (const Vector2& a, const Vector2& b)
         /// @brief Compute the angle formed by two vectors 
         /// @param a Vector2& Start point
         /// @param b Vector2& End point
         /// @return float the angle
        float Angle (const Vector2& a, const Vector2& b)
        {
            // Compute the dot product between a and b

            // Compute norm of each vector

            // Use the formula acos (dot / (norm(a) * norm(b)))

        }
    }

}

#endif // _Vector2_HPP_