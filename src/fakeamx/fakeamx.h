/* Copyright (C) 2011-2014 Zeex
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <sampgdk/bool.h>
#include <sampgdk/sdk.h>

extern "C" AMX *sampgdk_fakeamx_amx(void);
extern "C" int sampgdk_fakeamx_resize_heap(int cells);
extern "C" int sampgdk_fakeamx_push(int cells, cell *address);
extern "C" int sampgdk_fakeamx_push_cell(cell value, cell *address);
extern "C" int sampgdk_fakeamx_push_float(float value, cell *address);
extern "C" int sampgdk_fakeamx_push_string(const char *src, int *size, cell *address);
extern "C" void sampgdk_fakeamx_get_cell(cell address, cell *value);
extern "C" void sampgdk_fakeamx_get_bool(cell address, bool *value);
extern "C" void sampgdk_fakeamx_get_float(cell address, float *value);
extern "C" void sampgdk_fakeamx_get_string(cell address, char *dest, int size);
extern "C" void sampgdk_fakeamx_pop(cell address);