//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// UNSUPPORTED: c++03, c++11, c++14, c++17
// UNSUPPORTED: libcpp-no-concepts
// UNSUPPORTED: gcc-10
// XFAIL: msvc && clang

// unique_ptr

#include <memory>

#include <iterator>

static_assert(std::indirectly_readable<std::unique_ptr<int> >);
static_assert(std::indirectly_writable<std::unique_ptr<int>, int>);

static_assert(!std::indirectly_readable<std::unique_ptr<void> >);
static_assert(!std::indirectly_writable<std::unique_ptr<void>, void>);
