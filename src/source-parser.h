/*
 * blogc: A blog compiler.
 * Copyright (C) 2015 Rafael G. Martins <rafael@rafaelmartins.eng.br>
 *
 * This program can be distributed under the terms of the BSD License.
 * See the file LICENSE.
 */

#ifndef _SOURCE_PARSER_H
#define _SOURCE_PARSER_H

#include <stdlib.h>
#include "utils/utils.h"
#include "error.h"

b_trie_t* blogc_source_parse(const char *src, size_t src_len,
    blogc_error_t **err);

#endif /* _SOURCE_PARSER_H */
