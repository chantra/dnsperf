/*
 * Copyright (C) 2012-2015 Nominum, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PERF_OPT_H
#define PERF_OPT_H 1

typedef enum {
    perf_opt_string,
    perf_opt_boolean,
    perf_opt_uint,
    perf_opt_timeval,
    perf_opt_double,
    perf_opt_port,
} perf_opttype_t;

void
perf_opt_add(char c, perf_opttype_t type, const char *desc, const char *help,
             const char *defval, void *valp);

void
perf_opt_usage(void);

void
perf_opt_parse(int argc, char **argv);

#endif
