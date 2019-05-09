/*
Copyright (c) E.W.Ayers. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: E.W.Ayers
*/
#pragma once
#include <limits>
#include "library/vm/vm.h"

namespace lean{
double to_float(vm_obj const & o);
optional<double> try_to_float(vm_obj const & o);
void initialize_vm_float();
void finalize_vm_float();
}
