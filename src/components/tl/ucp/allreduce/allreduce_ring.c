/**
 * Copyright (c) 2021-2023, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 *
 * See file LICENSE for terms.
 */

#include "allreduce.h"
#include "core/ucc_progress_queue.h"
#include "tl_ucp_sendrecv.h"
#include "utils/ucc_math.h"
#include "utils/ucc_coll_utils.h"
#include "../reduce_scatter/reduce_scatter.h"
#include "../allgather/allgather.h"



ucc_status_t ucc_tl_ucp_allreduce_ring_init(ucc_base_coll_args_t *coll_args,
                                            ucc_base_team_t *     team,
                                            ucc_coll_task_t **    task_h) {

    printf("Ring all reduce init\n");
    return UCC_OK;
}

ucc_status_t ucc_tl_ucp_allreduce_ring_start(ucc_coll_task_t *task) {
    printf("Ring all reduce start\n");
    return UCC_OK;
}

void ucc_tl_ucp_allreduce_ring_progress(ucc_coll_task_t *task) {
    printf("Ring AllReduce progress\n");
}

ucc_status_t ucc_tl_ucp_allreduce_ring_finalize(ucc_coll_task_t *task) {
    printf("Ring all reduce finalize\n");
    return UCC_OK;
}