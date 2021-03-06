/*
 * Copyright (c) 2015-2018 Nexenta Systems, inc.
 *
 * This file is part of EdgeFS Project
 * (see https://github.com/Nexenta/edgefs).
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef SRC_LIBREPTRANS_COMPAT_H_
#define SRC_LIBREPTRANS_COMPAT_H_

/* Convert entries from TT_VERIFICATION_QUEUE, TT_BATCH_QUEUE and TT_ENCODING_QUEUE
 * from previous to new on-disk format
 */
int
vbreq_convert_compat(void* data_ptr,  struct verification_request** out);



#endif /* SRC_LIBREPTRANS_COMPAT_H_ */
