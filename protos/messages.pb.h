/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.1 at Thu Oct 15 12:59:47 2015. */

#ifndef PB_MESSAGES_PB_H_INCLUDED
#define PB_MESSAGES_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
/* Struct definitions */
typedef struct _Identify {
    uint8_t dummy_field;
} Identify;

typedef struct _DripRecorded {
    uint32_t drips;
    bool has_ghostDrips;
    uint32_t ghostDrips;
} DripRecorded;

typedef struct _IAm {
    pb_callback_t swrev;
    pb_callback_t hwrev;
    pb_callback_t sn;
    uint32_t dataRate;
} IAm;

typedef struct _Measure {
    int32_t id;
    int32_t channel;
} Measure;

typedef struct _Move {
    int32_t x;
    int32_t y;
    uint32_t laserPower;
} Move;

typedef struct _MoveToDripCount {
    uint32_t drips;
} MoveToDripCount;

typedef struct _SetDripCount {
    uint32_t drips;
} SetDripCount;

/* Default values for struct fields */

/* Initializer values for message structs */
#define Move_init_default                        {0, 0, 0}
#define DripRecorded_init_default                {0, false, 0}
#define SetDripCount_init_default                {0}
#define MoveToDripCount_init_default             {0}
#define Identify_init_default                    {0}
#define IAm_init_default                         {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0}
#define Measure_init_default                     {0, 0}
#define Move_init_zero                           {0, 0, 0}
#define DripRecorded_init_zero                   {0, false, 0}
#define SetDripCount_init_zero                   {0}
#define MoveToDripCount_init_zero                {0}
#define Identify_init_zero                       {0}
#define IAm_init_zero                            {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0}
#define Measure_init_zero                        {0, 0}

/* Field tags (for use in manual encoding/decoding) */
#define DripRecorded_drips_tag                   1
#define DripRecorded_ghostDrips_tag              2
#define IAm_swrev_tag                            1
#define IAm_hwrev_tag                            2
#define IAm_sn_tag                               3
#define IAm_dataRate_tag                         4
#define Measure_id_tag                           1
#define Measure_channel_tag                      2
#define Move_x_tag                               1
#define Move_y_tag                               2
#define Move_laserPower_tag                      3
#define MoveToDripCount_drips_tag                1
#define SetDripCount_drips_tag                   1

/* Struct field encoding specification for nanopb */
extern const pb_field_t Move_fields[4];
extern const pb_field_t DripRecorded_fields[3];
extern const pb_field_t SetDripCount_fields[2];
extern const pb_field_t MoveToDripCount_fields[2];
extern const pb_field_t Identify_fields[1];
extern const pb_field_t IAm_fields[5];
extern const pb_field_t Measure_fields[3];

/* Maximum encoded size of messages (where known) */
#define Move_size                                28
#define DripRecorded_size                        12
#define SetDripCount_size                        6
#define MoveToDripCount_size                     6
#define Identify_size                            0
#define Measure_size                             22

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
