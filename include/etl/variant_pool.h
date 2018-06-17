/******************************************************************************
The MIT License(MIT)

Embedded Template Library.
https://github.com/ETLCPP/etl
https://www.etlcpp.com

Copyright(c) 2017 jwellbelove

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
******************************************************************************/

#if 0
#error THIS HEADER IS A GENERATOR. DO NOT INCLUDE.
#endif

//***************************************************************************
// This file has been auto generated. Do not edit this file.
//***************************************************************************

//***************************************************************************
// To generate to header file, run this at the command line.
// Note: You will need Python and COG installed.
//
// python -m cogapp -d -e -ovariant_pool.h -DNTypes=<n> variant_pool_generator.h
// Where <n> is the number of types to support.
//
// e.g.
// To generate handlers for up to 16 types...
// python -m cogapp -d -e -ovariant_pool.h -DNTypes=16 variant_pool_generator.h
//
// See generate.bat
//***************************************************************************

#ifndef ETL_VARIANT_POOL_INCLUDED
#define ETL_VARIANT_POOL_INCLUDED

#include <stdint.h>
#include <utility>

#include "platform.h"
#include "error_handler.h"
#include "exception.h"
#include "largest.h"
#include "type_traits.h"
#include "alignment.h"
#include "static_assert.h"
#include "type_lookup.h"
#include <pool.h>

#undef ETL_FILE
#define ETL_FILE "40"

namespace etl
{
  //***************************************************************************
  class variant_pool_exception : public etl::exception
  {
  public:

    variant_pool_exception(string_type reason_, string_type file_name_, numeric_type line_number_)
      : exception(reason_, file_name_, line_number_)
    {
    }
  };

  //***************************************************************************
  class variant_pool_cannot_create : public etl::variant_pool_exception
  {
  public:

    variant_pool_cannot_create(string_type file_name_, numeric_type line_number_)
      : variant_pool_exception(ETL_ERROR_TEXT("variant_pool:cannot create", ETL_FILE"A"), file_name_, line_number_)
    {
    }
  };

  //***************************************************************************
  class variant_pool_did_not_create : public etl::variant_pool_exception
  {
  public:

    variant_pool_did_not_create(string_type file_name_, numeric_type line_number_)
      : variant_pool_exception(ETL_ERROR_TEXT("variant_pool:did not create", ETL_FILE"B"), file_name_, line_number_)
    {
    }
  };

  //***************************************************************************
  template <const size_t MAX_SIZE_,
            typename T1, 
            typename T2 = void, 
            typename T3 = void, 
            typename T4 = void, 
            typename T5 = void, 
            typename T6 = void, 
            typename T7 = void, 
            typename T8 = void, 
            typename T9 = void, 
            typename T10 = void, 
            typename T11 = void, 
            typename T12 = void, 
            typename T13 = void, 
            typename T14 = void, 
            typename T15 = void, 
            typename T16 = void>
  class variant_pool
  {
  public:

    static const size_t MAX_SIZE = MAX_SIZE_;

    //*************************************************************************
    /// Default constructor.
    //*************************************************************************
    variant_pool()
    {
    }

#if !ETL_CPP11_SUPPORTED || defined(ETL_STLPORT)
    //*************************************************************************
    /// Creates the object. Default constructor.
    //*************************************************************************
    template <typename T>
    T* create()
    {
      STATIC_ASSERT((etl::is_one_of<T, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>::value), "Unsupported type");

      T* p = nullptr;

      if (pool.full())
      {
        ETL_ASSERT(false, ETL_ERROR(etl::variant_pool_cannot_create));
      }
      else
      {
        p = pool.template allocate<T>();

        if (p != nullptr)
        {
          new (p) T();
        }
      }

      return p;
    }

    //*************************************************************************
    /// Creates the object. One parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1>
    T* create(const TP1& p1)
    {
      STATIC_ASSERT((etl::is_one_of<T, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>::value), "Unsupported type");

      T* p = nullptr;

      if (pool.full())
      {
        ETL_ASSERT(false, ETL_ERROR(etl::variant_pool_cannot_create));
      }
      else
      {
        p = pool.template allocate<T>();

        if (p != nullptr)
        {
          new (p) T(p1);
        }
      }

      return p;
    }

    //*************************************************************************
    /// Creates the object. Two parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1, typename TP2>
    T* create(const TP1& p1, const TP2& p2)
    {
      STATIC_ASSERT((etl::is_one_of<T, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>::value), "Unsupported type");

      T* p = nullptr;

      if (pool.full())
      {
        ETL_ASSERT(false, ETL_ERROR(etl::variant_pool_cannot_create));
      }
      else
      {
        p = pool.template allocate<T>();

        if (p != nullptr)
        {
          new (p) T(p1, p2);
        }
      }

      return p;
    }

    //*************************************************************************
    /// Creates the object. Three parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1, typename TP2, typename TP3>
    T* create(const TP1& p1, const TP2& p2, const TP3& p3)
    {
      STATIC_ASSERT((etl::is_one_of<T, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>::value), "Unsupported type");

      T* p = nullptr;

      if (pool.full())
      {
        ETL_ASSERT(false, ETL_ERROR(etl::variant_pool_cannot_create));
      }
      else
      {
        p = pool.template allocate<T>();

        if (p != nullptr)
        {
          new (p) T(p1, p2, p3);
        }
      }

      return p;
    }

    //*************************************************************************
    /// Creates the object. Four parameter constructor.
    //*************************************************************************
    template <typename T, typename TP1, typename TP2, typename TP3, typename TP4>
    T* create(const TP1& p1, const TP2& p2, const TP3& p3, const TP4& p4)
    {
      STATIC_ASSERT((etl::is_one_of<T, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>::value), "Unsupported type");

      T* p = nullptr;

      if (pool.full())
      {
        ETL_ASSERT(false, ETL_ERROR(etl::variant_pool_cannot_create));
      }
      else
      {
        p = pool.template allocate<T>();

        if (p != nullptr)
        {
          new (p) T(p1, p2, p3, p4);
        }
      }

      return p;
    }
#else
    //*************************************************************************
    /// Creates the object from a type. Variadic parameter constructor.
    //*************************************************************************
    template <typename T, typename... Args>
    T* create(Args&&... args)
    {
      STATIC_ASSERT((etl::is_one_of<T, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>::value), "Unsupported type");

      T* p = nullptr;

      if (pool.full())
      {
        ETL_ASSERT(false, ETL_ERROR(etl::variant_pool_cannot_create));
      }
      else
      {
        p = pool.template allocate<T>();

        if (p != nullptr)
        {
          new (p) T(std::forward<Args>(args)...);
        }
      }

      return p;
    }
#endif

    //*************************************************************************
    /// Destroys the object.
    //*************************************************************************
    template <typename T>
    bool destroy(const T* const p)
    {
      STATIC_ASSERT((etl::is_one_of<T, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>::value ||
                     etl::is_base_of<T, T1>::value ||
                     etl::is_base_of<T, T2>::value ||
                     etl::is_base_of<T, T3>::value ||
                     etl::is_base_of<T, T4>::value ||
                     etl::is_base_of<T, T5>::value ||
                     etl::is_base_of<T, T6>::value ||
                     etl::is_base_of<T, T7>::value ||
                     etl::is_base_of<T, T8>::value ||
                     etl::is_base_of<T, T9>::value ||
                     etl::is_base_of<T, T10>::value ||
                     etl::is_base_of<T, T11>::value ||
                     etl::is_base_of<T, T12>::value ||
                     etl::is_base_of<T, T13>::value ||
                     etl::is_base_of<T, T14>::value ||
                     etl::is_base_of<T, T15>::value ||
                     etl::is_base_of<T, T16>::value), "Invalid type");

      p->~T();

      void* vp = reinterpret_cast<char*>(const_cast<T*>(p));

      if (pool.is_in_pool(vp))
      {
        pool.release(vp);
        return true;
      }
      else
      {
        ETL_ASSERT(false, ETL_ERROR(variant_pool_did_not_create));
        return false;
      }
    }

    //*************************************************************************
    /// Returns the maximum number of items in the variant_pool.
    //*************************************************************************
    size_t max_size() const
    {
      return MAX_SIZE;
    }

    //*************************************************************************
    /// Returns the number of free items in the variant_pool.
    //*************************************************************************
    size_t available() const
    {
      return pool.available();
    }

    //*************************************************************************
    /// Returns the number of allocated items in the variant_pool.
    //*************************************************************************
    size_t size() const
    {
      return pool.size();
    }

    //*************************************************************************
    /// Checks to see if there are no allocated items in the variant_pool.
    /// \return <b>true</b> if there are none allocated.
    //*************************************************************************
    bool empty() const
    {
      return pool.empty();
    }

    //*************************************************************************
    /// Checks to see if there are no free items in the variant_pool.
    /// \return <b>true</b> if there are none free.
    //*************************************************************************
    bool full() const
    {
      return pool.full();
    }

  private:

    variant_pool(const variant_pool&);
    variant_pool& operator =(const variant_pool&);

    // The pool.
    etl::generic_pool<etl::largest<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>::size,
                      etl::largest<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>::alignment,
                      MAX_SIZE> pool;
  };
}

#undef ETL_FILE

#endif
