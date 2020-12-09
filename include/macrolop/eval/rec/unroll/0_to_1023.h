#ifndef MACROLOP_EVAL_REC_UNROLL_0_TO_1023_H
#define MACROLOP_EVAL_REC_UNROLL_0_TO_1023_H

#define MACROLOP_PRIV_EVAL_REC_0(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_0_OVERLOAD(MACROLOP_PRIV_EVAL_REC_0_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_0_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_0_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_0_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_0_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_0_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_0_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_0_##choice
#define MACROLOP_PRIV_EVAL_REC_0_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1
#define MACROLOP_PRIV_EVAL_REC_0_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_1_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_1_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_1_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1_##choice
#define MACROLOP_PRIV_EVAL_REC_1_CONTINUE                   MACROLOP_PRIV_EVAL_REC_2
#define MACROLOP_PRIV_EVAL_REC_1_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_2(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_2_OVERLOAD(MACROLOP_PRIV_EVAL_REC_2_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_2_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_2_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_2_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_2_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_2_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_2_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_2_##choice
#define MACROLOP_PRIV_EVAL_REC_2_CONTINUE                   MACROLOP_PRIV_EVAL_REC_3
#define MACROLOP_PRIV_EVAL_REC_2_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_3(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_3_OVERLOAD(MACROLOP_PRIV_EVAL_REC_3_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_3_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_3_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_3_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_3_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_3_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_3_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_3_##choice
#define MACROLOP_PRIV_EVAL_REC_3_CONTINUE                   MACROLOP_PRIV_EVAL_REC_4
#define MACROLOP_PRIV_EVAL_REC_3_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_4(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_4_OVERLOAD(MACROLOP_PRIV_EVAL_REC_4_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_4_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_4_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_4_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_4_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_4_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_4_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_4_##choice
#define MACROLOP_PRIV_EVAL_REC_4_CONTINUE                   MACROLOP_PRIV_EVAL_REC_5
#define MACROLOP_PRIV_EVAL_REC_4_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_5(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_5_OVERLOAD(MACROLOP_PRIV_EVAL_REC_5_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_5_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_5_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_5_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_5_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_5_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_5_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_5_##choice
#define MACROLOP_PRIV_EVAL_REC_5_CONTINUE                   MACROLOP_PRIV_EVAL_REC_6
#define MACROLOP_PRIV_EVAL_REC_5_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_6(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_6_OVERLOAD(MACROLOP_PRIV_EVAL_REC_6_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_6_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_6_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_6_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_6_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_6_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_6_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_6_##choice
#define MACROLOP_PRIV_EVAL_REC_6_CONTINUE                   MACROLOP_PRIV_EVAL_REC_7
#define MACROLOP_PRIV_EVAL_REC_6_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_7(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_7_OVERLOAD(MACROLOP_PRIV_EVAL_REC_7_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_7_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_7_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_7_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_7_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_7_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_7_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_7_##choice
#define MACROLOP_PRIV_EVAL_REC_7_CONTINUE                   MACROLOP_PRIV_EVAL_REC_8
#define MACROLOP_PRIV_EVAL_REC_7_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_8(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_8_OVERLOAD(MACROLOP_PRIV_EVAL_REC_8_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_8_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_8_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_8_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_8_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_8_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_8_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_8_##choice
#define MACROLOP_PRIV_EVAL_REC_8_CONTINUE                   MACROLOP_PRIV_EVAL_REC_9
#define MACROLOP_PRIV_EVAL_REC_8_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_9(...)                                                              \
    MACROLOP_PRIV_EVAL_REC_9_OVERLOAD(MACROLOP_PRIV_EVAL_REC_9_GET_CHOICE(__VA_ARGS__))            \
    (MACROLOP_PRIV_EVAL_REC_9_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_9_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_9_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_9_OVERLOAD(choice)                                                  \
    MACROLOP_PRIV_EVAL_REC_9_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_9_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_9_##choice
#define MACROLOP_PRIV_EVAL_REC_9_CONTINUE                   MACROLOP_PRIV_EVAL_REC_10
#define MACROLOP_PRIV_EVAL_REC_9_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_10(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_10_OVERLOAD(MACROLOP_PRIV_EVAL_REC_10_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_10_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_10_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_10_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_10_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_10_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_10_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_10_##choice
#define MACROLOP_PRIV_EVAL_REC_10_CONTINUE                   MACROLOP_PRIV_EVAL_REC_11
#define MACROLOP_PRIV_EVAL_REC_10_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_11(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_11_OVERLOAD(MACROLOP_PRIV_EVAL_REC_11_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_11_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_11_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_11_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_11_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_11_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_11_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_11_##choice
#define MACROLOP_PRIV_EVAL_REC_11_CONTINUE                   MACROLOP_PRIV_EVAL_REC_12
#define MACROLOP_PRIV_EVAL_REC_11_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_12(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_12_OVERLOAD(MACROLOP_PRIV_EVAL_REC_12_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_12_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_12_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_12_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_12_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_12_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_12_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_12_##choice
#define MACROLOP_PRIV_EVAL_REC_12_CONTINUE                   MACROLOP_PRIV_EVAL_REC_13
#define MACROLOP_PRIV_EVAL_REC_12_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_13(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_13_OVERLOAD(MACROLOP_PRIV_EVAL_REC_13_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_13_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_13_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_13_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_13_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_13_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_13_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_13_##choice
#define MACROLOP_PRIV_EVAL_REC_13_CONTINUE                   MACROLOP_PRIV_EVAL_REC_14
#define MACROLOP_PRIV_EVAL_REC_13_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_14(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_14_OVERLOAD(MACROLOP_PRIV_EVAL_REC_14_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_14_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_14_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_14_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_14_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_14_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_14_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_14_##choice
#define MACROLOP_PRIV_EVAL_REC_14_CONTINUE                   MACROLOP_PRIV_EVAL_REC_15
#define MACROLOP_PRIV_EVAL_REC_14_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_15(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_15_OVERLOAD(MACROLOP_PRIV_EVAL_REC_15_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_15_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_15_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_15_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_15_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_15_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_15_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_15_##choice
#define MACROLOP_PRIV_EVAL_REC_15_CONTINUE                   MACROLOP_PRIV_EVAL_REC_16
#define MACROLOP_PRIV_EVAL_REC_15_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_16(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_16_OVERLOAD(MACROLOP_PRIV_EVAL_REC_16_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_16_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_16_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_16_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_16_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_16_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_16_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_16_##choice
#define MACROLOP_PRIV_EVAL_REC_16_CONTINUE                   MACROLOP_PRIV_EVAL_REC_17
#define MACROLOP_PRIV_EVAL_REC_16_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_17(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_17_OVERLOAD(MACROLOP_PRIV_EVAL_REC_17_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_17_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_17_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_17_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_17_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_17_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_17_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_17_##choice
#define MACROLOP_PRIV_EVAL_REC_17_CONTINUE                   MACROLOP_PRIV_EVAL_REC_18
#define MACROLOP_PRIV_EVAL_REC_17_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_18(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_18_OVERLOAD(MACROLOP_PRIV_EVAL_REC_18_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_18_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_18_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_18_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_18_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_18_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_18_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_18_##choice
#define MACROLOP_PRIV_EVAL_REC_18_CONTINUE                   MACROLOP_PRIV_EVAL_REC_19
#define MACROLOP_PRIV_EVAL_REC_18_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_19(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_19_OVERLOAD(MACROLOP_PRIV_EVAL_REC_19_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_19_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_19_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_19_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_19_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_19_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_19_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_19_##choice
#define MACROLOP_PRIV_EVAL_REC_19_CONTINUE                   MACROLOP_PRIV_EVAL_REC_20
#define MACROLOP_PRIV_EVAL_REC_19_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_20(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_20_OVERLOAD(MACROLOP_PRIV_EVAL_REC_20_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_20_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_20_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_20_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_20_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_20_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_20_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_20_##choice
#define MACROLOP_PRIV_EVAL_REC_20_CONTINUE                   MACROLOP_PRIV_EVAL_REC_21
#define MACROLOP_PRIV_EVAL_REC_20_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_21(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_21_OVERLOAD(MACROLOP_PRIV_EVAL_REC_21_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_21_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_21_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_21_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_21_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_21_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_21_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_21_##choice
#define MACROLOP_PRIV_EVAL_REC_21_CONTINUE                   MACROLOP_PRIV_EVAL_REC_22
#define MACROLOP_PRIV_EVAL_REC_21_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_22(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_22_OVERLOAD(MACROLOP_PRIV_EVAL_REC_22_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_22_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_22_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_22_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_22_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_22_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_22_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_22_##choice
#define MACROLOP_PRIV_EVAL_REC_22_CONTINUE                   MACROLOP_PRIV_EVAL_REC_23
#define MACROLOP_PRIV_EVAL_REC_22_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_23(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_23_OVERLOAD(MACROLOP_PRIV_EVAL_REC_23_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_23_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_23_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_23_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_23_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_23_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_23_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_23_##choice
#define MACROLOP_PRIV_EVAL_REC_23_CONTINUE                   MACROLOP_PRIV_EVAL_REC_24
#define MACROLOP_PRIV_EVAL_REC_23_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_24(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_24_OVERLOAD(MACROLOP_PRIV_EVAL_REC_24_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_24_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_24_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_24_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_24_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_24_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_24_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_24_##choice
#define MACROLOP_PRIV_EVAL_REC_24_CONTINUE                   MACROLOP_PRIV_EVAL_REC_25
#define MACROLOP_PRIV_EVAL_REC_24_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_25(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_25_OVERLOAD(MACROLOP_PRIV_EVAL_REC_25_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_25_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_25_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_25_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_25_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_25_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_25_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_25_##choice
#define MACROLOP_PRIV_EVAL_REC_25_CONTINUE                   MACROLOP_PRIV_EVAL_REC_26
#define MACROLOP_PRIV_EVAL_REC_25_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_26(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_26_OVERLOAD(MACROLOP_PRIV_EVAL_REC_26_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_26_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_26_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_26_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_26_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_26_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_26_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_26_##choice
#define MACROLOP_PRIV_EVAL_REC_26_CONTINUE                   MACROLOP_PRIV_EVAL_REC_27
#define MACROLOP_PRIV_EVAL_REC_26_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_27(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_27_OVERLOAD(MACROLOP_PRIV_EVAL_REC_27_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_27_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_27_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_27_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_27_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_27_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_27_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_27_##choice
#define MACROLOP_PRIV_EVAL_REC_27_CONTINUE                   MACROLOP_PRIV_EVAL_REC_28
#define MACROLOP_PRIV_EVAL_REC_27_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_28(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_28_OVERLOAD(MACROLOP_PRIV_EVAL_REC_28_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_28_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_28_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_28_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_28_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_28_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_28_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_28_##choice
#define MACROLOP_PRIV_EVAL_REC_28_CONTINUE                   MACROLOP_PRIV_EVAL_REC_29
#define MACROLOP_PRIV_EVAL_REC_28_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_29(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_29_OVERLOAD(MACROLOP_PRIV_EVAL_REC_29_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_29_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_29_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_29_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_29_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_29_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_29_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_29_##choice
#define MACROLOP_PRIV_EVAL_REC_29_CONTINUE                   MACROLOP_PRIV_EVAL_REC_30
#define MACROLOP_PRIV_EVAL_REC_29_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_30(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_30_OVERLOAD(MACROLOP_PRIV_EVAL_REC_30_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_30_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_30_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_30_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_30_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_30_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_30_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_30_##choice
#define MACROLOP_PRIV_EVAL_REC_30_CONTINUE                   MACROLOP_PRIV_EVAL_REC_31
#define MACROLOP_PRIV_EVAL_REC_30_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_31(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_31_OVERLOAD(MACROLOP_PRIV_EVAL_REC_31_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_31_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_31_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_31_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_31_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_31_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_31_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_31_##choice
#define MACROLOP_PRIV_EVAL_REC_31_CONTINUE                   MACROLOP_PRIV_EVAL_REC_32
#define MACROLOP_PRIV_EVAL_REC_31_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_32(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_32_OVERLOAD(MACROLOP_PRIV_EVAL_REC_32_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_32_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_32_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_32_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_32_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_32_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_32_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_32_##choice
#define MACROLOP_PRIV_EVAL_REC_32_CONTINUE                   MACROLOP_PRIV_EVAL_REC_33
#define MACROLOP_PRIV_EVAL_REC_32_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_33(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_33_OVERLOAD(MACROLOP_PRIV_EVAL_REC_33_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_33_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_33_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_33_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_33_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_33_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_33_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_33_##choice
#define MACROLOP_PRIV_EVAL_REC_33_CONTINUE                   MACROLOP_PRIV_EVAL_REC_34
#define MACROLOP_PRIV_EVAL_REC_33_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_34(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_34_OVERLOAD(MACROLOP_PRIV_EVAL_REC_34_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_34_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_34_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_34_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_34_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_34_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_34_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_34_##choice
#define MACROLOP_PRIV_EVAL_REC_34_CONTINUE                   MACROLOP_PRIV_EVAL_REC_35
#define MACROLOP_PRIV_EVAL_REC_34_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_35(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_35_OVERLOAD(MACROLOP_PRIV_EVAL_REC_35_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_35_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_35_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_35_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_35_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_35_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_35_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_35_##choice
#define MACROLOP_PRIV_EVAL_REC_35_CONTINUE                   MACROLOP_PRIV_EVAL_REC_36
#define MACROLOP_PRIV_EVAL_REC_35_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_36(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_36_OVERLOAD(MACROLOP_PRIV_EVAL_REC_36_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_36_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_36_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_36_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_36_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_36_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_36_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_36_##choice
#define MACROLOP_PRIV_EVAL_REC_36_CONTINUE                   MACROLOP_PRIV_EVAL_REC_37
#define MACROLOP_PRIV_EVAL_REC_36_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_37(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_37_OVERLOAD(MACROLOP_PRIV_EVAL_REC_37_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_37_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_37_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_37_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_37_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_37_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_37_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_37_##choice
#define MACROLOP_PRIV_EVAL_REC_37_CONTINUE                   MACROLOP_PRIV_EVAL_REC_38
#define MACROLOP_PRIV_EVAL_REC_37_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_38(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_38_OVERLOAD(MACROLOP_PRIV_EVAL_REC_38_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_38_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_38_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_38_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_38_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_38_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_38_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_38_##choice
#define MACROLOP_PRIV_EVAL_REC_38_CONTINUE                   MACROLOP_PRIV_EVAL_REC_39
#define MACROLOP_PRIV_EVAL_REC_38_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_39(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_39_OVERLOAD(MACROLOP_PRIV_EVAL_REC_39_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_39_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_39_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_39_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_39_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_39_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_39_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_39_##choice
#define MACROLOP_PRIV_EVAL_REC_39_CONTINUE                   MACROLOP_PRIV_EVAL_REC_40
#define MACROLOP_PRIV_EVAL_REC_39_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_40(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_40_OVERLOAD(MACROLOP_PRIV_EVAL_REC_40_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_40_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_40_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_40_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_40_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_40_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_40_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_40_##choice
#define MACROLOP_PRIV_EVAL_REC_40_CONTINUE                   MACROLOP_PRIV_EVAL_REC_41
#define MACROLOP_PRIV_EVAL_REC_40_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_41(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_41_OVERLOAD(MACROLOP_PRIV_EVAL_REC_41_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_41_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_41_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_41_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_41_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_41_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_41_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_41_##choice
#define MACROLOP_PRIV_EVAL_REC_41_CONTINUE                   MACROLOP_PRIV_EVAL_REC_42
#define MACROLOP_PRIV_EVAL_REC_41_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_42(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_42_OVERLOAD(MACROLOP_PRIV_EVAL_REC_42_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_42_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_42_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_42_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_42_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_42_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_42_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_42_##choice
#define MACROLOP_PRIV_EVAL_REC_42_CONTINUE                   MACROLOP_PRIV_EVAL_REC_43
#define MACROLOP_PRIV_EVAL_REC_42_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_43(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_43_OVERLOAD(MACROLOP_PRIV_EVAL_REC_43_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_43_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_43_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_43_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_43_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_43_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_43_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_43_##choice
#define MACROLOP_PRIV_EVAL_REC_43_CONTINUE                   MACROLOP_PRIV_EVAL_REC_44
#define MACROLOP_PRIV_EVAL_REC_43_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_44(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_44_OVERLOAD(MACROLOP_PRIV_EVAL_REC_44_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_44_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_44_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_44_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_44_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_44_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_44_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_44_##choice
#define MACROLOP_PRIV_EVAL_REC_44_CONTINUE                   MACROLOP_PRIV_EVAL_REC_45
#define MACROLOP_PRIV_EVAL_REC_44_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_45(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_45_OVERLOAD(MACROLOP_PRIV_EVAL_REC_45_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_45_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_45_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_45_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_45_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_45_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_45_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_45_##choice
#define MACROLOP_PRIV_EVAL_REC_45_CONTINUE                   MACROLOP_PRIV_EVAL_REC_46
#define MACROLOP_PRIV_EVAL_REC_45_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_46(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_46_OVERLOAD(MACROLOP_PRIV_EVAL_REC_46_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_46_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_46_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_46_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_46_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_46_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_46_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_46_##choice
#define MACROLOP_PRIV_EVAL_REC_46_CONTINUE                   MACROLOP_PRIV_EVAL_REC_47
#define MACROLOP_PRIV_EVAL_REC_46_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_47(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_47_OVERLOAD(MACROLOP_PRIV_EVAL_REC_47_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_47_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_47_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_47_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_47_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_47_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_47_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_47_##choice
#define MACROLOP_PRIV_EVAL_REC_47_CONTINUE                   MACROLOP_PRIV_EVAL_REC_48
#define MACROLOP_PRIV_EVAL_REC_47_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_48(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_48_OVERLOAD(MACROLOP_PRIV_EVAL_REC_48_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_48_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_48_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_48_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_48_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_48_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_48_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_48_##choice
#define MACROLOP_PRIV_EVAL_REC_48_CONTINUE                   MACROLOP_PRIV_EVAL_REC_49
#define MACROLOP_PRIV_EVAL_REC_48_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_49(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_49_OVERLOAD(MACROLOP_PRIV_EVAL_REC_49_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_49_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_49_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_49_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_49_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_49_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_49_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_49_##choice
#define MACROLOP_PRIV_EVAL_REC_49_CONTINUE                   MACROLOP_PRIV_EVAL_REC_50
#define MACROLOP_PRIV_EVAL_REC_49_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_50(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_50_OVERLOAD(MACROLOP_PRIV_EVAL_REC_50_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_50_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_50_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_50_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_50_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_50_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_50_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_50_##choice
#define MACROLOP_PRIV_EVAL_REC_50_CONTINUE                   MACROLOP_PRIV_EVAL_REC_51
#define MACROLOP_PRIV_EVAL_REC_50_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_51(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_51_OVERLOAD(MACROLOP_PRIV_EVAL_REC_51_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_51_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_51_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_51_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_51_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_51_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_51_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_51_##choice
#define MACROLOP_PRIV_EVAL_REC_51_CONTINUE                   MACROLOP_PRIV_EVAL_REC_52
#define MACROLOP_PRIV_EVAL_REC_51_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_52(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_52_OVERLOAD(MACROLOP_PRIV_EVAL_REC_52_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_52_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_52_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_52_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_52_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_52_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_52_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_52_##choice
#define MACROLOP_PRIV_EVAL_REC_52_CONTINUE                   MACROLOP_PRIV_EVAL_REC_53
#define MACROLOP_PRIV_EVAL_REC_52_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_53(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_53_OVERLOAD(MACROLOP_PRIV_EVAL_REC_53_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_53_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_53_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_53_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_53_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_53_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_53_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_53_##choice
#define MACROLOP_PRIV_EVAL_REC_53_CONTINUE                   MACROLOP_PRIV_EVAL_REC_54
#define MACROLOP_PRIV_EVAL_REC_53_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_54(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_54_OVERLOAD(MACROLOP_PRIV_EVAL_REC_54_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_54_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_54_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_54_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_54_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_54_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_54_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_54_##choice
#define MACROLOP_PRIV_EVAL_REC_54_CONTINUE                   MACROLOP_PRIV_EVAL_REC_55
#define MACROLOP_PRIV_EVAL_REC_54_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_55(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_55_OVERLOAD(MACROLOP_PRIV_EVAL_REC_55_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_55_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_55_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_55_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_55_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_55_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_55_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_55_##choice
#define MACROLOP_PRIV_EVAL_REC_55_CONTINUE                   MACROLOP_PRIV_EVAL_REC_56
#define MACROLOP_PRIV_EVAL_REC_55_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_56(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_56_OVERLOAD(MACROLOP_PRIV_EVAL_REC_56_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_56_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_56_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_56_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_56_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_56_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_56_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_56_##choice
#define MACROLOP_PRIV_EVAL_REC_56_CONTINUE                   MACROLOP_PRIV_EVAL_REC_57
#define MACROLOP_PRIV_EVAL_REC_56_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_57(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_57_OVERLOAD(MACROLOP_PRIV_EVAL_REC_57_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_57_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_57_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_57_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_57_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_57_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_57_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_57_##choice
#define MACROLOP_PRIV_EVAL_REC_57_CONTINUE                   MACROLOP_PRIV_EVAL_REC_58
#define MACROLOP_PRIV_EVAL_REC_57_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_58(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_58_OVERLOAD(MACROLOP_PRIV_EVAL_REC_58_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_58_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_58_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_58_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_58_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_58_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_58_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_58_##choice
#define MACROLOP_PRIV_EVAL_REC_58_CONTINUE                   MACROLOP_PRIV_EVAL_REC_59
#define MACROLOP_PRIV_EVAL_REC_58_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_59(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_59_OVERLOAD(MACROLOP_PRIV_EVAL_REC_59_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_59_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_59_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_59_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_59_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_59_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_59_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_59_##choice
#define MACROLOP_PRIV_EVAL_REC_59_CONTINUE                   MACROLOP_PRIV_EVAL_REC_60
#define MACROLOP_PRIV_EVAL_REC_59_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_60(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_60_OVERLOAD(MACROLOP_PRIV_EVAL_REC_60_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_60_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_60_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_60_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_60_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_60_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_60_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_60_##choice
#define MACROLOP_PRIV_EVAL_REC_60_CONTINUE                   MACROLOP_PRIV_EVAL_REC_61
#define MACROLOP_PRIV_EVAL_REC_60_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_61(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_61_OVERLOAD(MACROLOP_PRIV_EVAL_REC_61_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_61_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_61_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_61_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_61_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_61_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_61_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_61_##choice
#define MACROLOP_PRIV_EVAL_REC_61_CONTINUE                   MACROLOP_PRIV_EVAL_REC_62
#define MACROLOP_PRIV_EVAL_REC_61_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_62(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_62_OVERLOAD(MACROLOP_PRIV_EVAL_REC_62_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_62_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_62_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_62_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_62_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_62_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_62_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_62_##choice
#define MACROLOP_PRIV_EVAL_REC_62_CONTINUE                   MACROLOP_PRIV_EVAL_REC_63
#define MACROLOP_PRIV_EVAL_REC_62_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_63(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_63_OVERLOAD(MACROLOP_PRIV_EVAL_REC_63_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_63_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_63_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_63_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_63_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_63_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_63_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_63_##choice
#define MACROLOP_PRIV_EVAL_REC_63_CONTINUE                   MACROLOP_PRIV_EVAL_REC_64
#define MACROLOP_PRIV_EVAL_REC_63_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_64(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_64_OVERLOAD(MACROLOP_PRIV_EVAL_REC_64_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_64_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_64_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_64_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_64_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_64_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_64_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_64_##choice
#define MACROLOP_PRIV_EVAL_REC_64_CONTINUE                   MACROLOP_PRIV_EVAL_REC_65
#define MACROLOP_PRIV_EVAL_REC_64_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_65(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_65_OVERLOAD(MACROLOP_PRIV_EVAL_REC_65_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_65_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_65_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_65_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_65_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_65_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_65_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_65_##choice
#define MACROLOP_PRIV_EVAL_REC_65_CONTINUE                   MACROLOP_PRIV_EVAL_REC_66
#define MACROLOP_PRIV_EVAL_REC_65_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_66(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_66_OVERLOAD(MACROLOP_PRIV_EVAL_REC_66_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_66_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_66_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_66_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_66_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_66_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_66_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_66_##choice
#define MACROLOP_PRIV_EVAL_REC_66_CONTINUE                   MACROLOP_PRIV_EVAL_REC_67
#define MACROLOP_PRIV_EVAL_REC_66_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_67(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_67_OVERLOAD(MACROLOP_PRIV_EVAL_REC_67_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_67_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_67_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_67_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_67_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_67_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_67_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_67_##choice
#define MACROLOP_PRIV_EVAL_REC_67_CONTINUE                   MACROLOP_PRIV_EVAL_REC_68
#define MACROLOP_PRIV_EVAL_REC_67_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_68(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_68_OVERLOAD(MACROLOP_PRIV_EVAL_REC_68_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_68_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_68_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_68_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_68_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_68_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_68_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_68_##choice
#define MACROLOP_PRIV_EVAL_REC_68_CONTINUE                   MACROLOP_PRIV_EVAL_REC_69
#define MACROLOP_PRIV_EVAL_REC_68_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_69(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_69_OVERLOAD(MACROLOP_PRIV_EVAL_REC_69_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_69_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_69_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_69_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_69_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_69_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_69_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_69_##choice
#define MACROLOP_PRIV_EVAL_REC_69_CONTINUE                   MACROLOP_PRIV_EVAL_REC_70
#define MACROLOP_PRIV_EVAL_REC_69_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_70(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_70_OVERLOAD(MACROLOP_PRIV_EVAL_REC_70_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_70_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_70_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_70_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_70_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_70_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_70_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_70_##choice
#define MACROLOP_PRIV_EVAL_REC_70_CONTINUE                   MACROLOP_PRIV_EVAL_REC_71
#define MACROLOP_PRIV_EVAL_REC_70_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_71(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_71_OVERLOAD(MACROLOP_PRIV_EVAL_REC_71_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_71_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_71_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_71_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_71_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_71_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_71_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_71_##choice
#define MACROLOP_PRIV_EVAL_REC_71_CONTINUE                   MACROLOP_PRIV_EVAL_REC_72
#define MACROLOP_PRIV_EVAL_REC_71_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_72(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_72_OVERLOAD(MACROLOP_PRIV_EVAL_REC_72_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_72_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_72_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_72_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_72_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_72_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_72_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_72_##choice
#define MACROLOP_PRIV_EVAL_REC_72_CONTINUE                   MACROLOP_PRIV_EVAL_REC_73
#define MACROLOP_PRIV_EVAL_REC_72_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_73(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_73_OVERLOAD(MACROLOP_PRIV_EVAL_REC_73_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_73_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_73_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_73_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_73_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_73_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_73_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_73_##choice
#define MACROLOP_PRIV_EVAL_REC_73_CONTINUE                   MACROLOP_PRIV_EVAL_REC_74
#define MACROLOP_PRIV_EVAL_REC_73_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_74(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_74_OVERLOAD(MACROLOP_PRIV_EVAL_REC_74_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_74_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_74_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_74_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_74_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_74_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_74_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_74_##choice
#define MACROLOP_PRIV_EVAL_REC_74_CONTINUE                   MACROLOP_PRIV_EVAL_REC_75
#define MACROLOP_PRIV_EVAL_REC_74_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_75(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_75_OVERLOAD(MACROLOP_PRIV_EVAL_REC_75_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_75_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_75_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_75_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_75_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_75_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_75_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_75_##choice
#define MACROLOP_PRIV_EVAL_REC_75_CONTINUE                   MACROLOP_PRIV_EVAL_REC_76
#define MACROLOP_PRIV_EVAL_REC_75_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_76(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_76_OVERLOAD(MACROLOP_PRIV_EVAL_REC_76_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_76_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_76_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_76_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_76_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_76_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_76_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_76_##choice
#define MACROLOP_PRIV_EVAL_REC_76_CONTINUE                   MACROLOP_PRIV_EVAL_REC_77
#define MACROLOP_PRIV_EVAL_REC_76_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_77(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_77_OVERLOAD(MACROLOP_PRIV_EVAL_REC_77_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_77_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_77_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_77_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_77_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_77_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_77_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_77_##choice
#define MACROLOP_PRIV_EVAL_REC_77_CONTINUE                   MACROLOP_PRIV_EVAL_REC_78
#define MACROLOP_PRIV_EVAL_REC_77_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_78(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_78_OVERLOAD(MACROLOP_PRIV_EVAL_REC_78_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_78_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_78_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_78_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_78_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_78_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_78_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_78_##choice
#define MACROLOP_PRIV_EVAL_REC_78_CONTINUE                   MACROLOP_PRIV_EVAL_REC_79
#define MACROLOP_PRIV_EVAL_REC_78_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_79(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_79_OVERLOAD(MACROLOP_PRIV_EVAL_REC_79_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_79_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_79_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_79_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_79_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_79_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_79_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_79_##choice
#define MACROLOP_PRIV_EVAL_REC_79_CONTINUE                   MACROLOP_PRIV_EVAL_REC_80
#define MACROLOP_PRIV_EVAL_REC_79_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_80(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_80_OVERLOAD(MACROLOP_PRIV_EVAL_REC_80_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_80_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_80_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_80_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_80_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_80_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_80_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_80_##choice
#define MACROLOP_PRIV_EVAL_REC_80_CONTINUE                   MACROLOP_PRIV_EVAL_REC_81
#define MACROLOP_PRIV_EVAL_REC_80_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_81(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_81_OVERLOAD(MACROLOP_PRIV_EVAL_REC_81_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_81_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_81_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_81_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_81_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_81_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_81_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_81_##choice
#define MACROLOP_PRIV_EVAL_REC_81_CONTINUE                   MACROLOP_PRIV_EVAL_REC_82
#define MACROLOP_PRIV_EVAL_REC_81_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_82(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_82_OVERLOAD(MACROLOP_PRIV_EVAL_REC_82_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_82_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_82_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_82_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_82_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_82_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_82_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_82_##choice
#define MACROLOP_PRIV_EVAL_REC_82_CONTINUE                   MACROLOP_PRIV_EVAL_REC_83
#define MACROLOP_PRIV_EVAL_REC_82_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_83(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_83_OVERLOAD(MACROLOP_PRIV_EVAL_REC_83_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_83_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_83_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_83_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_83_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_83_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_83_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_83_##choice
#define MACROLOP_PRIV_EVAL_REC_83_CONTINUE                   MACROLOP_PRIV_EVAL_REC_84
#define MACROLOP_PRIV_EVAL_REC_83_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_84(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_84_OVERLOAD(MACROLOP_PRIV_EVAL_REC_84_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_84_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_84_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_84_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_84_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_84_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_84_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_84_##choice
#define MACROLOP_PRIV_EVAL_REC_84_CONTINUE                   MACROLOP_PRIV_EVAL_REC_85
#define MACROLOP_PRIV_EVAL_REC_84_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_85(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_85_OVERLOAD(MACROLOP_PRIV_EVAL_REC_85_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_85_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_85_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_85_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_85_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_85_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_85_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_85_##choice
#define MACROLOP_PRIV_EVAL_REC_85_CONTINUE                   MACROLOP_PRIV_EVAL_REC_86
#define MACROLOP_PRIV_EVAL_REC_85_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_86(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_86_OVERLOAD(MACROLOP_PRIV_EVAL_REC_86_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_86_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_86_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_86_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_86_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_86_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_86_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_86_##choice
#define MACROLOP_PRIV_EVAL_REC_86_CONTINUE                   MACROLOP_PRIV_EVAL_REC_87
#define MACROLOP_PRIV_EVAL_REC_86_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_87(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_87_OVERLOAD(MACROLOP_PRIV_EVAL_REC_87_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_87_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_87_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_87_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_87_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_87_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_87_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_87_##choice
#define MACROLOP_PRIV_EVAL_REC_87_CONTINUE                   MACROLOP_PRIV_EVAL_REC_88
#define MACROLOP_PRIV_EVAL_REC_87_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_88(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_88_OVERLOAD(MACROLOP_PRIV_EVAL_REC_88_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_88_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_88_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_88_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_88_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_88_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_88_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_88_##choice
#define MACROLOP_PRIV_EVAL_REC_88_CONTINUE                   MACROLOP_PRIV_EVAL_REC_89
#define MACROLOP_PRIV_EVAL_REC_88_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_89(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_89_OVERLOAD(MACROLOP_PRIV_EVAL_REC_89_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_89_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_89_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_89_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_89_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_89_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_89_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_89_##choice
#define MACROLOP_PRIV_EVAL_REC_89_CONTINUE                   MACROLOP_PRIV_EVAL_REC_90
#define MACROLOP_PRIV_EVAL_REC_89_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_90(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_90_OVERLOAD(MACROLOP_PRIV_EVAL_REC_90_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_90_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_90_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_90_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_90_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_90_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_90_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_90_##choice
#define MACROLOP_PRIV_EVAL_REC_90_CONTINUE                   MACROLOP_PRIV_EVAL_REC_91
#define MACROLOP_PRIV_EVAL_REC_90_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_91(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_91_OVERLOAD(MACROLOP_PRIV_EVAL_REC_91_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_91_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_91_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_91_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_91_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_91_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_91_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_91_##choice
#define MACROLOP_PRIV_EVAL_REC_91_CONTINUE                   MACROLOP_PRIV_EVAL_REC_92
#define MACROLOP_PRIV_EVAL_REC_91_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_92(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_92_OVERLOAD(MACROLOP_PRIV_EVAL_REC_92_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_92_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_92_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_92_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_92_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_92_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_92_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_92_##choice
#define MACROLOP_PRIV_EVAL_REC_92_CONTINUE                   MACROLOP_PRIV_EVAL_REC_93
#define MACROLOP_PRIV_EVAL_REC_92_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_93(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_93_OVERLOAD(MACROLOP_PRIV_EVAL_REC_93_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_93_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_93_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_93_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_93_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_93_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_93_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_93_##choice
#define MACROLOP_PRIV_EVAL_REC_93_CONTINUE                   MACROLOP_PRIV_EVAL_REC_94
#define MACROLOP_PRIV_EVAL_REC_93_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_94(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_94_OVERLOAD(MACROLOP_PRIV_EVAL_REC_94_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_94_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_94_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_94_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_94_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_94_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_94_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_94_##choice
#define MACROLOP_PRIV_EVAL_REC_94_CONTINUE                   MACROLOP_PRIV_EVAL_REC_95
#define MACROLOP_PRIV_EVAL_REC_94_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_95(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_95_OVERLOAD(MACROLOP_PRIV_EVAL_REC_95_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_95_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_95_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_95_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_95_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_95_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_95_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_95_##choice
#define MACROLOP_PRIV_EVAL_REC_95_CONTINUE                   MACROLOP_PRIV_EVAL_REC_96
#define MACROLOP_PRIV_EVAL_REC_95_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_96(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_96_OVERLOAD(MACROLOP_PRIV_EVAL_REC_96_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_96_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_96_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_96_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_96_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_96_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_96_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_96_##choice
#define MACROLOP_PRIV_EVAL_REC_96_CONTINUE                   MACROLOP_PRIV_EVAL_REC_97
#define MACROLOP_PRIV_EVAL_REC_96_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_97(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_97_OVERLOAD(MACROLOP_PRIV_EVAL_REC_97_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_97_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_97_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_97_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_97_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_97_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_97_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_97_##choice
#define MACROLOP_PRIV_EVAL_REC_97_CONTINUE                   MACROLOP_PRIV_EVAL_REC_98
#define MACROLOP_PRIV_EVAL_REC_97_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_98(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_98_OVERLOAD(MACROLOP_PRIV_EVAL_REC_98_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_98_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_98_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_98_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_98_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_98_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_98_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_98_##choice
#define MACROLOP_PRIV_EVAL_REC_98_CONTINUE                   MACROLOP_PRIV_EVAL_REC_99
#define MACROLOP_PRIV_EVAL_REC_98_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_99(...)                                                             \
    MACROLOP_PRIV_EVAL_REC_99_OVERLOAD(MACROLOP_PRIV_EVAL_REC_99_GET_CHOICE(__VA_ARGS__))          \
    (MACROLOP_PRIV_EVAL_REC_99_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_99_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_99_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_99_OVERLOAD(choice)                                                 \
    MACROLOP_PRIV_EVAL_REC_99_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_99_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_99_##choice
#define MACROLOP_PRIV_EVAL_REC_99_CONTINUE                   MACROLOP_PRIV_EVAL_REC_100
#define MACROLOP_PRIV_EVAL_REC_99_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_100(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_100_OVERLOAD(MACROLOP_PRIV_EVAL_REC_100_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_100_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_100_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_100_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_100_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_100_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_100_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_100_##choice
#define MACROLOP_PRIV_EVAL_REC_100_CONTINUE                   MACROLOP_PRIV_EVAL_REC_101
#define MACROLOP_PRIV_EVAL_REC_100_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_101(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_101_OVERLOAD(MACROLOP_PRIV_EVAL_REC_101_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_101_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_101_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_101_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_101_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_101_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_101_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_101_##choice
#define MACROLOP_PRIV_EVAL_REC_101_CONTINUE                   MACROLOP_PRIV_EVAL_REC_102
#define MACROLOP_PRIV_EVAL_REC_101_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_102(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_102_OVERLOAD(MACROLOP_PRIV_EVAL_REC_102_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_102_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_102_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_102_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_102_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_102_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_102_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_102_##choice
#define MACROLOP_PRIV_EVAL_REC_102_CONTINUE                   MACROLOP_PRIV_EVAL_REC_103
#define MACROLOP_PRIV_EVAL_REC_102_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_103(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_103_OVERLOAD(MACROLOP_PRIV_EVAL_REC_103_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_103_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_103_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_103_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_103_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_103_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_103_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_103_##choice
#define MACROLOP_PRIV_EVAL_REC_103_CONTINUE                   MACROLOP_PRIV_EVAL_REC_104
#define MACROLOP_PRIV_EVAL_REC_103_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_104(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_104_OVERLOAD(MACROLOP_PRIV_EVAL_REC_104_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_104_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_104_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_104_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_104_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_104_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_104_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_104_##choice
#define MACROLOP_PRIV_EVAL_REC_104_CONTINUE                   MACROLOP_PRIV_EVAL_REC_105
#define MACROLOP_PRIV_EVAL_REC_104_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_105(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_105_OVERLOAD(MACROLOP_PRIV_EVAL_REC_105_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_105_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_105_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_105_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_105_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_105_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_105_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_105_##choice
#define MACROLOP_PRIV_EVAL_REC_105_CONTINUE                   MACROLOP_PRIV_EVAL_REC_106
#define MACROLOP_PRIV_EVAL_REC_105_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_106(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_106_OVERLOAD(MACROLOP_PRIV_EVAL_REC_106_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_106_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_106_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_106_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_106_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_106_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_106_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_106_##choice
#define MACROLOP_PRIV_EVAL_REC_106_CONTINUE                   MACROLOP_PRIV_EVAL_REC_107
#define MACROLOP_PRIV_EVAL_REC_106_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_107(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_107_OVERLOAD(MACROLOP_PRIV_EVAL_REC_107_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_107_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_107_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_107_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_107_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_107_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_107_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_107_##choice
#define MACROLOP_PRIV_EVAL_REC_107_CONTINUE                   MACROLOP_PRIV_EVAL_REC_108
#define MACROLOP_PRIV_EVAL_REC_107_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_108(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_108_OVERLOAD(MACROLOP_PRIV_EVAL_REC_108_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_108_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_108_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_108_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_108_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_108_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_108_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_108_##choice
#define MACROLOP_PRIV_EVAL_REC_108_CONTINUE                   MACROLOP_PRIV_EVAL_REC_109
#define MACROLOP_PRIV_EVAL_REC_108_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_109(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_109_OVERLOAD(MACROLOP_PRIV_EVAL_REC_109_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_109_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_109_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_109_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_109_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_109_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_109_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_109_##choice
#define MACROLOP_PRIV_EVAL_REC_109_CONTINUE                   MACROLOP_PRIV_EVAL_REC_110
#define MACROLOP_PRIV_EVAL_REC_109_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_110(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_110_OVERLOAD(MACROLOP_PRIV_EVAL_REC_110_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_110_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_110_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_110_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_110_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_110_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_110_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_110_##choice
#define MACROLOP_PRIV_EVAL_REC_110_CONTINUE                   MACROLOP_PRIV_EVAL_REC_111
#define MACROLOP_PRIV_EVAL_REC_110_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_111(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_111_OVERLOAD(MACROLOP_PRIV_EVAL_REC_111_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_111_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_111_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_111_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_111_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_111_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_111_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_111_##choice
#define MACROLOP_PRIV_EVAL_REC_111_CONTINUE                   MACROLOP_PRIV_EVAL_REC_112
#define MACROLOP_PRIV_EVAL_REC_111_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_112(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_112_OVERLOAD(MACROLOP_PRIV_EVAL_REC_112_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_112_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_112_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_112_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_112_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_112_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_112_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_112_##choice
#define MACROLOP_PRIV_EVAL_REC_112_CONTINUE                   MACROLOP_PRIV_EVAL_REC_113
#define MACROLOP_PRIV_EVAL_REC_112_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_113(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_113_OVERLOAD(MACROLOP_PRIV_EVAL_REC_113_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_113_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_113_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_113_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_113_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_113_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_113_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_113_##choice
#define MACROLOP_PRIV_EVAL_REC_113_CONTINUE                   MACROLOP_PRIV_EVAL_REC_114
#define MACROLOP_PRIV_EVAL_REC_113_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_114(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_114_OVERLOAD(MACROLOP_PRIV_EVAL_REC_114_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_114_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_114_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_114_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_114_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_114_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_114_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_114_##choice
#define MACROLOP_PRIV_EVAL_REC_114_CONTINUE                   MACROLOP_PRIV_EVAL_REC_115
#define MACROLOP_PRIV_EVAL_REC_114_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_115(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_115_OVERLOAD(MACROLOP_PRIV_EVAL_REC_115_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_115_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_115_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_115_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_115_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_115_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_115_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_115_##choice
#define MACROLOP_PRIV_EVAL_REC_115_CONTINUE                   MACROLOP_PRIV_EVAL_REC_116
#define MACROLOP_PRIV_EVAL_REC_115_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_116(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_116_OVERLOAD(MACROLOP_PRIV_EVAL_REC_116_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_116_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_116_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_116_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_116_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_116_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_116_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_116_##choice
#define MACROLOP_PRIV_EVAL_REC_116_CONTINUE                   MACROLOP_PRIV_EVAL_REC_117
#define MACROLOP_PRIV_EVAL_REC_116_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_117(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_117_OVERLOAD(MACROLOP_PRIV_EVAL_REC_117_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_117_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_117_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_117_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_117_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_117_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_117_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_117_##choice
#define MACROLOP_PRIV_EVAL_REC_117_CONTINUE                   MACROLOP_PRIV_EVAL_REC_118
#define MACROLOP_PRIV_EVAL_REC_117_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_118(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_118_OVERLOAD(MACROLOP_PRIV_EVAL_REC_118_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_118_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_118_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_118_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_118_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_118_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_118_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_118_##choice
#define MACROLOP_PRIV_EVAL_REC_118_CONTINUE                   MACROLOP_PRIV_EVAL_REC_119
#define MACROLOP_PRIV_EVAL_REC_118_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_119(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_119_OVERLOAD(MACROLOP_PRIV_EVAL_REC_119_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_119_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_119_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_119_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_119_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_119_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_119_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_119_##choice
#define MACROLOP_PRIV_EVAL_REC_119_CONTINUE                   MACROLOP_PRIV_EVAL_REC_120
#define MACROLOP_PRIV_EVAL_REC_119_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_120(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_120_OVERLOAD(MACROLOP_PRIV_EVAL_REC_120_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_120_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_120_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_120_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_120_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_120_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_120_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_120_##choice
#define MACROLOP_PRIV_EVAL_REC_120_CONTINUE                   MACROLOP_PRIV_EVAL_REC_121
#define MACROLOP_PRIV_EVAL_REC_120_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_121(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_121_OVERLOAD(MACROLOP_PRIV_EVAL_REC_121_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_121_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_121_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_121_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_121_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_121_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_121_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_121_##choice
#define MACROLOP_PRIV_EVAL_REC_121_CONTINUE                   MACROLOP_PRIV_EVAL_REC_122
#define MACROLOP_PRIV_EVAL_REC_121_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_122(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_122_OVERLOAD(MACROLOP_PRIV_EVAL_REC_122_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_122_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_122_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_122_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_122_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_122_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_122_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_122_##choice
#define MACROLOP_PRIV_EVAL_REC_122_CONTINUE                   MACROLOP_PRIV_EVAL_REC_123
#define MACROLOP_PRIV_EVAL_REC_122_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_123(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_123_OVERLOAD(MACROLOP_PRIV_EVAL_REC_123_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_123_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_123_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_123_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_123_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_123_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_123_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_123_##choice
#define MACROLOP_PRIV_EVAL_REC_123_CONTINUE                   MACROLOP_PRIV_EVAL_REC_124
#define MACROLOP_PRIV_EVAL_REC_123_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_124(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_124_OVERLOAD(MACROLOP_PRIV_EVAL_REC_124_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_124_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_124_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_124_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_124_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_124_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_124_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_124_##choice
#define MACROLOP_PRIV_EVAL_REC_124_CONTINUE                   MACROLOP_PRIV_EVAL_REC_125
#define MACROLOP_PRIV_EVAL_REC_124_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_125(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_125_OVERLOAD(MACROLOP_PRIV_EVAL_REC_125_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_125_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_125_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_125_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_125_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_125_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_125_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_125_##choice
#define MACROLOP_PRIV_EVAL_REC_125_CONTINUE                   MACROLOP_PRIV_EVAL_REC_126
#define MACROLOP_PRIV_EVAL_REC_125_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_126(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_126_OVERLOAD(MACROLOP_PRIV_EVAL_REC_126_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_126_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_126_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_126_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_126_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_126_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_126_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_126_##choice
#define MACROLOP_PRIV_EVAL_REC_126_CONTINUE                   MACROLOP_PRIV_EVAL_REC_127
#define MACROLOP_PRIV_EVAL_REC_126_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_127(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_127_OVERLOAD(MACROLOP_PRIV_EVAL_REC_127_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_127_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_127_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_127_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_127_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_127_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_127_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_127_##choice
#define MACROLOP_PRIV_EVAL_REC_127_CONTINUE                   MACROLOP_PRIV_EVAL_REC_128
#define MACROLOP_PRIV_EVAL_REC_127_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_128(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_128_OVERLOAD(MACROLOP_PRIV_EVAL_REC_128_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_128_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_128_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_128_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_128_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_128_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_128_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_128_##choice
#define MACROLOP_PRIV_EVAL_REC_128_CONTINUE                   MACROLOP_PRIV_EVAL_REC_129
#define MACROLOP_PRIV_EVAL_REC_128_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_129(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_129_OVERLOAD(MACROLOP_PRIV_EVAL_REC_129_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_129_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_129_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_129_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_129_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_129_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_129_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_129_##choice
#define MACROLOP_PRIV_EVAL_REC_129_CONTINUE                   MACROLOP_PRIV_EVAL_REC_130
#define MACROLOP_PRIV_EVAL_REC_129_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_130(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_130_OVERLOAD(MACROLOP_PRIV_EVAL_REC_130_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_130_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_130_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_130_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_130_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_130_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_130_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_130_##choice
#define MACROLOP_PRIV_EVAL_REC_130_CONTINUE                   MACROLOP_PRIV_EVAL_REC_131
#define MACROLOP_PRIV_EVAL_REC_130_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_131(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_131_OVERLOAD(MACROLOP_PRIV_EVAL_REC_131_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_131_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_131_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_131_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_131_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_131_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_131_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_131_##choice
#define MACROLOP_PRIV_EVAL_REC_131_CONTINUE                   MACROLOP_PRIV_EVAL_REC_132
#define MACROLOP_PRIV_EVAL_REC_131_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_132(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_132_OVERLOAD(MACROLOP_PRIV_EVAL_REC_132_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_132_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_132_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_132_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_132_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_132_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_132_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_132_##choice
#define MACROLOP_PRIV_EVAL_REC_132_CONTINUE                   MACROLOP_PRIV_EVAL_REC_133
#define MACROLOP_PRIV_EVAL_REC_132_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_133(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_133_OVERLOAD(MACROLOP_PRIV_EVAL_REC_133_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_133_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_133_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_133_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_133_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_133_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_133_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_133_##choice
#define MACROLOP_PRIV_EVAL_REC_133_CONTINUE                   MACROLOP_PRIV_EVAL_REC_134
#define MACROLOP_PRIV_EVAL_REC_133_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_134(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_134_OVERLOAD(MACROLOP_PRIV_EVAL_REC_134_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_134_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_134_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_134_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_134_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_134_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_134_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_134_##choice
#define MACROLOP_PRIV_EVAL_REC_134_CONTINUE                   MACROLOP_PRIV_EVAL_REC_135
#define MACROLOP_PRIV_EVAL_REC_134_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_135(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_135_OVERLOAD(MACROLOP_PRIV_EVAL_REC_135_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_135_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_135_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_135_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_135_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_135_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_135_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_135_##choice
#define MACROLOP_PRIV_EVAL_REC_135_CONTINUE                   MACROLOP_PRIV_EVAL_REC_136
#define MACROLOP_PRIV_EVAL_REC_135_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_136(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_136_OVERLOAD(MACROLOP_PRIV_EVAL_REC_136_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_136_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_136_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_136_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_136_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_136_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_136_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_136_##choice
#define MACROLOP_PRIV_EVAL_REC_136_CONTINUE                   MACROLOP_PRIV_EVAL_REC_137
#define MACROLOP_PRIV_EVAL_REC_136_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_137(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_137_OVERLOAD(MACROLOP_PRIV_EVAL_REC_137_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_137_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_137_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_137_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_137_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_137_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_137_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_137_##choice
#define MACROLOP_PRIV_EVAL_REC_137_CONTINUE                   MACROLOP_PRIV_EVAL_REC_138
#define MACROLOP_PRIV_EVAL_REC_137_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_138(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_138_OVERLOAD(MACROLOP_PRIV_EVAL_REC_138_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_138_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_138_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_138_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_138_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_138_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_138_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_138_##choice
#define MACROLOP_PRIV_EVAL_REC_138_CONTINUE                   MACROLOP_PRIV_EVAL_REC_139
#define MACROLOP_PRIV_EVAL_REC_138_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_139(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_139_OVERLOAD(MACROLOP_PRIV_EVAL_REC_139_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_139_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_139_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_139_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_139_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_139_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_139_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_139_##choice
#define MACROLOP_PRIV_EVAL_REC_139_CONTINUE                   MACROLOP_PRIV_EVAL_REC_140
#define MACROLOP_PRIV_EVAL_REC_139_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_140(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_140_OVERLOAD(MACROLOP_PRIV_EVAL_REC_140_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_140_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_140_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_140_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_140_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_140_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_140_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_140_##choice
#define MACROLOP_PRIV_EVAL_REC_140_CONTINUE                   MACROLOP_PRIV_EVAL_REC_141
#define MACROLOP_PRIV_EVAL_REC_140_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_141(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_141_OVERLOAD(MACROLOP_PRIV_EVAL_REC_141_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_141_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_141_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_141_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_141_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_141_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_141_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_141_##choice
#define MACROLOP_PRIV_EVAL_REC_141_CONTINUE                   MACROLOP_PRIV_EVAL_REC_142
#define MACROLOP_PRIV_EVAL_REC_141_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_142(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_142_OVERLOAD(MACROLOP_PRIV_EVAL_REC_142_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_142_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_142_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_142_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_142_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_142_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_142_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_142_##choice
#define MACROLOP_PRIV_EVAL_REC_142_CONTINUE                   MACROLOP_PRIV_EVAL_REC_143
#define MACROLOP_PRIV_EVAL_REC_142_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_143(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_143_OVERLOAD(MACROLOP_PRIV_EVAL_REC_143_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_143_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_143_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_143_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_143_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_143_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_143_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_143_##choice
#define MACROLOP_PRIV_EVAL_REC_143_CONTINUE                   MACROLOP_PRIV_EVAL_REC_144
#define MACROLOP_PRIV_EVAL_REC_143_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_144(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_144_OVERLOAD(MACROLOP_PRIV_EVAL_REC_144_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_144_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_144_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_144_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_144_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_144_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_144_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_144_##choice
#define MACROLOP_PRIV_EVAL_REC_144_CONTINUE                   MACROLOP_PRIV_EVAL_REC_145
#define MACROLOP_PRIV_EVAL_REC_144_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_145(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_145_OVERLOAD(MACROLOP_PRIV_EVAL_REC_145_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_145_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_145_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_145_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_145_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_145_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_145_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_145_##choice
#define MACROLOP_PRIV_EVAL_REC_145_CONTINUE                   MACROLOP_PRIV_EVAL_REC_146
#define MACROLOP_PRIV_EVAL_REC_145_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_146(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_146_OVERLOAD(MACROLOP_PRIV_EVAL_REC_146_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_146_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_146_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_146_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_146_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_146_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_146_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_146_##choice
#define MACROLOP_PRIV_EVAL_REC_146_CONTINUE                   MACROLOP_PRIV_EVAL_REC_147
#define MACROLOP_PRIV_EVAL_REC_146_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_147(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_147_OVERLOAD(MACROLOP_PRIV_EVAL_REC_147_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_147_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_147_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_147_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_147_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_147_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_147_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_147_##choice
#define MACROLOP_PRIV_EVAL_REC_147_CONTINUE                   MACROLOP_PRIV_EVAL_REC_148
#define MACROLOP_PRIV_EVAL_REC_147_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_148(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_148_OVERLOAD(MACROLOP_PRIV_EVAL_REC_148_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_148_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_148_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_148_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_148_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_148_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_148_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_148_##choice
#define MACROLOP_PRIV_EVAL_REC_148_CONTINUE                   MACROLOP_PRIV_EVAL_REC_149
#define MACROLOP_PRIV_EVAL_REC_148_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_149(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_149_OVERLOAD(MACROLOP_PRIV_EVAL_REC_149_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_149_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_149_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_149_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_149_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_149_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_149_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_149_##choice
#define MACROLOP_PRIV_EVAL_REC_149_CONTINUE                   MACROLOP_PRIV_EVAL_REC_150
#define MACROLOP_PRIV_EVAL_REC_149_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_150(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_150_OVERLOAD(MACROLOP_PRIV_EVAL_REC_150_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_150_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_150_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_150_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_150_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_150_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_150_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_150_##choice
#define MACROLOP_PRIV_EVAL_REC_150_CONTINUE                   MACROLOP_PRIV_EVAL_REC_151
#define MACROLOP_PRIV_EVAL_REC_150_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_151(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_151_OVERLOAD(MACROLOP_PRIV_EVAL_REC_151_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_151_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_151_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_151_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_151_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_151_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_151_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_151_##choice
#define MACROLOP_PRIV_EVAL_REC_151_CONTINUE                   MACROLOP_PRIV_EVAL_REC_152
#define MACROLOP_PRIV_EVAL_REC_151_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_152(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_152_OVERLOAD(MACROLOP_PRIV_EVAL_REC_152_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_152_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_152_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_152_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_152_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_152_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_152_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_152_##choice
#define MACROLOP_PRIV_EVAL_REC_152_CONTINUE                   MACROLOP_PRIV_EVAL_REC_153
#define MACROLOP_PRIV_EVAL_REC_152_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_153(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_153_OVERLOAD(MACROLOP_PRIV_EVAL_REC_153_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_153_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_153_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_153_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_153_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_153_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_153_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_153_##choice
#define MACROLOP_PRIV_EVAL_REC_153_CONTINUE                   MACROLOP_PRIV_EVAL_REC_154
#define MACROLOP_PRIV_EVAL_REC_153_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_154(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_154_OVERLOAD(MACROLOP_PRIV_EVAL_REC_154_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_154_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_154_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_154_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_154_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_154_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_154_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_154_##choice
#define MACROLOP_PRIV_EVAL_REC_154_CONTINUE                   MACROLOP_PRIV_EVAL_REC_155
#define MACROLOP_PRIV_EVAL_REC_154_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_155(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_155_OVERLOAD(MACROLOP_PRIV_EVAL_REC_155_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_155_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_155_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_155_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_155_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_155_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_155_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_155_##choice
#define MACROLOP_PRIV_EVAL_REC_155_CONTINUE                   MACROLOP_PRIV_EVAL_REC_156
#define MACROLOP_PRIV_EVAL_REC_155_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_156(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_156_OVERLOAD(MACROLOP_PRIV_EVAL_REC_156_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_156_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_156_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_156_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_156_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_156_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_156_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_156_##choice
#define MACROLOP_PRIV_EVAL_REC_156_CONTINUE                   MACROLOP_PRIV_EVAL_REC_157
#define MACROLOP_PRIV_EVAL_REC_156_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_157(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_157_OVERLOAD(MACROLOP_PRIV_EVAL_REC_157_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_157_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_157_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_157_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_157_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_157_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_157_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_157_##choice
#define MACROLOP_PRIV_EVAL_REC_157_CONTINUE                   MACROLOP_PRIV_EVAL_REC_158
#define MACROLOP_PRIV_EVAL_REC_157_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_158(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_158_OVERLOAD(MACROLOP_PRIV_EVAL_REC_158_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_158_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_158_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_158_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_158_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_158_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_158_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_158_##choice
#define MACROLOP_PRIV_EVAL_REC_158_CONTINUE                   MACROLOP_PRIV_EVAL_REC_159
#define MACROLOP_PRIV_EVAL_REC_158_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_159(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_159_OVERLOAD(MACROLOP_PRIV_EVAL_REC_159_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_159_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_159_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_159_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_159_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_159_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_159_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_159_##choice
#define MACROLOP_PRIV_EVAL_REC_159_CONTINUE                   MACROLOP_PRIV_EVAL_REC_160
#define MACROLOP_PRIV_EVAL_REC_159_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_160(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_160_OVERLOAD(MACROLOP_PRIV_EVAL_REC_160_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_160_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_160_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_160_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_160_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_160_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_160_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_160_##choice
#define MACROLOP_PRIV_EVAL_REC_160_CONTINUE                   MACROLOP_PRIV_EVAL_REC_161
#define MACROLOP_PRIV_EVAL_REC_160_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_161(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_161_OVERLOAD(MACROLOP_PRIV_EVAL_REC_161_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_161_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_161_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_161_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_161_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_161_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_161_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_161_##choice
#define MACROLOP_PRIV_EVAL_REC_161_CONTINUE                   MACROLOP_PRIV_EVAL_REC_162
#define MACROLOP_PRIV_EVAL_REC_161_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_162(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_162_OVERLOAD(MACROLOP_PRIV_EVAL_REC_162_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_162_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_162_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_162_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_162_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_162_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_162_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_162_##choice
#define MACROLOP_PRIV_EVAL_REC_162_CONTINUE                   MACROLOP_PRIV_EVAL_REC_163
#define MACROLOP_PRIV_EVAL_REC_162_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_163(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_163_OVERLOAD(MACROLOP_PRIV_EVAL_REC_163_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_163_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_163_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_163_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_163_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_163_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_163_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_163_##choice
#define MACROLOP_PRIV_EVAL_REC_163_CONTINUE                   MACROLOP_PRIV_EVAL_REC_164
#define MACROLOP_PRIV_EVAL_REC_163_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_164(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_164_OVERLOAD(MACROLOP_PRIV_EVAL_REC_164_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_164_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_164_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_164_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_164_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_164_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_164_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_164_##choice
#define MACROLOP_PRIV_EVAL_REC_164_CONTINUE                   MACROLOP_PRIV_EVAL_REC_165
#define MACROLOP_PRIV_EVAL_REC_164_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_165(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_165_OVERLOAD(MACROLOP_PRIV_EVAL_REC_165_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_165_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_165_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_165_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_165_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_165_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_165_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_165_##choice
#define MACROLOP_PRIV_EVAL_REC_165_CONTINUE                   MACROLOP_PRIV_EVAL_REC_166
#define MACROLOP_PRIV_EVAL_REC_165_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_166(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_166_OVERLOAD(MACROLOP_PRIV_EVAL_REC_166_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_166_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_166_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_166_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_166_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_166_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_166_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_166_##choice
#define MACROLOP_PRIV_EVAL_REC_166_CONTINUE                   MACROLOP_PRIV_EVAL_REC_167
#define MACROLOP_PRIV_EVAL_REC_166_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_167(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_167_OVERLOAD(MACROLOP_PRIV_EVAL_REC_167_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_167_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_167_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_167_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_167_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_167_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_167_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_167_##choice
#define MACROLOP_PRIV_EVAL_REC_167_CONTINUE                   MACROLOP_PRIV_EVAL_REC_168
#define MACROLOP_PRIV_EVAL_REC_167_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_168(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_168_OVERLOAD(MACROLOP_PRIV_EVAL_REC_168_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_168_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_168_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_168_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_168_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_168_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_168_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_168_##choice
#define MACROLOP_PRIV_EVAL_REC_168_CONTINUE                   MACROLOP_PRIV_EVAL_REC_169
#define MACROLOP_PRIV_EVAL_REC_168_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_169(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_169_OVERLOAD(MACROLOP_PRIV_EVAL_REC_169_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_169_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_169_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_169_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_169_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_169_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_169_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_169_##choice
#define MACROLOP_PRIV_EVAL_REC_169_CONTINUE                   MACROLOP_PRIV_EVAL_REC_170
#define MACROLOP_PRIV_EVAL_REC_169_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_170(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_170_OVERLOAD(MACROLOP_PRIV_EVAL_REC_170_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_170_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_170_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_170_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_170_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_170_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_170_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_170_##choice
#define MACROLOP_PRIV_EVAL_REC_170_CONTINUE                   MACROLOP_PRIV_EVAL_REC_171
#define MACROLOP_PRIV_EVAL_REC_170_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_171(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_171_OVERLOAD(MACROLOP_PRIV_EVAL_REC_171_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_171_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_171_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_171_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_171_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_171_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_171_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_171_##choice
#define MACROLOP_PRIV_EVAL_REC_171_CONTINUE                   MACROLOP_PRIV_EVAL_REC_172
#define MACROLOP_PRIV_EVAL_REC_171_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_172(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_172_OVERLOAD(MACROLOP_PRIV_EVAL_REC_172_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_172_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_172_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_172_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_172_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_172_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_172_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_172_##choice
#define MACROLOP_PRIV_EVAL_REC_172_CONTINUE                   MACROLOP_PRIV_EVAL_REC_173
#define MACROLOP_PRIV_EVAL_REC_172_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_173(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_173_OVERLOAD(MACROLOP_PRIV_EVAL_REC_173_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_173_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_173_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_173_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_173_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_173_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_173_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_173_##choice
#define MACROLOP_PRIV_EVAL_REC_173_CONTINUE                   MACROLOP_PRIV_EVAL_REC_174
#define MACROLOP_PRIV_EVAL_REC_173_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_174(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_174_OVERLOAD(MACROLOP_PRIV_EVAL_REC_174_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_174_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_174_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_174_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_174_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_174_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_174_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_174_##choice
#define MACROLOP_PRIV_EVAL_REC_174_CONTINUE                   MACROLOP_PRIV_EVAL_REC_175
#define MACROLOP_PRIV_EVAL_REC_174_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_175(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_175_OVERLOAD(MACROLOP_PRIV_EVAL_REC_175_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_175_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_175_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_175_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_175_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_175_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_175_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_175_##choice
#define MACROLOP_PRIV_EVAL_REC_175_CONTINUE                   MACROLOP_PRIV_EVAL_REC_176
#define MACROLOP_PRIV_EVAL_REC_175_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_176(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_176_OVERLOAD(MACROLOP_PRIV_EVAL_REC_176_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_176_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_176_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_176_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_176_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_176_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_176_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_176_##choice
#define MACROLOP_PRIV_EVAL_REC_176_CONTINUE                   MACROLOP_PRIV_EVAL_REC_177
#define MACROLOP_PRIV_EVAL_REC_176_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_177(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_177_OVERLOAD(MACROLOP_PRIV_EVAL_REC_177_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_177_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_177_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_177_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_177_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_177_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_177_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_177_##choice
#define MACROLOP_PRIV_EVAL_REC_177_CONTINUE                   MACROLOP_PRIV_EVAL_REC_178
#define MACROLOP_PRIV_EVAL_REC_177_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_178(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_178_OVERLOAD(MACROLOP_PRIV_EVAL_REC_178_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_178_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_178_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_178_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_178_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_178_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_178_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_178_##choice
#define MACROLOP_PRIV_EVAL_REC_178_CONTINUE                   MACROLOP_PRIV_EVAL_REC_179
#define MACROLOP_PRIV_EVAL_REC_178_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_179(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_179_OVERLOAD(MACROLOP_PRIV_EVAL_REC_179_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_179_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_179_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_179_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_179_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_179_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_179_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_179_##choice
#define MACROLOP_PRIV_EVAL_REC_179_CONTINUE                   MACROLOP_PRIV_EVAL_REC_180
#define MACROLOP_PRIV_EVAL_REC_179_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_180(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_180_OVERLOAD(MACROLOP_PRIV_EVAL_REC_180_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_180_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_180_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_180_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_180_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_180_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_180_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_180_##choice
#define MACROLOP_PRIV_EVAL_REC_180_CONTINUE                   MACROLOP_PRIV_EVAL_REC_181
#define MACROLOP_PRIV_EVAL_REC_180_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_181(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_181_OVERLOAD(MACROLOP_PRIV_EVAL_REC_181_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_181_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_181_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_181_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_181_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_181_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_181_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_181_##choice
#define MACROLOP_PRIV_EVAL_REC_181_CONTINUE                   MACROLOP_PRIV_EVAL_REC_182
#define MACROLOP_PRIV_EVAL_REC_181_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_182(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_182_OVERLOAD(MACROLOP_PRIV_EVAL_REC_182_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_182_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_182_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_182_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_182_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_182_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_182_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_182_##choice
#define MACROLOP_PRIV_EVAL_REC_182_CONTINUE                   MACROLOP_PRIV_EVAL_REC_183
#define MACROLOP_PRIV_EVAL_REC_182_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_183(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_183_OVERLOAD(MACROLOP_PRIV_EVAL_REC_183_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_183_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_183_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_183_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_183_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_183_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_183_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_183_##choice
#define MACROLOP_PRIV_EVAL_REC_183_CONTINUE                   MACROLOP_PRIV_EVAL_REC_184
#define MACROLOP_PRIV_EVAL_REC_183_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_184(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_184_OVERLOAD(MACROLOP_PRIV_EVAL_REC_184_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_184_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_184_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_184_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_184_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_184_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_184_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_184_##choice
#define MACROLOP_PRIV_EVAL_REC_184_CONTINUE                   MACROLOP_PRIV_EVAL_REC_185
#define MACROLOP_PRIV_EVAL_REC_184_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_185(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_185_OVERLOAD(MACROLOP_PRIV_EVAL_REC_185_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_185_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_185_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_185_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_185_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_185_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_185_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_185_##choice
#define MACROLOP_PRIV_EVAL_REC_185_CONTINUE                   MACROLOP_PRIV_EVAL_REC_186
#define MACROLOP_PRIV_EVAL_REC_185_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_186(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_186_OVERLOAD(MACROLOP_PRIV_EVAL_REC_186_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_186_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_186_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_186_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_186_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_186_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_186_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_186_##choice
#define MACROLOP_PRIV_EVAL_REC_186_CONTINUE                   MACROLOP_PRIV_EVAL_REC_187
#define MACROLOP_PRIV_EVAL_REC_186_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_187(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_187_OVERLOAD(MACROLOP_PRIV_EVAL_REC_187_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_187_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_187_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_187_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_187_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_187_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_187_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_187_##choice
#define MACROLOP_PRIV_EVAL_REC_187_CONTINUE                   MACROLOP_PRIV_EVAL_REC_188
#define MACROLOP_PRIV_EVAL_REC_187_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_188(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_188_OVERLOAD(MACROLOP_PRIV_EVAL_REC_188_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_188_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_188_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_188_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_188_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_188_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_188_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_188_##choice
#define MACROLOP_PRIV_EVAL_REC_188_CONTINUE                   MACROLOP_PRIV_EVAL_REC_189
#define MACROLOP_PRIV_EVAL_REC_188_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_189(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_189_OVERLOAD(MACROLOP_PRIV_EVAL_REC_189_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_189_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_189_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_189_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_189_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_189_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_189_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_189_##choice
#define MACROLOP_PRIV_EVAL_REC_189_CONTINUE                   MACROLOP_PRIV_EVAL_REC_190
#define MACROLOP_PRIV_EVAL_REC_189_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_190(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_190_OVERLOAD(MACROLOP_PRIV_EVAL_REC_190_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_190_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_190_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_190_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_190_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_190_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_190_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_190_##choice
#define MACROLOP_PRIV_EVAL_REC_190_CONTINUE                   MACROLOP_PRIV_EVAL_REC_191
#define MACROLOP_PRIV_EVAL_REC_190_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_191(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_191_OVERLOAD(MACROLOP_PRIV_EVAL_REC_191_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_191_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_191_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_191_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_191_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_191_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_191_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_191_##choice
#define MACROLOP_PRIV_EVAL_REC_191_CONTINUE                   MACROLOP_PRIV_EVAL_REC_192
#define MACROLOP_PRIV_EVAL_REC_191_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_192(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_192_OVERLOAD(MACROLOP_PRIV_EVAL_REC_192_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_192_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_192_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_192_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_192_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_192_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_192_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_192_##choice
#define MACROLOP_PRIV_EVAL_REC_192_CONTINUE                   MACROLOP_PRIV_EVAL_REC_193
#define MACROLOP_PRIV_EVAL_REC_192_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_193(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_193_OVERLOAD(MACROLOP_PRIV_EVAL_REC_193_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_193_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_193_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_193_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_193_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_193_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_193_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_193_##choice
#define MACROLOP_PRIV_EVAL_REC_193_CONTINUE                   MACROLOP_PRIV_EVAL_REC_194
#define MACROLOP_PRIV_EVAL_REC_193_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_194(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_194_OVERLOAD(MACROLOP_PRIV_EVAL_REC_194_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_194_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_194_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_194_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_194_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_194_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_194_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_194_##choice
#define MACROLOP_PRIV_EVAL_REC_194_CONTINUE                   MACROLOP_PRIV_EVAL_REC_195
#define MACROLOP_PRIV_EVAL_REC_194_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_195(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_195_OVERLOAD(MACROLOP_PRIV_EVAL_REC_195_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_195_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_195_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_195_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_195_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_195_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_195_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_195_##choice
#define MACROLOP_PRIV_EVAL_REC_195_CONTINUE                   MACROLOP_PRIV_EVAL_REC_196
#define MACROLOP_PRIV_EVAL_REC_195_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_196(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_196_OVERLOAD(MACROLOP_PRIV_EVAL_REC_196_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_196_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_196_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_196_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_196_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_196_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_196_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_196_##choice
#define MACROLOP_PRIV_EVAL_REC_196_CONTINUE                   MACROLOP_PRIV_EVAL_REC_197
#define MACROLOP_PRIV_EVAL_REC_196_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_197(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_197_OVERLOAD(MACROLOP_PRIV_EVAL_REC_197_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_197_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_197_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_197_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_197_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_197_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_197_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_197_##choice
#define MACROLOP_PRIV_EVAL_REC_197_CONTINUE                   MACROLOP_PRIV_EVAL_REC_198
#define MACROLOP_PRIV_EVAL_REC_197_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_198(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_198_OVERLOAD(MACROLOP_PRIV_EVAL_REC_198_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_198_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_198_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_198_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_198_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_198_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_198_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_198_##choice
#define MACROLOP_PRIV_EVAL_REC_198_CONTINUE                   MACROLOP_PRIV_EVAL_REC_199
#define MACROLOP_PRIV_EVAL_REC_198_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_199(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_199_OVERLOAD(MACROLOP_PRIV_EVAL_REC_199_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_199_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_199_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_199_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_199_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_199_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_199_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_199_##choice
#define MACROLOP_PRIV_EVAL_REC_199_CONTINUE                   MACROLOP_PRIV_EVAL_REC_200
#define MACROLOP_PRIV_EVAL_REC_199_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_200(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_200_OVERLOAD(MACROLOP_PRIV_EVAL_REC_200_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_200_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_200_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_200_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_200_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_200_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_200_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_200_##choice
#define MACROLOP_PRIV_EVAL_REC_200_CONTINUE                   MACROLOP_PRIV_EVAL_REC_201
#define MACROLOP_PRIV_EVAL_REC_200_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_201(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_201_OVERLOAD(MACROLOP_PRIV_EVAL_REC_201_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_201_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_201_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_201_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_201_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_201_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_201_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_201_##choice
#define MACROLOP_PRIV_EVAL_REC_201_CONTINUE                   MACROLOP_PRIV_EVAL_REC_202
#define MACROLOP_PRIV_EVAL_REC_201_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_202(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_202_OVERLOAD(MACROLOP_PRIV_EVAL_REC_202_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_202_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_202_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_202_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_202_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_202_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_202_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_202_##choice
#define MACROLOP_PRIV_EVAL_REC_202_CONTINUE                   MACROLOP_PRIV_EVAL_REC_203
#define MACROLOP_PRIV_EVAL_REC_202_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_203(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_203_OVERLOAD(MACROLOP_PRIV_EVAL_REC_203_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_203_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_203_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_203_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_203_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_203_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_203_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_203_##choice
#define MACROLOP_PRIV_EVAL_REC_203_CONTINUE                   MACROLOP_PRIV_EVAL_REC_204
#define MACROLOP_PRIV_EVAL_REC_203_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_204(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_204_OVERLOAD(MACROLOP_PRIV_EVAL_REC_204_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_204_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_204_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_204_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_204_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_204_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_204_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_204_##choice
#define MACROLOP_PRIV_EVAL_REC_204_CONTINUE                   MACROLOP_PRIV_EVAL_REC_205
#define MACROLOP_PRIV_EVAL_REC_204_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_205(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_205_OVERLOAD(MACROLOP_PRIV_EVAL_REC_205_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_205_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_205_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_205_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_205_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_205_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_205_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_205_##choice
#define MACROLOP_PRIV_EVAL_REC_205_CONTINUE                   MACROLOP_PRIV_EVAL_REC_206
#define MACROLOP_PRIV_EVAL_REC_205_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_206(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_206_OVERLOAD(MACROLOP_PRIV_EVAL_REC_206_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_206_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_206_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_206_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_206_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_206_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_206_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_206_##choice
#define MACROLOP_PRIV_EVAL_REC_206_CONTINUE                   MACROLOP_PRIV_EVAL_REC_207
#define MACROLOP_PRIV_EVAL_REC_206_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_207(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_207_OVERLOAD(MACROLOP_PRIV_EVAL_REC_207_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_207_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_207_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_207_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_207_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_207_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_207_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_207_##choice
#define MACROLOP_PRIV_EVAL_REC_207_CONTINUE                   MACROLOP_PRIV_EVAL_REC_208
#define MACROLOP_PRIV_EVAL_REC_207_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_208(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_208_OVERLOAD(MACROLOP_PRIV_EVAL_REC_208_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_208_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_208_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_208_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_208_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_208_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_208_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_208_##choice
#define MACROLOP_PRIV_EVAL_REC_208_CONTINUE                   MACROLOP_PRIV_EVAL_REC_209
#define MACROLOP_PRIV_EVAL_REC_208_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_209(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_209_OVERLOAD(MACROLOP_PRIV_EVAL_REC_209_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_209_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_209_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_209_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_209_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_209_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_209_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_209_##choice
#define MACROLOP_PRIV_EVAL_REC_209_CONTINUE                   MACROLOP_PRIV_EVAL_REC_210
#define MACROLOP_PRIV_EVAL_REC_209_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_210(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_210_OVERLOAD(MACROLOP_PRIV_EVAL_REC_210_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_210_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_210_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_210_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_210_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_210_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_210_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_210_##choice
#define MACROLOP_PRIV_EVAL_REC_210_CONTINUE                   MACROLOP_PRIV_EVAL_REC_211
#define MACROLOP_PRIV_EVAL_REC_210_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_211(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_211_OVERLOAD(MACROLOP_PRIV_EVAL_REC_211_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_211_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_211_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_211_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_211_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_211_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_211_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_211_##choice
#define MACROLOP_PRIV_EVAL_REC_211_CONTINUE                   MACROLOP_PRIV_EVAL_REC_212
#define MACROLOP_PRIV_EVAL_REC_211_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_212(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_212_OVERLOAD(MACROLOP_PRIV_EVAL_REC_212_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_212_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_212_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_212_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_212_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_212_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_212_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_212_##choice
#define MACROLOP_PRIV_EVAL_REC_212_CONTINUE                   MACROLOP_PRIV_EVAL_REC_213
#define MACROLOP_PRIV_EVAL_REC_212_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_213(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_213_OVERLOAD(MACROLOP_PRIV_EVAL_REC_213_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_213_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_213_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_213_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_213_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_213_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_213_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_213_##choice
#define MACROLOP_PRIV_EVAL_REC_213_CONTINUE                   MACROLOP_PRIV_EVAL_REC_214
#define MACROLOP_PRIV_EVAL_REC_213_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_214(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_214_OVERLOAD(MACROLOP_PRIV_EVAL_REC_214_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_214_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_214_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_214_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_214_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_214_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_214_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_214_##choice
#define MACROLOP_PRIV_EVAL_REC_214_CONTINUE                   MACROLOP_PRIV_EVAL_REC_215
#define MACROLOP_PRIV_EVAL_REC_214_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_215(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_215_OVERLOAD(MACROLOP_PRIV_EVAL_REC_215_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_215_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_215_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_215_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_215_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_215_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_215_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_215_##choice
#define MACROLOP_PRIV_EVAL_REC_215_CONTINUE                   MACROLOP_PRIV_EVAL_REC_216
#define MACROLOP_PRIV_EVAL_REC_215_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_216(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_216_OVERLOAD(MACROLOP_PRIV_EVAL_REC_216_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_216_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_216_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_216_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_216_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_216_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_216_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_216_##choice
#define MACROLOP_PRIV_EVAL_REC_216_CONTINUE                   MACROLOP_PRIV_EVAL_REC_217
#define MACROLOP_PRIV_EVAL_REC_216_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_217(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_217_OVERLOAD(MACROLOP_PRIV_EVAL_REC_217_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_217_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_217_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_217_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_217_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_217_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_217_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_217_##choice
#define MACROLOP_PRIV_EVAL_REC_217_CONTINUE                   MACROLOP_PRIV_EVAL_REC_218
#define MACROLOP_PRIV_EVAL_REC_217_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_218(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_218_OVERLOAD(MACROLOP_PRIV_EVAL_REC_218_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_218_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_218_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_218_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_218_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_218_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_218_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_218_##choice
#define MACROLOP_PRIV_EVAL_REC_218_CONTINUE                   MACROLOP_PRIV_EVAL_REC_219
#define MACROLOP_PRIV_EVAL_REC_218_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_219(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_219_OVERLOAD(MACROLOP_PRIV_EVAL_REC_219_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_219_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_219_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_219_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_219_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_219_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_219_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_219_##choice
#define MACROLOP_PRIV_EVAL_REC_219_CONTINUE                   MACROLOP_PRIV_EVAL_REC_220
#define MACROLOP_PRIV_EVAL_REC_219_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_220(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_220_OVERLOAD(MACROLOP_PRIV_EVAL_REC_220_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_220_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_220_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_220_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_220_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_220_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_220_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_220_##choice
#define MACROLOP_PRIV_EVAL_REC_220_CONTINUE                   MACROLOP_PRIV_EVAL_REC_221
#define MACROLOP_PRIV_EVAL_REC_220_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_221(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_221_OVERLOAD(MACROLOP_PRIV_EVAL_REC_221_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_221_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_221_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_221_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_221_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_221_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_221_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_221_##choice
#define MACROLOP_PRIV_EVAL_REC_221_CONTINUE                   MACROLOP_PRIV_EVAL_REC_222
#define MACROLOP_PRIV_EVAL_REC_221_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_222(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_222_OVERLOAD(MACROLOP_PRIV_EVAL_REC_222_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_222_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_222_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_222_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_222_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_222_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_222_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_222_##choice
#define MACROLOP_PRIV_EVAL_REC_222_CONTINUE                   MACROLOP_PRIV_EVAL_REC_223
#define MACROLOP_PRIV_EVAL_REC_222_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_223(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_223_OVERLOAD(MACROLOP_PRIV_EVAL_REC_223_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_223_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_223_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_223_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_223_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_223_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_223_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_223_##choice
#define MACROLOP_PRIV_EVAL_REC_223_CONTINUE                   MACROLOP_PRIV_EVAL_REC_224
#define MACROLOP_PRIV_EVAL_REC_223_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_224(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_224_OVERLOAD(MACROLOP_PRIV_EVAL_REC_224_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_224_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_224_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_224_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_224_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_224_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_224_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_224_##choice
#define MACROLOP_PRIV_EVAL_REC_224_CONTINUE                   MACROLOP_PRIV_EVAL_REC_225
#define MACROLOP_PRIV_EVAL_REC_224_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_225(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_225_OVERLOAD(MACROLOP_PRIV_EVAL_REC_225_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_225_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_225_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_225_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_225_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_225_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_225_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_225_##choice
#define MACROLOP_PRIV_EVAL_REC_225_CONTINUE                   MACROLOP_PRIV_EVAL_REC_226
#define MACROLOP_PRIV_EVAL_REC_225_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_226(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_226_OVERLOAD(MACROLOP_PRIV_EVAL_REC_226_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_226_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_226_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_226_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_226_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_226_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_226_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_226_##choice
#define MACROLOP_PRIV_EVAL_REC_226_CONTINUE                   MACROLOP_PRIV_EVAL_REC_227
#define MACROLOP_PRIV_EVAL_REC_226_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_227(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_227_OVERLOAD(MACROLOP_PRIV_EVAL_REC_227_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_227_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_227_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_227_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_227_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_227_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_227_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_227_##choice
#define MACROLOP_PRIV_EVAL_REC_227_CONTINUE                   MACROLOP_PRIV_EVAL_REC_228
#define MACROLOP_PRIV_EVAL_REC_227_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_228(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_228_OVERLOAD(MACROLOP_PRIV_EVAL_REC_228_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_228_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_228_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_228_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_228_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_228_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_228_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_228_##choice
#define MACROLOP_PRIV_EVAL_REC_228_CONTINUE                   MACROLOP_PRIV_EVAL_REC_229
#define MACROLOP_PRIV_EVAL_REC_228_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_229(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_229_OVERLOAD(MACROLOP_PRIV_EVAL_REC_229_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_229_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_229_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_229_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_229_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_229_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_229_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_229_##choice
#define MACROLOP_PRIV_EVAL_REC_229_CONTINUE                   MACROLOP_PRIV_EVAL_REC_230
#define MACROLOP_PRIV_EVAL_REC_229_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_230(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_230_OVERLOAD(MACROLOP_PRIV_EVAL_REC_230_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_230_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_230_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_230_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_230_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_230_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_230_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_230_##choice
#define MACROLOP_PRIV_EVAL_REC_230_CONTINUE                   MACROLOP_PRIV_EVAL_REC_231
#define MACROLOP_PRIV_EVAL_REC_230_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_231(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_231_OVERLOAD(MACROLOP_PRIV_EVAL_REC_231_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_231_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_231_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_231_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_231_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_231_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_231_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_231_##choice
#define MACROLOP_PRIV_EVAL_REC_231_CONTINUE                   MACROLOP_PRIV_EVAL_REC_232
#define MACROLOP_PRIV_EVAL_REC_231_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_232(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_232_OVERLOAD(MACROLOP_PRIV_EVAL_REC_232_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_232_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_232_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_232_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_232_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_232_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_232_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_232_##choice
#define MACROLOP_PRIV_EVAL_REC_232_CONTINUE                   MACROLOP_PRIV_EVAL_REC_233
#define MACROLOP_PRIV_EVAL_REC_232_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_233(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_233_OVERLOAD(MACROLOP_PRIV_EVAL_REC_233_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_233_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_233_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_233_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_233_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_233_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_233_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_233_##choice
#define MACROLOP_PRIV_EVAL_REC_233_CONTINUE                   MACROLOP_PRIV_EVAL_REC_234
#define MACROLOP_PRIV_EVAL_REC_233_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_234(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_234_OVERLOAD(MACROLOP_PRIV_EVAL_REC_234_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_234_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_234_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_234_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_234_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_234_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_234_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_234_##choice
#define MACROLOP_PRIV_EVAL_REC_234_CONTINUE                   MACROLOP_PRIV_EVAL_REC_235
#define MACROLOP_PRIV_EVAL_REC_234_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_235(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_235_OVERLOAD(MACROLOP_PRIV_EVAL_REC_235_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_235_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_235_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_235_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_235_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_235_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_235_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_235_##choice
#define MACROLOP_PRIV_EVAL_REC_235_CONTINUE                   MACROLOP_PRIV_EVAL_REC_236
#define MACROLOP_PRIV_EVAL_REC_235_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_236(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_236_OVERLOAD(MACROLOP_PRIV_EVAL_REC_236_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_236_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_236_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_236_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_236_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_236_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_236_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_236_##choice
#define MACROLOP_PRIV_EVAL_REC_236_CONTINUE                   MACROLOP_PRIV_EVAL_REC_237
#define MACROLOP_PRIV_EVAL_REC_236_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_237(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_237_OVERLOAD(MACROLOP_PRIV_EVAL_REC_237_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_237_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_237_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_237_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_237_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_237_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_237_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_237_##choice
#define MACROLOP_PRIV_EVAL_REC_237_CONTINUE                   MACROLOP_PRIV_EVAL_REC_238
#define MACROLOP_PRIV_EVAL_REC_237_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_238(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_238_OVERLOAD(MACROLOP_PRIV_EVAL_REC_238_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_238_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_238_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_238_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_238_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_238_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_238_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_238_##choice
#define MACROLOP_PRIV_EVAL_REC_238_CONTINUE                   MACROLOP_PRIV_EVAL_REC_239
#define MACROLOP_PRIV_EVAL_REC_238_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_239(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_239_OVERLOAD(MACROLOP_PRIV_EVAL_REC_239_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_239_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_239_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_239_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_239_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_239_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_239_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_239_##choice
#define MACROLOP_PRIV_EVAL_REC_239_CONTINUE                   MACROLOP_PRIV_EVAL_REC_240
#define MACROLOP_PRIV_EVAL_REC_239_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_240(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_240_OVERLOAD(MACROLOP_PRIV_EVAL_REC_240_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_240_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_240_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_240_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_240_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_240_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_240_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_240_##choice
#define MACROLOP_PRIV_EVAL_REC_240_CONTINUE                   MACROLOP_PRIV_EVAL_REC_241
#define MACROLOP_PRIV_EVAL_REC_240_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_241(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_241_OVERLOAD(MACROLOP_PRIV_EVAL_REC_241_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_241_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_241_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_241_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_241_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_241_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_241_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_241_##choice
#define MACROLOP_PRIV_EVAL_REC_241_CONTINUE                   MACROLOP_PRIV_EVAL_REC_242
#define MACROLOP_PRIV_EVAL_REC_241_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_242(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_242_OVERLOAD(MACROLOP_PRIV_EVAL_REC_242_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_242_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_242_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_242_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_242_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_242_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_242_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_242_##choice
#define MACROLOP_PRIV_EVAL_REC_242_CONTINUE                   MACROLOP_PRIV_EVAL_REC_243
#define MACROLOP_PRIV_EVAL_REC_242_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_243(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_243_OVERLOAD(MACROLOP_PRIV_EVAL_REC_243_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_243_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_243_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_243_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_243_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_243_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_243_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_243_##choice
#define MACROLOP_PRIV_EVAL_REC_243_CONTINUE                   MACROLOP_PRIV_EVAL_REC_244
#define MACROLOP_PRIV_EVAL_REC_243_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_244(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_244_OVERLOAD(MACROLOP_PRIV_EVAL_REC_244_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_244_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_244_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_244_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_244_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_244_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_244_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_244_##choice
#define MACROLOP_PRIV_EVAL_REC_244_CONTINUE                   MACROLOP_PRIV_EVAL_REC_245
#define MACROLOP_PRIV_EVAL_REC_244_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_245(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_245_OVERLOAD(MACROLOP_PRIV_EVAL_REC_245_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_245_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_245_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_245_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_245_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_245_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_245_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_245_##choice
#define MACROLOP_PRIV_EVAL_REC_245_CONTINUE                   MACROLOP_PRIV_EVAL_REC_246
#define MACROLOP_PRIV_EVAL_REC_245_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_246(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_246_OVERLOAD(MACROLOP_PRIV_EVAL_REC_246_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_246_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_246_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_246_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_246_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_246_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_246_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_246_##choice
#define MACROLOP_PRIV_EVAL_REC_246_CONTINUE                   MACROLOP_PRIV_EVAL_REC_247
#define MACROLOP_PRIV_EVAL_REC_246_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_247(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_247_OVERLOAD(MACROLOP_PRIV_EVAL_REC_247_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_247_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_247_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_247_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_247_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_247_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_247_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_247_##choice
#define MACROLOP_PRIV_EVAL_REC_247_CONTINUE                   MACROLOP_PRIV_EVAL_REC_248
#define MACROLOP_PRIV_EVAL_REC_247_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_248(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_248_OVERLOAD(MACROLOP_PRIV_EVAL_REC_248_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_248_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_248_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_248_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_248_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_248_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_248_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_248_##choice
#define MACROLOP_PRIV_EVAL_REC_248_CONTINUE                   MACROLOP_PRIV_EVAL_REC_249
#define MACROLOP_PRIV_EVAL_REC_248_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_249(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_249_OVERLOAD(MACROLOP_PRIV_EVAL_REC_249_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_249_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_249_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_249_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_249_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_249_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_249_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_249_##choice
#define MACROLOP_PRIV_EVAL_REC_249_CONTINUE                   MACROLOP_PRIV_EVAL_REC_250
#define MACROLOP_PRIV_EVAL_REC_249_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_250(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_250_OVERLOAD(MACROLOP_PRIV_EVAL_REC_250_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_250_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_250_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_250_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_250_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_250_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_250_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_250_##choice
#define MACROLOP_PRIV_EVAL_REC_250_CONTINUE                   MACROLOP_PRIV_EVAL_REC_251
#define MACROLOP_PRIV_EVAL_REC_250_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_251(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_251_OVERLOAD(MACROLOP_PRIV_EVAL_REC_251_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_251_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_251_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_251_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_251_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_251_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_251_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_251_##choice
#define MACROLOP_PRIV_EVAL_REC_251_CONTINUE                   MACROLOP_PRIV_EVAL_REC_252
#define MACROLOP_PRIV_EVAL_REC_251_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_252(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_252_OVERLOAD(MACROLOP_PRIV_EVAL_REC_252_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_252_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_252_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_252_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_252_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_252_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_252_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_252_##choice
#define MACROLOP_PRIV_EVAL_REC_252_CONTINUE                   MACROLOP_PRIV_EVAL_REC_253
#define MACROLOP_PRIV_EVAL_REC_252_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_253(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_253_OVERLOAD(MACROLOP_PRIV_EVAL_REC_253_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_253_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_253_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_253_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_253_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_253_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_253_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_253_##choice
#define MACROLOP_PRIV_EVAL_REC_253_CONTINUE                   MACROLOP_PRIV_EVAL_REC_254
#define MACROLOP_PRIV_EVAL_REC_253_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_254(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_254_OVERLOAD(MACROLOP_PRIV_EVAL_REC_254_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_254_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_254_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_254_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_254_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_254_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_254_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_254_##choice
#define MACROLOP_PRIV_EVAL_REC_254_CONTINUE                   MACROLOP_PRIV_EVAL_REC_255
#define MACROLOP_PRIV_EVAL_REC_254_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_255(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_255_OVERLOAD(MACROLOP_PRIV_EVAL_REC_255_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_255_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_255_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_255_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_255_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_255_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_255_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_255_##choice
#define MACROLOP_PRIV_EVAL_REC_255_CONTINUE                   MACROLOP_PRIV_EVAL_REC_256
#define MACROLOP_PRIV_EVAL_REC_255_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_256(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_256_OVERLOAD(MACROLOP_PRIV_EVAL_REC_256_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_256_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_256_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_256_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_256_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_256_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_256_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_256_##choice
#define MACROLOP_PRIV_EVAL_REC_256_CONTINUE                   MACROLOP_PRIV_EVAL_REC_257
#define MACROLOP_PRIV_EVAL_REC_256_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_257(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_257_OVERLOAD(MACROLOP_PRIV_EVAL_REC_257_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_257_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_257_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_257_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_257_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_257_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_257_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_257_##choice
#define MACROLOP_PRIV_EVAL_REC_257_CONTINUE                   MACROLOP_PRIV_EVAL_REC_258
#define MACROLOP_PRIV_EVAL_REC_257_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_258(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_258_OVERLOAD(MACROLOP_PRIV_EVAL_REC_258_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_258_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_258_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_258_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_258_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_258_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_258_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_258_##choice
#define MACROLOP_PRIV_EVAL_REC_258_CONTINUE                   MACROLOP_PRIV_EVAL_REC_259
#define MACROLOP_PRIV_EVAL_REC_258_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_259(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_259_OVERLOAD(MACROLOP_PRIV_EVAL_REC_259_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_259_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_259_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_259_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_259_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_259_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_259_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_259_##choice
#define MACROLOP_PRIV_EVAL_REC_259_CONTINUE                   MACROLOP_PRIV_EVAL_REC_260
#define MACROLOP_PRIV_EVAL_REC_259_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_260(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_260_OVERLOAD(MACROLOP_PRIV_EVAL_REC_260_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_260_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_260_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_260_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_260_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_260_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_260_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_260_##choice
#define MACROLOP_PRIV_EVAL_REC_260_CONTINUE                   MACROLOP_PRIV_EVAL_REC_261
#define MACROLOP_PRIV_EVAL_REC_260_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_261(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_261_OVERLOAD(MACROLOP_PRIV_EVAL_REC_261_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_261_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_261_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_261_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_261_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_261_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_261_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_261_##choice
#define MACROLOP_PRIV_EVAL_REC_261_CONTINUE                   MACROLOP_PRIV_EVAL_REC_262
#define MACROLOP_PRIV_EVAL_REC_261_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_262(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_262_OVERLOAD(MACROLOP_PRIV_EVAL_REC_262_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_262_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_262_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_262_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_262_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_262_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_262_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_262_##choice
#define MACROLOP_PRIV_EVAL_REC_262_CONTINUE                   MACROLOP_PRIV_EVAL_REC_263
#define MACROLOP_PRIV_EVAL_REC_262_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_263(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_263_OVERLOAD(MACROLOP_PRIV_EVAL_REC_263_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_263_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_263_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_263_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_263_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_263_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_263_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_263_##choice
#define MACROLOP_PRIV_EVAL_REC_263_CONTINUE                   MACROLOP_PRIV_EVAL_REC_264
#define MACROLOP_PRIV_EVAL_REC_263_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_264(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_264_OVERLOAD(MACROLOP_PRIV_EVAL_REC_264_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_264_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_264_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_264_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_264_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_264_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_264_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_264_##choice
#define MACROLOP_PRIV_EVAL_REC_264_CONTINUE                   MACROLOP_PRIV_EVAL_REC_265
#define MACROLOP_PRIV_EVAL_REC_264_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_265(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_265_OVERLOAD(MACROLOP_PRIV_EVAL_REC_265_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_265_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_265_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_265_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_265_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_265_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_265_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_265_##choice
#define MACROLOP_PRIV_EVAL_REC_265_CONTINUE                   MACROLOP_PRIV_EVAL_REC_266
#define MACROLOP_PRIV_EVAL_REC_265_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_266(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_266_OVERLOAD(MACROLOP_PRIV_EVAL_REC_266_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_266_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_266_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_266_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_266_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_266_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_266_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_266_##choice
#define MACROLOP_PRIV_EVAL_REC_266_CONTINUE                   MACROLOP_PRIV_EVAL_REC_267
#define MACROLOP_PRIV_EVAL_REC_266_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_267(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_267_OVERLOAD(MACROLOP_PRIV_EVAL_REC_267_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_267_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_267_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_267_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_267_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_267_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_267_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_267_##choice
#define MACROLOP_PRIV_EVAL_REC_267_CONTINUE                   MACROLOP_PRIV_EVAL_REC_268
#define MACROLOP_PRIV_EVAL_REC_267_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_268(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_268_OVERLOAD(MACROLOP_PRIV_EVAL_REC_268_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_268_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_268_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_268_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_268_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_268_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_268_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_268_##choice
#define MACROLOP_PRIV_EVAL_REC_268_CONTINUE                   MACROLOP_PRIV_EVAL_REC_269
#define MACROLOP_PRIV_EVAL_REC_268_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_269(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_269_OVERLOAD(MACROLOP_PRIV_EVAL_REC_269_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_269_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_269_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_269_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_269_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_269_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_269_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_269_##choice
#define MACROLOP_PRIV_EVAL_REC_269_CONTINUE                   MACROLOP_PRIV_EVAL_REC_270
#define MACROLOP_PRIV_EVAL_REC_269_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_270(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_270_OVERLOAD(MACROLOP_PRIV_EVAL_REC_270_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_270_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_270_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_270_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_270_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_270_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_270_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_270_##choice
#define MACROLOP_PRIV_EVAL_REC_270_CONTINUE                   MACROLOP_PRIV_EVAL_REC_271
#define MACROLOP_PRIV_EVAL_REC_270_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_271(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_271_OVERLOAD(MACROLOP_PRIV_EVAL_REC_271_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_271_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_271_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_271_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_271_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_271_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_271_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_271_##choice
#define MACROLOP_PRIV_EVAL_REC_271_CONTINUE                   MACROLOP_PRIV_EVAL_REC_272
#define MACROLOP_PRIV_EVAL_REC_271_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_272(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_272_OVERLOAD(MACROLOP_PRIV_EVAL_REC_272_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_272_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_272_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_272_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_272_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_272_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_272_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_272_##choice
#define MACROLOP_PRIV_EVAL_REC_272_CONTINUE                   MACROLOP_PRIV_EVAL_REC_273
#define MACROLOP_PRIV_EVAL_REC_272_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_273(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_273_OVERLOAD(MACROLOP_PRIV_EVAL_REC_273_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_273_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_273_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_273_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_273_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_273_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_273_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_273_##choice
#define MACROLOP_PRIV_EVAL_REC_273_CONTINUE                   MACROLOP_PRIV_EVAL_REC_274
#define MACROLOP_PRIV_EVAL_REC_273_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_274(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_274_OVERLOAD(MACROLOP_PRIV_EVAL_REC_274_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_274_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_274_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_274_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_274_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_274_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_274_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_274_##choice
#define MACROLOP_PRIV_EVAL_REC_274_CONTINUE                   MACROLOP_PRIV_EVAL_REC_275
#define MACROLOP_PRIV_EVAL_REC_274_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_275(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_275_OVERLOAD(MACROLOP_PRIV_EVAL_REC_275_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_275_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_275_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_275_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_275_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_275_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_275_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_275_##choice
#define MACROLOP_PRIV_EVAL_REC_275_CONTINUE                   MACROLOP_PRIV_EVAL_REC_276
#define MACROLOP_PRIV_EVAL_REC_275_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_276(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_276_OVERLOAD(MACROLOP_PRIV_EVAL_REC_276_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_276_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_276_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_276_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_276_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_276_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_276_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_276_##choice
#define MACROLOP_PRIV_EVAL_REC_276_CONTINUE                   MACROLOP_PRIV_EVAL_REC_277
#define MACROLOP_PRIV_EVAL_REC_276_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_277(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_277_OVERLOAD(MACROLOP_PRIV_EVAL_REC_277_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_277_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_277_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_277_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_277_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_277_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_277_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_277_##choice
#define MACROLOP_PRIV_EVAL_REC_277_CONTINUE                   MACROLOP_PRIV_EVAL_REC_278
#define MACROLOP_PRIV_EVAL_REC_277_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_278(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_278_OVERLOAD(MACROLOP_PRIV_EVAL_REC_278_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_278_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_278_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_278_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_278_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_278_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_278_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_278_##choice
#define MACROLOP_PRIV_EVAL_REC_278_CONTINUE                   MACROLOP_PRIV_EVAL_REC_279
#define MACROLOP_PRIV_EVAL_REC_278_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_279(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_279_OVERLOAD(MACROLOP_PRIV_EVAL_REC_279_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_279_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_279_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_279_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_279_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_279_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_279_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_279_##choice
#define MACROLOP_PRIV_EVAL_REC_279_CONTINUE                   MACROLOP_PRIV_EVAL_REC_280
#define MACROLOP_PRIV_EVAL_REC_279_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_280(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_280_OVERLOAD(MACROLOP_PRIV_EVAL_REC_280_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_280_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_280_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_280_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_280_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_280_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_280_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_280_##choice
#define MACROLOP_PRIV_EVAL_REC_280_CONTINUE                   MACROLOP_PRIV_EVAL_REC_281
#define MACROLOP_PRIV_EVAL_REC_280_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_281(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_281_OVERLOAD(MACROLOP_PRIV_EVAL_REC_281_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_281_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_281_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_281_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_281_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_281_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_281_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_281_##choice
#define MACROLOP_PRIV_EVAL_REC_281_CONTINUE                   MACROLOP_PRIV_EVAL_REC_282
#define MACROLOP_PRIV_EVAL_REC_281_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_282(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_282_OVERLOAD(MACROLOP_PRIV_EVAL_REC_282_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_282_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_282_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_282_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_282_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_282_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_282_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_282_##choice
#define MACROLOP_PRIV_EVAL_REC_282_CONTINUE                   MACROLOP_PRIV_EVAL_REC_283
#define MACROLOP_PRIV_EVAL_REC_282_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_283(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_283_OVERLOAD(MACROLOP_PRIV_EVAL_REC_283_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_283_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_283_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_283_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_283_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_283_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_283_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_283_##choice
#define MACROLOP_PRIV_EVAL_REC_283_CONTINUE                   MACROLOP_PRIV_EVAL_REC_284
#define MACROLOP_PRIV_EVAL_REC_283_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_284(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_284_OVERLOAD(MACROLOP_PRIV_EVAL_REC_284_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_284_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_284_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_284_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_284_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_284_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_284_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_284_##choice
#define MACROLOP_PRIV_EVAL_REC_284_CONTINUE                   MACROLOP_PRIV_EVAL_REC_285
#define MACROLOP_PRIV_EVAL_REC_284_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_285(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_285_OVERLOAD(MACROLOP_PRIV_EVAL_REC_285_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_285_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_285_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_285_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_285_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_285_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_285_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_285_##choice
#define MACROLOP_PRIV_EVAL_REC_285_CONTINUE                   MACROLOP_PRIV_EVAL_REC_286
#define MACROLOP_PRIV_EVAL_REC_285_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_286(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_286_OVERLOAD(MACROLOP_PRIV_EVAL_REC_286_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_286_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_286_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_286_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_286_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_286_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_286_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_286_##choice
#define MACROLOP_PRIV_EVAL_REC_286_CONTINUE                   MACROLOP_PRIV_EVAL_REC_287
#define MACROLOP_PRIV_EVAL_REC_286_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_287(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_287_OVERLOAD(MACROLOP_PRIV_EVAL_REC_287_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_287_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_287_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_287_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_287_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_287_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_287_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_287_##choice
#define MACROLOP_PRIV_EVAL_REC_287_CONTINUE                   MACROLOP_PRIV_EVAL_REC_288
#define MACROLOP_PRIV_EVAL_REC_287_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_288(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_288_OVERLOAD(MACROLOP_PRIV_EVAL_REC_288_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_288_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_288_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_288_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_288_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_288_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_288_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_288_##choice
#define MACROLOP_PRIV_EVAL_REC_288_CONTINUE                   MACROLOP_PRIV_EVAL_REC_289
#define MACROLOP_PRIV_EVAL_REC_288_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_289(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_289_OVERLOAD(MACROLOP_PRIV_EVAL_REC_289_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_289_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_289_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_289_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_289_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_289_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_289_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_289_##choice
#define MACROLOP_PRIV_EVAL_REC_289_CONTINUE                   MACROLOP_PRIV_EVAL_REC_290
#define MACROLOP_PRIV_EVAL_REC_289_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_290(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_290_OVERLOAD(MACROLOP_PRIV_EVAL_REC_290_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_290_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_290_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_290_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_290_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_290_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_290_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_290_##choice
#define MACROLOP_PRIV_EVAL_REC_290_CONTINUE                   MACROLOP_PRIV_EVAL_REC_291
#define MACROLOP_PRIV_EVAL_REC_290_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_291(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_291_OVERLOAD(MACROLOP_PRIV_EVAL_REC_291_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_291_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_291_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_291_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_291_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_291_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_291_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_291_##choice
#define MACROLOP_PRIV_EVAL_REC_291_CONTINUE                   MACROLOP_PRIV_EVAL_REC_292
#define MACROLOP_PRIV_EVAL_REC_291_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_292(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_292_OVERLOAD(MACROLOP_PRIV_EVAL_REC_292_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_292_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_292_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_292_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_292_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_292_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_292_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_292_##choice
#define MACROLOP_PRIV_EVAL_REC_292_CONTINUE                   MACROLOP_PRIV_EVAL_REC_293
#define MACROLOP_PRIV_EVAL_REC_292_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_293(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_293_OVERLOAD(MACROLOP_PRIV_EVAL_REC_293_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_293_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_293_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_293_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_293_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_293_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_293_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_293_##choice
#define MACROLOP_PRIV_EVAL_REC_293_CONTINUE                   MACROLOP_PRIV_EVAL_REC_294
#define MACROLOP_PRIV_EVAL_REC_293_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_294(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_294_OVERLOAD(MACROLOP_PRIV_EVAL_REC_294_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_294_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_294_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_294_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_294_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_294_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_294_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_294_##choice
#define MACROLOP_PRIV_EVAL_REC_294_CONTINUE                   MACROLOP_PRIV_EVAL_REC_295
#define MACROLOP_PRIV_EVAL_REC_294_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_295(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_295_OVERLOAD(MACROLOP_PRIV_EVAL_REC_295_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_295_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_295_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_295_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_295_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_295_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_295_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_295_##choice
#define MACROLOP_PRIV_EVAL_REC_295_CONTINUE                   MACROLOP_PRIV_EVAL_REC_296
#define MACROLOP_PRIV_EVAL_REC_295_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_296(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_296_OVERLOAD(MACROLOP_PRIV_EVAL_REC_296_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_296_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_296_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_296_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_296_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_296_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_296_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_296_##choice
#define MACROLOP_PRIV_EVAL_REC_296_CONTINUE                   MACROLOP_PRIV_EVAL_REC_297
#define MACROLOP_PRIV_EVAL_REC_296_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_297(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_297_OVERLOAD(MACROLOP_PRIV_EVAL_REC_297_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_297_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_297_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_297_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_297_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_297_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_297_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_297_##choice
#define MACROLOP_PRIV_EVAL_REC_297_CONTINUE                   MACROLOP_PRIV_EVAL_REC_298
#define MACROLOP_PRIV_EVAL_REC_297_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_298(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_298_OVERLOAD(MACROLOP_PRIV_EVAL_REC_298_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_298_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_298_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_298_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_298_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_298_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_298_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_298_##choice
#define MACROLOP_PRIV_EVAL_REC_298_CONTINUE                   MACROLOP_PRIV_EVAL_REC_299
#define MACROLOP_PRIV_EVAL_REC_298_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_299(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_299_OVERLOAD(MACROLOP_PRIV_EVAL_REC_299_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_299_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_299_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_299_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_299_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_299_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_299_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_299_##choice
#define MACROLOP_PRIV_EVAL_REC_299_CONTINUE                   MACROLOP_PRIV_EVAL_REC_300
#define MACROLOP_PRIV_EVAL_REC_299_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_300(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_300_OVERLOAD(MACROLOP_PRIV_EVAL_REC_300_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_300_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_300_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_300_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_300_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_300_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_300_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_300_##choice
#define MACROLOP_PRIV_EVAL_REC_300_CONTINUE                   MACROLOP_PRIV_EVAL_REC_301
#define MACROLOP_PRIV_EVAL_REC_300_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_301(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_301_OVERLOAD(MACROLOP_PRIV_EVAL_REC_301_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_301_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_301_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_301_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_301_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_301_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_301_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_301_##choice
#define MACROLOP_PRIV_EVAL_REC_301_CONTINUE                   MACROLOP_PRIV_EVAL_REC_302
#define MACROLOP_PRIV_EVAL_REC_301_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_302(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_302_OVERLOAD(MACROLOP_PRIV_EVAL_REC_302_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_302_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_302_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_302_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_302_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_302_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_302_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_302_##choice
#define MACROLOP_PRIV_EVAL_REC_302_CONTINUE                   MACROLOP_PRIV_EVAL_REC_303
#define MACROLOP_PRIV_EVAL_REC_302_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_303(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_303_OVERLOAD(MACROLOP_PRIV_EVAL_REC_303_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_303_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_303_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_303_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_303_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_303_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_303_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_303_##choice
#define MACROLOP_PRIV_EVAL_REC_303_CONTINUE                   MACROLOP_PRIV_EVAL_REC_304
#define MACROLOP_PRIV_EVAL_REC_303_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_304(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_304_OVERLOAD(MACROLOP_PRIV_EVAL_REC_304_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_304_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_304_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_304_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_304_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_304_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_304_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_304_##choice
#define MACROLOP_PRIV_EVAL_REC_304_CONTINUE                   MACROLOP_PRIV_EVAL_REC_305
#define MACROLOP_PRIV_EVAL_REC_304_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_305(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_305_OVERLOAD(MACROLOP_PRIV_EVAL_REC_305_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_305_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_305_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_305_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_305_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_305_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_305_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_305_##choice
#define MACROLOP_PRIV_EVAL_REC_305_CONTINUE                   MACROLOP_PRIV_EVAL_REC_306
#define MACROLOP_PRIV_EVAL_REC_305_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_306(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_306_OVERLOAD(MACROLOP_PRIV_EVAL_REC_306_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_306_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_306_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_306_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_306_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_306_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_306_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_306_##choice
#define MACROLOP_PRIV_EVAL_REC_306_CONTINUE                   MACROLOP_PRIV_EVAL_REC_307
#define MACROLOP_PRIV_EVAL_REC_306_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_307(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_307_OVERLOAD(MACROLOP_PRIV_EVAL_REC_307_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_307_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_307_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_307_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_307_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_307_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_307_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_307_##choice
#define MACROLOP_PRIV_EVAL_REC_307_CONTINUE                   MACROLOP_PRIV_EVAL_REC_308
#define MACROLOP_PRIV_EVAL_REC_307_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_308(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_308_OVERLOAD(MACROLOP_PRIV_EVAL_REC_308_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_308_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_308_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_308_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_308_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_308_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_308_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_308_##choice
#define MACROLOP_PRIV_EVAL_REC_308_CONTINUE                   MACROLOP_PRIV_EVAL_REC_309
#define MACROLOP_PRIV_EVAL_REC_308_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_309(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_309_OVERLOAD(MACROLOP_PRIV_EVAL_REC_309_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_309_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_309_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_309_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_309_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_309_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_309_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_309_##choice
#define MACROLOP_PRIV_EVAL_REC_309_CONTINUE                   MACROLOP_PRIV_EVAL_REC_310
#define MACROLOP_PRIV_EVAL_REC_309_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_310(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_310_OVERLOAD(MACROLOP_PRIV_EVAL_REC_310_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_310_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_310_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_310_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_310_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_310_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_310_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_310_##choice
#define MACROLOP_PRIV_EVAL_REC_310_CONTINUE                   MACROLOP_PRIV_EVAL_REC_311
#define MACROLOP_PRIV_EVAL_REC_310_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_311(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_311_OVERLOAD(MACROLOP_PRIV_EVAL_REC_311_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_311_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_311_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_311_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_311_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_311_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_311_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_311_##choice
#define MACROLOP_PRIV_EVAL_REC_311_CONTINUE                   MACROLOP_PRIV_EVAL_REC_312
#define MACROLOP_PRIV_EVAL_REC_311_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_312(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_312_OVERLOAD(MACROLOP_PRIV_EVAL_REC_312_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_312_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_312_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_312_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_312_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_312_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_312_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_312_##choice
#define MACROLOP_PRIV_EVAL_REC_312_CONTINUE                   MACROLOP_PRIV_EVAL_REC_313
#define MACROLOP_PRIV_EVAL_REC_312_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_313(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_313_OVERLOAD(MACROLOP_PRIV_EVAL_REC_313_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_313_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_313_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_313_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_313_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_313_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_313_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_313_##choice
#define MACROLOP_PRIV_EVAL_REC_313_CONTINUE                   MACROLOP_PRIV_EVAL_REC_314
#define MACROLOP_PRIV_EVAL_REC_313_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_314(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_314_OVERLOAD(MACROLOP_PRIV_EVAL_REC_314_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_314_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_314_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_314_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_314_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_314_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_314_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_314_##choice
#define MACROLOP_PRIV_EVAL_REC_314_CONTINUE                   MACROLOP_PRIV_EVAL_REC_315
#define MACROLOP_PRIV_EVAL_REC_314_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_315(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_315_OVERLOAD(MACROLOP_PRIV_EVAL_REC_315_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_315_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_315_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_315_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_315_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_315_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_315_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_315_##choice
#define MACROLOP_PRIV_EVAL_REC_315_CONTINUE                   MACROLOP_PRIV_EVAL_REC_316
#define MACROLOP_PRIV_EVAL_REC_315_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_316(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_316_OVERLOAD(MACROLOP_PRIV_EVAL_REC_316_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_316_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_316_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_316_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_316_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_316_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_316_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_316_##choice
#define MACROLOP_PRIV_EVAL_REC_316_CONTINUE                   MACROLOP_PRIV_EVAL_REC_317
#define MACROLOP_PRIV_EVAL_REC_316_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_317(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_317_OVERLOAD(MACROLOP_PRIV_EVAL_REC_317_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_317_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_317_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_317_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_317_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_317_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_317_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_317_##choice
#define MACROLOP_PRIV_EVAL_REC_317_CONTINUE                   MACROLOP_PRIV_EVAL_REC_318
#define MACROLOP_PRIV_EVAL_REC_317_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_318(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_318_OVERLOAD(MACROLOP_PRIV_EVAL_REC_318_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_318_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_318_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_318_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_318_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_318_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_318_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_318_##choice
#define MACROLOP_PRIV_EVAL_REC_318_CONTINUE                   MACROLOP_PRIV_EVAL_REC_319
#define MACROLOP_PRIV_EVAL_REC_318_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_319(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_319_OVERLOAD(MACROLOP_PRIV_EVAL_REC_319_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_319_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_319_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_319_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_319_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_319_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_319_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_319_##choice
#define MACROLOP_PRIV_EVAL_REC_319_CONTINUE                   MACROLOP_PRIV_EVAL_REC_320
#define MACROLOP_PRIV_EVAL_REC_319_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_320(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_320_OVERLOAD(MACROLOP_PRIV_EVAL_REC_320_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_320_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_320_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_320_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_320_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_320_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_320_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_320_##choice
#define MACROLOP_PRIV_EVAL_REC_320_CONTINUE                   MACROLOP_PRIV_EVAL_REC_321
#define MACROLOP_PRIV_EVAL_REC_320_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_321(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_321_OVERLOAD(MACROLOP_PRIV_EVAL_REC_321_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_321_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_321_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_321_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_321_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_321_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_321_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_321_##choice
#define MACROLOP_PRIV_EVAL_REC_321_CONTINUE                   MACROLOP_PRIV_EVAL_REC_322
#define MACROLOP_PRIV_EVAL_REC_321_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_322(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_322_OVERLOAD(MACROLOP_PRIV_EVAL_REC_322_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_322_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_322_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_322_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_322_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_322_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_322_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_322_##choice
#define MACROLOP_PRIV_EVAL_REC_322_CONTINUE                   MACROLOP_PRIV_EVAL_REC_323
#define MACROLOP_PRIV_EVAL_REC_322_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_323(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_323_OVERLOAD(MACROLOP_PRIV_EVAL_REC_323_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_323_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_323_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_323_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_323_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_323_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_323_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_323_##choice
#define MACROLOP_PRIV_EVAL_REC_323_CONTINUE                   MACROLOP_PRIV_EVAL_REC_324
#define MACROLOP_PRIV_EVAL_REC_323_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_324(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_324_OVERLOAD(MACROLOP_PRIV_EVAL_REC_324_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_324_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_324_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_324_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_324_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_324_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_324_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_324_##choice
#define MACROLOP_PRIV_EVAL_REC_324_CONTINUE                   MACROLOP_PRIV_EVAL_REC_325
#define MACROLOP_PRIV_EVAL_REC_324_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_325(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_325_OVERLOAD(MACROLOP_PRIV_EVAL_REC_325_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_325_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_325_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_325_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_325_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_325_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_325_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_325_##choice
#define MACROLOP_PRIV_EVAL_REC_325_CONTINUE                   MACROLOP_PRIV_EVAL_REC_326
#define MACROLOP_PRIV_EVAL_REC_325_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_326(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_326_OVERLOAD(MACROLOP_PRIV_EVAL_REC_326_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_326_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_326_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_326_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_326_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_326_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_326_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_326_##choice
#define MACROLOP_PRIV_EVAL_REC_326_CONTINUE                   MACROLOP_PRIV_EVAL_REC_327
#define MACROLOP_PRIV_EVAL_REC_326_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_327(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_327_OVERLOAD(MACROLOP_PRIV_EVAL_REC_327_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_327_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_327_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_327_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_327_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_327_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_327_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_327_##choice
#define MACROLOP_PRIV_EVAL_REC_327_CONTINUE                   MACROLOP_PRIV_EVAL_REC_328
#define MACROLOP_PRIV_EVAL_REC_327_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_328(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_328_OVERLOAD(MACROLOP_PRIV_EVAL_REC_328_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_328_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_328_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_328_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_328_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_328_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_328_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_328_##choice
#define MACROLOP_PRIV_EVAL_REC_328_CONTINUE                   MACROLOP_PRIV_EVAL_REC_329
#define MACROLOP_PRIV_EVAL_REC_328_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_329(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_329_OVERLOAD(MACROLOP_PRIV_EVAL_REC_329_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_329_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_329_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_329_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_329_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_329_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_329_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_329_##choice
#define MACROLOP_PRIV_EVAL_REC_329_CONTINUE                   MACROLOP_PRIV_EVAL_REC_330
#define MACROLOP_PRIV_EVAL_REC_329_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_330(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_330_OVERLOAD(MACROLOP_PRIV_EVAL_REC_330_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_330_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_330_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_330_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_330_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_330_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_330_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_330_##choice
#define MACROLOP_PRIV_EVAL_REC_330_CONTINUE                   MACROLOP_PRIV_EVAL_REC_331
#define MACROLOP_PRIV_EVAL_REC_330_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_331(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_331_OVERLOAD(MACROLOP_PRIV_EVAL_REC_331_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_331_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_331_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_331_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_331_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_331_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_331_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_331_##choice
#define MACROLOP_PRIV_EVAL_REC_331_CONTINUE                   MACROLOP_PRIV_EVAL_REC_332
#define MACROLOP_PRIV_EVAL_REC_331_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_332(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_332_OVERLOAD(MACROLOP_PRIV_EVAL_REC_332_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_332_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_332_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_332_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_332_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_332_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_332_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_332_##choice
#define MACROLOP_PRIV_EVAL_REC_332_CONTINUE                   MACROLOP_PRIV_EVAL_REC_333
#define MACROLOP_PRIV_EVAL_REC_332_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_333(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_333_OVERLOAD(MACROLOP_PRIV_EVAL_REC_333_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_333_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_333_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_333_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_333_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_333_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_333_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_333_##choice
#define MACROLOP_PRIV_EVAL_REC_333_CONTINUE                   MACROLOP_PRIV_EVAL_REC_334
#define MACROLOP_PRIV_EVAL_REC_333_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_334(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_334_OVERLOAD(MACROLOP_PRIV_EVAL_REC_334_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_334_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_334_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_334_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_334_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_334_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_334_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_334_##choice
#define MACROLOP_PRIV_EVAL_REC_334_CONTINUE                   MACROLOP_PRIV_EVAL_REC_335
#define MACROLOP_PRIV_EVAL_REC_334_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_335(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_335_OVERLOAD(MACROLOP_PRIV_EVAL_REC_335_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_335_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_335_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_335_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_335_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_335_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_335_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_335_##choice
#define MACROLOP_PRIV_EVAL_REC_335_CONTINUE                   MACROLOP_PRIV_EVAL_REC_336
#define MACROLOP_PRIV_EVAL_REC_335_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_336(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_336_OVERLOAD(MACROLOP_PRIV_EVAL_REC_336_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_336_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_336_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_336_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_336_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_336_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_336_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_336_##choice
#define MACROLOP_PRIV_EVAL_REC_336_CONTINUE                   MACROLOP_PRIV_EVAL_REC_337
#define MACROLOP_PRIV_EVAL_REC_336_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_337(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_337_OVERLOAD(MACROLOP_PRIV_EVAL_REC_337_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_337_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_337_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_337_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_337_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_337_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_337_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_337_##choice
#define MACROLOP_PRIV_EVAL_REC_337_CONTINUE                   MACROLOP_PRIV_EVAL_REC_338
#define MACROLOP_PRIV_EVAL_REC_337_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_338(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_338_OVERLOAD(MACROLOP_PRIV_EVAL_REC_338_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_338_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_338_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_338_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_338_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_338_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_338_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_338_##choice
#define MACROLOP_PRIV_EVAL_REC_338_CONTINUE                   MACROLOP_PRIV_EVAL_REC_339
#define MACROLOP_PRIV_EVAL_REC_338_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_339(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_339_OVERLOAD(MACROLOP_PRIV_EVAL_REC_339_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_339_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_339_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_339_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_339_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_339_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_339_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_339_##choice
#define MACROLOP_PRIV_EVAL_REC_339_CONTINUE                   MACROLOP_PRIV_EVAL_REC_340
#define MACROLOP_PRIV_EVAL_REC_339_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_340(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_340_OVERLOAD(MACROLOP_PRIV_EVAL_REC_340_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_340_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_340_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_340_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_340_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_340_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_340_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_340_##choice
#define MACROLOP_PRIV_EVAL_REC_340_CONTINUE                   MACROLOP_PRIV_EVAL_REC_341
#define MACROLOP_PRIV_EVAL_REC_340_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_341(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_341_OVERLOAD(MACROLOP_PRIV_EVAL_REC_341_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_341_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_341_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_341_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_341_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_341_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_341_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_341_##choice
#define MACROLOP_PRIV_EVAL_REC_341_CONTINUE                   MACROLOP_PRIV_EVAL_REC_342
#define MACROLOP_PRIV_EVAL_REC_341_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_342(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_342_OVERLOAD(MACROLOP_PRIV_EVAL_REC_342_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_342_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_342_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_342_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_342_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_342_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_342_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_342_##choice
#define MACROLOP_PRIV_EVAL_REC_342_CONTINUE                   MACROLOP_PRIV_EVAL_REC_343
#define MACROLOP_PRIV_EVAL_REC_342_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_343(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_343_OVERLOAD(MACROLOP_PRIV_EVAL_REC_343_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_343_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_343_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_343_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_343_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_343_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_343_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_343_##choice
#define MACROLOP_PRIV_EVAL_REC_343_CONTINUE                   MACROLOP_PRIV_EVAL_REC_344
#define MACROLOP_PRIV_EVAL_REC_343_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_344(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_344_OVERLOAD(MACROLOP_PRIV_EVAL_REC_344_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_344_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_344_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_344_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_344_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_344_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_344_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_344_##choice
#define MACROLOP_PRIV_EVAL_REC_344_CONTINUE                   MACROLOP_PRIV_EVAL_REC_345
#define MACROLOP_PRIV_EVAL_REC_344_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_345(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_345_OVERLOAD(MACROLOP_PRIV_EVAL_REC_345_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_345_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_345_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_345_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_345_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_345_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_345_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_345_##choice
#define MACROLOP_PRIV_EVAL_REC_345_CONTINUE                   MACROLOP_PRIV_EVAL_REC_346
#define MACROLOP_PRIV_EVAL_REC_345_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_346(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_346_OVERLOAD(MACROLOP_PRIV_EVAL_REC_346_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_346_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_346_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_346_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_346_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_346_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_346_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_346_##choice
#define MACROLOP_PRIV_EVAL_REC_346_CONTINUE                   MACROLOP_PRIV_EVAL_REC_347
#define MACROLOP_PRIV_EVAL_REC_346_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_347(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_347_OVERLOAD(MACROLOP_PRIV_EVAL_REC_347_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_347_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_347_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_347_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_347_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_347_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_347_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_347_##choice
#define MACROLOP_PRIV_EVAL_REC_347_CONTINUE                   MACROLOP_PRIV_EVAL_REC_348
#define MACROLOP_PRIV_EVAL_REC_347_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_348(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_348_OVERLOAD(MACROLOP_PRIV_EVAL_REC_348_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_348_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_348_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_348_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_348_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_348_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_348_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_348_##choice
#define MACROLOP_PRIV_EVAL_REC_348_CONTINUE                   MACROLOP_PRIV_EVAL_REC_349
#define MACROLOP_PRIV_EVAL_REC_348_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_349(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_349_OVERLOAD(MACROLOP_PRIV_EVAL_REC_349_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_349_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_349_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_349_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_349_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_349_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_349_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_349_##choice
#define MACROLOP_PRIV_EVAL_REC_349_CONTINUE                   MACROLOP_PRIV_EVAL_REC_350
#define MACROLOP_PRIV_EVAL_REC_349_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_350(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_350_OVERLOAD(MACROLOP_PRIV_EVAL_REC_350_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_350_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_350_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_350_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_350_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_350_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_350_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_350_##choice
#define MACROLOP_PRIV_EVAL_REC_350_CONTINUE                   MACROLOP_PRIV_EVAL_REC_351
#define MACROLOP_PRIV_EVAL_REC_350_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_351(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_351_OVERLOAD(MACROLOP_PRIV_EVAL_REC_351_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_351_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_351_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_351_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_351_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_351_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_351_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_351_##choice
#define MACROLOP_PRIV_EVAL_REC_351_CONTINUE                   MACROLOP_PRIV_EVAL_REC_352
#define MACROLOP_PRIV_EVAL_REC_351_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_352(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_352_OVERLOAD(MACROLOP_PRIV_EVAL_REC_352_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_352_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_352_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_352_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_352_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_352_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_352_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_352_##choice
#define MACROLOP_PRIV_EVAL_REC_352_CONTINUE                   MACROLOP_PRIV_EVAL_REC_353
#define MACROLOP_PRIV_EVAL_REC_352_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_353(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_353_OVERLOAD(MACROLOP_PRIV_EVAL_REC_353_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_353_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_353_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_353_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_353_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_353_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_353_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_353_##choice
#define MACROLOP_PRIV_EVAL_REC_353_CONTINUE                   MACROLOP_PRIV_EVAL_REC_354
#define MACROLOP_PRIV_EVAL_REC_353_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_354(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_354_OVERLOAD(MACROLOP_PRIV_EVAL_REC_354_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_354_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_354_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_354_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_354_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_354_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_354_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_354_##choice
#define MACROLOP_PRIV_EVAL_REC_354_CONTINUE                   MACROLOP_PRIV_EVAL_REC_355
#define MACROLOP_PRIV_EVAL_REC_354_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_355(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_355_OVERLOAD(MACROLOP_PRIV_EVAL_REC_355_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_355_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_355_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_355_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_355_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_355_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_355_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_355_##choice
#define MACROLOP_PRIV_EVAL_REC_355_CONTINUE                   MACROLOP_PRIV_EVAL_REC_356
#define MACROLOP_PRIV_EVAL_REC_355_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_356(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_356_OVERLOAD(MACROLOP_PRIV_EVAL_REC_356_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_356_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_356_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_356_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_356_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_356_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_356_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_356_##choice
#define MACROLOP_PRIV_EVAL_REC_356_CONTINUE                   MACROLOP_PRIV_EVAL_REC_357
#define MACROLOP_PRIV_EVAL_REC_356_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_357(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_357_OVERLOAD(MACROLOP_PRIV_EVAL_REC_357_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_357_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_357_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_357_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_357_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_357_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_357_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_357_##choice
#define MACROLOP_PRIV_EVAL_REC_357_CONTINUE                   MACROLOP_PRIV_EVAL_REC_358
#define MACROLOP_PRIV_EVAL_REC_357_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_358(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_358_OVERLOAD(MACROLOP_PRIV_EVAL_REC_358_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_358_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_358_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_358_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_358_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_358_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_358_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_358_##choice
#define MACROLOP_PRIV_EVAL_REC_358_CONTINUE                   MACROLOP_PRIV_EVAL_REC_359
#define MACROLOP_PRIV_EVAL_REC_358_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_359(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_359_OVERLOAD(MACROLOP_PRIV_EVAL_REC_359_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_359_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_359_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_359_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_359_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_359_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_359_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_359_##choice
#define MACROLOP_PRIV_EVAL_REC_359_CONTINUE                   MACROLOP_PRIV_EVAL_REC_360
#define MACROLOP_PRIV_EVAL_REC_359_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_360(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_360_OVERLOAD(MACROLOP_PRIV_EVAL_REC_360_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_360_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_360_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_360_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_360_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_360_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_360_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_360_##choice
#define MACROLOP_PRIV_EVAL_REC_360_CONTINUE                   MACROLOP_PRIV_EVAL_REC_361
#define MACROLOP_PRIV_EVAL_REC_360_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_361(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_361_OVERLOAD(MACROLOP_PRIV_EVAL_REC_361_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_361_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_361_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_361_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_361_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_361_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_361_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_361_##choice
#define MACROLOP_PRIV_EVAL_REC_361_CONTINUE                   MACROLOP_PRIV_EVAL_REC_362
#define MACROLOP_PRIV_EVAL_REC_361_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_362(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_362_OVERLOAD(MACROLOP_PRIV_EVAL_REC_362_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_362_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_362_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_362_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_362_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_362_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_362_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_362_##choice
#define MACROLOP_PRIV_EVAL_REC_362_CONTINUE                   MACROLOP_PRIV_EVAL_REC_363
#define MACROLOP_PRIV_EVAL_REC_362_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_363(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_363_OVERLOAD(MACROLOP_PRIV_EVAL_REC_363_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_363_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_363_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_363_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_363_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_363_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_363_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_363_##choice
#define MACROLOP_PRIV_EVAL_REC_363_CONTINUE                   MACROLOP_PRIV_EVAL_REC_364
#define MACROLOP_PRIV_EVAL_REC_363_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_364(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_364_OVERLOAD(MACROLOP_PRIV_EVAL_REC_364_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_364_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_364_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_364_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_364_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_364_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_364_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_364_##choice
#define MACROLOP_PRIV_EVAL_REC_364_CONTINUE                   MACROLOP_PRIV_EVAL_REC_365
#define MACROLOP_PRIV_EVAL_REC_364_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_365(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_365_OVERLOAD(MACROLOP_PRIV_EVAL_REC_365_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_365_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_365_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_365_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_365_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_365_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_365_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_365_##choice
#define MACROLOP_PRIV_EVAL_REC_365_CONTINUE                   MACROLOP_PRIV_EVAL_REC_366
#define MACROLOP_PRIV_EVAL_REC_365_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_366(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_366_OVERLOAD(MACROLOP_PRIV_EVAL_REC_366_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_366_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_366_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_366_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_366_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_366_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_366_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_366_##choice
#define MACROLOP_PRIV_EVAL_REC_366_CONTINUE                   MACROLOP_PRIV_EVAL_REC_367
#define MACROLOP_PRIV_EVAL_REC_366_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_367(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_367_OVERLOAD(MACROLOP_PRIV_EVAL_REC_367_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_367_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_367_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_367_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_367_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_367_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_367_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_367_##choice
#define MACROLOP_PRIV_EVAL_REC_367_CONTINUE                   MACROLOP_PRIV_EVAL_REC_368
#define MACROLOP_PRIV_EVAL_REC_367_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_368(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_368_OVERLOAD(MACROLOP_PRIV_EVAL_REC_368_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_368_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_368_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_368_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_368_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_368_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_368_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_368_##choice
#define MACROLOP_PRIV_EVAL_REC_368_CONTINUE                   MACROLOP_PRIV_EVAL_REC_369
#define MACROLOP_PRIV_EVAL_REC_368_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_369(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_369_OVERLOAD(MACROLOP_PRIV_EVAL_REC_369_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_369_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_369_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_369_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_369_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_369_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_369_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_369_##choice
#define MACROLOP_PRIV_EVAL_REC_369_CONTINUE                   MACROLOP_PRIV_EVAL_REC_370
#define MACROLOP_PRIV_EVAL_REC_369_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_370(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_370_OVERLOAD(MACROLOP_PRIV_EVAL_REC_370_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_370_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_370_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_370_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_370_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_370_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_370_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_370_##choice
#define MACROLOP_PRIV_EVAL_REC_370_CONTINUE                   MACROLOP_PRIV_EVAL_REC_371
#define MACROLOP_PRIV_EVAL_REC_370_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_371(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_371_OVERLOAD(MACROLOP_PRIV_EVAL_REC_371_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_371_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_371_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_371_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_371_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_371_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_371_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_371_##choice
#define MACROLOP_PRIV_EVAL_REC_371_CONTINUE                   MACROLOP_PRIV_EVAL_REC_372
#define MACROLOP_PRIV_EVAL_REC_371_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_372(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_372_OVERLOAD(MACROLOP_PRIV_EVAL_REC_372_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_372_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_372_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_372_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_372_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_372_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_372_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_372_##choice
#define MACROLOP_PRIV_EVAL_REC_372_CONTINUE                   MACROLOP_PRIV_EVAL_REC_373
#define MACROLOP_PRIV_EVAL_REC_372_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_373(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_373_OVERLOAD(MACROLOP_PRIV_EVAL_REC_373_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_373_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_373_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_373_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_373_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_373_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_373_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_373_##choice
#define MACROLOP_PRIV_EVAL_REC_373_CONTINUE                   MACROLOP_PRIV_EVAL_REC_374
#define MACROLOP_PRIV_EVAL_REC_373_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_374(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_374_OVERLOAD(MACROLOP_PRIV_EVAL_REC_374_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_374_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_374_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_374_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_374_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_374_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_374_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_374_##choice
#define MACROLOP_PRIV_EVAL_REC_374_CONTINUE                   MACROLOP_PRIV_EVAL_REC_375
#define MACROLOP_PRIV_EVAL_REC_374_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_375(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_375_OVERLOAD(MACROLOP_PRIV_EVAL_REC_375_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_375_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_375_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_375_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_375_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_375_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_375_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_375_##choice
#define MACROLOP_PRIV_EVAL_REC_375_CONTINUE                   MACROLOP_PRIV_EVAL_REC_376
#define MACROLOP_PRIV_EVAL_REC_375_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_376(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_376_OVERLOAD(MACROLOP_PRIV_EVAL_REC_376_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_376_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_376_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_376_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_376_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_376_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_376_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_376_##choice
#define MACROLOP_PRIV_EVAL_REC_376_CONTINUE                   MACROLOP_PRIV_EVAL_REC_377
#define MACROLOP_PRIV_EVAL_REC_376_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_377(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_377_OVERLOAD(MACROLOP_PRIV_EVAL_REC_377_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_377_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_377_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_377_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_377_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_377_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_377_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_377_##choice
#define MACROLOP_PRIV_EVAL_REC_377_CONTINUE                   MACROLOP_PRIV_EVAL_REC_378
#define MACROLOP_PRIV_EVAL_REC_377_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_378(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_378_OVERLOAD(MACROLOP_PRIV_EVAL_REC_378_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_378_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_378_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_378_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_378_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_378_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_378_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_378_##choice
#define MACROLOP_PRIV_EVAL_REC_378_CONTINUE                   MACROLOP_PRIV_EVAL_REC_379
#define MACROLOP_PRIV_EVAL_REC_378_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_379(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_379_OVERLOAD(MACROLOP_PRIV_EVAL_REC_379_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_379_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_379_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_379_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_379_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_379_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_379_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_379_##choice
#define MACROLOP_PRIV_EVAL_REC_379_CONTINUE                   MACROLOP_PRIV_EVAL_REC_380
#define MACROLOP_PRIV_EVAL_REC_379_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_380(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_380_OVERLOAD(MACROLOP_PRIV_EVAL_REC_380_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_380_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_380_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_380_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_380_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_380_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_380_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_380_##choice
#define MACROLOP_PRIV_EVAL_REC_380_CONTINUE                   MACROLOP_PRIV_EVAL_REC_381
#define MACROLOP_PRIV_EVAL_REC_380_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_381(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_381_OVERLOAD(MACROLOP_PRIV_EVAL_REC_381_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_381_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_381_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_381_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_381_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_381_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_381_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_381_##choice
#define MACROLOP_PRIV_EVAL_REC_381_CONTINUE                   MACROLOP_PRIV_EVAL_REC_382
#define MACROLOP_PRIV_EVAL_REC_381_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_382(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_382_OVERLOAD(MACROLOP_PRIV_EVAL_REC_382_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_382_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_382_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_382_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_382_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_382_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_382_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_382_##choice
#define MACROLOP_PRIV_EVAL_REC_382_CONTINUE                   MACROLOP_PRIV_EVAL_REC_383
#define MACROLOP_PRIV_EVAL_REC_382_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_383(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_383_OVERLOAD(MACROLOP_PRIV_EVAL_REC_383_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_383_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_383_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_383_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_383_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_383_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_383_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_383_##choice
#define MACROLOP_PRIV_EVAL_REC_383_CONTINUE                   MACROLOP_PRIV_EVAL_REC_384
#define MACROLOP_PRIV_EVAL_REC_383_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_384(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_384_OVERLOAD(MACROLOP_PRIV_EVAL_REC_384_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_384_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_384_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_384_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_384_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_384_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_384_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_384_##choice
#define MACROLOP_PRIV_EVAL_REC_384_CONTINUE                   MACROLOP_PRIV_EVAL_REC_385
#define MACROLOP_PRIV_EVAL_REC_384_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_385(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_385_OVERLOAD(MACROLOP_PRIV_EVAL_REC_385_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_385_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_385_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_385_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_385_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_385_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_385_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_385_##choice
#define MACROLOP_PRIV_EVAL_REC_385_CONTINUE                   MACROLOP_PRIV_EVAL_REC_386
#define MACROLOP_PRIV_EVAL_REC_385_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_386(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_386_OVERLOAD(MACROLOP_PRIV_EVAL_REC_386_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_386_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_386_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_386_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_386_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_386_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_386_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_386_##choice
#define MACROLOP_PRIV_EVAL_REC_386_CONTINUE                   MACROLOP_PRIV_EVAL_REC_387
#define MACROLOP_PRIV_EVAL_REC_386_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_387(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_387_OVERLOAD(MACROLOP_PRIV_EVAL_REC_387_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_387_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_387_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_387_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_387_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_387_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_387_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_387_##choice
#define MACROLOP_PRIV_EVAL_REC_387_CONTINUE                   MACROLOP_PRIV_EVAL_REC_388
#define MACROLOP_PRIV_EVAL_REC_387_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_388(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_388_OVERLOAD(MACROLOP_PRIV_EVAL_REC_388_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_388_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_388_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_388_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_388_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_388_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_388_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_388_##choice
#define MACROLOP_PRIV_EVAL_REC_388_CONTINUE                   MACROLOP_PRIV_EVAL_REC_389
#define MACROLOP_PRIV_EVAL_REC_388_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_389(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_389_OVERLOAD(MACROLOP_PRIV_EVAL_REC_389_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_389_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_389_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_389_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_389_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_389_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_389_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_389_##choice
#define MACROLOP_PRIV_EVAL_REC_389_CONTINUE                   MACROLOP_PRIV_EVAL_REC_390
#define MACROLOP_PRIV_EVAL_REC_389_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_390(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_390_OVERLOAD(MACROLOP_PRIV_EVAL_REC_390_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_390_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_390_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_390_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_390_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_390_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_390_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_390_##choice
#define MACROLOP_PRIV_EVAL_REC_390_CONTINUE                   MACROLOP_PRIV_EVAL_REC_391
#define MACROLOP_PRIV_EVAL_REC_390_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_391(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_391_OVERLOAD(MACROLOP_PRIV_EVAL_REC_391_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_391_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_391_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_391_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_391_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_391_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_391_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_391_##choice
#define MACROLOP_PRIV_EVAL_REC_391_CONTINUE                   MACROLOP_PRIV_EVAL_REC_392
#define MACROLOP_PRIV_EVAL_REC_391_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_392(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_392_OVERLOAD(MACROLOP_PRIV_EVAL_REC_392_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_392_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_392_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_392_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_392_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_392_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_392_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_392_##choice
#define MACROLOP_PRIV_EVAL_REC_392_CONTINUE                   MACROLOP_PRIV_EVAL_REC_393
#define MACROLOP_PRIV_EVAL_REC_392_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_393(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_393_OVERLOAD(MACROLOP_PRIV_EVAL_REC_393_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_393_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_393_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_393_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_393_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_393_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_393_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_393_##choice
#define MACROLOP_PRIV_EVAL_REC_393_CONTINUE                   MACROLOP_PRIV_EVAL_REC_394
#define MACROLOP_PRIV_EVAL_REC_393_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_394(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_394_OVERLOAD(MACROLOP_PRIV_EVAL_REC_394_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_394_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_394_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_394_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_394_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_394_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_394_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_394_##choice
#define MACROLOP_PRIV_EVAL_REC_394_CONTINUE                   MACROLOP_PRIV_EVAL_REC_395
#define MACROLOP_PRIV_EVAL_REC_394_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_395(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_395_OVERLOAD(MACROLOP_PRIV_EVAL_REC_395_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_395_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_395_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_395_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_395_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_395_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_395_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_395_##choice
#define MACROLOP_PRIV_EVAL_REC_395_CONTINUE                   MACROLOP_PRIV_EVAL_REC_396
#define MACROLOP_PRIV_EVAL_REC_395_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_396(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_396_OVERLOAD(MACROLOP_PRIV_EVAL_REC_396_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_396_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_396_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_396_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_396_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_396_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_396_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_396_##choice
#define MACROLOP_PRIV_EVAL_REC_396_CONTINUE                   MACROLOP_PRIV_EVAL_REC_397
#define MACROLOP_PRIV_EVAL_REC_396_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_397(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_397_OVERLOAD(MACROLOP_PRIV_EVAL_REC_397_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_397_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_397_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_397_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_397_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_397_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_397_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_397_##choice
#define MACROLOP_PRIV_EVAL_REC_397_CONTINUE                   MACROLOP_PRIV_EVAL_REC_398
#define MACROLOP_PRIV_EVAL_REC_397_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_398(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_398_OVERLOAD(MACROLOP_PRIV_EVAL_REC_398_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_398_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_398_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_398_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_398_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_398_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_398_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_398_##choice
#define MACROLOP_PRIV_EVAL_REC_398_CONTINUE                   MACROLOP_PRIV_EVAL_REC_399
#define MACROLOP_PRIV_EVAL_REC_398_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_399(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_399_OVERLOAD(MACROLOP_PRIV_EVAL_REC_399_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_399_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_399_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_399_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_399_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_399_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_399_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_399_##choice
#define MACROLOP_PRIV_EVAL_REC_399_CONTINUE                   MACROLOP_PRIV_EVAL_REC_400
#define MACROLOP_PRIV_EVAL_REC_399_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_400(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_400_OVERLOAD(MACROLOP_PRIV_EVAL_REC_400_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_400_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_400_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_400_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_400_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_400_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_400_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_400_##choice
#define MACROLOP_PRIV_EVAL_REC_400_CONTINUE                   MACROLOP_PRIV_EVAL_REC_401
#define MACROLOP_PRIV_EVAL_REC_400_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_401(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_401_OVERLOAD(MACROLOP_PRIV_EVAL_REC_401_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_401_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_401_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_401_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_401_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_401_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_401_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_401_##choice
#define MACROLOP_PRIV_EVAL_REC_401_CONTINUE                   MACROLOP_PRIV_EVAL_REC_402
#define MACROLOP_PRIV_EVAL_REC_401_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_402(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_402_OVERLOAD(MACROLOP_PRIV_EVAL_REC_402_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_402_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_402_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_402_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_402_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_402_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_402_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_402_##choice
#define MACROLOP_PRIV_EVAL_REC_402_CONTINUE                   MACROLOP_PRIV_EVAL_REC_403
#define MACROLOP_PRIV_EVAL_REC_402_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_403(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_403_OVERLOAD(MACROLOP_PRIV_EVAL_REC_403_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_403_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_403_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_403_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_403_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_403_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_403_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_403_##choice
#define MACROLOP_PRIV_EVAL_REC_403_CONTINUE                   MACROLOP_PRIV_EVAL_REC_404
#define MACROLOP_PRIV_EVAL_REC_403_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_404(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_404_OVERLOAD(MACROLOP_PRIV_EVAL_REC_404_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_404_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_404_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_404_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_404_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_404_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_404_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_404_##choice
#define MACROLOP_PRIV_EVAL_REC_404_CONTINUE                   MACROLOP_PRIV_EVAL_REC_405
#define MACROLOP_PRIV_EVAL_REC_404_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_405(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_405_OVERLOAD(MACROLOP_PRIV_EVAL_REC_405_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_405_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_405_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_405_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_405_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_405_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_405_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_405_##choice
#define MACROLOP_PRIV_EVAL_REC_405_CONTINUE                   MACROLOP_PRIV_EVAL_REC_406
#define MACROLOP_PRIV_EVAL_REC_405_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_406(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_406_OVERLOAD(MACROLOP_PRIV_EVAL_REC_406_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_406_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_406_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_406_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_406_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_406_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_406_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_406_##choice
#define MACROLOP_PRIV_EVAL_REC_406_CONTINUE                   MACROLOP_PRIV_EVAL_REC_407
#define MACROLOP_PRIV_EVAL_REC_406_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_407(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_407_OVERLOAD(MACROLOP_PRIV_EVAL_REC_407_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_407_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_407_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_407_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_407_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_407_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_407_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_407_##choice
#define MACROLOP_PRIV_EVAL_REC_407_CONTINUE                   MACROLOP_PRIV_EVAL_REC_408
#define MACROLOP_PRIV_EVAL_REC_407_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_408(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_408_OVERLOAD(MACROLOP_PRIV_EVAL_REC_408_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_408_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_408_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_408_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_408_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_408_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_408_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_408_##choice
#define MACROLOP_PRIV_EVAL_REC_408_CONTINUE                   MACROLOP_PRIV_EVAL_REC_409
#define MACROLOP_PRIV_EVAL_REC_408_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_409(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_409_OVERLOAD(MACROLOP_PRIV_EVAL_REC_409_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_409_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_409_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_409_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_409_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_409_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_409_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_409_##choice
#define MACROLOP_PRIV_EVAL_REC_409_CONTINUE                   MACROLOP_PRIV_EVAL_REC_410
#define MACROLOP_PRIV_EVAL_REC_409_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_410(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_410_OVERLOAD(MACROLOP_PRIV_EVAL_REC_410_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_410_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_410_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_410_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_410_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_410_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_410_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_410_##choice
#define MACROLOP_PRIV_EVAL_REC_410_CONTINUE                   MACROLOP_PRIV_EVAL_REC_411
#define MACROLOP_PRIV_EVAL_REC_410_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_411(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_411_OVERLOAD(MACROLOP_PRIV_EVAL_REC_411_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_411_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_411_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_411_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_411_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_411_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_411_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_411_##choice
#define MACROLOP_PRIV_EVAL_REC_411_CONTINUE                   MACROLOP_PRIV_EVAL_REC_412
#define MACROLOP_PRIV_EVAL_REC_411_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_412(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_412_OVERLOAD(MACROLOP_PRIV_EVAL_REC_412_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_412_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_412_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_412_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_412_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_412_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_412_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_412_##choice
#define MACROLOP_PRIV_EVAL_REC_412_CONTINUE                   MACROLOP_PRIV_EVAL_REC_413
#define MACROLOP_PRIV_EVAL_REC_412_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_413(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_413_OVERLOAD(MACROLOP_PRIV_EVAL_REC_413_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_413_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_413_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_413_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_413_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_413_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_413_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_413_##choice
#define MACROLOP_PRIV_EVAL_REC_413_CONTINUE                   MACROLOP_PRIV_EVAL_REC_414
#define MACROLOP_PRIV_EVAL_REC_413_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_414(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_414_OVERLOAD(MACROLOP_PRIV_EVAL_REC_414_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_414_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_414_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_414_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_414_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_414_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_414_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_414_##choice
#define MACROLOP_PRIV_EVAL_REC_414_CONTINUE                   MACROLOP_PRIV_EVAL_REC_415
#define MACROLOP_PRIV_EVAL_REC_414_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_415(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_415_OVERLOAD(MACROLOP_PRIV_EVAL_REC_415_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_415_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_415_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_415_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_415_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_415_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_415_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_415_##choice
#define MACROLOP_PRIV_EVAL_REC_415_CONTINUE                   MACROLOP_PRIV_EVAL_REC_416
#define MACROLOP_PRIV_EVAL_REC_415_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_416(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_416_OVERLOAD(MACROLOP_PRIV_EVAL_REC_416_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_416_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_416_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_416_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_416_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_416_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_416_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_416_##choice
#define MACROLOP_PRIV_EVAL_REC_416_CONTINUE                   MACROLOP_PRIV_EVAL_REC_417
#define MACROLOP_PRIV_EVAL_REC_416_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_417(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_417_OVERLOAD(MACROLOP_PRIV_EVAL_REC_417_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_417_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_417_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_417_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_417_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_417_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_417_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_417_##choice
#define MACROLOP_PRIV_EVAL_REC_417_CONTINUE                   MACROLOP_PRIV_EVAL_REC_418
#define MACROLOP_PRIV_EVAL_REC_417_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_418(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_418_OVERLOAD(MACROLOP_PRIV_EVAL_REC_418_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_418_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_418_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_418_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_418_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_418_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_418_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_418_##choice
#define MACROLOP_PRIV_EVAL_REC_418_CONTINUE                   MACROLOP_PRIV_EVAL_REC_419
#define MACROLOP_PRIV_EVAL_REC_418_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_419(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_419_OVERLOAD(MACROLOP_PRIV_EVAL_REC_419_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_419_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_419_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_419_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_419_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_419_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_419_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_419_##choice
#define MACROLOP_PRIV_EVAL_REC_419_CONTINUE                   MACROLOP_PRIV_EVAL_REC_420
#define MACROLOP_PRIV_EVAL_REC_419_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_420(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_420_OVERLOAD(MACROLOP_PRIV_EVAL_REC_420_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_420_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_420_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_420_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_420_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_420_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_420_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_420_##choice
#define MACROLOP_PRIV_EVAL_REC_420_CONTINUE                   MACROLOP_PRIV_EVAL_REC_421
#define MACROLOP_PRIV_EVAL_REC_420_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_421(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_421_OVERLOAD(MACROLOP_PRIV_EVAL_REC_421_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_421_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_421_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_421_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_421_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_421_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_421_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_421_##choice
#define MACROLOP_PRIV_EVAL_REC_421_CONTINUE                   MACROLOP_PRIV_EVAL_REC_422
#define MACROLOP_PRIV_EVAL_REC_421_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_422(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_422_OVERLOAD(MACROLOP_PRIV_EVAL_REC_422_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_422_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_422_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_422_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_422_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_422_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_422_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_422_##choice
#define MACROLOP_PRIV_EVAL_REC_422_CONTINUE                   MACROLOP_PRIV_EVAL_REC_423
#define MACROLOP_PRIV_EVAL_REC_422_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_423(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_423_OVERLOAD(MACROLOP_PRIV_EVAL_REC_423_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_423_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_423_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_423_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_423_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_423_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_423_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_423_##choice
#define MACROLOP_PRIV_EVAL_REC_423_CONTINUE                   MACROLOP_PRIV_EVAL_REC_424
#define MACROLOP_PRIV_EVAL_REC_423_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_424(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_424_OVERLOAD(MACROLOP_PRIV_EVAL_REC_424_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_424_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_424_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_424_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_424_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_424_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_424_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_424_##choice
#define MACROLOP_PRIV_EVAL_REC_424_CONTINUE                   MACROLOP_PRIV_EVAL_REC_425
#define MACROLOP_PRIV_EVAL_REC_424_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_425(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_425_OVERLOAD(MACROLOP_PRIV_EVAL_REC_425_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_425_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_425_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_425_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_425_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_425_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_425_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_425_##choice
#define MACROLOP_PRIV_EVAL_REC_425_CONTINUE                   MACROLOP_PRIV_EVAL_REC_426
#define MACROLOP_PRIV_EVAL_REC_425_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_426(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_426_OVERLOAD(MACROLOP_PRIV_EVAL_REC_426_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_426_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_426_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_426_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_426_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_426_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_426_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_426_##choice
#define MACROLOP_PRIV_EVAL_REC_426_CONTINUE                   MACROLOP_PRIV_EVAL_REC_427
#define MACROLOP_PRIV_EVAL_REC_426_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_427(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_427_OVERLOAD(MACROLOP_PRIV_EVAL_REC_427_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_427_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_427_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_427_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_427_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_427_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_427_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_427_##choice
#define MACROLOP_PRIV_EVAL_REC_427_CONTINUE                   MACROLOP_PRIV_EVAL_REC_428
#define MACROLOP_PRIV_EVAL_REC_427_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_428(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_428_OVERLOAD(MACROLOP_PRIV_EVAL_REC_428_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_428_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_428_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_428_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_428_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_428_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_428_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_428_##choice
#define MACROLOP_PRIV_EVAL_REC_428_CONTINUE                   MACROLOP_PRIV_EVAL_REC_429
#define MACROLOP_PRIV_EVAL_REC_428_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_429(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_429_OVERLOAD(MACROLOP_PRIV_EVAL_REC_429_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_429_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_429_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_429_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_429_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_429_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_429_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_429_##choice
#define MACROLOP_PRIV_EVAL_REC_429_CONTINUE                   MACROLOP_PRIV_EVAL_REC_430
#define MACROLOP_PRIV_EVAL_REC_429_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_430(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_430_OVERLOAD(MACROLOP_PRIV_EVAL_REC_430_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_430_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_430_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_430_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_430_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_430_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_430_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_430_##choice
#define MACROLOP_PRIV_EVAL_REC_430_CONTINUE                   MACROLOP_PRIV_EVAL_REC_431
#define MACROLOP_PRIV_EVAL_REC_430_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_431(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_431_OVERLOAD(MACROLOP_PRIV_EVAL_REC_431_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_431_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_431_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_431_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_431_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_431_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_431_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_431_##choice
#define MACROLOP_PRIV_EVAL_REC_431_CONTINUE                   MACROLOP_PRIV_EVAL_REC_432
#define MACROLOP_PRIV_EVAL_REC_431_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_432(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_432_OVERLOAD(MACROLOP_PRIV_EVAL_REC_432_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_432_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_432_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_432_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_432_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_432_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_432_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_432_##choice
#define MACROLOP_PRIV_EVAL_REC_432_CONTINUE                   MACROLOP_PRIV_EVAL_REC_433
#define MACROLOP_PRIV_EVAL_REC_432_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_433(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_433_OVERLOAD(MACROLOP_PRIV_EVAL_REC_433_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_433_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_433_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_433_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_433_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_433_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_433_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_433_##choice
#define MACROLOP_PRIV_EVAL_REC_433_CONTINUE                   MACROLOP_PRIV_EVAL_REC_434
#define MACROLOP_PRIV_EVAL_REC_433_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_434(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_434_OVERLOAD(MACROLOP_PRIV_EVAL_REC_434_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_434_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_434_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_434_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_434_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_434_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_434_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_434_##choice
#define MACROLOP_PRIV_EVAL_REC_434_CONTINUE                   MACROLOP_PRIV_EVAL_REC_435
#define MACROLOP_PRIV_EVAL_REC_434_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_435(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_435_OVERLOAD(MACROLOP_PRIV_EVAL_REC_435_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_435_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_435_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_435_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_435_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_435_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_435_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_435_##choice
#define MACROLOP_PRIV_EVAL_REC_435_CONTINUE                   MACROLOP_PRIV_EVAL_REC_436
#define MACROLOP_PRIV_EVAL_REC_435_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_436(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_436_OVERLOAD(MACROLOP_PRIV_EVAL_REC_436_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_436_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_436_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_436_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_436_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_436_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_436_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_436_##choice
#define MACROLOP_PRIV_EVAL_REC_436_CONTINUE                   MACROLOP_PRIV_EVAL_REC_437
#define MACROLOP_PRIV_EVAL_REC_436_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_437(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_437_OVERLOAD(MACROLOP_PRIV_EVAL_REC_437_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_437_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_437_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_437_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_437_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_437_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_437_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_437_##choice
#define MACROLOP_PRIV_EVAL_REC_437_CONTINUE                   MACROLOP_PRIV_EVAL_REC_438
#define MACROLOP_PRIV_EVAL_REC_437_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_438(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_438_OVERLOAD(MACROLOP_PRIV_EVAL_REC_438_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_438_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_438_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_438_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_438_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_438_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_438_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_438_##choice
#define MACROLOP_PRIV_EVAL_REC_438_CONTINUE                   MACROLOP_PRIV_EVAL_REC_439
#define MACROLOP_PRIV_EVAL_REC_438_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_439(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_439_OVERLOAD(MACROLOP_PRIV_EVAL_REC_439_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_439_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_439_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_439_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_439_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_439_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_439_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_439_##choice
#define MACROLOP_PRIV_EVAL_REC_439_CONTINUE                   MACROLOP_PRIV_EVAL_REC_440
#define MACROLOP_PRIV_EVAL_REC_439_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_440(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_440_OVERLOAD(MACROLOP_PRIV_EVAL_REC_440_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_440_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_440_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_440_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_440_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_440_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_440_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_440_##choice
#define MACROLOP_PRIV_EVAL_REC_440_CONTINUE                   MACROLOP_PRIV_EVAL_REC_441
#define MACROLOP_PRIV_EVAL_REC_440_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_441(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_441_OVERLOAD(MACROLOP_PRIV_EVAL_REC_441_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_441_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_441_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_441_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_441_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_441_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_441_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_441_##choice
#define MACROLOP_PRIV_EVAL_REC_441_CONTINUE                   MACROLOP_PRIV_EVAL_REC_442
#define MACROLOP_PRIV_EVAL_REC_441_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_442(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_442_OVERLOAD(MACROLOP_PRIV_EVAL_REC_442_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_442_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_442_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_442_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_442_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_442_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_442_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_442_##choice
#define MACROLOP_PRIV_EVAL_REC_442_CONTINUE                   MACROLOP_PRIV_EVAL_REC_443
#define MACROLOP_PRIV_EVAL_REC_442_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_443(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_443_OVERLOAD(MACROLOP_PRIV_EVAL_REC_443_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_443_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_443_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_443_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_443_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_443_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_443_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_443_##choice
#define MACROLOP_PRIV_EVAL_REC_443_CONTINUE                   MACROLOP_PRIV_EVAL_REC_444
#define MACROLOP_PRIV_EVAL_REC_443_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_444(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_444_OVERLOAD(MACROLOP_PRIV_EVAL_REC_444_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_444_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_444_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_444_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_444_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_444_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_444_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_444_##choice
#define MACROLOP_PRIV_EVAL_REC_444_CONTINUE                   MACROLOP_PRIV_EVAL_REC_445
#define MACROLOP_PRIV_EVAL_REC_444_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_445(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_445_OVERLOAD(MACROLOP_PRIV_EVAL_REC_445_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_445_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_445_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_445_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_445_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_445_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_445_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_445_##choice
#define MACROLOP_PRIV_EVAL_REC_445_CONTINUE                   MACROLOP_PRIV_EVAL_REC_446
#define MACROLOP_PRIV_EVAL_REC_445_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_446(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_446_OVERLOAD(MACROLOP_PRIV_EVAL_REC_446_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_446_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_446_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_446_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_446_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_446_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_446_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_446_##choice
#define MACROLOP_PRIV_EVAL_REC_446_CONTINUE                   MACROLOP_PRIV_EVAL_REC_447
#define MACROLOP_PRIV_EVAL_REC_446_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_447(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_447_OVERLOAD(MACROLOP_PRIV_EVAL_REC_447_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_447_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_447_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_447_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_447_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_447_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_447_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_447_##choice
#define MACROLOP_PRIV_EVAL_REC_447_CONTINUE                   MACROLOP_PRIV_EVAL_REC_448
#define MACROLOP_PRIV_EVAL_REC_447_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_448(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_448_OVERLOAD(MACROLOP_PRIV_EVAL_REC_448_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_448_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_448_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_448_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_448_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_448_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_448_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_448_##choice
#define MACROLOP_PRIV_EVAL_REC_448_CONTINUE                   MACROLOP_PRIV_EVAL_REC_449
#define MACROLOP_PRIV_EVAL_REC_448_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_449(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_449_OVERLOAD(MACROLOP_PRIV_EVAL_REC_449_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_449_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_449_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_449_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_449_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_449_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_449_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_449_##choice
#define MACROLOP_PRIV_EVAL_REC_449_CONTINUE                   MACROLOP_PRIV_EVAL_REC_450
#define MACROLOP_PRIV_EVAL_REC_449_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_450(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_450_OVERLOAD(MACROLOP_PRIV_EVAL_REC_450_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_450_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_450_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_450_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_450_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_450_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_450_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_450_##choice
#define MACROLOP_PRIV_EVAL_REC_450_CONTINUE                   MACROLOP_PRIV_EVAL_REC_451
#define MACROLOP_PRIV_EVAL_REC_450_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_451(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_451_OVERLOAD(MACROLOP_PRIV_EVAL_REC_451_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_451_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_451_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_451_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_451_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_451_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_451_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_451_##choice
#define MACROLOP_PRIV_EVAL_REC_451_CONTINUE                   MACROLOP_PRIV_EVAL_REC_452
#define MACROLOP_PRIV_EVAL_REC_451_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_452(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_452_OVERLOAD(MACROLOP_PRIV_EVAL_REC_452_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_452_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_452_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_452_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_452_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_452_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_452_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_452_##choice
#define MACROLOP_PRIV_EVAL_REC_452_CONTINUE                   MACROLOP_PRIV_EVAL_REC_453
#define MACROLOP_PRIV_EVAL_REC_452_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_453(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_453_OVERLOAD(MACROLOP_PRIV_EVAL_REC_453_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_453_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_453_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_453_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_453_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_453_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_453_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_453_##choice
#define MACROLOP_PRIV_EVAL_REC_453_CONTINUE                   MACROLOP_PRIV_EVAL_REC_454
#define MACROLOP_PRIV_EVAL_REC_453_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_454(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_454_OVERLOAD(MACROLOP_PRIV_EVAL_REC_454_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_454_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_454_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_454_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_454_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_454_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_454_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_454_##choice
#define MACROLOP_PRIV_EVAL_REC_454_CONTINUE                   MACROLOP_PRIV_EVAL_REC_455
#define MACROLOP_PRIV_EVAL_REC_454_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_455(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_455_OVERLOAD(MACROLOP_PRIV_EVAL_REC_455_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_455_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_455_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_455_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_455_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_455_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_455_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_455_##choice
#define MACROLOP_PRIV_EVAL_REC_455_CONTINUE                   MACROLOP_PRIV_EVAL_REC_456
#define MACROLOP_PRIV_EVAL_REC_455_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_456(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_456_OVERLOAD(MACROLOP_PRIV_EVAL_REC_456_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_456_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_456_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_456_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_456_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_456_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_456_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_456_##choice
#define MACROLOP_PRIV_EVAL_REC_456_CONTINUE                   MACROLOP_PRIV_EVAL_REC_457
#define MACROLOP_PRIV_EVAL_REC_456_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_457(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_457_OVERLOAD(MACROLOP_PRIV_EVAL_REC_457_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_457_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_457_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_457_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_457_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_457_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_457_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_457_##choice
#define MACROLOP_PRIV_EVAL_REC_457_CONTINUE                   MACROLOP_PRIV_EVAL_REC_458
#define MACROLOP_PRIV_EVAL_REC_457_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_458(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_458_OVERLOAD(MACROLOP_PRIV_EVAL_REC_458_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_458_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_458_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_458_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_458_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_458_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_458_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_458_##choice
#define MACROLOP_PRIV_EVAL_REC_458_CONTINUE                   MACROLOP_PRIV_EVAL_REC_459
#define MACROLOP_PRIV_EVAL_REC_458_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_459(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_459_OVERLOAD(MACROLOP_PRIV_EVAL_REC_459_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_459_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_459_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_459_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_459_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_459_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_459_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_459_##choice
#define MACROLOP_PRIV_EVAL_REC_459_CONTINUE                   MACROLOP_PRIV_EVAL_REC_460
#define MACROLOP_PRIV_EVAL_REC_459_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_460(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_460_OVERLOAD(MACROLOP_PRIV_EVAL_REC_460_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_460_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_460_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_460_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_460_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_460_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_460_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_460_##choice
#define MACROLOP_PRIV_EVAL_REC_460_CONTINUE                   MACROLOP_PRIV_EVAL_REC_461
#define MACROLOP_PRIV_EVAL_REC_460_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_461(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_461_OVERLOAD(MACROLOP_PRIV_EVAL_REC_461_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_461_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_461_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_461_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_461_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_461_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_461_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_461_##choice
#define MACROLOP_PRIV_EVAL_REC_461_CONTINUE                   MACROLOP_PRIV_EVAL_REC_462
#define MACROLOP_PRIV_EVAL_REC_461_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_462(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_462_OVERLOAD(MACROLOP_PRIV_EVAL_REC_462_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_462_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_462_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_462_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_462_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_462_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_462_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_462_##choice
#define MACROLOP_PRIV_EVAL_REC_462_CONTINUE                   MACROLOP_PRIV_EVAL_REC_463
#define MACROLOP_PRIV_EVAL_REC_462_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_463(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_463_OVERLOAD(MACROLOP_PRIV_EVAL_REC_463_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_463_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_463_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_463_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_463_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_463_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_463_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_463_##choice
#define MACROLOP_PRIV_EVAL_REC_463_CONTINUE                   MACROLOP_PRIV_EVAL_REC_464
#define MACROLOP_PRIV_EVAL_REC_463_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_464(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_464_OVERLOAD(MACROLOP_PRIV_EVAL_REC_464_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_464_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_464_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_464_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_464_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_464_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_464_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_464_##choice
#define MACROLOP_PRIV_EVAL_REC_464_CONTINUE                   MACROLOP_PRIV_EVAL_REC_465
#define MACROLOP_PRIV_EVAL_REC_464_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_465(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_465_OVERLOAD(MACROLOP_PRIV_EVAL_REC_465_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_465_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_465_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_465_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_465_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_465_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_465_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_465_##choice
#define MACROLOP_PRIV_EVAL_REC_465_CONTINUE                   MACROLOP_PRIV_EVAL_REC_466
#define MACROLOP_PRIV_EVAL_REC_465_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_466(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_466_OVERLOAD(MACROLOP_PRIV_EVAL_REC_466_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_466_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_466_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_466_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_466_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_466_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_466_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_466_##choice
#define MACROLOP_PRIV_EVAL_REC_466_CONTINUE                   MACROLOP_PRIV_EVAL_REC_467
#define MACROLOP_PRIV_EVAL_REC_466_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_467(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_467_OVERLOAD(MACROLOP_PRIV_EVAL_REC_467_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_467_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_467_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_467_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_467_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_467_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_467_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_467_##choice
#define MACROLOP_PRIV_EVAL_REC_467_CONTINUE                   MACROLOP_PRIV_EVAL_REC_468
#define MACROLOP_PRIV_EVAL_REC_467_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_468(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_468_OVERLOAD(MACROLOP_PRIV_EVAL_REC_468_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_468_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_468_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_468_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_468_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_468_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_468_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_468_##choice
#define MACROLOP_PRIV_EVAL_REC_468_CONTINUE                   MACROLOP_PRIV_EVAL_REC_469
#define MACROLOP_PRIV_EVAL_REC_468_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_469(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_469_OVERLOAD(MACROLOP_PRIV_EVAL_REC_469_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_469_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_469_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_469_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_469_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_469_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_469_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_469_##choice
#define MACROLOP_PRIV_EVAL_REC_469_CONTINUE                   MACROLOP_PRIV_EVAL_REC_470
#define MACROLOP_PRIV_EVAL_REC_469_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_470(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_470_OVERLOAD(MACROLOP_PRIV_EVAL_REC_470_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_470_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_470_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_470_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_470_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_470_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_470_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_470_##choice
#define MACROLOP_PRIV_EVAL_REC_470_CONTINUE                   MACROLOP_PRIV_EVAL_REC_471
#define MACROLOP_PRIV_EVAL_REC_470_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_471(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_471_OVERLOAD(MACROLOP_PRIV_EVAL_REC_471_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_471_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_471_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_471_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_471_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_471_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_471_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_471_##choice
#define MACROLOP_PRIV_EVAL_REC_471_CONTINUE                   MACROLOP_PRIV_EVAL_REC_472
#define MACROLOP_PRIV_EVAL_REC_471_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_472(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_472_OVERLOAD(MACROLOP_PRIV_EVAL_REC_472_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_472_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_472_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_472_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_472_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_472_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_472_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_472_##choice
#define MACROLOP_PRIV_EVAL_REC_472_CONTINUE                   MACROLOP_PRIV_EVAL_REC_473
#define MACROLOP_PRIV_EVAL_REC_472_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_473(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_473_OVERLOAD(MACROLOP_PRIV_EVAL_REC_473_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_473_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_473_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_473_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_473_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_473_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_473_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_473_##choice
#define MACROLOP_PRIV_EVAL_REC_473_CONTINUE                   MACROLOP_PRIV_EVAL_REC_474
#define MACROLOP_PRIV_EVAL_REC_473_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_474(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_474_OVERLOAD(MACROLOP_PRIV_EVAL_REC_474_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_474_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_474_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_474_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_474_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_474_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_474_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_474_##choice
#define MACROLOP_PRIV_EVAL_REC_474_CONTINUE                   MACROLOP_PRIV_EVAL_REC_475
#define MACROLOP_PRIV_EVAL_REC_474_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_475(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_475_OVERLOAD(MACROLOP_PRIV_EVAL_REC_475_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_475_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_475_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_475_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_475_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_475_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_475_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_475_##choice
#define MACROLOP_PRIV_EVAL_REC_475_CONTINUE                   MACROLOP_PRIV_EVAL_REC_476
#define MACROLOP_PRIV_EVAL_REC_475_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_476(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_476_OVERLOAD(MACROLOP_PRIV_EVAL_REC_476_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_476_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_476_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_476_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_476_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_476_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_476_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_476_##choice
#define MACROLOP_PRIV_EVAL_REC_476_CONTINUE                   MACROLOP_PRIV_EVAL_REC_477
#define MACROLOP_PRIV_EVAL_REC_476_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_477(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_477_OVERLOAD(MACROLOP_PRIV_EVAL_REC_477_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_477_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_477_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_477_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_477_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_477_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_477_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_477_##choice
#define MACROLOP_PRIV_EVAL_REC_477_CONTINUE                   MACROLOP_PRIV_EVAL_REC_478
#define MACROLOP_PRIV_EVAL_REC_477_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_478(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_478_OVERLOAD(MACROLOP_PRIV_EVAL_REC_478_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_478_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_478_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_478_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_478_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_478_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_478_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_478_##choice
#define MACROLOP_PRIV_EVAL_REC_478_CONTINUE                   MACROLOP_PRIV_EVAL_REC_479
#define MACROLOP_PRIV_EVAL_REC_478_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_479(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_479_OVERLOAD(MACROLOP_PRIV_EVAL_REC_479_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_479_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_479_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_479_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_479_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_479_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_479_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_479_##choice
#define MACROLOP_PRIV_EVAL_REC_479_CONTINUE                   MACROLOP_PRIV_EVAL_REC_480
#define MACROLOP_PRIV_EVAL_REC_479_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_480(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_480_OVERLOAD(MACROLOP_PRIV_EVAL_REC_480_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_480_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_480_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_480_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_480_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_480_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_480_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_480_##choice
#define MACROLOP_PRIV_EVAL_REC_480_CONTINUE                   MACROLOP_PRIV_EVAL_REC_481
#define MACROLOP_PRIV_EVAL_REC_480_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_481(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_481_OVERLOAD(MACROLOP_PRIV_EVAL_REC_481_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_481_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_481_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_481_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_481_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_481_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_481_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_481_##choice
#define MACROLOP_PRIV_EVAL_REC_481_CONTINUE                   MACROLOP_PRIV_EVAL_REC_482
#define MACROLOP_PRIV_EVAL_REC_481_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_482(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_482_OVERLOAD(MACROLOP_PRIV_EVAL_REC_482_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_482_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_482_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_482_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_482_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_482_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_482_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_482_##choice
#define MACROLOP_PRIV_EVAL_REC_482_CONTINUE                   MACROLOP_PRIV_EVAL_REC_483
#define MACROLOP_PRIV_EVAL_REC_482_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_483(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_483_OVERLOAD(MACROLOP_PRIV_EVAL_REC_483_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_483_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_483_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_483_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_483_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_483_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_483_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_483_##choice
#define MACROLOP_PRIV_EVAL_REC_483_CONTINUE                   MACROLOP_PRIV_EVAL_REC_484
#define MACROLOP_PRIV_EVAL_REC_483_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_484(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_484_OVERLOAD(MACROLOP_PRIV_EVAL_REC_484_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_484_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_484_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_484_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_484_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_484_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_484_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_484_##choice
#define MACROLOP_PRIV_EVAL_REC_484_CONTINUE                   MACROLOP_PRIV_EVAL_REC_485
#define MACROLOP_PRIV_EVAL_REC_484_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_485(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_485_OVERLOAD(MACROLOP_PRIV_EVAL_REC_485_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_485_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_485_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_485_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_485_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_485_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_485_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_485_##choice
#define MACROLOP_PRIV_EVAL_REC_485_CONTINUE                   MACROLOP_PRIV_EVAL_REC_486
#define MACROLOP_PRIV_EVAL_REC_485_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_486(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_486_OVERLOAD(MACROLOP_PRIV_EVAL_REC_486_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_486_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_486_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_486_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_486_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_486_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_486_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_486_##choice
#define MACROLOP_PRIV_EVAL_REC_486_CONTINUE                   MACROLOP_PRIV_EVAL_REC_487
#define MACROLOP_PRIV_EVAL_REC_486_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_487(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_487_OVERLOAD(MACROLOP_PRIV_EVAL_REC_487_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_487_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_487_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_487_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_487_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_487_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_487_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_487_##choice
#define MACROLOP_PRIV_EVAL_REC_487_CONTINUE                   MACROLOP_PRIV_EVAL_REC_488
#define MACROLOP_PRIV_EVAL_REC_487_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_488(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_488_OVERLOAD(MACROLOP_PRIV_EVAL_REC_488_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_488_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_488_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_488_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_488_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_488_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_488_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_488_##choice
#define MACROLOP_PRIV_EVAL_REC_488_CONTINUE                   MACROLOP_PRIV_EVAL_REC_489
#define MACROLOP_PRIV_EVAL_REC_488_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_489(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_489_OVERLOAD(MACROLOP_PRIV_EVAL_REC_489_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_489_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_489_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_489_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_489_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_489_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_489_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_489_##choice
#define MACROLOP_PRIV_EVAL_REC_489_CONTINUE                   MACROLOP_PRIV_EVAL_REC_490
#define MACROLOP_PRIV_EVAL_REC_489_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_490(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_490_OVERLOAD(MACROLOP_PRIV_EVAL_REC_490_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_490_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_490_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_490_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_490_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_490_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_490_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_490_##choice
#define MACROLOP_PRIV_EVAL_REC_490_CONTINUE                   MACROLOP_PRIV_EVAL_REC_491
#define MACROLOP_PRIV_EVAL_REC_490_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_491(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_491_OVERLOAD(MACROLOP_PRIV_EVAL_REC_491_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_491_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_491_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_491_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_491_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_491_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_491_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_491_##choice
#define MACROLOP_PRIV_EVAL_REC_491_CONTINUE                   MACROLOP_PRIV_EVAL_REC_492
#define MACROLOP_PRIV_EVAL_REC_491_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_492(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_492_OVERLOAD(MACROLOP_PRIV_EVAL_REC_492_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_492_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_492_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_492_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_492_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_492_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_492_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_492_##choice
#define MACROLOP_PRIV_EVAL_REC_492_CONTINUE                   MACROLOP_PRIV_EVAL_REC_493
#define MACROLOP_PRIV_EVAL_REC_492_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_493(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_493_OVERLOAD(MACROLOP_PRIV_EVAL_REC_493_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_493_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_493_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_493_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_493_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_493_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_493_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_493_##choice
#define MACROLOP_PRIV_EVAL_REC_493_CONTINUE                   MACROLOP_PRIV_EVAL_REC_494
#define MACROLOP_PRIV_EVAL_REC_493_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_494(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_494_OVERLOAD(MACROLOP_PRIV_EVAL_REC_494_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_494_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_494_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_494_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_494_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_494_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_494_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_494_##choice
#define MACROLOP_PRIV_EVAL_REC_494_CONTINUE                   MACROLOP_PRIV_EVAL_REC_495
#define MACROLOP_PRIV_EVAL_REC_494_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_495(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_495_OVERLOAD(MACROLOP_PRIV_EVAL_REC_495_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_495_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_495_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_495_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_495_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_495_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_495_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_495_##choice
#define MACROLOP_PRIV_EVAL_REC_495_CONTINUE                   MACROLOP_PRIV_EVAL_REC_496
#define MACROLOP_PRIV_EVAL_REC_495_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_496(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_496_OVERLOAD(MACROLOP_PRIV_EVAL_REC_496_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_496_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_496_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_496_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_496_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_496_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_496_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_496_##choice
#define MACROLOP_PRIV_EVAL_REC_496_CONTINUE                   MACROLOP_PRIV_EVAL_REC_497
#define MACROLOP_PRIV_EVAL_REC_496_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_497(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_497_OVERLOAD(MACROLOP_PRIV_EVAL_REC_497_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_497_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_497_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_497_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_497_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_497_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_497_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_497_##choice
#define MACROLOP_PRIV_EVAL_REC_497_CONTINUE                   MACROLOP_PRIV_EVAL_REC_498
#define MACROLOP_PRIV_EVAL_REC_497_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_498(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_498_OVERLOAD(MACROLOP_PRIV_EVAL_REC_498_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_498_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_498_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_498_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_498_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_498_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_498_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_498_##choice
#define MACROLOP_PRIV_EVAL_REC_498_CONTINUE                   MACROLOP_PRIV_EVAL_REC_499
#define MACROLOP_PRIV_EVAL_REC_498_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_499(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_499_OVERLOAD(MACROLOP_PRIV_EVAL_REC_499_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_499_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_499_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_499_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_499_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_499_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_499_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_499_##choice
#define MACROLOP_PRIV_EVAL_REC_499_CONTINUE                   MACROLOP_PRIV_EVAL_REC_500
#define MACROLOP_PRIV_EVAL_REC_499_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_500(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_500_OVERLOAD(MACROLOP_PRIV_EVAL_REC_500_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_500_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_500_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_500_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_500_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_500_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_500_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_500_##choice
#define MACROLOP_PRIV_EVAL_REC_500_CONTINUE                   MACROLOP_PRIV_EVAL_REC_501
#define MACROLOP_PRIV_EVAL_REC_500_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_501(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_501_OVERLOAD(MACROLOP_PRIV_EVAL_REC_501_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_501_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_501_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_501_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_501_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_501_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_501_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_501_##choice
#define MACROLOP_PRIV_EVAL_REC_501_CONTINUE                   MACROLOP_PRIV_EVAL_REC_502
#define MACROLOP_PRIV_EVAL_REC_501_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_502(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_502_OVERLOAD(MACROLOP_PRIV_EVAL_REC_502_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_502_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_502_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_502_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_502_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_502_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_502_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_502_##choice
#define MACROLOP_PRIV_EVAL_REC_502_CONTINUE                   MACROLOP_PRIV_EVAL_REC_503
#define MACROLOP_PRIV_EVAL_REC_502_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_503(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_503_OVERLOAD(MACROLOP_PRIV_EVAL_REC_503_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_503_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_503_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_503_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_503_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_503_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_503_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_503_##choice
#define MACROLOP_PRIV_EVAL_REC_503_CONTINUE                   MACROLOP_PRIV_EVAL_REC_504
#define MACROLOP_PRIV_EVAL_REC_503_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_504(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_504_OVERLOAD(MACROLOP_PRIV_EVAL_REC_504_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_504_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_504_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_504_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_504_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_504_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_504_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_504_##choice
#define MACROLOP_PRIV_EVAL_REC_504_CONTINUE                   MACROLOP_PRIV_EVAL_REC_505
#define MACROLOP_PRIV_EVAL_REC_504_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_505(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_505_OVERLOAD(MACROLOP_PRIV_EVAL_REC_505_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_505_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_505_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_505_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_505_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_505_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_505_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_505_##choice
#define MACROLOP_PRIV_EVAL_REC_505_CONTINUE                   MACROLOP_PRIV_EVAL_REC_506
#define MACROLOP_PRIV_EVAL_REC_505_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_506(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_506_OVERLOAD(MACROLOP_PRIV_EVAL_REC_506_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_506_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_506_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_506_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_506_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_506_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_506_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_506_##choice
#define MACROLOP_PRIV_EVAL_REC_506_CONTINUE                   MACROLOP_PRIV_EVAL_REC_507
#define MACROLOP_PRIV_EVAL_REC_506_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_507(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_507_OVERLOAD(MACROLOP_PRIV_EVAL_REC_507_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_507_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_507_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_507_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_507_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_507_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_507_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_507_##choice
#define MACROLOP_PRIV_EVAL_REC_507_CONTINUE                   MACROLOP_PRIV_EVAL_REC_508
#define MACROLOP_PRIV_EVAL_REC_507_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_508(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_508_OVERLOAD(MACROLOP_PRIV_EVAL_REC_508_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_508_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_508_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_508_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_508_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_508_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_508_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_508_##choice
#define MACROLOP_PRIV_EVAL_REC_508_CONTINUE                   MACROLOP_PRIV_EVAL_REC_509
#define MACROLOP_PRIV_EVAL_REC_508_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_509(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_509_OVERLOAD(MACROLOP_PRIV_EVAL_REC_509_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_509_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_509_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_509_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_509_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_509_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_509_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_509_##choice
#define MACROLOP_PRIV_EVAL_REC_509_CONTINUE                   MACROLOP_PRIV_EVAL_REC_510
#define MACROLOP_PRIV_EVAL_REC_509_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_510(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_510_OVERLOAD(MACROLOP_PRIV_EVAL_REC_510_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_510_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_510_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_510_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_510_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_510_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_510_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_510_##choice
#define MACROLOP_PRIV_EVAL_REC_510_CONTINUE                   MACROLOP_PRIV_EVAL_REC_511
#define MACROLOP_PRIV_EVAL_REC_510_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_511(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_511_OVERLOAD(MACROLOP_PRIV_EVAL_REC_511_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_511_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_511_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_511_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_511_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_511_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_511_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_511_##choice
#define MACROLOP_PRIV_EVAL_REC_511_CONTINUE                   MACROLOP_PRIV_EVAL_REC_512
#define MACROLOP_PRIV_EVAL_REC_511_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_512(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_512_OVERLOAD(MACROLOP_PRIV_EVAL_REC_512_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_512_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_512_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_512_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_512_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_512_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_512_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_512_##choice
#define MACROLOP_PRIV_EVAL_REC_512_CONTINUE                   MACROLOP_PRIV_EVAL_REC_513
#define MACROLOP_PRIV_EVAL_REC_512_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_513(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_513_OVERLOAD(MACROLOP_PRIV_EVAL_REC_513_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_513_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_513_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_513_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_513_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_513_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_513_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_513_##choice
#define MACROLOP_PRIV_EVAL_REC_513_CONTINUE                   MACROLOP_PRIV_EVAL_REC_514
#define MACROLOP_PRIV_EVAL_REC_513_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_514(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_514_OVERLOAD(MACROLOP_PRIV_EVAL_REC_514_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_514_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_514_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_514_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_514_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_514_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_514_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_514_##choice
#define MACROLOP_PRIV_EVAL_REC_514_CONTINUE                   MACROLOP_PRIV_EVAL_REC_515
#define MACROLOP_PRIV_EVAL_REC_514_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_515(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_515_OVERLOAD(MACROLOP_PRIV_EVAL_REC_515_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_515_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_515_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_515_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_515_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_515_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_515_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_515_##choice
#define MACROLOP_PRIV_EVAL_REC_515_CONTINUE                   MACROLOP_PRIV_EVAL_REC_516
#define MACROLOP_PRIV_EVAL_REC_515_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_516(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_516_OVERLOAD(MACROLOP_PRIV_EVAL_REC_516_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_516_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_516_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_516_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_516_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_516_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_516_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_516_##choice
#define MACROLOP_PRIV_EVAL_REC_516_CONTINUE                   MACROLOP_PRIV_EVAL_REC_517
#define MACROLOP_PRIV_EVAL_REC_516_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_517(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_517_OVERLOAD(MACROLOP_PRIV_EVAL_REC_517_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_517_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_517_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_517_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_517_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_517_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_517_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_517_##choice
#define MACROLOP_PRIV_EVAL_REC_517_CONTINUE                   MACROLOP_PRIV_EVAL_REC_518
#define MACROLOP_PRIV_EVAL_REC_517_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_518(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_518_OVERLOAD(MACROLOP_PRIV_EVAL_REC_518_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_518_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_518_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_518_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_518_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_518_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_518_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_518_##choice
#define MACROLOP_PRIV_EVAL_REC_518_CONTINUE                   MACROLOP_PRIV_EVAL_REC_519
#define MACROLOP_PRIV_EVAL_REC_518_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_519(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_519_OVERLOAD(MACROLOP_PRIV_EVAL_REC_519_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_519_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_519_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_519_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_519_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_519_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_519_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_519_##choice
#define MACROLOP_PRIV_EVAL_REC_519_CONTINUE                   MACROLOP_PRIV_EVAL_REC_520
#define MACROLOP_PRIV_EVAL_REC_519_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_520(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_520_OVERLOAD(MACROLOP_PRIV_EVAL_REC_520_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_520_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_520_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_520_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_520_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_520_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_520_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_520_##choice
#define MACROLOP_PRIV_EVAL_REC_520_CONTINUE                   MACROLOP_PRIV_EVAL_REC_521
#define MACROLOP_PRIV_EVAL_REC_520_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_521(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_521_OVERLOAD(MACROLOP_PRIV_EVAL_REC_521_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_521_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_521_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_521_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_521_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_521_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_521_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_521_##choice
#define MACROLOP_PRIV_EVAL_REC_521_CONTINUE                   MACROLOP_PRIV_EVAL_REC_522
#define MACROLOP_PRIV_EVAL_REC_521_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_522(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_522_OVERLOAD(MACROLOP_PRIV_EVAL_REC_522_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_522_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_522_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_522_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_522_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_522_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_522_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_522_##choice
#define MACROLOP_PRIV_EVAL_REC_522_CONTINUE                   MACROLOP_PRIV_EVAL_REC_523
#define MACROLOP_PRIV_EVAL_REC_522_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_523(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_523_OVERLOAD(MACROLOP_PRIV_EVAL_REC_523_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_523_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_523_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_523_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_523_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_523_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_523_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_523_##choice
#define MACROLOP_PRIV_EVAL_REC_523_CONTINUE                   MACROLOP_PRIV_EVAL_REC_524
#define MACROLOP_PRIV_EVAL_REC_523_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_524(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_524_OVERLOAD(MACROLOP_PRIV_EVAL_REC_524_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_524_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_524_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_524_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_524_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_524_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_524_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_524_##choice
#define MACROLOP_PRIV_EVAL_REC_524_CONTINUE                   MACROLOP_PRIV_EVAL_REC_525
#define MACROLOP_PRIV_EVAL_REC_524_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_525(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_525_OVERLOAD(MACROLOP_PRIV_EVAL_REC_525_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_525_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_525_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_525_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_525_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_525_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_525_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_525_##choice
#define MACROLOP_PRIV_EVAL_REC_525_CONTINUE                   MACROLOP_PRIV_EVAL_REC_526
#define MACROLOP_PRIV_EVAL_REC_525_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_526(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_526_OVERLOAD(MACROLOP_PRIV_EVAL_REC_526_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_526_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_526_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_526_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_526_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_526_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_526_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_526_##choice
#define MACROLOP_PRIV_EVAL_REC_526_CONTINUE                   MACROLOP_PRIV_EVAL_REC_527
#define MACROLOP_PRIV_EVAL_REC_526_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_527(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_527_OVERLOAD(MACROLOP_PRIV_EVAL_REC_527_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_527_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_527_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_527_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_527_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_527_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_527_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_527_##choice
#define MACROLOP_PRIV_EVAL_REC_527_CONTINUE                   MACROLOP_PRIV_EVAL_REC_528
#define MACROLOP_PRIV_EVAL_REC_527_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_528(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_528_OVERLOAD(MACROLOP_PRIV_EVAL_REC_528_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_528_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_528_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_528_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_528_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_528_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_528_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_528_##choice
#define MACROLOP_PRIV_EVAL_REC_528_CONTINUE                   MACROLOP_PRIV_EVAL_REC_529
#define MACROLOP_PRIV_EVAL_REC_528_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_529(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_529_OVERLOAD(MACROLOP_PRIV_EVAL_REC_529_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_529_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_529_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_529_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_529_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_529_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_529_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_529_##choice
#define MACROLOP_PRIV_EVAL_REC_529_CONTINUE                   MACROLOP_PRIV_EVAL_REC_530
#define MACROLOP_PRIV_EVAL_REC_529_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_530(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_530_OVERLOAD(MACROLOP_PRIV_EVAL_REC_530_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_530_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_530_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_530_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_530_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_530_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_530_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_530_##choice
#define MACROLOP_PRIV_EVAL_REC_530_CONTINUE                   MACROLOP_PRIV_EVAL_REC_531
#define MACROLOP_PRIV_EVAL_REC_530_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_531(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_531_OVERLOAD(MACROLOP_PRIV_EVAL_REC_531_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_531_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_531_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_531_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_531_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_531_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_531_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_531_##choice
#define MACROLOP_PRIV_EVAL_REC_531_CONTINUE                   MACROLOP_PRIV_EVAL_REC_532
#define MACROLOP_PRIV_EVAL_REC_531_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_532(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_532_OVERLOAD(MACROLOP_PRIV_EVAL_REC_532_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_532_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_532_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_532_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_532_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_532_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_532_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_532_##choice
#define MACROLOP_PRIV_EVAL_REC_532_CONTINUE                   MACROLOP_PRIV_EVAL_REC_533
#define MACROLOP_PRIV_EVAL_REC_532_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_533(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_533_OVERLOAD(MACROLOP_PRIV_EVAL_REC_533_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_533_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_533_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_533_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_533_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_533_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_533_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_533_##choice
#define MACROLOP_PRIV_EVAL_REC_533_CONTINUE                   MACROLOP_PRIV_EVAL_REC_534
#define MACROLOP_PRIV_EVAL_REC_533_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_534(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_534_OVERLOAD(MACROLOP_PRIV_EVAL_REC_534_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_534_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_534_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_534_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_534_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_534_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_534_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_534_##choice
#define MACROLOP_PRIV_EVAL_REC_534_CONTINUE                   MACROLOP_PRIV_EVAL_REC_535
#define MACROLOP_PRIV_EVAL_REC_534_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_535(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_535_OVERLOAD(MACROLOP_PRIV_EVAL_REC_535_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_535_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_535_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_535_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_535_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_535_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_535_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_535_##choice
#define MACROLOP_PRIV_EVAL_REC_535_CONTINUE                   MACROLOP_PRIV_EVAL_REC_536
#define MACROLOP_PRIV_EVAL_REC_535_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_536(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_536_OVERLOAD(MACROLOP_PRIV_EVAL_REC_536_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_536_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_536_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_536_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_536_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_536_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_536_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_536_##choice
#define MACROLOP_PRIV_EVAL_REC_536_CONTINUE                   MACROLOP_PRIV_EVAL_REC_537
#define MACROLOP_PRIV_EVAL_REC_536_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_537(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_537_OVERLOAD(MACROLOP_PRIV_EVAL_REC_537_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_537_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_537_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_537_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_537_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_537_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_537_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_537_##choice
#define MACROLOP_PRIV_EVAL_REC_537_CONTINUE                   MACROLOP_PRIV_EVAL_REC_538
#define MACROLOP_PRIV_EVAL_REC_537_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_538(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_538_OVERLOAD(MACROLOP_PRIV_EVAL_REC_538_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_538_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_538_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_538_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_538_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_538_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_538_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_538_##choice
#define MACROLOP_PRIV_EVAL_REC_538_CONTINUE                   MACROLOP_PRIV_EVAL_REC_539
#define MACROLOP_PRIV_EVAL_REC_538_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_539(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_539_OVERLOAD(MACROLOP_PRIV_EVAL_REC_539_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_539_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_539_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_539_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_539_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_539_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_539_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_539_##choice
#define MACROLOP_PRIV_EVAL_REC_539_CONTINUE                   MACROLOP_PRIV_EVAL_REC_540
#define MACROLOP_PRIV_EVAL_REC_539_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_540(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_540_OVERLOAD(MACROLOP_PRIV_EVAL_REC_540_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_540_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_540_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_540_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_540_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_540_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_540_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_540_##choice
#define MACROLOP_PRIV_EVAL_REC_540_CONTINUE                   MACROLOP_PRIV_EVAL_REC_541
#define MACROLOP_PRIV_EVAL_REC_540_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_541(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_541_OVERLOAD(MACROLOP_PRIV_EVAL_REC_541_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_541_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_541_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_541_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_541_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_541_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_541_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_541_##choice
#define MACROLOP_PRIV_EVAL_REC_541_CONTINUE                   MACROLOP_PRIV_EVAL_REC_542
#define MACROLOP_PRIV_EVAL_REC_541_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_542(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_542_OVERLOAD(MACROLOP_PRIV_EVAL_REC_542_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_542_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_542_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_542_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_542_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_542_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_542_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_542_##choice
#define MACROLOP_PRIV_EVAL_REC_542_CONTINUE                   MACROLOP_PRIV_EVAL_REC_543
#define MACROLOP_PRIV_EVAL_REC_542_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_543(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_543_OVERLOAD(MACROLOP_PRIV_EVAL_REC_543_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_543_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_543_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_543_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_543_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_543_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_543_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_543_##choice
#define MACROLOP_PRIV_EVAL_REC_543_CONTINUE                   MACROLOP_PRIV_EVAL_REC_544
#define MACROLOP_PRIV_EVAL_REC_543_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_544(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_544_OVERLOAD(MACROLOP_PRIV_EVAL_REC_544_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_544_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_544_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_544_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_544_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_544_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_544_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_544_##choice
#define MACROLOP_PRIV_EVAL_REC_544_CONTINUE                   MACROLOP_PRIV_EVAL_REC_545
#define MACROLOP_PRIV_EVAL_REC_544_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_545(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_545_OVERLOAD(MACROLOP_PRIV_EVAL_REC_545_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_545_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_545_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_545_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_545_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_545_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_545_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_545_##choice
#define MACROLOP_PRIV_EVAL_REC_545_CONTINUE                   MACROLOP_PRIV_EVAL_REC_546
#define MACROLOP_PRIV_EVAL_REC_545_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_546(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_546_OVERLOAD(MACROLOP_PRIV_EVAL_REC_546_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_546_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_546_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_546_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_546_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_546_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_546_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_546_##choice
#define MACROLOP_PRIV_EVAL_REC_546_CONTINUE                   MACROLOP_PRIV_EVAL_REC_547
#define MACROLOP_PRIV_EVAL_REC_546_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_547(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_547_OVERLOAD(MACROLOP_PRIV_EVAL_REC_547_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_547_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_547_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_547_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_547_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_547_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_547_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_547_##choice
#define MACROLOP_PRIV_EVAL_REC_547_CONTINUE                   MACROLOP_PRIV_EVAL_REC_548
#define MACROLOP_PRIV_EVAL_REC_547_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_548(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_548_OVERLOAD(MACROLOP_PRIV_EVAL_REC_548_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_548_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_548_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_548_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_548_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_548_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_548_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_548_##choice
#define MACROLOP_PRIV_EVAL_REC_548_CONTINUE                   MACROLOP_PRIV_EVAL_REC_549
#define MACROLOP_PRIV_EVAL_REC_548_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_549(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_549_OVERLOAD(MACROLOP_PRIV_EVAL_REC_549_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_549_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_549_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_549_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_549_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_549_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_549_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_549_##choice
#define MACROLOP_PRIV_EVAL_REC_549_CONTINUE                   MACROLOP_PRIV_EVAL_REC_550
#define MACROLOP_PRIV_EVAL_REC_549_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_550(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_550_OVERLOAD(MACROLOP_PRIV_EVAL_REC_550_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_550_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_550_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_550_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_550_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_550_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_550_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_550_##choice
#define MACROLOP_PRIV_EVAL_REC_550_CONTINUE                   MACROLOP_PRIV_EVAL_REC_551
#define MACROLOP_PRIV_EVAL_REC_550_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_551(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_551_OVERLOAD(MACROLOP_PRIV_EVAL_REC_551_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_551_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_551_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_551_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_551_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_551_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_551_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_551_##choice
#define MACROLOP_PRIV_EVAL_REC_551_CONTINUE                   MACROLOP_PRIV_EVAL_REC_552
#define MACROLOP_PRIV_EVAL_REC_551_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_552(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_552_OVERLOAD(MACROLOP_PRIV_EVAL_REC_552_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_552_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_552_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_552_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_552_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_552_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_552_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_552_##choice
#define MACROLOP_PRIV_EVAL_REC_552_CONTINUE                   MACROLOP_PRIV_EVAL_REC_553
#define MACROLOP_PRIV_EVAL_REC_552_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_553(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_553_OVERLOAD(MACROLOP_PRIV_EVAL_REC_553_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_553_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_553_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_553_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_553_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_553_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_553_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_553_##choice
#define MACROLOP_PRIV_EVAL_REC_553_CONTINUE                   MACROLOP_PRIV_EVAL_REC_554
#define MACROLOP_PRIV_EVAL_REC_553_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_554(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_554_OVERLOAD(MACROLOP_PRIV_EVAL_REC_554_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_554_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_554_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_554_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_554_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_554_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_554_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_554_##choice
#define MACROLOP_PRIV_EVAL_REC_554_CONTINUE                   MACROLOP_PRIV_EVAL_REC_555
#define MACROLOP_PRIV_EVAL_REC_554_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_555(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_555_OVERLOAD(MACROLOP_PRIV_EVAL_REC_555_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_555_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_555_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_555_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_555_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_555_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_555_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_555_##choice
#define MACROLOP_PRIV_EVAL_REC_555_CONTINUE                   MACROLOP_PRIV_EVAL_REC_556
#define MACROLOP_PRIV_EVAL_REC_555_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_556(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_556_OVERLOAD(MACROLOP_PRIV_EVAL_REC_556_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_556_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_556_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_556_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_556_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_556_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_556_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_556_##choice
#define MACROLOP_PRIV_EVAL_REC_556_CONTINUE                   MACROLOP_PRIV_EVAL_REC_557
#define MACROLOP_PRIV_EVAL_REC_556_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_557(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_557_OVERLOAD(MACROLOP_PRIV_EVAL_REC_557_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_557_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_557_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_557_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_557_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_557_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_557_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_557_##choice
#define MACROLOP_PRIV_EVAL_REC_557_CONTINUE                   MACROLOP_PRIV_EVAL_REC_558
#define MACROLOP_PRIV_EVAL_REC_557_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_558(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_558_OVERLOAD(MACROLOP_PRIV_EVAL_REC_558_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_558_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_558_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_558_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_558_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_558_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_558_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_558_##choice
#define MACROLOP_PRIV_EVAL_REC_558_CONTINUE                   MACROLOP_PRIV_EVAL_REC_559
#define MACROLOP_PRIV_EVAL_REC_558_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_559(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_559_OVERLOAD(MACROLOP_PRIV_EVAL_REC_559_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_559_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_559_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_559_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_559_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_559_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_559_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_559_##choice
#define MACROLOP_PRIV_EVAL_REC_559_CONTINUE                   MACROLOP_PRIV_EVAL_REC_560
#define MACROLOP_PRIV_EVAL_REC_559_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_560(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_560_OVERLOAD(MACROLOP_PRIV_EVAL_REC_560_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_560_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_560_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_560_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_560_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_560_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_560_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_560_##choice
#define MACROLOP_PRIV_EVAL_REC_560_CONTINUE                   MACROLOP_PRIV_EVAL_REC_561
#define MACROLOP_PRIV_EVAL_REC_560_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_561(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_561_OVERLOAD(MACROLOP_PRIV_EVAL_REC_561_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_561_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_561_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_561_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_561_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_561_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_561_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_561_##choice
#define MACROLOP_PRIV_EVAL_REC_561_CONTINUE                   MACROLOP_PRIV_EVAL_REC_562
#define MACROLOP_PRIV_EVAL_REC_561_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_562(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_562_OVERLOAD(MACROLOP_PRIV_EVAL_REC_562_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_562_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_562_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_562_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_562_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_562_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_562_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_562_##choice
#define MACROLOP_PRIV_EVAL_REC_562_CONTINUE                   MACROLOP_PRIV_EVAL_REC_563
#define MACROLOP_PRIV_EVAL_REC_562_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_563(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_563_OVERLOAD(MACROLOP_PRIV_EVAL_REC_563_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_563_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_563_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_563_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_563_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_563_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_563_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_563_##choice
#define MACROLOP_PRIV_EVAL_REC_563_CONTINUE                   MACROLOP_PRIV_EVAL_REC_564
#define MACROLOP_PRIV_EVAL_REC_563_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_564(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_564_OVERLOAD(MACROLOP_PRIV_EVAL_REC_564_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_564_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_564_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_564_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_564_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_564_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_564_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_564_##choice
#define MACROLOP_PRIV_EVAL_REC_564_CONTINUE                   MACROLOP_PRIV_EVAL_REC_565
#define MACROLOP_PRIV_EVAL_REC_564_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_565(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_565_OVERLOAD(MACROLOP_PRIV_EVAL_REC_565_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_565_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_565_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_565_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_565_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_565_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_565_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_565_##choice
#define MACROLOP_PRIV_EVAL_REC_565_CONTINUE                   MACROLOP_PRIV_EVAL_REC_566
#define MACROLOP_PRIV_EVAL_REC_565_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_566(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_566_OVERLOAD(MACROLOP_PRIV_EVAL_REC_566_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_566_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_566_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_566_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_566_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_566_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_566_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_566_##choice
#define MACROLOP_PRIV_EVAL_REC_566_CONTINUE                   MACROLOP_PRIV_EVAL_REC_567
#define MACROLOP_PRIV_EVAL_REC_566_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_567(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_567_OVERLOAD(MACROLOP_PRIV_EVAL_REC_567_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_567_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_567_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_567_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_567_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_567_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_567_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_567_##choice
#define MACROLOP_PRIV_EVAL_REC_567_CONTINUE                   MACROLOP_PRIV_EVAL_REC_568
#define MACROLOP_PRIV_EVAL_REC_567_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_568(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_568_OVERLOAD(MACROLOP_PRIV_EVAL_REC_568_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_568_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_568_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_568_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_568_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_568_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_568_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_568_##choice
#define MACROLOP_PRIV_EVAL_REC_568_CONTINUE                   MACROLOP_PRIV_EVAL_REC_569
#define MACROLOP_PRIV_EVAL_REC_568_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_569(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_569_OVERLOAD(MACROLOP_PRIV_EVAL_REC_569_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_569_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_569_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_569_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_569_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_569_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_569_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_569_##choice
#define MACROLOP_PRIV_EVAL_REC_569_CONTINUE                   MACROLOP_PRIV_EVAL_REC_570
#define MACROLOP_PRIV_EVAL_REC_569_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_570(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_570_OVERLOAD(MACROLOP_PRIV_EVAL_REC_570_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_570_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_570_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_570_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_570_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_570_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_570_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_570_##choice
#define MACROLOP_PRIV_EVAL_REC_570_CONTINUE                   MACROLOP_PRIV_EVAL_REC_571
#define MACROLOP_PRIV_EVAL_REC_570_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_571(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_571_OVERLOAD(MACROLOP_PRIV_EVAL_REC_571_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_571_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_571_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_571_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_571_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_571_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_571_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_571_##choice
#define MACROLOP_PRIV_EVAL_REC_571_CONTINUE                   MACROLOP_PRIV_EVAL_REC_572
#define MACROLOP_PRIV_EVAL_REC_571_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_572(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_572_OVERLOAD(MACROLOP_PRIV_EVAL_REC_572_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_572_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_572_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_572_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_572_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_572_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_572_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_572_##choice
#define MACROLOP_PRIV_EVAL_REC_572_CONTINUE                   MACROLOP_PRIV_EVAL_REC_573
#define MACROLOP_PRIV_EVAL_REC_572_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_573(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_573_OVERLOAD(MACROLOP_PRIV_EVAL_REC_573_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_573_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_573_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_573_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_573_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_573_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_573_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_573_##choice
#define MACROLOP_PRIV_EVAL_REC_573_CONTINUE                   MACROLOP_PRIV_EVAL_REC_574
#define MACROLOP_PRIV_EVAL_REC_573_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_574(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_574_OVERLOAD(MACROLOP_PRIV_EVAL_REC_574_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_574_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_574_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_574_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_574_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_574_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_574_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_574_##choice
#define MACROLOP_PRIV_EVAL_REC_574_CONTINUE                   MACROLOP_PRIV_EVAL_REC_575
#define MACROLOP_PRIV_EVAL_REC_574_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_575(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_575_OVERLOAD(MACROLOP_PRIV_EVAL_REC_575_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_575_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_575_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_575_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_575_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_575_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_575_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_575_##choice
#define MACROLOP_PRIV_EVAL_REC_575_CONTINUE                   MACROLOP_PRIV_EVAL_REC_576
#define MACROLOP_PRIV_EVAL_REC_575_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_576(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_576_OVERLOAD(MACROLOP_PRIV_EVAL_REC_576_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_576_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_576_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_576_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_576_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_576_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_576_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_576_##choice
#define MACROLOP_PRIV_EVAL_REC_576_CONTINUE                   MACROLOP_PRIV_EVAL_REC_577
#define MACROLOP_PRIV_EVAL_REC_576_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_577(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_577_OVERLOAD(MACROLOP_PRIV_EVAL_REC_577_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_577_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_577_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_577_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_577_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_577_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_577_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_577_##choice
#define MACROLOP_PRIV_EVAL_REC_577_CONTINUE                   MACROLOP_PRIV_EVAL_REC_578
#define MACROLOP_PRIV_EVAL_REC_577_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_578(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_578_OVERLOAD(MACROLOP_PRIV_EVAL_REC_578_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_578_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_578_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_578_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_578_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_578_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_578_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_578_##choice
#define MACROLOP_PRIV_EVAL_REC_578_CONTINUE                   MACROLOP_PRIV_EVAL_REC_579
#define MACROLOP_PRIV_EVAL_REC_578_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_579(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_579_OVERLOAD(MACROLOP_PRIV_EVAL_REC_579_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_579_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_579_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_579_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_579_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_579_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_579_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_579_##choice
#define MACROLOP_PRIV_EVAL_REC_579_CONTINUE                   MACROLOP_PRIV_EVAL_REC_580
#define MACROLOP_PRIV_EVAL_REC_579_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_580(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_580_OVERLOAD(MACROLOP_PRIV_EVAL_REC_580_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_580_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_580_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_580_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_580_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_580_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_580_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_580_##choice
#define MACROLOP_PRIV_EVAL_REC_580_CONTINUE                   MACROLOP_PRIV_EVAL_REC_581
#define MACROLOP_PRIV_EVAL_REC_580_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_581(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_581_OVERLOAD(MACROLOP_PRIV_EVAL_REC_581_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_581_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_581_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_581_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_581_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_581_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_581_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_581_##choice
#define MACROLOP_PRIV_EVAL_REC_581_CONTINUE                   MACROLOP_PRIV_EVAL_REC_582
#define MACROLOP_PRIV_EVAL_REC_581_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_582(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_582_OVERLOAD(MACROLOP_PRIV_EVAL_REC_582_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_582_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_582_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_582_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_582_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_582_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_582_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_582_##choice
#define MACROLOP_PRIV_EVAL_REC_582_CONTINUE                   MACROLOP_PRIV_EVAL_REC_583
#define MACROLOP_PRIV_EVAL_REC_582_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_583(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_583_OVERLOAD(MACROLOP_PRIV_EVAL_REC_583_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_583_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_583_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_583_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_583_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_583_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_583_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_583_##choice
#define MACROLOP_PRIV_EVAL_REC_583_CONTINUE                   MACROLOP_PRIV_EVAL_REC_584
#define MACROLOP_PRIV_EVAL_REC_583_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_584(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_584_OVERLOAD(MACROLOP_PRIV_EVAL_REC_584_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_584_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_584_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_584_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_584_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_584_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_584_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_584_##choice
#define MACROLOP_PRIV_EVAL_REC_584_CONTINUE                   MACROLOP_PRIV_EVAL_REC_585
#define MACROLOP_PRIV_EVAL_REC_584_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_585(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_585_OVERLOAD(MACROLOP_PRIV_EVAL_REC_585_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_585_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_585_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_585_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_585_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_585_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_585_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_585_##choice
#define MACROLOP_PRIV_EVAL_REC_585_CONTINUE                   MACROLOP_PRIV_EVAL_REC_586
#define MACROLOP_PRIV_EVAL_REC_585_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_586(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_586_OVERLOAD(MACROLOP_PRIV_EVAL_REC_586_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_586_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_586_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_586_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_586_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_586_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_586_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_586_##choice
#define MACROLOP_PRIV_EVAL_REC_586_CONTINUE                   MACROLOP_PRIV_EVAL_REC_587
#define MACROLOP_PRIV_EVAL_REC_586_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_587(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_587_OVERLOAD(MACROLOP_PRIV_EVAL_REC_587_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_587_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_587_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_587_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_587_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_587_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_587_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_587_##choice
#define MACROLOP_PRIV_EVAL_REC_587_CONTINUE                   MACROLOP_PRIV_EVAL_REC_588
#define MACROLOP_PRIV_EVAL_REC_587_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_588(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_588_OVERLOAD(MACROLOP_PRIV_EVAL_REC_588_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_588_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_588_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_588_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_588_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_588_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_588_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_588_##choice
#define MACROLOP_PRIV_EVAL_REC_588_CONTINUE                   MACROLOP_PRIV_EVAL_REC_589
#define MACROLOP_PRIV_EVAL_REC_588_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_589(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_589_OVERLOAD(MACROLOP_PRIV_EVAL_REC_589_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_589_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_589_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_589_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_589_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_589_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_589_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_589_##choice
#define MACROLOP_PRIV_EVAL_REC_589_CONTINUE                   MACROLOP_PRIV_EVAL_REC_590
#define MACROLOP_PRIV_EVAL_REC_589_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_590(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_590_OVERLOAD(MACROLOP_PRIV_EVAL_REC_590_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_590_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_590_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_590_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_590_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_590_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_590_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_590_##choice
#define MACROLOP_PRIV_EVAL_REC_590_CONTINUE                   MACROLOP_PRIV_EVAL_REC_591
#define MACROLOP_PRIV_EVAL_REC_590_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_591(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_591_OVERLOAD(MACROLOP_PRIV_EVAL_REC_591_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_591_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_591_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_591_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_591_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_591_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_591_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_591_##choice
#define MACROLOP_PRIV_EVAL_REC_591_CONTINUE                   MACROLOP_PRIV_EVAL_REC_592
#define MACROLOP_PRIV_EVAL_REC_591_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_592(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_592_OVERLOAD(MACROLOP_PRIV_EVAL_REC_592_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_592_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_592_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_592_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_592_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_592_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_592_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_592_##choice
#define MACROLOP_PRIV_EVAL_REC_592_CONTINUE                   MACROLOP_PRIV_EVAL_REC_593
#define MACROLOP_PRIV_EVAL_REC_592_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_593(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_593_OVERLOAD(MACROLOP_PRIV_EVAL_REC_593_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_593_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_593_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_593_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_593_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_593_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_593_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_593_##choice
#define MACROLOP_PRIV_EVAL_REC_593_CONTINUE                   MACROLOP_PRIV_EVAL_REC_594
#define MACROLOP_PRIV_EVAL_REC_593_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_594(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_594_OVERLOAD(MACROLOP_PRIV_EVAL_REC_594_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_594_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_594_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_594_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_594_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_594_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_594_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_594_##choice
#define MACROLOP_PRIV_EVAL_REC_594_CONTINUE                   MACROLOP_PRIV_EVAL_REC_595
#define MACROLOP_PRIV_EVAL_REC_594_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_595(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_595_OVERLOAD(MACROLOP_PRIV_EVAL_REC_595_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_595_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_595_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_595_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_595_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_595_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_595_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_595_##choice
#define MACROLOP_PRIV_EVAL_REC_595_CONTINUE                   MACROLOP_PRIV_EVAL_REC_596
#define MACROLOP_PRIV_EVAL_REC_595_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_596(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_596_OVERLOAD(MACROLOP_PRIV_EVAL_REC_596_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_596_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_596_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_596_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_596_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_596_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_596_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_596_##choice
#define MACROLOP_PRIV_EVAL_REC_596_CONTINUE                   MACROLOP_PRIV_EVAL_REC_597
#define MACROLOP_PRIV_EVAL_REC_596_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_597(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_597_OVERLOAD(MACROLOP_PRIV_EVAL_REC_597_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_597_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_597_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_597_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_597_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_597_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_597_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_597_##choice
#define MACROLOP_PRIV_EVAL_REC_597_CONTINUE                   MACROLOP_PRIV_EVAL_REC_598
#define MACROLOP_PRIV_EVAL_REC_597_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_598(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_598_OVERLOAD(MACROLOP_PRIV_EVAL_REC_598_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_598_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_598_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_598_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_598_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_598_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_598_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_598_##choice
#define MACROLOP_PRIV_EVAL_REC_598_CONTINUE                   MACROLOP_PRIV_EVAL_REC_599
#define MACROLOP_PRIV_EVAL_REC_598_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_599(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_599_OVERLOAD(MACROLOP_PRIV_EVAL_REC_599_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_599_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_599_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_599_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_599_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_599_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_599_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_599_##choice
#define MACROLOP_PRIV_EVAL_REC_599_CONTINUE                   MACROLOP_PRIV_EVAL_REC_600
#define MACROLOP_PRIV_EVAL_REC_599_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_600(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_600_OVERLOAD(MACROLOP_PRIV_EVAL_REC_600_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_600_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_600_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_600_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_600_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_600_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_600_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_600_##choice
#define MACROLOP_PRIV_EVAL_REC_600_CONTINUE                   MACROLOP_PRIV_EVAL_REC_601
#define MACROLOP_PRIV_EVAL_REC_600_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_601(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_601_OVERLOAD(MACROLOP_PRIV_EVAL_REC_601_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_601_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_601_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_601_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_601_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_601_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_601_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_601_##choice
#define MACROLOP_PRIV_EVAL_REC_601_CONTINUE                   MACROLOP_PRIV_EVAL_REC_602
#define MACROLOP_PRIV_EVAL_REC_601_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_602(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_602_OVERLOAD(MACROLOP_PRIV_EVAL_REC_602_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_602_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_602_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_602_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_602_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_602_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_602_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_602_##choice
#define MACROLOP_PRIV_EVAL_REC_602_CONTINUE                   MACROLOP_PRIV_EVAL_REC_603
#define MACROLOP_PRIV_EVAL_REC_602_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_603(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_603_OVERLOAD(MACROLOP_PRIV_EVAL_REC_603_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_603_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_603_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_603_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_603_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_603_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_603_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_603_##choice
#define MACROLOP_PRIV_EVAL_REC_603_CONTINUE                   MACROLOP_PRIV_EVAL_REC_604
#define MACROLOP_PRIV_EVAL_REC_603_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_604(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_604_OVERLOAD(MACROLOP_PRIV_EVAL_REC_604_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_604_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_604_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_604_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_604_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_604_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_604_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_604_##choice
#define MACROLOP_PRIV_EVAL_REC_604_CONTINUE                   MACROLOP_PRIV_EVAL_REC_605
#define MACROLOP_PRIV_EVAL_REC_604_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_605(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_605_OVERLOAD(MACROLOP_PRIV_EVAL_REC_605_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_605_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_605_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_605_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_605_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_605_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_605_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_605_##choice
#define MACROLOP_PRIV_EVAL_REC_605_CONTINUE                   MACROLOP_PRIV_EVAL_REC_606
#define MACROLOP_PRIV_EVAL_REC_605_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_606(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_606_OVERLOAD(MACROLOP_PRIV_EVAL_REC_606_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_606_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_606_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_606_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_606_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_606_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_606_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_606_##choice
#define MACROLOP_PRIV_EVAL_REC_606_CONTINUE                   MACROLOP_PRIV_EVAL_REC_607
#define MACROLOP_PRIV_EVAL_REC_606_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_607(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_607_OVERLOAD(MACROLOP_PRIV_EVAL_REC_607_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_607_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_607_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_607_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_607_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_607_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_607_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_607_##choice
#define MACROLOP_PRIV_EVAL_REC_607_CONTINUE                   MACROLOP_PRIV_EVAL_REC_608
#define MACROLOP_PRIV_EVAL_REC_607_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_608(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_608_OVERLOAD(MACROLOP_PRIV_EVAL_REC_608_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_608_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_608_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_608_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_608_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_608_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_608_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_608_##choice
#define MACROLOP_PRIV_EVAL_REC_608_CONTINUE                   MACROLOP_PRIV_EVAL_REC_609
#define MACROLOP_PRIV_EVAL_REC_608_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_609(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_609_OVERLOAD(MACROLOP_PRIV_EVAL_REC_609_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_609_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_609_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_609_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_609_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_609_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_609_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_609_##choice
#define MACROLOP_PRIV_EVAL_REC_609_CONTINUE                   MACROLOP_PRIV_EVAL_REC_610
#define MACROLOP_PRIV_EVAL_REC_609_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_610(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_610_OVERLOAD(MACROLOP_PRIV_EVAL_REC_610_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_610_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_610_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_610_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_610_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_610_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_610_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_610_##choice
#define MACROLOP_PRIV_EVAL_REC_610_CONTINUE                   MACROLOP_PRIV_EVAL_REC_611
#define MACROLOP_PRIV_EVAL_REC_610_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_611(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_611_OVERLOAD(MACROLOP_PRIV_EVAL_REC_611_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_611_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_611_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_611_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_611_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_611_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_611_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_611_##choice
#define MACROLOP_PRIV_EVAL_REC_611_CONTINUE                   MACROLOP_PRIV_EVAL_REC_612
#define MACROLOP_PRIV_EVAL_REC_611_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_612(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_612_OVERLOAD(MACROLOP_PRIV_EVAL_REC_612_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_612_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_612_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_612_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_612_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_612_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_612_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_612_##choice
#define MACROLOP_PRIV_EVAL_REC_612_CONTINUE                   MACROLOP_PRIV_EVAL_REC_613
#define MACROLOP_PRIV_EVAL_REC_612_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_613(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_613_OVERLOAD(MACROLOP_PRIV_EVAL_REC_613_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_613_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_613_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_613_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_613_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_613_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_613_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_613_##choice
#define MACROLOP_PRIV_EVAL_REC_613_CONTINUE                   MACROLOP_PRIV_EVAL_REC_614
#define MACROLOP_PRIV_EVAL_REC_613_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_614(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_614_OVERLOAD(MACROLOP_PRIV_EVAL_REC_614_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_614_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_614_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_614_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_614_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_614_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_614_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_614_##choice
#define MACROLOP_PRIV_EVAL_REC_614_CONTINUE                   MACROLOP_PRIV_EVAL_REC_615
#define MACROLOP_PRIV_EVAL_REC_614_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_615(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_615_OVERLOAD(MACROLOP_PRIV_EVAL_REC_615_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_615_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_615_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_615_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_615_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_615_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_615_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_615_##choice
#define MACROLOP_PRIV_EVAL_REC_615_CONTINUE                   MACROLOP_PRIV_EVAL_REC_616
#define MACROLOP_PRIV_EVAL_REC_615_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_616(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_616_OVERLOAD(MACROLOP_PRIV_EVAL_REC_616_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_616_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_616_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_616_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_616_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_616_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_616_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_616_##choice
#define MACROLOP_PRIV_EVAL_REC_616_CONTINUE                   MACROLOP_PRIV_EVAL_REC_617
#define MACROLOP_PRIV_EVAL_REC_616_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_617(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_617_OVERLOAD(MACROLOP_PRIV_EVAL_REC_617_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_617_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_617_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_617_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_617_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_617_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_617_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_617_##choice
#define MACROLOP_PRIV_EVAL_REC_617_CONTINUE                   MACROLOP_PRIV_EVAL_REC_618
#define MACROLOP_PRIV_EVAL_REC_617_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_618(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_618_OVERLOAD(MACROLOP_PRIV_EVAL_REC_618_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_618_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_618_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_618_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_618_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_618_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_618_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_618_##choice
#define MACROLOP_PRIV_EVAL_REC_618_CONTINUE                   MACROLOP_PRIV_EVAL_REC_619
#define MACROLOP_PRIV_EVAL_REC_618_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_619(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_619_OVERLOAD(MACROLOP_PRIV_EVAL_REC_619_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_619_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_619_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_619_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_619_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_619_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_619_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_619_##choice
#define MACROLOP_PRIV_EVAL_REC_619_CONTINUE                   MACROLOP_PRIV_EVAL_REC_620
#define MACROLOP_PRIV_EVAL_REC_619_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_620(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_620_OVERLOAD(MACROLOP_PRIV_EVAL_REC_620_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_620_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_620_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_620_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_620_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_620_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_620_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_620_##choice
#define MACROLOP_PRIV_EVAL_REC_620_CONTINUE                   MACROLOP_PRIV_EVAL_REC_621
#define MACROLOP_PRIV_EVAL_REC_620_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_621(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_621_OVERLOAD(MACROLOP_PRIV_EVAL_REC_621_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_621_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_621_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_621_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_621_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_621_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_621_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_621_##choice
#define MACROLOP_PRIV_EVAL_REC_621_CONTINUE                   MACROLOP_PRIV_EVAL_REC_622
#define MACROLOP_PRIV_EVAL_REC_621_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_622(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_622_OVERLOAD(MACROLOP_PRIV_EVAL_REC_622_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_622_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_622_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_622_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_622_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_622_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_622_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_622_##choice
#define MACROLOP_PRIV_EVAL_REC_622_CONTINUE                   MACROLOP_PRIV_EVAL_REC_623
#define MACROLOP_PRIV_EVAL_REC_622_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_623(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_623_OVERLOAD(MACROLOP_PRIV_EVAL_REC_623_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_623_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_623_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_623_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_623_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_623_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_623_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_623_##choice
#define MACROLOP_PRIV_EVAL_REC_623_CONTINUE                   MACROLOP_PRIV_EVAL_REC_624
#define MACROLOP_PRIV_EVAL_REC_623_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_624(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_624_OVERLOAD(MACROLOP_PRIV_EVAL_REC_624_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_624_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_624_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_624_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_624_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_624_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_624_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_624_##choice
#define MACROLOP_PRIV_EVAL_REC_624_CONTINUE                   MACROLOP_PRIV_EVAL_REC_625
#define MACROLOP_PRIV_EVAL_REC_624_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_625(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_625_OVERLOAD(MACROLOP_PRIV_EVAL_REC_625_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_625_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_625_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_625_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_625_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_625_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_625_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_625_##choice
#define MACROLOP_PRIV_EVAL_REC_625_CONTINUE                   MACROLOP_PRIV_EVAL_REC_626
#define MACROLOP_PRIV_EVAL_REC_625_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_626(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_626_OVERLOAD(MACROLOP_PRIV_EVAL_REC_626_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_626_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_626_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_626_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_626_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_626_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_626_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_626_##choice
#define MACROLOP_PRIV_EVAL_REC_626_CONTINUE                   MACROLOP_PRIV_EVAL_REC_627
#define MACROLOP_PRIV_EVAL_REC_626_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_627(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_627_OVERLOAD(MACROLOP_PRIV_EVAL_REC_627_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_627_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_627_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_627_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_627_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_627_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_627_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_627_##choice
#define MACROLOP_PRIV_EVAL_REC_627_CONTINUE                   MACROLOP_PRIV_EVAL_REC_628
#define MACROLOP_PRIV_EVAL_REC_627_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_628(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_628_OVERLOAD(MACROLOP_PRIV_EVAL_REC_628_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_628_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_628_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_628_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_628_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_628_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_628_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_628_##choice
#define MACROLOP_PRIV_EVAL_REC_628_CONTINUE                   MACROLOP_PRIV_EVAL_REC_629
#define MACROLOP_PRIV_EVAL_REC_628_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_629(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_629_OVERLOAD(MACROLOP_PRIV_EVAL_REC_629_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_629_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_629_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_629_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_629_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_629_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_629_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_629_##choice
#define MACROLOP_PRIV_EVAL_REC_629_CONTINUE                   MACROLOP_PRIV_EVAL_REC_630
#define MACROLOP_PRIV_EVAL_REC_629_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_630(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_630_OVERLOAD(MACROLOP_PRIV_EVAL_REC_630_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_630_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_630_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_630_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_630_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_630_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_630_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_630_##choice
#define MACROLOP_PRIV_EVAL_REC_630_CONTINUE                   MACROLOP_PRIV_EVAL_REC_631
#define MACROLOP_PRIV_EVAL_REC_630_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_631(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_631_OVERLOAD(MACROLOP_PRIV_EVAL_REC_631_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_631_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_631_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_631_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_631_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_631_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_631_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_631_##choice
#define MACROLOP_PRIV_EVAL_REC_631_CONTINUE                   MACROLOP_PRIV_EVAL_REC_632
#define MACROLOP_PRIV_EVAL_REC_631_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_632(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_632_OVERLOAD(MACROLOP_PRIV_EVAL_REC_632_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_632_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_632_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_632_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_632_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_632_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_632_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_632_##choice
#define MACROLOP_PRIV_EVAL_REC_632_CONTINUE                   MACROLOP_PRIV_EVAL_REC_633
#define MACROLOP_PRIV_EVAL_REC_632_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_633(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_633_OVERLOAD(MACROLOP_PRIV_EVAL_REC_633_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_633_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_633_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_633_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_633_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_633_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_633_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_633_##choice
#define MACROLOP_PRIV_EVAL_REC_633_CONTINUE                   MACROLOP_PRIV_EVAL_REC_634
#define MACROLOP_PRIV_EVAL_REC_633_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_634(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_634_OVERLOAD(MACROLOP_PRIV_EVAL_REC_634_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_634_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_634_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_634_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_634_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_634_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_634_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_634_##choice
#define MACROLOP_PRIV_EVAL_REC_634_CONTINUE                   MACROLOP_PRIV_EVAL_REC_635
#define MACROLOP_PRIV_EVAL_REC_634_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_635(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_635_OVERLOAD(MACROLOP_PRIV_EVAL_REC_635_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_635_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_635_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_635_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_635_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_635_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_635_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_635_##choice
#define MACROLOP_PRIV_EVAL_REC_635_CONTINUE                   MACROLOP_PRIV_EVAL_REC_636
#define MACROLOP_PRIV_EVAL_REC_635_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_636(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_636_OVERLOAD(MACROLOP_PRIV_EVAL_REC_636_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_636_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_636_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_636_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_636_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_636_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_636_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_636_##choice
#define MACROLOP_PRIV_EVAL_REC_636_CONTINUE                   MACROLOP_PRIV_EVAL_REC_637
#define MACROLOP_PRIV_EVAL_REC_636_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_637(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_637_OVERLOAD(MACROLOP_PRIV_EVAL_REC_637_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_637_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_637_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_637_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_637_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_637_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_637_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_637_##choice
#define MACROLOP_PRIV_EVAL_REC_637_CONTINUE                   MACROLOP_PRIV_EVAL_REC_638
#define MACROLOP_PRIV_EVAL_REC_637_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_638(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_638_OVERLOAD(MACROLOP_PRIV_EVAL_REC_638_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_638_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_638_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_638_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_638_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_638_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_638_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_638_##choice
#define MACROLOP_PRIV_EVAL_REC_638_CONTINUE                   MACROLOP_PRIV_EVAL_REC_639
#define MACROLOP_PRIV_EVAL_REC_638_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_639(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_639_OVERLOAD(MACROLOP_PRIV_EVAL_REC_639_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_639_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_639_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_639_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_639_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_639_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_639_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_639_##choice
#define MACROLOP_PRIV_EVAL_REC_639_CONTINUE                   MACROLOP_PRIV_EVAL_REC_640
#define MACROLOP_PRIV_EVAL_REC_639_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_640(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_640_OVERLOAD(MACROLOP_PRIV_EVAL_REC_640_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_640_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_640_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_640_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_640_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_640_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_640_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_640_##choice
#define MACROLOP_PRIV_EVAL_REC_640_CONTINUE                   MACROLOP_PRIV_EVAL_REC_641
#define MACROLOP_PRIV_EVAL_REC_640_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_641(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_641_OVERLOAD(MACROLOP_PRIV_EVAL_REC_641_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_641_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_641_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_641_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_641_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_641_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_641_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_641_##choice
#define MACROLOP_PRIV_EVAL_REC_641_CONTINUE                   MACROLOP_PRIV_EVAL_REC_642
#define MACROLOP_PRIV_EVAL_REC_641_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_642(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_642_OVERLOAD(MACROLOP_PRIV_EVAL_REC_642_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_642_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_642_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_642_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_642_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_642_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_642_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_642_##choice
#define MACROLOP_PRIV_EVAL_REC_642_CONTINUE                   MACROLOP_PRIV_EVAL_REC_643
#define MACROLOP_PRIV_EVAL_REC_642_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_643(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_643_OVERLOAD(MACROLOP_PRIV_EVAL_REC_643_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_643_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_643_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_643_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_643_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_643_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_643_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_643_##choice
#define MACROLOP_PRIV_EVAL_REC_643_CONTINUE                   MACROLOP_PRIV_EVAL_REC_644
#define MACROLOP_PRIV_EVAL_REC_643_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_644(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_644_OVERLOAD(MACROLOP_PRIV_EVAL_REC_644_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_644_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_644_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_644_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_644_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_644_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_644_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_644_##choice
#define MACROLOP_PRIV_EVAL_REC_644_CONTINUE                   MACROLOP_PRIV_EVAL_REC_645
#define MACROLOP_PRIV_EVAL_REC_644_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_645(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_645_OVERLOAD(MACROLOP_PRIV_EVAL_REC_645_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_645_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_645_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_645_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_645_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_645_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_645_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_645_##choice
#define MACROLOP_PRIV_EVAL_REC_645_CONTINUE                   MACROLOP_PRIV_EVAL_REC_646
#define MACROLOP_PRIV_EVAL_REC_645_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_646(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_646_OVERLOAD(MACROLOP_PRIV_EVAL_REC_646_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_646_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_646_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_646_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_646_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_646_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_646_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_646_##choice
#define MACROLOP_PRIV_EVAL_REC_646_CONTINUE                   MACROLOP_PRIV_EVAL_REC_647
#define MACROLOP_PRIV_EVAL_REC_646_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_647(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_647_OVERLOAD(MACROLOP_PRIV_EVAL_REC_647_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_647_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_647_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_647_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_647_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_647_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_647_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_647_##choice
#define MACROLOP_PRIV_EVAL_REC_647_CONTINUE                   MACROLOP_PRIV_EVAL_REC_648
#define MACROLOP_PRIV_EVAL_REC_647_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_648(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_648_OVERLOAD(MACROLOP_PRIV_EVAL_REC_648_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_648_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_648_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_648_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_648_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_648_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_648_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_648_##choice
#define MACROLOP_PRIV_EVAL_REC_648_CONTINUE                   MACROLOP_PRIV_EVAL_REC_649
#define MACROLOP_PRIV_EVAL_REC_648_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_649(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_649_OVERLOAD(MACROLOP_PRIV_EVAL_REC_649_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_649_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_649_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_649_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_649_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_649_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_649_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_649_##choice
#define MACROLOP_PRIV_EVAL_REC_649_CONTINUE                   MACROLOP_PRIV_EVAL_REC_650
#define MACROLOP_PRIV_EVAL_REC_649_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_650(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_650_OVERLOAD(MACROLOP_PRIV_EVAL_REC_650_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_650_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_650_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_650_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_650_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_650_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_650_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_650_##choice
#define MACROLOP_PRIV_EVAL_REC_650_CONTINUE                   MACROLOP_PRIV_EVAL_REC_651
#define MACROLOP_PRIV_EVAL_REC_650_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_651(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_651_OVERLOAD(MACROLOP_PRIV_EVAL_REC_651_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_651_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_651_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_651_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_651_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_651_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_651_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_651_##choice
#define MACROLOP_PRIV_EVAL_REC_651_CONTINUE                   MACROLOP_PRIV_EVAL_REC_652
#define MACROLOP_PRIV_EVAL_REC_651_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_652(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_652_OVERLOAD(MACROLOP_PRIV_EVAL_REC_652_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_652_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_652_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_652_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_652_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_652_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_652_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_652_##choice
#define MACROLOP_PRIV_EVAL_REC_652_CONTINUE                   MACROLOP_PRIV_EVAL_REC_653
#define MACROLOP_PRIV_EVAL_REC_652_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_653(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_653_OVERLOAD(MACROLOP_PRIV_EVAL_REC_653_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_653_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_653_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_653_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_653_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_653_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_653_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_653_##choice
#define MACROLOP_PRIV_EVAL_REC_653_CONTINUE                   MACROLOP_PRIV_EVAL_REC_654
#define MACROLOP_PRIV_EVAL_REC_653_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_654(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_654_OVERLOAD(MACROLOP_PRIV_EVAL_REC_654_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_654_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_654_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_654_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_654_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_654_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_654_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_654_##choice
#define MACROLOP_PRIV_EVAL_REC_654_CONTINUE                   MACROLOP_PRIV_EVAL_REC_655
#define MACROLOP_PRIV_EVAL_REC_654_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_655(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_655_OVERLOAD(MACROLOP_PRIV_EVAL_REC_655_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_655_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_655_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_655_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_655_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_655_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_655_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_655_##choice
#define MACROLOP_PRIV_EVAL_REC_655_CONTINUE                   MACROLOP_PRIV_EVAL_REC_656
#define MACROLOP_PRIV_EVAL_REC_655_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_656(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_656_OVERLOAD(MACROLOP_PRIV_EVAL_REC_656_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_656_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_656_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_656_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_656_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_656_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_656_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_656_##choice
#define MACROLOP_PRIV_EVAL_REC_656_CONTINUE                   MACROLOP_PRIV_EVAL_REC_657
#define MACROLOP_PRIV_EVAL_REC_656_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_657(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_657_OVERLOAD(MACROLOP_PRIV_EVAL_REC_657_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_657_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_657_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_657_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_657_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_657_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_657_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_657_##choice
#define MACROLOP_PRIV_EVAL_REC_657_CONTINUE                   MACROLOP_PRIV_EVAL_REC_658
#define MACROLOP_PRIV_EVAL_REC_657_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_658(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_658_OVERLOAD(MACROLOP_PRIV_EVAL_REC_658_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_658_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_658_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_658_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_658_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_658_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_658_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_658_##choice
#define MACROLOP_PRIV_EVAL_REC_658_CONTINUE                   MACROLOP_PRIV_EVAL_REC_659
#define MACROLOP_PRIV_EVAL_REC_658_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_659(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_659_OVERLOAD(MACROLOP_PRIV_EVAL_REC_659_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_659_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_659_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_659_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_659_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_659_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_659_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_659_##choice
#define MACROLOP_PRIV_EVAL_REC_659_CONTINUE                   MACROLOP_PRIV_EVAL_REC_660
#define MACROLOP_PRIV_EVAL_REC_659_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_660(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_660_OVERLOAD(MACROLOP_PRIV_EVAL_REC_660_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_660_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_660_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_660_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_660_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_660_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_660_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_660_##choice
#define MACROLOP_PRIV_EVAL_REC_660_CONTINUE                   MACROLOP_PRIV_EVAL_REC_661
#define MACROLOP_PRIV_EVAL_REC_660_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_661(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_661_OVERLOAD(MACROLOP_PRIV_EVAL_REC_661_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_661_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_661_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_661_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_661_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_661_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_661_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_661_##choice
#define MACROLOP_PRIV_EVAL_REC_661_CONTINUE                   MACROLOP_PRIV_EVAL_REC_662
#define MACROLOP_PRIV_EVAL_REC_661_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_662(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_662_OVERLOAD(MACROLOP_PRIV_EVAL_REC_662_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_662_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_662_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_662_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_662_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_662_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_662_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_662_##choice
#define MACROLOP_PRIV_EVAL_REC_662_CONTINUE                   MACROLOP_PRIV_EVAL_REC_663
#define MACROLOP_PRIV_EVAL_REC_662_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_663(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_663_OVERLOAD(MACROLOP_PRIV_EVAL_REC_663_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_663_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_663_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_663_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_663_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_663_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_663_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_663_##choice
#define MACROLOP_PRIV_EVAL_REC_663_CONTINUE                   MACROLOP_PRIV_EVAL_REC_664
#define MACROLOP_PRIV_EVAL_REC_663_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_664(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_664_OVERLOAD(MACROLOP_PRIV_EVAL_REC_664_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_664_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_664_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_664_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_664_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_664_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_664_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_664_##choice
#define MACROLOP_PRIV_EVAL_REC_664_CONTINUE                   MACROLOP_PRIV_EVAL_REC_665
#define MACROLOP_PRIV_EVAL_REC_664_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_665(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_665_OVERLOAD(MACROLOP_PRIV_EVAL_REC_665_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_665_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_665_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_665_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_665_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_665_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_665_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_665_##choice
#define MACROLOP_PRIV_EVAL_REC_665_CONTINUE                   MACROLOP_PRIV_EVAL_REC_666
#define MACROLOP_PRIV_EVAL_REC_665_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_666(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_666_OVERLOAD(MACROLOP_PRIV_EVAL_REC_666_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_666_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_666_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_666_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_666_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_666_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_666_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_666_##choice
#define MACROLOP_PRIV_EVAL_REC_666_CONTINUE                   MACROLOP_PRIV_EVAL_REC_667
#define MACROLOP_PRIV_EVAL_REC_666_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_667(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_667_OVERLOAD(MACROLOP_PRIV_EVAL_REC_667_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_667_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_667_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_667_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_667_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_667_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_667_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_667_##choice
#define MACROLOP_PRIV_EVAL_REC_667_CONTINUE                   MACROLOP_PRIV_EVAL_REC_668
#define MACROLOP_PRIV_EVAL_REC_667_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_668(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_668_OVERLOAD(MACROLOP_PRIV_EVAL_REC_668_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_668_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_668_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_668_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_668_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_668_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_668_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_668_##choice
#define MACROLOP_PRIV_EVAL_REC_668_CONTINUE                   MACROLOP_PRIV_EVAL_REC_669
#define MACROLOP_PRIV_EVAL_REC_668_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_669(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_669_OVERLOAD(MACROLOP_PRIV_EVAL_REC_669_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_669_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_669_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_669_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_669_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_669_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_669_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_669_##choice
#define MACROLOP_PRIV_EVAL_REC_669_CONTINUE                   MACROLOP_PRIV_EVAL_REC_670
#define MACROLOP_PRIV_EVAL_REC_669_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_670(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_670_OVERLOAD(MACROLOP_PRIV_EVAL_REC_670_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_670_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_670_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_670_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_670_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_670_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_670_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_670_##choice
#define MACROLOP_PRIV_EVAL_REC_670_CONTINUE                   MACROLOP_PRIV_EVAL_REC_671
#define MACROLOP_PRIV_EVAL_REC_670_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_671(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_671_OVERLOAD(MACROLOP_PRIV_EVAL_REC_671_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_671_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_671_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_671_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_671_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_671_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_671_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_671_##choice
#define MACROLOP_PRIV_EVAL_REC_671_CONTINUE                   MACROLOP_PRIV_EVAL_REC_672
#define MACROLOP_PRIV_EVAL_REC_671_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_672(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_672_OVERLOAD(MACROLOP_PRIV_EVAL_REC_672_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_672_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_672_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_672_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_672_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_672_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_672_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_672_##choice
#define MACROLOP_PRIV_EVAL_REC_672_CONTINUE                   MACROLOP_PRIV_EVAL_REC_673
#define MACROLOP_PRIV_EVAL_REC_672_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_673(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_673_OVERLOAD(MACROLOP_PRIV_EVAL_REC_673_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_673_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_673_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_673_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_673_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_673_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_673_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_673_##choice
#define MACROLOP_PRIV_EVAL_REC_673_CONTINUE                   MACROLOP_PRIV_EVAL_REC_674
#define MACROLOP_PRIV_EVAL_REC_673_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_674(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_674_OVERLOAD(MACROLOP_PRIV_EVAL_REC_674_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_674_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_674_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_674_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_674_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_674_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_674_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_674_##choice
#define MACROLOP_PRIV_EVAL_REC_674_CONTINUE                   MACROLOP_PRIV_EVAL_REC_675
#define MACROLOP_PRIV_EVAL_REC_674_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_675(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_675_OVERLOAD(MACROLOP_PRIV_EVAL_REC_675_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_675_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_675_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_675_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_675_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_675_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_675_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_675_##choice
#define MACROLOP_PRIV_EVAL_REC_675_CONTINUE                   MACROLOP_PRIV_EVAL_REC_676
#define MACROLOP_PRIV_EVAL_REC_675_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_676(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_676_OVERLOAD(MACROLOP_PRIV_EVAL_REC_676_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_676_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_676_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_676_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_676_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_676_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_676_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_676_##choice
#define MACROLOP_PRIV_EVAL_REC_676_CONTINUE                   MACROLOP_PRIV_EVAL_REC_677
#define MACROLOP_PRIV_EVAL_REC_676_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_677(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_677_OVERLOAD(MACROLOP_PRIV_EVAL_REC_677_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_677_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_677_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_677_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_677_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_677_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_677_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_677_##choice
#define MACROLOP_PRIV_EVAL_REC_677_CONTINUE                   MACROLOP_PRIV_EVAL_REC_678
#define MACROLOP_PRIV_EVAL_REC_677_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_678(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_678_OVERLOAD(MACROLOP_PRIV_EVAL_REC_678_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_678_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_678_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_678_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_678_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_678_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_678_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_678_##choice
#define MACROLOP_PRIV_EVAL_REC_678_CONTINUE                   MACROLOP_PRIV_EVAL_REC_679
#define MACROLOP_PRIV_EVAL_REC_678_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_679(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_679_OVERLOAD(MACROLOP_PRIV_EVAL_REC_679_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_679_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_679_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_679_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_679_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_679_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_679_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_679_##choice
#define MACROLOP_PRIV_EVAL_REC_679_CONTINUE                   MACROLOP_PRIV_EVAL_REC_680
#define MACROLOP_PRIV_EVAL_REC_679_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_680(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_680_OVERLOAD(MACROLOP_PRIV_EVAL_REC_680_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_680_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_680_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_680_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_680_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_680_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_680_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_680_##choice
#define MACROLOP_PRIV_EVAL_REC_680_CONTINUE                   MACROLOP_PRIV_EVAL_REC_681
#define MACROLOP_PRIV_EVAL_REC_680_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_681(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_681_OVERLOAD(MACROLOP_PRIV_EVAL_REC_681_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_681_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_681_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_681_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_681_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_681_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_681_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_681_##choice
#define MACROLOP_PRIV_EVAL_REC_681_CONTINUE                   MACROLOP_PRIV_EVAL_REC_682
#define MACROLOP_PRIV_EVAL_REC_681_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_682(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_682_OVERLOAD(MACROLOP_PRIV_EVAL_REC_682_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_682_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_682_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_682_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_682_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_682_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_682_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_682_##choice
#define MACROLOP_PRIV_EVAL_REC_682_CONTINUE                   MACROLOP_PRIV_EVAL_REC_683
#define MACROLOP_PRIV_EVAL_REC_682_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_683(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_683_OVERLOAD(MACROLOP_PRIV_EVAL_REC_683_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_683_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_683_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_683_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_683_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_683_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_683_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_683_##choice
#define MACROLOP_PRIV_EVAL_REC_683_CONTINUE                   MACROLOP_PRIV_EVAL_REC_684
#define MACROLOP_PRIV_EVAL_REC_683_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_684(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_684_OVERLOAD(MACROLOP_PRIV_EVAL_REC_684_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_684_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_684_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_684_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_684_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_684_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_684_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_684_##choice
#define MACROLOP_PRIV_EVAL_REC_684_CONTINUE                   MACROLOP_PRIV_EVAL_REC_685
#define MACROLOP_PRIV_EVAL_REC_684_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_685(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_685_OVERLOAD(MACROLOP_PRIV_EVAL_REC_685_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_685_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_685_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_685_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_685_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_685_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_685_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_685_##choice
#define MACROLOP_PRIV_EVAL_REC_685_CONTINUE                   MACROLOP_PRIV_EVAL_REC_686
#define MACROLOP_PRIV_EVAL_REC_685_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_686(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_686_OVERLOAD(MACROLOP_PRIV_EVAL_REC_686_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_686_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_686_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_686_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_686_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_686_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_686_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_686_##choice
#define MACROLOP_PRIV_EVAL_REC_686_CONTINUE                   MACROLOP_PRIV_EVAL_REC_687
#define MACROLOP_PRIV_EVAL_REC_686_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_687(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_687_OVERLOAD(MACROLOP_PRIV_EVAL_REC_687_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_687_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_687_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_687_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_687_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_687_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_687_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_687_##choice
#define MACROLOP_PRIV_EVAL_REC_687_CONTINUE                   MACROLOP_PRIV_EVAL_REC_688
#define MACROLOP_PRIV_EVAL_REC_687_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_688(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_688_OVERLOAD(MACROLOP_PRIV_EVAL_REC_688_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_688_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_688_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_688_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_688_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_688_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_688_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_688_##choice
#define MACROLOP_PRIV_EVAL_REC_688_CONTINUE                   MACROLOP_PRIV_EVAL_REC_689
#define MACROLOP_PRIV_EVAL_REC_688_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_689(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_689_OVERLOAD(MACROLOP_PRIV_EVAL_REC_689_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_689_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_689_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_689_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_689_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_689_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_689_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_689_##choice
#define MACROLOP_PRIV_EVAL_REC_689_CONTINUE                   MACROLOP_PRIV_EVAL_REC_690
#define MACROLOP_PRIV_EVAL_REC_689_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_690(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_690_OVERLOAD(MACROLOP_PRIV_EVAL_REC_690_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_690_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_690_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_690_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_690_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_690_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_690_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_690_##choice
#define MACROLOP_PRIV_EVAL_REC_690_CONTINUE                   MACROLOP_PRIV_EVAL_REC_691
#define MACROLOP_PRIV_EVAL_REC_690_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_691(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_691_OVERLOAD(MACROLOP_PRIV_EVAL_REC_691_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_691_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_691_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_691_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_691_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_691_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_691_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_691_##choice
#define MACROLOP_PRIV_EVAL_REC_691_CONTINUE                   MACROLOP_PRIV_EVAL_REC_692
#define MACROLOP_PRIV_EVAL_REC_691_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_692(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_692_OVERLOAD(MACROLOP_PRIV_EVAL_REC_692_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_692_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_692_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_692_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_692_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_692_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_692_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_692_##choice
#define MACROLOP_PRIV_EVAL_REC_692_CONTINUE                   MACROLOP_PRIV_EVAL_REC_693
#define MACROLOP_PRIV_EVAL_REC_692_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_693(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_693_OVERLOAD(MACROLOP_PRIV_EVAL_REC_693_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_693_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_693_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_693_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_693_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_693_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_693_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_693_##choice
#define MACROLOP_PRIV_EVAL_REC_693_CONTINUE                   MACROLOP_PRIV_EVAL_REC_694
#define MACROLOP_PRIV_EVAL_REC_693_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_694(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_694_OVERLOAD(MACROLOP_PRIV_EVAL_REC_694_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_694_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_694_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_694_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_694_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_694_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_694_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_694_##choice
#define MACROLOP_PRIV_EVAL_REC_694_CONTINUE                   MACROLOP_PRIV_EVAL_REC_695
#define MACROLOP_PRIV_EVAL_REC_694_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_695(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_695_OVERLOAD(MACROLOP_PRIV_EVAL_REC_695_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_695_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_695_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_695_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_695_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_695_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_695_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_695_##choice
#define MACROLOP_PRIV_EVAL_REC_695_CONTINUE                   MACROLOP_PRIV_EVAL_REC_696
#define MACROLOP_PRIV_EVAL_REC_695_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_696(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_696_OVERLOAD(MACROLOP_PRIV_EVAL_REC_696_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_696_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_696_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_696_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_696_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_696_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_696_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_696_##choice
#define MACROLOP_PRIV_EVAL_REC_696_CONTINUE                   MACROLOP_PRIV_EVAL_REC_697
#define MACROLOP_PRIV_EVAL_REC_696_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_697(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_697_OVERLOAD(MACROLOP_PRIV_EVAL_REC_697_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_697_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_697_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_697_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_697_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_697_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_697_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_697_##choice
#define MACROLOP_PRIV_EVAL_REC_697_CONTINUE                   MACROLOP_PRIV_EVAL_REC_698
#define MACROLOP_PRIV_EVAL_REC_697_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_698(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_698_OVERLOAD(MACROLOP_PRIV_EVAL_REC_698_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_698_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_698_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_698_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_698_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_698_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_698_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_698_##choice
#define MACROLOP_PRIV_EVAL_REC_698_CONTINUE                   MACROLOP_PRIV_EVAL_REC_699
#define MACROLOP_PRIV_EVAL_REC_698_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_699(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_699_OVERLOAD(MACROLOP_PRIV_EVAL_REC_699_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_699_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_699_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_699_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_699_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_699_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_699_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_699_##choice
#define MACROLOP_PRIV_EVAL_REC_699_CONTINUE                   MACROLOP_PRIV_EVAL_REC_700
#define MACROLOP_PRIV_EVAL_REC_699_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_700(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_700_OVERLOAD(MACROLOP_PRIV_EVAL_REC_700_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_700_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_700_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_700_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_700_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_700_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_700_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_700_##choice
#define MACROLOP_PRIV_EVAL_REC_700_CONTINUE                   MACROLOP_PRIV_EVAL_REC_701
#define MACROLOP_PRIV_EVAL_REC_700_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_701(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_701_OVERLOAD(MACROLOP_PRIV_EVAL_REC_701_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_701_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_701_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_701_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_701_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_701_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_701_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_701_##choice
#define MACROLOP_PRIV_EVAL_REC_701_CONTINUE                   MACROLOP_PRIV_EVAL_REC_702
#define MACROLOP_PRIV_EVAL_REC_701_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_702(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_702_OVERLOAD(MACROLOP_PRIV_EVAL_REC_702_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_702_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_702_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_702_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_702_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_702_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_702_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_702_##choice
#define MACROLOP_PRIV_EVAL_REC_702_CONTINUE                   MACROLOP_PRIV_EVAL_REC_703
#define MACROLOP_PRIV_EVAL_REC_702_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_703(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_703_OVERLOAD(MACROLOP_PRIV_EVAL_REC_703_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_703_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_703_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_703_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_703_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_703_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_703_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_703_##choice
#define MACROLOP_PRIV_EVAL_REC_703_CONTINUE                   MACROLOP_PRIV_EVAL_REC_704
#define MACROLOP_PRIV_EVAL_REC_703_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_704(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_704_OVERLOAD(MACROLOP_PRIV_EVAL_REC_704_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_704_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_704_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_704_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_704_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_704_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_704_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_704_##choice
#define MACROLOP_PRIV_EVAL_REC_704_CONTINUE                   MACROLOP_PRIV_EVAL_REC_705
#define MACROLOP_PRIV_EVAL_REC_704_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_705(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_705_OVERLOAD(MACROLOP_PRIV_EVAL_REC_705_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_705_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_705_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_705_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_705_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_705_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_705_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_705_##choice
#define MACROLOP_PRIV_EVAL_REC_705_CONTINUE                   MACROLOP_PRIV_EVAL_REC_706
#define MACROLOP_PRIV_EVAL_REC_705_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_706(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_706_OVERLOAD(MACROLOP_PRIV_EVAL_REC_706_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_706_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_706_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_706_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_706_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_706_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_706_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_706_##choice
#define MACROLOP_PRIV_EVAL_REC_706_CONTINUE                   MACROLOP_PRIV_EVAL_REC_707
#define MACROLOP_PRIV_EVAL_REC_706_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_707(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_707_OVERLOAD(MACROLOP_PRIV_EVAL_REC_707_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_707_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_707_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_707_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_707_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_707_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_707_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_707_##choice
#define MACROLOP_PRIV_EVAL_REC_707_CONTINUE                   MACROLOP_PRIV_EVAL_REC_708
#define MACROLOP_PRIV_EVAL_REC_707_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_708(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_708_OVERLOAD(MACROLOP_PRIV_EVAL_REC_708_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_708_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_708_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_708_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_708_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_708_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_708_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_708_##choice
#define MACROLOP_PRIV_EVAL_REC_708_CONTINUE                   MACROLOP_PRIV_EVAL_REC_709
#define MACROLOP_PRIV_EVAL_REC_708_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_709(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_709_OVERLOAD(MACROLOP_PRIV_EVAL_REC_709_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_709_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_709_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_709_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_709_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_709_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_709_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_709_##choice
#define MACROLOP_PRIV_EVAL_REC_709_CONTINUE                   MACROLOP_PRIV_EVAL_REC_710
#define MACROLOP_PRIV_EVAL_REC_709_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_710(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_710_OVERLOAD(MACROLOP_PRIV_EVAL_REC_710_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_710_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_710_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_710_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_710_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_710_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_710_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_710_##choice
#define MACROLOP_PRIV_EVAL_REC_710_CONTINUE                   MACROLOP_PRIV_EVAL_REC_711
#define MACROLOP_PRIV_EVAL_REC_710_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_711(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_711_OVERLOAD(MACROLOP_PRIV_EVAL_REC_711_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_711_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_711_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_711_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_711_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_711_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_711_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_711_##choice
#define MACROLOP_PRIV_EVAL_REC_711_CONTINUE                   MACROLOP_PRIV_EVAL_REC_712
#define MACROLOP_PRIV_EVAL_REC_711_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_712(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_712_OVERLOAD(MACROLOP_PRIV_EVAL_REC_712_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_712_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_712_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_712_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_712_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_712_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_712_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_712_##choice
#define MACROLOP_PRIV_EVAL_REC_712_CONTINUE                   MACROLOP_PRIV_EVAL_REC_713
#define MACROLOP_PRIV_EVAL_REC_712_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_713(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_713_OVERLOAD(MACROLOP_PRIV_EVAL_REC_713_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_713_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_713_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_713_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_713_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_713_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_713_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_713_##choice
#define MACROLOP_PRIV_EVAL_REC_713_CONTINUE                   MACROLOP_PRIV_EVAL_REC_714
#define MACROLOP_PRIV_EVAL_REC_713_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_714(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_714_OVERLOAD(MACROLOP_PRIV_EVAL_REC_714_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_714_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_714_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_714_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_714_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_714_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_714_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_714_##choice
#define MACROLOP_PRIV_EVAL_REC_714_CONTINUE                   MACROLOP_PRIV_EVAL_REC_715
#define MACROLOP_PRIV_EVAL_REC_714_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_715(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_715_OVERLOAD(MACROLOP_PRIV_EVAL_REC_715_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_715_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_715_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_715_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_715_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_715_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_715_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_715_##choice
#define MACROLOP_PRIV_EVAL_REC_715_CONTINUE                   MACROLOP_PRIV_EVAL_REC_716
#define MACROLOP_PRIV_EVAL_REC_715_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_716(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_716_OVERLOAD(MACROLOP_PRIV_EVAL_REC_716_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_716_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_716_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_716_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_716_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_716_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_716_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_716_##choice
#define MACROLOP_PRIV_EVAL_REC_716_CONTINUE                   MACROLOP_PRIV_EVAL_REC_717
#define MACROLOP_PRIV_EVAL_REC_716_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_717(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_717_OVERLOAD(MACROLOP_PRIV_EVAL_REC_717_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_717_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_717_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_717_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_717_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_717_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_717_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_717_##choice
#define MACROLOP_PRIV_EVAL_REC_717_CONTINUE                   MACROLOP_PRIV_EVAL_REC_718
#define MACROLOP_PRIV_EVAL_REC_717_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_718(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_718_OVERLOAD(MACROLOP_PRIV_EVAL_REC_718_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_718_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_718_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_718_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_718_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_718_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_718_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_718_##choice
#define MACROLOP_PRIV_EVAL_REC_718_CONTINUE                   MACROLOP_PRIV_EVAL_REC_719
#define MACROLOP_PRIV_EVAL_REC_718_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_719(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_719_OVERLOAD(MACROLOP_PRIV_EVAL_REC_719_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_719_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_719_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_719_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_719_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_719_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_719_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_719_##choice
#define MACROLOP_PRIV_EVAL_REC_719_CONTINUE                   MACROLOP_PRIV_EVAL_REC_720
#define MACROLOP_PRIV_EVAL_REC_719_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_720(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_720_OVERLOAD(MACROLOP_PRIV_EVAL_REC_720_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_720_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_720_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_720_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_720_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_720_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_720_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_720_##choice
#define MACROLOP_PRIV_EVAL_REC_720_CONTINUE                   MACROLOP_PRIV_EVAL_REC_721
#define MACROLOP_PRIV_EVAL_REC_720_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_721(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_721_OVERLOAD(MACROLOP_PRIV_EVAL_REC_721_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_721_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_721_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_721_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_721_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_721_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_721_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_721_##choice
#define MACROLOP_PRIV_EVAL_REC_721_CONTINUE                   MACROLOP_PRIV_EVAL_REC_722
#define MACROLOP_PRIV_EVAL_REC_721_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_722(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_722_OVERLOAD(MACROLOP_PRIV_EVAL_REC_722_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_722_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_722_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_722_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_722_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_722_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_722_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_722_##choice
#define MACROLOP_PRIV_EVAL_REC_722_CONTINUE                   MACROLOP_PRIV_EVAL_REC_723
#define MACROLOP_PRIV_EVAL_REC_722_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_723(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_723_OVERLOAD(MACROLOP_PRIV_EVAL_REC_723_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_723_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_723_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_723_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_723_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_723_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_723_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_723_##choice
#define MACROLOP_PRIV_EVAL_REC_723_CONTINUE                   MACROLOP_PRIV_EVAL_REC_724
#define MACROLOP_PRIV_EVAL_REC_723_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_724(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_724_OVERLOAD(MACROLOP_PRIV_EVAL_REC_724_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_724_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_724_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_724_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_724_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_724_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_724_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_724_##choice
#define MACROLOP_PRIV_EVAL_REC_724_CONTINUE                   MACROLOP_PRIV_EVAL_REC_725
#define MACROLOP_PRIV_EVAL_REC_724_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_725(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_725_OVERLOAD(MACROLOP_PRIV_EVAL_REC_725_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_725_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_725_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_725_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_725_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_725_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_725_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_725_##choice
#define MACROLOP_PRIV_EVAL_REC_725_CONTINUE                   MACROLOP_PRIV_EVAL_REC_726
#define MACROLOP_PRIV_EVAL_REC_725_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_726(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_726_OVERLOAD(MACROLOP_PRIV_EVAL_REC_726_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_726_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_726_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_726_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_726_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_726_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_726_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_726_##choice
#define MACROLOP_PRIV_EVAL_REC_726_CONTINUE                   MACROLOP_PRIV_EVAL_REC_727
#define MACROLOP_PRIV_EVAL_REC_726_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_727(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_727_OVERLOAD(MACROLOP_PRIV_EVAL_REC_727_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_727_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_727_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_727_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_727_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_727_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_727_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_727_##choice
#define MACROLOP_PRIV_EVAL_REC_727_CONTINUE                   MACROLOP_PRIV_EVAL_REC_728
#define MACROLOP_PRIV_EVAL_REC_727_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_728(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_728_OVERLOAD(MACROLOP_PRIV_EVAL_REC_728_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_728_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_728_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_728_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_728_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_728_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_728_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_728_##choice
#define MACROLOP_PRIV_EVAL_REC_728_CONTINUE                   MACROLOP_PRIV_EVAL_REC_729
#define MACROLOP_PRIV_EVAL_REC_728_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_729(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_729_OVERLOAD(MACROLOP_PRIV_EVAL_REC_729_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_729_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_729_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_729_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_729_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_729_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_729_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_729_##choice
#define MACROLOP_PRIV_EVAL_REC_729_CONTINUE                   MACROLOP_PRIV_EVAL_REC_730
#define MACROLOP_PRIV_EVAL_REC_729_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_730(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_730_OVERLOAD(MACROLOP_PRIV_EVAL_REC_730_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_730_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_730_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_730_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_730_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_730_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_730_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_730_##choice
#define MACROLOP_PRIV_EVAL_REC_730_CONTINUE                   MACROLOP_PRIV_EVAL_REC_731
#define MACROLOP_PRIV_EVAL_REC_730_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_731(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_731_OVERLOAD(MACROLOP_PRIV_EVAL_REC_731_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_731_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_731_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_731_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_731_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_731_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_731_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_731_##choice
#define MACROLOP_PRIV_EVAL_REC_731_CONTINUE                   MACROLOP_PRIV_EVAL_REC_732
#define MACROLOP_PRIV_EVAL_REC_731_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_732(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_732_OVERLOAD(MACROLOP_PRIV_EVAL_REC_732_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_732_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_732_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_732_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_732_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_732_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_732_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_732_##choice
#define MACROLOP_PRIV_EVAL_REC_732_CONTINUE                   MACROLOP_PRIV_EVAL_REC_733
#define MACROLOP_PRIV_EVAL_REC_732_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_733(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_733_OVERLOAD(MACROLOP_PRIV_EVAL_REC_733_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_733_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_733_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_733_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_733_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_733_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_733_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_733_##choice
#define MACROLOP_PRIV_EVAL_REC_733_CONTINUE                   MACROLOP_PRIV_EVAL_REC_734
#define MACROLOP_PRIV_EVAL_REC_733_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_734(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_734_OVERLOAD(MACROLOP_PRIV_EVAL_REC_734_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_734_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_734_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_734_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_734_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_734_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_734_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_734_##choice
#define MACROLOP_PRIV_EVAL_REC_734_CONTINUE                   MACROLOP_PRIV_EVAL_REC_735
#define MACROLOP_PRIV_EVAL_REC_734_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_735(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_735_OVERLOAD(MACROLOP_PRIV_EVAL_REC_735_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_735_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_735_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_735_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_735_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_735_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_735_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_735_##choice
#define MACROLOP_PRIV_EVAL_REC_735_CONTINUE                   MACROLOP_PRIV_EVAL_REC_736
#define MACROLOP_PRIV_EVAL_REC_735_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_736(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_736_OVERLOAD(MACROLOP_PRIV_EVAL_REC_736_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_736_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_736_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_736_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_736_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_736_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_736_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_736_##choice
#define MACROLOP_PRIV_EVAL_REC_736_CONTINUE                   MACROLOP_PRIV_EVAL_REC_737
#define MACROLOP_PRIV_EVAL_REC_736_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_737(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_737_OVERLOAD(MACROLOP_PRIV_EVAL_REC_737_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_737_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_737_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_737_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_737_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_737_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_737_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_737_##choice
#define MACROLOP_PRIV_EVAL_REC_737_CONTINUE                   MACROLOP_PRIV_EVAL_REC_738
#define MACROLOP_PRIV_EVAL_REC_737_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_738(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_738_OVERLOAD(MACROLOP_PRIV_EVAL_REC_738_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_738_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_738_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_738_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_738_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_738_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_738_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_738_##choice
#define MACROLOP_PRIV_EVAL_REC_738_CONTINUE                   MACROLOP_PRIV_EVAL_REC_739
#define MACROLOP_PRIV_EVAL_REC_738_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_739(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_739_OVERLOAD(MACROLOP_PRIV_EVAL_REC_739_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_739_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_739_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_739_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_739_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_739_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_739_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_739_##choice
#define MACROLOP_PRIV_EVAL_REC_739_CONTINUE                   MACROLOP_PRIV_EVAL_REC_740
#define MACROLOP_PRIV_EVAL_REC_739_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_740(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_740_OVERLOAD(MACROLOP_PRIV_EVAL_REC_740_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_740_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_740_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_740_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_740_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_740_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_740_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_740_##choice
#define MACROLOP_PRIV_EVAL_REC_740_CONTINUE                   MACROLOP_PRIV_EVAL_REC_741
#define MACROLOP_PRIV_EVAL_REC_740_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_741(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_741_OVERLOAD(MACROLOP_PRIV_EVAL_REC_741_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_741_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_741_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_741_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_741_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_741_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_741_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_741_##choice
#define MACROLOP_PRIV_EVAL_REC_741_CONTINUE                   MACROLOP_PRIV_EVAL_REC_742
#define MACROLOP_PRIV_EVAL_REC_741_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_742(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_742_OVERLOAD(MACROLOP_PRIV_EVAL_REC_742_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_742_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_742_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_742_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_742_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_742_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_742_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_742_##choice
#define MACROLOP_PRIV_EVAL_REC_742_CONTINUE                   MACROLOP_PRIV_EVAL_REC_743
#define MACROLOP_PRIV_EVAL_REC_742_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_743(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_743_OVERLOAD(MACROLOP_PRIV_EVAL_REC_743_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_743_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_743_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_743_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_743_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_743_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_743_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_743_##choice
#define MACROLOP_PRIV_EVAL_REC_743_CONTINUE                   MACROLOP_PRIV_EVAL_REC_744
#define MACROLOP_PRIV_EVAL_REC_743_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_744(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_744_OVERLOAD(MACROLOP_PRIV_EVAL_REC_744_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_744_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_744_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_744_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_744_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_744_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_744_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_744_##choice
#define MACROLOP_PRIV_EVAL_REC_744_CONTINUE                   MACROLOP_PRIV_EVAL_REC_745
#define MACROLOP_PRIV_EVAL_REC_744_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_745(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_745_OVERLOAD(MACROLOP_PRIV_EVAL_REC_745_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_745_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_745_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_745_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_745_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_745_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_745_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_745_##choice
#define MACROLOP_PRIV_EVAL_REC_745_CONTINUE                   MACROLOP_PRIV_EVAL_REC_746
#define MACROLOP_PRIV_EVAL_REC_745_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_746(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_746_OVERLOAD(MACROLOP_PRIV_EVAL_REC_746_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_746_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_746_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_746_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_746_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_746_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_746_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_746_##choice
#define MACROLOP_PRIV_EVAL_REC_746_CONTINUE                   MACROLOP_PRIV_EVAL_REC_747
#define MACROLOP_PRIV_EVAL_REC_746_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_747(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_747_OVERLOAD(MACROLOP_PRIV_EVAL_REC_747_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_747_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_747_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_747_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_747_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_747_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_747_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_747_##choice
#define MACROLOP_PRIV_EVAL_REC_747_CONTINUE                   MACROLOP_PRIV_EVAL_REC_748
#define MACROLOP_PRIV_EVAL_REC_747_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_748(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_748_OVERLOAD(MACROLOP_PRIV_EVAL_REC_748_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_748_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_748_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_748_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_748_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_748_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_748_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_748_##choice
#define MACROLOP_PRIV_EVAL_REC_748_CONTINUE                   MACROLOP_PRIV_EVAL_REC_749
#define MACROLOP_PRIV_EVAL_REC_748_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_749(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_749_OVERLOAD(MACROLOP_PRIV_EVAL_REC_749_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_749_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_749_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_749_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_749_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_749_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_749_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_749_##choice
#define MACROLOP_PRIV_EVAL_REC_749_CONTINUE                   MACROLOP_PRIV_EVAL_REC_750
#define MACROLOP_PRIV_EVAL_REC_749_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_750(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_750_OVERLOAD(MACROLOP_PRIV_EVAL_REC_750_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_750_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_750_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_750_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_750_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_750_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_750_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_750_##choice
#define MACROLOP_PRIV_EVAL_REC_750_CONTINUE                   MACROLOP_PRIV_EVAL_REC_751
#define MACROLOP_PRIV_EVAL_REC_750_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_751(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_751_OVERLOAD(MACROLOP_PRIV_EVAL_REC_751_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_751_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_751_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_751_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_751_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_751_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_751_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_751_##choice
#define MACROLOP_PRIV_EVAL_REC_751_CONTINUE                   MACROLOP_PRIV_EVAL_REC_752
#define MACROLOP_PRIV_EVAL_REC_751_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_752(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_752_OVERLOAD(MACROLOP_PRIV_EVAL_REC_752_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_752_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_752_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_752_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_752_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_752_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_752_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_752_##choice
#define MACROLOP_PRIV_EVAL_REC_752_CONTINUE                   MACROLOP_PRIV_EVAL_REC_753
#define MACROLOP_PRIV_EVAL_REC_752_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_753(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_753_OVERLOAD(MACROLOP_PRIV_EVAL_REC_753_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_753_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_753_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_753_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_753_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_753_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_753_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_753_##choice
#define MACROLOP_PRIV_EVAL_REC_753_CONTINUE                   MACROLOP_PRIV_EVAL_REC_754
#define MACROLOP_PRIV_EVAL_REC_753_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_754(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_754_OVERLOAD(MACROLOP_PRIV_EVAL_REC_754_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_754_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_754_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_754_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_754_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_754_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_754_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_754_##choice
#define MACROLOP_PRIV_EVAL_REC_754_CONTINUE                   MACROLOP_PRIV_EVAL_REC_755
#define MACROLOP_PRIV_EVAL_REC_754_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_755(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_755_OVERLOAD(MACROLOP_PRIV_EVAL_REC_755_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_755_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_755_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_755_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_755_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_755_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_755_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_755_##choice
#define MACROLOP_PRIV_EVAL_REC_755_CONTINUE                   MACROLOP_PRIV_EVAL_REC_756
#define MACROLOP_PRIV_EVAL_REC_755_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_756(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_756_OVERLOAD(MACROLOP_PRIV_EVAL_REC_756_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_756_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_756_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_756_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_756_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_756_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_756_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_756_##choice
#define MACROLOP_PRIV_EVAL_REC_756_CONTINUE                   MACROLOP_PRIV_EVAL_REC_757
#define MACROLOP_PRIV_EVAL_REC_756_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_757(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_757_OVERLOAD(MACROLOP_PRIV_EVAL_REC_757_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_757_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_757_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_757_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_757_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_757_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_757_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_757_##choice
#define MACROLOP_PRIV_EVAL_REC_757_CONTINUE                   MACROLOP_PRIV_EVAL_REC_758
#define MACROLOP_PRIV_EVAL_REC_757_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_758(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_758_OVERLOAD(MACROLOP_PRIV_EVAL_REC_758_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_758_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_758_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_758_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_758_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_758_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_758_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_758_##choice
#define MACROLOP_PRIV_EVAL_REC_758_CONTINUE                   MACROLOP_PRIV_EVAL_REC_759
#define MACROLOP_PRIV_EVAL_REC_758_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_759(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_759_OVERLOAD(MACROLOP_PRIV_EVAL_REC_759_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_759_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_759_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_759_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_759_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_759_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_759_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_759_##choice
#define MACROLOP_PRIV_EVAL_REC_759_CONTINUE                   MACROLOP_PRIV_EVAL_REC_760
#define MACROLOP_PRIV_EVAL_REC_759_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_760(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_760_OVERLOAD(MACROLOP_PRIV_EVAL_REC_760_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_760_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_760_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_760_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_760_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_760_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_760_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_760_##choice
#define MACROLOP_PRIV_EVAL_REC_760_CONTINUE                   MACROLOP_PRIV_EVAL_REC_761
#define MACROLOP_PRIV_EVAL_REC_760_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_761(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_761_OVERLOAD(MACROLOP_PRIV_EVAL_REC_761_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_761_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_761_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_761_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_761_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_761_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_761_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_761_##choice
#define MACROLOP_PRIV_EVAL_REC_761_CONTINUE                   MACROLOP_PRIV_EVAL_REC_762
#define MACROLOP_PRIV_EVAL_REC_761_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_762(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_762_OVERLOAD(MACROLOP_PRIV_EVAL_REC_762_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_762_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_762_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_762_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_762_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_762_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_762_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_762_##choice
#define MACROLOP_PRIV_EVAL_REC_762_CONTINUE                   MACROLOP_PRIV_EVAL_REC_763
#define MACROLOP_PRIV_EVAL_REC_762_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_763(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_763_OVERLOAD(MACROLOP_PRIV_EVAL_REC_763_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_763_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_763_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_763_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_763_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_763_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_763_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_763_##choice
#define MACROLOP_PRIV_EVAL_REC_763_CONTINUE                   MACROLOP_PRIV_EVAL_REC_764
#define MACROLOP_PRIV_EVAL_REC_763_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_764(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_764_OVERLOAD(MACROLOP_PRIV_EVAL_REC_764_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_764_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_764_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_764_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_764_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_764_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_764_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_764_##choice
#define MACROLOP_PRIV_EVAL_REC_764_CONTINUE                   MACROLOP_PRIV_EVAL_REC_765
#define MACROLOP_PRIV_EVAL_REC_764_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_765(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_765_OVERLOAD(MACROLOP_PRIV_EVAL_REC_765_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_765_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_765_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_765_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_765_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_765_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_765_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_765_##choice
#define MACROLOP_PRIV_EVAL_REC_765_CONTINUE                   MACROLOP_PRIV_EVAL_REC_766
#define MACROLOP_PRIV_EVAL_REC_765_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_766(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_766_OVERLOAD(MACROLOP_PRIV_EVAL_REC_766_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_766_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_766_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_766_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_766_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_766_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_766_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_766_##choice
#define MACROLOP_PRIV_EVAL_REC_766_CONTINUE                   MACROLOP_PRIV_EVAL_REC_767
#define MACROLOP_PRIV_EVAL_REC_766_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_767(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_767_OVERLOAD(MACROLOP_PRIV_EVAL_REC_767_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_767_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_767_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_767_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_767_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_767_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_767_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_767_##choice
#define MACROLOP_PRIV_EVAL_REC_767_CONTINUE                   MACROLOP_PRIV_EVAL_REC_768
#define MACROLOP_PRIV_EVAL_REC_767_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_768(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_768_OVERLOAD(MACROLOP_PRIV_EVAL_REC_768_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_768_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_768_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_768_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_768_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_768_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_768_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_768_##choice
#define MACROLOP_PRIV_EVAL_REC_768_CONTINUE                   MACROLOP_PRIV_EVAL_REC_769
#define MACROLOP_PRIV_EVAL_REC_768_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_769(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_769_OVERLOAD(MACROLOP_PRIV_EVAL_REC_769_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_769_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_769_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_769_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_769_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_769_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_769_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_769_##choice
#define MACROLOP_PRIV_EVAL_REC_769_CONTINUE                   MACROLOP_PRIV_EVAL_REC_770
#define MACROLOP_PRIV_EVAL_REC_769_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_770(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_770_OVERLOAD(MACROLOP_PRIV_EVAL_REC_770_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_770_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_770_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_770_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_770_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_770_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_770_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_770_##choice
#define MACROLOP_PRIV_EVAL_REC_770_CONTINUE                   MACROLOP_PRIV_EVAL_REC_771
#define MACROLOP_PRIV_EVAL_REC_770_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_771(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_771_OVERLOAD(MACROLOP_PRIV_EVAL_REC_771_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_771_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_771_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_771_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_771_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_771_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_771_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_771_##choice
#define MACROLOP_PRIV_EVAL_REC_771_CONTINUE                   MACROLOP_PRIV_EVAL_REC_772
#define MACROLOP_PRIV_EVAL_REC_771_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_772(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_772_OVERLOAD(MACROLOP_PRIV_EVAL_REC_772_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_772_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_772_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_772_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_772_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_772_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_772_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_772_##choice
#define MACROLOP_PRIV_EVAL_REC_772_CONTINUE                   MACROLOP_PRIV_EVAL_REC_773
#define MACROLOP_PRIV_EVAL_REC_772_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_773(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_773_OVERLOAD(MACROLOP_PRIV_EVAL_REC_773_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_773_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_773_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_773_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_773_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_773_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_773_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_773_##choice
#define MACROLOP_PRIV_EVAL_REC_773_CONTINUE                   MACROLOP_PRIV_EVAL_REC_774
#define MACROLOP_PRIV_EVAL_REC_773_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_774(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_774_OVERLOAD(MACROLOP_PRIV_EVAL_REC_774_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_774_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_774_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_774_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_774_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_774_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_774_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_774_##choice
#define MACROLOP_PRIV_EVAL_REC_774_CONTINUE                   MACROLOP_PRIV_EVAL_REC_775
#define MACROLOP_PRIV_EVAL_REC_774_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_775(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_775_OVERLOAD(MACROLOP_PRIV_EVAL_REC_775_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_775_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_775_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_775_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_775_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_775_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_775_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_775_##choice
#define MACROLOP_PRIV_EVAL_REC_775_CONTINUE                   MACROLOP_PRIV_EVAL_REC_776
#define MACROLOP_PRIV_EVAL_REC_775_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_776(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_776_OVERLOAD(MACROLOP_PRIV_EVAL_REC_776_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_776_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_776_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_776_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_776_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_776_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_776_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_776_##choice
#define MACROLOP_PRIV_EVAL_REC_776_CONTINUE                   MACROLOP_PRIV_EVAL_REC_777
#define MACROLOP_PRIV_EVAL_REC_776_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_777(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_777_OVERLOAD(MACROLOP_PRIV_EVAL_REC_777_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_777_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_777_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_777_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_777_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_777_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_777_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_777_##choice
#define MACROLOP_PRIV_EVAL_REC_777_CONTINUE                   MACROLOP_PRIV_EVAL_REC_778
#define MACROLOP_PRIV_EVAL_REC_777_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_778(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_778_OVERLOAD(MACROLOP_PRIV_EVAL_REC_778_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_778_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_778_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_778_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_778_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_778_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_778_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_778_##choice
#define MACROLOP_PRIV_EVAL_REC_778_CONTINUE                   MACROLOP_PRIV_EVAL_REC_779
#define MACROLOP_PRIV_EVAL_REC_778_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_779(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_779_OVERLOAD(MACROLOP_PRIV_EVAL_REC_779_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_779_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_779_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_779_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_779_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_779_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_779_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_779_##choice
#define MACROLOP_PRIV_EVAL_REC_779_CONTINUE                   MACROLOP_PRIV_EVAL_REC_780
#define MACROLOP_PRIV_EVAL_REC_779_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_780(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_780_OVERLOAD(MACROLOP_PRIV_EVAL_REC_780_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_780_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_780_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_780_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_780_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_780_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_780_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_780_##choice
#define MACROLOP_PRIV_EVAL_REC_780_CONTINUE                   MACROLOP_PRIV_EVAL_REC_781
#define MACROLOP_PRIV_EVAL_REC_780_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_781(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_781_OVERLOAD(MACROLOP_PRIV_EVAL_REC_781_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_781_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_781_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_781_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_781_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_781_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_781_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_781_##choice
#define MACROLOP_PRIV_EVAL_REC_781_CONTINUE                   MACROLOP_PRIV_EVAL_REC_782
#define MACROLOP_PRIV_EVAL_REC_781_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_782(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_782_OVERLOAD(MACROLOP_PRIV_EVAL_REC_782_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_782_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_782_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_782_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_782_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_782_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_782_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_782_##choice
#define MACROLOP_PRIV_EVAL_REC_782_CONTINUE                   MACROLOP_PRIV_EVAL_REC_783
#define MACROLOP_PRIV_EVAL_REC_782_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_783(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_783_OVERLOAD(MACROLOP_PRIV_EVAL_REC_783_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_783_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_783_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_783_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_783_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_783_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_783_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_783_##choice
#define MACROLOP_PRIV_EVAL_REC_783_CONTINUE                   MACROLOP_PRIV_EVAL_REC_784
#define MACROLOP_PRIV_EVAL_REC_783_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_784(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_784_OVERLOAD(MACROLOP_PRIV_EVAL_REC_784_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_784_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_784_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_784_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_784_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_784_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_784_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_784_##choice
#define MACROLOP_PRIV_EVAL_REC_784_CONTINUE                   MACROLOP_PRIV_EVAL_REC_785
#define MACROLOP_PRIV_EVAL_REC_784_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_785(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_785_OVERLOAD(MACROLOP_PRIV_EVAL_REC_785_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_785_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_785_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_785_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_785_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_785_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_785_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_785_##choice
#define MACROLOP_PRIV_EVAL_REC_785_CONTINUE                   MACROLOP_PRIV_EVAL_REC_786
#define MACROLOP_PRIV_EVAL_REC_785_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_786(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_786_OVERLOAD(MACROLOP_PRIV_EVAL_REC_786_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_786_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_786_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_786_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_786_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_786_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_786_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_786_##choice
#define MACROLOP_PRIV_EVAL_REC_786_CONTINUE                   MACROLOP_PRIV_EVAL_REC_787
#define MACROLOP_PRIV_EVAL_REC_786_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_787(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_787_OVERLOAD(MACROLOP_PRIV_EVAL_REC_787_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_787_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_787_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_787_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_787_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_787_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_787_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_787_##choice
#define MACROLOP_PRIV_EVAL_REC_787_CONTINUE                   MACROLOP_PRIV_EVAL_REC_788
#define MACROLOP_PRIV_EVAL_REC_787_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_788(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_788_OVERLOAD(MACROLOP_PRIV_EVAL_REC_788_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_788_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_788_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_788_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_788_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_788_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_788_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_788_##choice
#define MACROLOP_PRIV_EVAL_REC_788_CONTINUE                   MACROLOP_PRIV_EVAL_REC_789
#define MACROLOP_PRIV_EVAL_REC_788_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_789(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_789_OVERLOAD(MACROLOP_PRIV_EVAL_REC_789_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_789_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_789_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_789_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_789_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_789_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_789_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_789_##choice
#define MACROLOP_PRIV_EVAL_REC_789_CONTINUE                   MACROLOP_PRIV_EVAL_REC_790
#define MACROLOP_PRIV_EVAL_REC_789_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_790(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_790_OVERLOAD(MACROLOP_PRIV_EVAL_REC_790_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_790_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_790_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_790_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_790_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_790_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_790_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_790_##choice
#define MACROLOP_PRIV_EVAL_REC_790_CONTINUE                   MACROLOP_PRIV_EVAL_REC_791
#define MACROLOP_PRIV_EVAL_REC_790_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_791(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_791_OVERLOAD(MACROLOP_PRIV_EVAL_REC_791_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_791_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_791_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_791_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_791_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_791_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_791_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_791_##choice
#define MACROLOP_PRIV_EVAL_REC_791_CONTINUE                   MACROLOP_PRIV_EVAL_REC_792
#define MACROLOP_PRIV_EVAL_REC_791_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_792(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_792_OVERLOAD(MACROLOP_PRIV_EVAL_REC_792_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_792_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_792_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_792_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_792_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_792_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_792_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_792_##choice
#define MACROLOP_PRIV_EVAL_REC_792_CONTINUE                   MACROLOP_PRIV_EVAL_REC_793
#define MACROLOP_PRIV_EVAL_REC_792_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_793(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_793_OVERLOAD(MACROLOP_PRIV_EVAL_REC_793_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_793_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_793_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_793_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_793_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_793_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_793_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_793_##choice
#define MACROLOP_PRIV_EVAL_REC_793_CONTINUE                   MACROLOP_PRIV_EVAL_REC_794
#define MACROLOP_PRIV_EVAL_REC_793_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_794(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_794_OVERLOAD(MACROLOP_PRIV_EVAL_REC_794_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_794_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_794_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_794_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_794_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_794_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_794_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_794_##choice
#define MACROLOP_PRIV_EVAL_REC_794_CONTINUE                   MACROLOP_PRIV_EVAL_REC_795
#define MACROLOP_PRIV_EVAL_REC_794_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_795(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_795_OVERLOAD(MACROLOP_PRIV_EVAL_REC_795_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_795_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_795_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_795_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_795_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_795_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_795_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_795_##choice
#define MACROLOP_PRIV_EVAL_REC_795_CONTINUE                   MACROLOP_PRIV_EVAL_REC_796
#define MACROLOP_PRIV_EVAL_REC_795_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_796(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_796_OVERLOAD(MACROLOP_PRIV_EVAL_REC_796_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_796_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_796_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_796_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_796_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_796_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_796_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_796_##choice
#define MACROLOP_PRIV_EVAL_REC_796_CONTINUE                   MACROLOP_PRIV_EVAL_REC_797
#define MACROLOP_PRIV_EVAL_REC_796_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_797(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_797_OVERLOAD(MACROLOP_PRIV_EVAL_REC_797_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_797_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_797_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_797_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_797_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_797_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_797_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_797_##choice
#define MACROLOP_PRIV_EVAL_REC_797_CONTINUE                   MACROLOP_PRIV_EVAL_REC_798
#define MACROLOP_PRIV_EVAL_REC_797_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_798(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_798_OVERLOAD(MACROLOP_PRIV_EVAL_REC_798_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_798_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_798_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_798_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_798_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_798_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_798_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_798_##choice
#define MACROLOP_PRIV_EVAL_REC_798_CONTINUE                   MACROLOP_PRIV_EVAL_REC_799
#define MACROLOP_PRIV_EVAL_REC_798_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_799(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_799_OVERLOAD(MACROLOP_PRIV_EVAL_REC_799_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_799_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_799_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_799_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_799_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_799_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_799_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_799_##choice
#define MACROLOP_PRIV_EVAL_REC_799_CONTINUE                   MACROLOP_PRIV_EVAL_REC_800
#define MACROLOP_PRIV_EVAL_REC_799_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_800(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_800_OVERLOAD(MACROLOP_PRIV_EVAL_REC_800_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_800_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_800_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_800_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_800_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_800_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_800_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_800_##choice
#define MACROLOP_PRIV_EVAL_REC_800_CONTINUE                   MACROLOP_PRIV_EVAL_REC_801
#define MACROLOP_PRIV_EVAL_REC_800_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_801(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_801_OVERLOAD(MACROLOP_PRIV_EVAL_REC_801_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_801_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_801_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_801_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_801_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_801_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_801_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_801_##choice
#define MACROLOP_PRIV_EVAL_REC_801_CONTINUE                   MACROLOP_PRIV_EVAL_REC_802
#define MACROLOP_PRIV_EVAL_REC_801_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_802(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_802_OVERLOAD(MACROLOP_PRIV_EVAL_REC_802_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_802_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_802_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_802_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_802_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_802_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_802_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_802_##choice
#define MACROLOP_PRIV_EVAL_REC_802_CONTINUE                   MACROLOP_PRIV_EVAL_REC_803
#define MACROLOP_PRIV_EVAL_REC_802_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_803(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_803_OVERLOAD(MACROLOP_PRIV_EVAL_REC_803_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_803_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_803_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_803_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_803_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_803_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_803_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_803_##choice
#define MACROLOP_PRIV_EVAL_REC_803_CONTINUE                   MACROLOP_PRIV_EVAL_REC_804
#define MACROLOP_PRIV_EVAL_REC_803_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_804(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_804_OVERLOAD(MACROLOP_PRIV_EVAL_REC_804_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_804_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_804_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_804_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_804_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_804_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_804_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_804_##choice
#define MACROLOP_PRIV_EVAL_REC_804_CONTINUE                   MACROLOP_PRIV_EVAL_REC_805
#define MACROLOP_PRIV_EVAL_REC_804_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_805(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_805_OVERLOAD(MACROLOP_PRIV_EVAL_REC_805_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_805_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_805_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_805_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_805_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_805_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_805_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_805_##choice
#define MACROLOP_PRIV_EVAL_REC_805_CONTINUE                   MACROLOP_PRIV_EVAL_REC_806
#define MACROLOP_PRIV_EVAL_REC_805_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_806(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_806_OVERLOAD(MACROLOP_PRIV_EVAL_REC_806_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_806_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_806_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_806_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_806_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_806_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_806_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_806_##choice
#define MACROLOP_PRIV_EVAL_REC_806_CONTINUE                   MACROLOP_PRIV_EVAL_REC_807
#define MACROLOP_PRIV_EVAL_REC_806_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_807(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_807_OVERLOAD(MACROLOP_PRIV_EVAL_REC_807_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_807_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_807_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_807_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_807_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_807_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_807_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_807_##choice
#define MACROLOP_PRIV_EVAL_REC_807_CONTINUE                   MACROLOP_PRIV_EVAL_REC_808
#define MACROLOP_PRIV_EVAL_REC_807_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_808(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_808_OVERLOAD(MACROLOP_PRIV_EVAL_REC_808_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_808_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_808_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_808_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_808_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_808_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_808_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_808_##choice
#define MACROLOP_PRIV_EVAL_REC_808_CONTINUE                   MACROLOP_PRIV_EVAL_REC_809
#define MACROLOP_PRIV_EVAL_REC_808_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_809(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_809_OVERLOAD(MACROLOP_PRIV_EVAL_REC_809_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_809_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_809_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_809_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_809_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_809_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_809_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_809_##choice
#define MACROLOP_PRIV_EVAL_REC_809_CONTINUE                   MACROLOP_PRIV_EVAL_REC_810
#define MACROLOP_PRIV_EVAL_REC_809_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_810(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_810_OVERLOAD(MACROLOP_PRIV_EVAL_REC_810_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_810_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_810_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_810_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_810_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_810_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_810_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_810_##choice
#define MACROLOP_PRIV_EVAL_REC_810_CONTINUE                   MACROLOP_PRIV_EVAL_REC_811
#define MACROLOP_PRIV_EVAL_REC_810_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_811(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_811_OVERLOAD(MACROLOP_PRIV_EVAL_REC_811_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_811_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_811_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_811_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_811_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_811_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_811_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_811_##choice
#define MACROLOP_PRIV_EVAL_REC_811_CONTINUE                   MACROLOP_PRIV_EVAL_REC_812
#define MACROLOP_PRIV_EVAL_REC_811_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_812(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_812_OVERLOAD(MACROLOP_PRIV_EVAL_REC_812_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_812_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_812_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_812_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_812_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_812_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_812_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_812_##choice
#define MACROLOP_PRIV_EVAL_REC_812_CONTINUE                   MACROLOP_PRIV_EVAL_REC_813
#define MACROLOP_PRIV_EVAL_REC_812_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_813(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_813_OVERLOAD(MACROLOP_PRIV_EVAL_REC_813_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_813_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_813_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_813_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_813_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_813_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_813_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_813_##choice
#define MACROLOP_PRIV_EVAL_REC_813_CONTINUE                   MACROLOP_PRIV_EVAL_REC_814
#define MACROLOP_PRIV_EVAL_REC_813_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_814(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_814_OVERLOAD(MACROLOP_PRIV_EVAL_REC_814_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_814_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_814_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_814_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_814_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_814_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_814_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_814_##choice
#define MACROLOP_PRIV_EVAL_REC_814_CONTINUE                   MACROLOP_PRIV_EVAL_REC_815
#define MACROLOP_PRIV_EVAL_REC_814_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_815(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_815_OVERLOAD(MACROLOP_PRIV_EVAL_REC_815_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_815_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_815_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_815_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_815_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_815_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_815_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_815_##choice
#define MACROLOP_PRIV_EVAL_REC_815_CONTINUE                   MACROLOP_PRIV_EVAL_REC_816
#define MACROLOP_PRIV_EVAL_REC_815_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_816(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_816_OVERLOAD(MACROLOP_PRIV_EVAL_REC_816_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_816_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_816_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_816_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_816_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_816_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_816_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_816_##choice
#define MACROLOP_PRIV_EVAL_REC_816_CONTINUE                   MACROLOP_PRIV_EVAL_REC_817
#define MACROLOP_PRIV_EVAL_REC_816_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_817(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_817_OVERLOAD(MACROLOP_PRIV_EVAL_REC_817_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_817_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_817_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_817_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_817_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_817_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_817_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_817_##choice
#define MACROLOP_PRIV_EVAL_REC_817_CONTINUE                   MACROLOP_PRIV_EVAL_REC_818
#define MACROLOP_PRIV_EVAL_REC_817_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_818(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_818_OVERLOAD(MACROLOP_PRIV_EVAL_REC_818_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_818_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_818_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_818_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_818_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_818_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_818_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_818_##choice
#define MACROLOP_PRIV_EVAL_REC_818_CONTINUE                   MACROLOP_PRIV_EVAL_REC_819
#define MACROLOP_PRIV_EVAL_REC_818_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_819(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_819_OVERLOAD(MACROLOP_PRIV_EVAL_REC_819_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_819_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_819_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_819_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_819_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_819_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_819_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_819_##choice
#define MACROLOP_PRIV_EVAL_REC_819_CONTINUE                   MACROLOP_PRIV_EVAL_REC_820
#define MACROLOP_PRIV_EVAL_REC_819_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_820(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_820_OVERLOAD(MACROLOP_PRIV_EVAL_REC_820_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_820_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_820_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_820_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_820_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_820_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_820_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_820_##choice
#define MACROLOP_PRIV_EVAL_REC_820_CONTINUE                   MACROLOP_PRIV_EVAL_REC_821
#define MACROLOP_PRIV_EVAL_REC_820_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_821(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_821_OVERLOAD(MACROLOP_PRIV_EVAL_REC_821_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_821_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_821_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_821_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_821_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_821_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_821_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_821_##choice
#define MACROLOP_PRIV_EVAL_REC_821_CONTINUE                   MACROLOP_PRIV_EVAL_REC_822
#define MACROLOP_PRIV_EVAL_REC_821_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_822(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_822_OVERLOAD(MACROLOP_PRIV_EVAL_REC_822_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_822_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_822_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_822_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_822_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_822_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_822_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_822_##choice
#define MACROLOP_PRIV_EVAL_REC_822_CONTINUE                   MACROLOP_PRIV_EVAL_REC_823
#define MACROLOP_PRIV_EVAL_REC_822_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_823(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_823_OVERLOAD(MACROLOP_PRIV_EVAL_REC_823_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_823_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_823_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_823_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_823_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_823_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_823_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_823_##choice
#define MACROLOP_PRIV_EVAL_REC_823_CONTINUE                   MACROLOP_PRIV_EVAL_REC_824
#define MACROLOP_PRIV_EVAL_REC_823_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_824(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_824_OVERLOAD(MACROLOP_PRIV_EVAL_REC_824_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_824_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_824_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_824_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_824_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_824_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_824_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_824_##choice
#define MACROLOP_PRIV_EVAL_REC_824_CONTINUE                   MACROLOP_PRIV_EVAL_REC_825
#define MACROLOP_PRIV_EVAL_REC_824_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_825(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_825_OVERLOAD(MACROLOP_PRIV_EVAL_REC_825_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_825_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_825_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_825_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_825_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_825_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_825_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_825_##choice
#define MACROLOP_PRIV_EVAL_REC_825_CONTINUE                   MACROLOP_PRIV_EVAL_REC_826
#define MACROLOP_PRIV_EVAL_REC_825_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_826(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_826_OVERLOAD(MACROLOP_PRIV_EVAL_REC_826_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_826_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_826_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_826_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_826_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_826_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_826_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_826_##choice
#define MACROLOP_PRIV_EVAL_REC_826_CONTINUE                   MACROLOP_PRIV_EVAL_REC_827
#define MACROLOP_PRIV_EVAL_REC_826_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_827(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_827_OVERLOAD(MACROLOP_PRIV_EVAL_REC_827_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_827_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_827_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_827_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_827_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_827_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_827_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_827_##choice
#define MACROLOP_PRIV_EVAL_REC_827_CONTINUE                   MACROLOP_PRIV_EVAL_REC_828
#define MACROLOP_PRIV_EVAL_REC_827_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_828(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_828_OVERLOAD(MACROLOP_PRIV_EVAL_REC_828_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_828_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_828_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_828_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_828_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_828_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_828_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_828_##choice
#define MACROLOP_PRIV_EVAL_REC_828_CONTINUE                   MACROLOP_PRIV_EVAL_REC_829
#define MACROLOP_PRIV_EVAL_REC_828_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_829(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_829_OVERLOAD(MACROLOP_PRIV_EVAL_REC_829_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_829_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_829_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_829_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_829_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_829_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_829_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_829_##choice
#define MACROLOP_PRIV_EVAL_REC_829_CONTINUE                   MACROLOP_PRIV_EVAL_REC_830
#define MACROLOP_PRIV_EVAL_REC_829_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_830(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_830_OVERLOAD(MACROLOP_PRIV_EVAL_REC_830_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_830_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_830_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_830_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_830_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_830_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_830_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_830_##choice
#define MACROLOP_PRIV_EVAL_REC_830_CONTINUE                   MACROLOP_PRIV_EVAL_REC_831
#define MACROLOP_PRIV_EVAL_REC_830_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_831(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_831_OVERLOAD(MACROLOP_PRIV_EVAL_REC_831_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_831_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_831_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_831_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_831_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_831_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_831_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_831_##choice
#define MACROLOP_PRIV_EVAL_REC_831_CONTINUE                   MACROLOP_PRIV_EVAL_REC_832
#define MACROLOP_PRIV_EVAL_REC_831_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_832(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_832_OVERLOAD(MACROLOP_PRIV_EVAL_REC_832_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_832_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_832_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_832_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_832_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_832_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_832_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_832_##choice
#define MACROLOP_PRIV_EVAL_REC_832_CONTINUE                   MACROLOP_PRIV_EVAL_REC_833
#define MACROLOP_PRIV_EVAL_REC_832_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_833(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_833_OVERLOAD(MACROLOP_PRIV_EVAL_REC_833_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_833_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_833_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_833_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_833_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_833_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_833_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_833_##choice
#define MACROLOP_PRIV_EVAL_REC_833_CONTINUE                   MACROLOP_PRIV_EVAL_REC_834
#define MACROLOP_PRIV_EVAL_REC_833_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_834(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_834_OVERLOAD(MACROLOP_PRIV_EVAL_REC_834_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_834_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_834_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_834_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_834_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_834_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_834_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_834_##choice
#define MACROLOP_PRIV_EVAL_REC_834_CONTINUE                   MACROLOP_PRIV_EVAL_REC_835
#define MACROLOP_PRIV_EVAL_REC_834_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_835(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_835_OVERLOAD(MACROLOP_PRIV_EVAL_REC_835_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_835_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_835_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_835_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_835_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_835_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_835_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_835_##choice
#define MACROLOP_PRIV_EVAL_REC_835_CONTINUE                   MACROLOP_PRIV_EVAL_REC_836
#define MACROLOP_PRIV_EVAL_REC_835_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_836(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_836_OVERLOAD(MACROLOP_PRIV_EVAL_REC_836_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_836_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_836_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_836_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_836_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_836_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_836_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_836_##choice
#define MACROLOP_PRIV_EVAL_REC_836_CONTINUE                   MACROLOP_PRIV_EVAL_REC_837
#define MACROLOP_PRIV_EVAL_REC_836_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_837(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_837_OVERLOAD(MACROLOP_PRIV_EVAL_REC_837_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_837_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_837_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_837_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_837_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_837_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_837_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_837_##choice
#define MACROLOP_PRIV_EVAL_REC_837_CONTINUE                   MACROLOP_PRIV_EVAL_REC_838
#define MACROLOP_PRIV_EVAL_REC_837_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_838(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_838_OVERLOAD(MACROLOP_PRIV_EVAL_REC_838_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_838_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_838_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_838_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_838_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_838_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_838_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_838_##choice
#define MACROLOP_PRIV_EVAL_REC_838_CONTINUE                   MACROLOP_PRIV_EVAL_REC_839
#define MACROLOP_PRIV_EVAL_REC_838_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_839(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_839_OVERLOAD(MACROLOP_PRIV_EVAL_REC_839_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_839_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_839_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_839_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_839_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_839_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_839_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_839_##choice
#define MACROLOP_PRIV_EVAL_REC_839_CONTINUE                   MACROLOP_PRIV_EVAL_REC_840
#define MACROLOP_PRIV_EVAL_REC_839_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_840(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_840_OVERLOAD(MACROLOP_PRIV_EVAL_REC_840_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_840_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_840_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_840_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_840_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_840_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_840_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_840_##choice
#define MACROLOP_PRIV_EVAL_REC_840_CONTINUE                   MACROLOP_PRIV_EVAL_REC_841
#define MACROLOP_PRIV_EVAL_REC_840_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_841(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_841_OVERLOAD(MACROLOP_PRIV_EVAL_REC_841_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_841_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_841_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_841_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_841_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_841_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_841_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_841_##choice
#define MACROLOP_PRIV_EVAL_REC_841_CONTINUE                   MACROLOP_PRIV_EVAL_REC_842
#define MACROLOP_PRIV_EVAL_REC_841_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_842(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_842_OVERLOAD(MACROLOP_PRIV_EVAL_REC_842_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_842_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_842_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_842_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_842_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_842_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_842_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_842_##choice
#define MACROLOP_PRIV_EVAL_REC_842_CONTINUE                   MACROLOP_PRIV_EVAL_REC_843
#define MACROLOP_PRIV_EVAL_REC_842_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_843(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_843_OVERLOAD(MACROLOP_PRIV_EVAL_REC_843_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_843_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_843_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_843_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_843_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_843_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_843_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_843_##choice
#define MACROLOP_PRIV_EVAL_REC_843_CONTINUE                   MACROLOP_PRIV_EVAL_REC_844
#define MACROLOP_PRIV_EVAL_REC_843_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_844(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_844_OVERLOAD(MACROLOP_PRIV_EVAL_REC_844_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_844_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_844_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_844_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_844_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_844_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_844_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_844_##choice
#define MACROLOP_PRIV_EVAL_REC_844_CONTINUE                   MACROLOP_PRIV_EVAL_REC_845
#define MACROLOP_PRIV_EVAL_REC_844_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_845(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_845_OVERLOAD(MACROLOP_PRIV_EVAL_REC_845_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_845_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_845_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_845_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_845_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_845_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_845_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_845_##choice
#define MACROLOP_PRIV_EVAL_REC_845_CONTINUE                   MACROLOP_PRIV_EVAL_REC_846
#define MACROLOP_PRIV_EVAL_REC_845_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_846(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_846_OVERLOAD(MACROLOP_PRIV_EVAL_REC_846_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_846_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_846_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_846_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_846_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_846_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_846_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_846_##choice
#define MACROLOP_PRIV_EVAL_REC_846_CONTINUE                   MACROLOP_PRIV_EVAL_REC_847
#define MACROLOP_PRIV_EVAL_REC_846_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_847(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_847_OVERLOAD(MACROLOP_PRIV_EVAL_REC_847_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_847_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_847_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_847_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_847_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_847_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_847_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_847_##choice
#define MACROLOP_PRIV_EVAL_REC_847_CONTINUE                   MACROLOP_PRIV_EVAL_REC_848
#define MACROLOP_PRIV_EVAL_REC_847_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_848(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_848_OVERLOAD(MACROLOP_PRIV_EVAL_REC_848_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_848_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_848_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_848_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_848_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_848_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_848_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_848_##choice
#define MACROLOP_PRIV_EVAL_REC_848_CONTINUE                   MACROLOP_PRIV_EVAL_REC_849
#define MACROLOP_PRIV_EVAL_REC_848_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_849(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_849_OVERLOAD(MACROLOP_PRIV_EVAL_REC_849_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_849_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_849_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_849_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_849_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_849_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_849_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_849_##choice
#define MACROLOP_PRIV_EVAL_REC_849_CONTINUE                   MACROLOP_PRIV_EVAL_REC_850
#define MACROLOP_PRIV_EVAL_REC_849_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_850(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_850_OVERLOAD(MACROLOP_PRIV_EVAL_REC_850_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_850_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_850_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_850_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_850_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_850_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_850_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_850_##choice
#define MACROLOP_PRIV_EVAL_REC_850_CONTINUE                   MACROLOP_PRIV_EVAL_REC_851
#define MACROLOP_PRIV_EVAL_REC_850_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_851(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_851_OVERLOAD(MACROLOP_PRIV_EVAL_REC_851_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_851_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_851_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_851_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_851_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_851_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_851_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_851_##choice
#define MACROLOP_PRIV_EVAL_REC_851_CONTINUE                   MACROLOP_PRIV_EVAL_REC_852
#define MACROLOP_PRIV_EVAL_REC_851_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_852(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_852_OVERLOAD(MACROLOP_PRIV_EVAL_REC_852_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_852_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_852_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_852_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_852_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_852_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_852_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_852_##choice
#define MACROLOP_PRIV_EVAL_REC_852_CONTINUE                   MACROLOP_PRIV_EVAL_REC_853
#define MACROLOP_PRIV_EVAL_REC_852_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_853(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_853_OVERLOAD(MACROLOP_PRIV_EVAL_REC_853_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_853_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_853_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_853_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_853_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_853_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_853_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_853_##choice
#define MACROLOP_PRIV_EVAL_REC_853_CONTINUE                   MACROLOP_PRIV_EVAL_REC_854
#define MACROLOP_PRIV_EVAL_REC_853_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_854(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_854_OVERLOAD(MACROLOP_PRIV_EVAL_REC_854_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_854_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_854_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_854_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_854_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_854_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_854_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_854_##choice
#define MACROLOP_PRIV_EVAL_REC_854_CONTINUE                   MACROLOP_PRIV_EVAL_REC_855
#define MACROLOP_PRIV_EVAL_REC_854_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_855(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_855_OVERLOAD(MACROLOP_PRIV_EVAL_REC_855_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_855_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_855_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_855_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_855_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_855_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_855_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_855_##choice
#define MACROLOP_PRIV_EVAL_REC_855_CONTINUE                   MACROLOP_PRIV_EVAL_REC_856
#define MACROLOP_PRIV_EVAL_REC_855_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_856(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_856_OVERLOAD(MACROLOP_PRIV_EVAL_REC_856_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_856_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_856_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_856_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_856_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_856_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_856_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_856_##choice
#define MACROLOP_PRIV_EVAL_REC_856_CONTINUE                   MACROLOP_PRIV_EVAL_REC_857
#define MACROLOP_PRIV_EVAL_REC_856_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_857(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_857_OVERLOAD(MACROLOP_PRIV_EVAL_REC_857_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_857_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_857_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_857_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_857_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_857_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_857_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_857_##choice
#define MACROLOP_PRIV_EVAL_REC_857_CONTINUE                   MACROLOP_PRIV_EVAL_REC_858
#define MACROLOP_PRIV_EVAL_REC_857_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_858(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_858_OVERLOAD(MACROLOP_PRIV_EVAL_REC_858_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_858_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_858_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_858_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_858_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_858_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_858_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_858_##choice
#define MACROLOP_PRIV_EVAL_REC_858_CONTINUE                   MACROLOP_PRIV_EVAL_REC_859
#define MACROLOP_PRIV_EVAL_REC_858_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_859(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_859_OVERLOAD(MACROLOP_PRIV_EVAL_REC_859_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_859_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_859_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_859_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_859_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_859_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_859_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_859_##choice
#define MACROLOP_PRIV_EVAL_REC_859_CONTINUE                   MACROLOP_PRIV_EVAL_REC_860
#define MACROLOP_PRIV_EVAL_REC_859_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_860(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_860_OVERLOAD(MACROLOP_PRIV_EVAL_REC_860_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_860_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_860_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_860_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_860_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_860_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_860_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_860_##choice
#define MACROLOP_PRIV_EVAL_REC_860_CONTINUE                   MACROLOP_PRIV_EVAL_REC_861
#define MACROLOP_PRIV_EVAL_REC_860_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_861(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_861_OVERLOAD(MACROLOP_PRIV_EVAL_REC_861_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_861_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_861_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_861_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_861_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_861_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_861_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_861_##choice
#define MACROLOP_PRIV_EVAL_REC_861_CONTINUE                   MACROLOP_PRIV_EVAL_REC_862
#define MACROLOP_PRIV_EVAL_REC_861_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_862(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_862_OVERLOAD(MACROLOP_PRIV_EVAL_REC_862_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_862_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_862_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_862_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_862_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_862_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_862_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_862_##choice
#define MACROLOP_PRIV_EVAL_REC_862_CONTINUE                   MACROLOP_PRIV_EVAL_REC_863
#define MACROLOP_PRIV_EVAL_REC_862_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_863(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_863_OVERLOAD(MACROLOP_PRIV_EVAL_REC_863_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_863_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_863_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_863_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_863_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_863_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_863_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_863_##choice
#define MACROLOP_PRIV_EVAL_REC_863_CONTINUE                   MACROLOP_PRIV_EVAL_REC_864
#define MACROLOP_PRIV_EVAL_REC_863_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_864(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_864_OVERLOAD(MACROLOP_PRIV_EVAL_REC_864_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_864_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_864_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_864_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_864_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_864_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_864_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_864_##choice
#define MACROLOP_PRIV_EVAL_REC_864_CONTINUE                   MACROLOP_PRIV_EVAL_REC_865
#define MACROLOP_PRIV_EVAL_REC_864_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_865(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_865_OVERLOAD(MACROLOP_PRIV_EVAL_REC_865_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_865_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_865_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_865_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_865_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_865_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_865_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_865_##choice
#define MACROLOP_PRIV_EVAL_REC_865_CONTINUE                   MACROLOP_PRIV_EVAL_REC_866
#define MACROLOP_PRIV_EVAL_REC_865_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_866(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_866_OVERLOAD(MACROLOP_PRIV_EVAL_REC_866_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_866_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_866_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_866_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_866_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_866_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_866_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_866_##choice
#define MACROLOP_PRIV_EVAL_REC_866_CONTINUE                   MACROLOP_PRIV_EVAL_REC_867
#define MACROLOP_PRIV_EVAL_REC_866_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_867(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_867_OVERLOAD(MACROLOP_PRIV_EVAL_REC_867_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_867_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_867_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_867_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_867_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_867_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_867_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_867_##choice
#define MACROLOP_PRIV_EVAL_REC_867_CONTINUE                   MACROLOP_PRIV_EVAL_REC_868
#define MACROLOP_PRIV_EVAL_REC_867_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_868(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_868_OVERLOAD(MACROLOP_PRIV_EVAL_REC_868_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_868_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_868_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_868_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_868_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_868_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_868_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_868_##choice
#define MACROLOP_PRIV_EVAL_REC_868_CONTINUE                   MACROLOP_PRIV_EVAL_REC_869
#define MACROLOP_PRIV_EVAL_REC_868_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_869(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_869_OVERLOAD(MACROLOP_PRIV_EVAL_REC_869_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_869_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_869_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_869_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_869_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_869_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_869_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_869_##choice
#define MACROLOP_PRIV_EVAL_REC_869_CONTINUE                   MACROLOP_PRIV_EVAL_REC_870
#define MACROLOP_PRIV_EVAL_REC_869_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_870(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_870_OVERLOAD(MACROLOP_PRIV_EVAL_REC_870_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_870_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_870_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_870_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_870_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_870_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_870_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_870_##choice
#define MACROLOP_PRIV_EVAL_REC_870_CONTINUE                   MACROLOP_PRIV_EVAL_REC_871
#define MACROLOP_PRIV_EVAL_REC_870_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_871(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_871_OVERLOAD(MACROLOP_PRIV_EVAL_REC_871_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_871_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_871_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_871_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_871_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_871_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_871_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_871_##choice
#define MACROLOP_PRIV_EVAL_REC_871_CONTINUE                   MACROLOP_PRIV_EVAL_REC_872
#define MACROLOP_PRIV_EVAL_REC_871_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_872(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_872_OVERLOAD(MACROLOP_PRIV_EVAL_REC_872_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_872_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_872_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_872_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_872_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_872_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_872_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_872_##choice
#define MACROLOP_PRIV_EVAL_REC_872_CONTINUE                   MACROLOP_PRIV_EVAL_REC_873
#define MACROLOP_PRIV_EVAL_REC_872_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_873(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_873_OVERLOAD(MACROLOP_PRIV_EVAL_REC_873_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_873_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_873_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_873_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_873_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_873_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_873_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_873_##choice
#define MACROLOP_PRIV_EVAL_REC_873_CONTINUE                   MACROLOP_PRIV_EVAL_REC_874
#define MACROLOP_PRIV_EVAL_REC_873_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_874(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_874_OVERLOAD(MACROLOP_PRIV_EVAL_REC_874_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_874_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_874_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_874_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_874_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_874_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_874_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_874_##choice
#define MACROLOP_PRIV_EVAL_REC_874_CONTINUE                   MACROLOP_PRIV_EVAL_REC_875
#define MACROLOP_PRIV_EVAL_REC_874_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_875(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_875_OVERLOAD(MACROLOP_PRIV_EVAL_REC_875_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_875_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_875_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_875_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_875_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_875_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_875_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_875_##choice
#define MACROLOP_PRIV_EVAL_REC_875_CONTINUE                   MACROLOP_PRIV_EVAL_REC_876
#define MACROLOP_PRIV_EVAL_REC_875_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_876(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_876_OVERLOAD(MACROLOP_PRIV_EVAL_REC_876_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_876_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_876_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_876_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_876_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_876_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_876_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_876_##choice
#define MACROLOP_PRIV_EVAL_REC_876_CONTINUE                   MACROLOP_PRIV_EVAL_REC_877
#define MACROLOP_PRIV_EVAL_REC_876_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_877(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_877_OVERLOAD(MACROLOP_PRIV_EVAL_REC_877_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_877_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_877_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_877_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_877_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_877_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_877_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_877_##choice
#define MACROLOP_PRIV_EVAL_REC_877_CONTINUE                   MACROLOP_PRIV_EVAL_REC_878
#define MACROLOP_PRIV_EVAL_REC_877_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_878(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_878_OVERLOAD(MACROLOP_PRIV_EVAL_REC_878_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_878_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_878_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_878_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_878_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_878_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_878_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_878_##choice
#define MACROLOP_PRIV_EVAL_REC_878_CONTINUE                   MACROLOP_PRIV_EVAL_REC_879
#define MACROLOP_PRIV_EVAL_REC_878_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_879(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_879_OVERLOAD(MACROLOP_PRIV_EVAL_REC_879_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_879_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_879_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_879_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_879_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_879_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_879_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_879_##choice
#define MACROLOP_PRIV_EVAL_REC_879_CONTINUE                   MACROLOP_PRIV_EVAL_REC_880
#define MACROLOP_PRIV_EVAL_REC_879_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_880(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_880_OVERLOAD(MACROLOP_PRIV_EVAL_REC_880_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_880_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_880_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_880_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_880_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_880_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_880_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_880_##choice
#define MACROLOP_PRIV_EVAL_REC_880_CONTINUE                   MACROLOP_PRIV_EVAL_REC_881
#define MACROLOP_PRIV_EVAL_REC_880_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_881(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_881_OVERLOAD(MACROLOP_PRIV_EVAL_REC_881_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_881_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_881_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_881_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_881_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_881_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_881_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_881_##choice
#define MACROLOP_PRIV_EVAL_REC_881_CONTINUE                   MACROLOP_PRIV_EVAL_REC_882
#define MACROLOP_PRIV_EVAL_REC_881_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_882(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_882_OVERLOAD(MACROLOP_PRIV_EVAL_REC_882_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_882_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_882_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_882_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_882_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_882_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_882_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_882_##choice
#define MACROLOP_PRIV_EVAL_REC_882_CONTINUE                   MACROLOP_PRIV_EVAL_REC_883
#define MACROLOP_PRIV_EVAL_REC_882_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_883(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_883_OVERLOAD(MACROLOP_PRIV_EVAL_REC_883_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_883_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_883_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_883_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_883_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_883_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_883_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_883_##choice
#define MACROLOP_PRIV_EVAL_REC_883_CONTINUE                   MACROLOP_PRIV_EVAL_REC_884
#define MACROLOP_PRIV_EVAL_REC_883_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_884(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_884_OVERLOAD(MACROLOP_PRIV_EVAL_REC_884_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_884_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_884_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_884_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_884_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_884_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_884_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_884_##choice
#define MACROLOP_PRIV_EVAL_REC_884_CONTINUE                   MACROLOP_PRIV_EVAL_REC_885
#define MACROLOP_PRIV_EVAL_REC_884_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_885(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_885_OVERLOAD(MACROLOP_PRIV_EVAL_REC_885_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_885_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_885_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_885_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_885_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_885_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_885_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_885_##choice
#define MACROLOP_PRIV_EVAL_REC_885_CONTINUE                   MACROLOP_PRIV_EVAL_REC_886
#define MACROLOP_PRIV_EVAL_REC_885_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_886(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_886_OVERLOAD(MACROLOP_PRIV_EVAL_REC_886_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_886_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_886_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_886_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_886_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_886_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_886_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_886_##choice
#define MACROLOP_PRIV_EVAL_REC_886_CONTINUE                   MACROLOP_PRIV_EVAL_REC_887
#define MACROLOP_PRIV_EVAL_REC_886_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_887(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_887_OVERLOAD(MACROLOP_PRIV_EVAL_REC_887_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_887_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_887_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_887_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_887_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_887_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_887_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_887_##choice
#define MACROLOP_PRIV_EVAL_REC_887_CONTINUE                   MACROLOP_PRIV_EVAL_REC_888
#define MACROLOP_PRIV_EVAL_REC_887_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_888(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_888_OVERLOAD(MACROLOP_PRIV_EVAL_REC_888_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_888_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_888_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_888_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_888_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_888_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_888_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_888_##choice
#define MACROLOP_PRIV_EVAL_REC_888_CONTINUE                   MACROLOP_PRIV_EVAL_REC_889
#define MACROLOP_PRIV_EVAL_REC_888_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_889(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_889_OVERLOAD(MACROLOP_PRIV_EVAL_REC_889_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_889_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_889_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_889_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_889_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_889_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_889_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_889_##choice
#define MACROLOP_PRIV_EVAL_REC_889_CONTINUE                   MACROLOP_PRIV_EVAL_REC_890
#define MACROLOP_PRIV_EVAL_REC_889_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_890(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_890_OVERLOAD(MACROLOP_PRIV_EVAL_REC_890_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_890_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_890_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_890_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_890_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_890_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_890_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_890_##choice
#define MACROLOP_PRIV_EVAL_REC_890_CONTINUE                   MACROLOP_PRIV_EVAL_REC_891
#define MACROLOP_PRIV_EVAL_REC_890_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_891(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_891_OVERLOAD(MACROLOP_PRIV_EVAL_REC_891_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_891_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_891_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_891_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_891_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_891_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_891_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_891_##choice
#define MACROLOP_PRIV_EVAL_REC_891_CONTINUE                   MACROLOP_PRIV_EVAL_REC_892
#define MACROLOP_PRIV_EVAL_REC_891_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_892(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_892_OVERLOAD(MACROLOP_PRIV_EVAL_REC_892_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_892_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_892_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_892_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_892_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_892_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_892_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_892_##choice
#define MACROLOP_PRIV_EVAL_REC_892_CONTINUE                   MACROLOP_PRIV_EVAL_REC_893
#define MACROLOP_PRIV_EVAL_REC_892_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_893(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_893_OVERLOAD(MACROLOP_PRIV_EVAL_REC_893_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_893_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_893_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_893_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_893_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_893_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_893_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_893_##choice
#define MACROLOP_PRIV_EVAL_REC_893_CONTINUE                   MACROLOP_PRIV_EVAL_REC_894
#define MACROLOP_PRIV_EVAL_REC_893_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_894(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_894_OVERLOAD(MACROLOP_PRIV_EVAL_REC_894_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_894_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_894_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_894_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_894_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_894_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_894_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_894_##choice
#define MACROLOP_PRIV_EVAL_REC_894_CONTINUE                   MACROLOP_PRIV_EVAL_REC_895
#define MACROLOP_PRIV_EVAL_REC_894_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_895(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_895_OVERLOAD(MACROLOP_PRIV_EVAL_REC_895_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_895_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_895_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_895_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_895_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_895_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_895_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_895_##choice
#define MACROLOP_PRIV_EVAL_REC_895_CONTINUE                   MACROLOP_PRIV_EVAL_REC_896
#define MACROLOP_PRIV_EVAL_REC_895_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_896(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_896_OVERLOAD(MACROLOP_PRIV_EVAL_REC_896_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_896_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_896_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_896_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_896_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_896_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_896_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_896_##choice
#define MACROLOP_PRIV_EVAL_REC_896_CONTINUE                   MACROLOP_PRIV_EVAL_REC_897
#define MACROLOP_PRIV_EVAL_REC_896_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_897(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_897_OVERLOAD(MACROLOP_PRIV_EVAL_REC_897_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_897_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_897_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_897_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_897_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_897_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_897_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_897_##choice
#define MACROLOP_PRIV_EVAL_REC_897_CONTINUE                   MACROLOP_PRIV_EVAL_REC_898
#define MACROLOP_PRIV_EVAL_REC_897_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_898(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_898_OVERLOAD(MACROLOP_PRIV_EVAL_REC_898_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_898_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_898_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_898_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_898_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_898_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_898_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_898_##choice
#define MACROLOP_PRIV_EVAL_REC_898_CONTINUE                   MACROLOP_PRIV_EVAL_REC_899
#define MACROLOP_PRIV_EVAL_REC_898_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_899(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_899_OVERLOAD(MACROLOP_PRIV_EVAL_REC_899_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_899_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_899_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_899_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_899_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_899_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_899_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_899_##choice
#define MACROLOP_PRIV_EVAL_REC_899_CONTINUE                   MACROLOP_PRIV_EVAL_REC_900
#define MACROLOP_PRIV_EVAL_REC_899_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_900(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_900_OVERLOAD(MACROLOP_PRIV_EVAL_REC_900_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_900_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_900_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_900_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_900_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_900_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_900_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_900_##choice
#define MACROLOP_PRIV_EVAL_REC_900_CONTINUE                   MACROLOP_PRIV_EVAL_REC_901
#define MACROLOP_PRIV_EVAL_REC_900_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_901(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_901_OVERLOAD(MACROLOP_PRIV_EVAL_REC_901_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_901_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_901_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_901_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_901_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_901_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_901_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_901_##choice
#define MACROLOP_PRIV_EVAL_REC_901_CONTINUE                   MACROLOP_PRIV_EVAL_REC_902
#define MACROLOP_PRIV_EVAL_REC_901_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_902(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_902_OVERLOAD(MACROLOP_PRIV_EVAL_REC_902_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_902_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_902_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_902_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_902_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_902_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_902_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_902_##choice
#define MACROLOP_PRIV_EVAL_REC_902_CONTINUE                   MACROLOP_PRIV_EVAL_REC_903
#define MACROLOP_PRIV_EVAL_REC_902_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_903(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_903_OVERLOAD(MACROLOP_PRIV_EVAL_REC_903_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_903_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_903_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_903_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_903_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_903_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_903_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_903_##choice
#define MACROLOP_PRIV_EVAL_REC_903_CONTINUE                   MACROLOP_PRIV_EVAL_REC_904
#define MACROLOP_PRIV_EVAL_REC_903_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_904(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_904_OVERLOAD(MACROLOP_PRIV_EVAL_REC_904_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_904_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_904_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_904_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_904_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_904_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_904_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_904_##choice
#define MACROLOP_PRIV_EVAL_REC_904_CONTINUE                   MACROLOP_PRIV_EVAL_REC_905
#define MACROLOP_PRIV_EVAL_REC_904_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_905(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_905_OVERLOAD(MACROLOP_PRIV_EVAL_REC_905_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_905_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_905_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_905_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_905_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_905_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_905_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_905_##choice
#define MACROLOP_PRIV_EVAL_REC_905_CONTINUE                   MACROLOP_PRIV_EVAL_REC_906
#define MACROLOP_PRIV_EVAL_REC_905_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_906(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_906_OVERLOAD(MACROLOP_PRIV_EVAL_REC_906_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_906_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_906_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_906_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_906_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_906_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_906_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_906_##choice
#define MACROLOP_PRIV_EVAL_REC_906_CONTINUE                   MACROLOP_PRIV_EVAL_REC_907
#define MACROLOP_PRIV_EVAL_REC_906_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_907(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_907_OVERLOAD(MACROLOP_PRIV_EVAL_REC_907_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_907_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_907_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_907_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_907_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_907_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_907_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_907_##choice
#define MACROLOP_PRIV_EVAL_REC_907_CONTINUE                   MACROLOP_PRIV_EVAL_REC_908
#define MACROLOP_PRIV_EVAL_REC_907_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_908(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_908_OVERLOAD(MACROLOP_PRIV_EVAL_REC_908_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_908_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_908_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_908_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_908_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_908_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_908_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_908_##choice
#define MACROLOP_PRIV_EVAL_REC_908_CONTINUE                   MACROLOP_PRIV_EVAL_REC_909
#define MACROLOP_PRIV_EVAL_REC_908_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_909(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_909_OVERLOAD(MACROLOP_PRIV_EVAL_REC_909_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_909_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_909_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_909_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_909_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_909_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_909_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_909_##choice
#define MACROLOP_PRIV_EVAL_REC_909_CONTINUE                   MACROLOP_PRIV_EVAL_REC_910
#define MACROLOP_PRIV_EVAL_REC_909_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_910(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_910_OVERLOAD(MACROLOP_PRIV_EVAL_REC_910_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_910_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_910_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_910_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_910_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_910_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_910_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_910_##choice
#define MACROLOP_PRIV_EVAL_REC_910_CONTINUE                   MACROLOP_PRIV_EVAL_REC_911
#define MACROLOP_PRIV_EVAL_REC_910_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_911(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_911_OVERLOAD(MACROLOP_PRIV_EVAL_REC_911_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_911_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_911_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_911_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_911_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_911_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_911_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_911_##choice
#define MACROLOP_PRIV_EVAL_REC_911_CONTINUE                   MACROLOP_PRIV_EVAL_REC_912
#define MACROLOP_PRIV_EVAL_REC_911_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_912(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_912_OVERLOAD(MACROLOP_PRIV_EVAL_REC_912_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_912_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_912_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_912_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_912_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_912_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_912_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_912_##choice
#define MACROLOP_PRIV_EVAL_REC_912_CONTINUE                   MACROLOP_PRIV_EVAL_REC_913
#define MACROLOP_PRIV_EVAL_REC_912_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_913(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_913_OVERLOAD(MACROLOP_PRIV_EVAL_REC_913_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_913_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_913_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_913_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_913_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_913_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_913_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_913_##choice
#define MACROLOP_PRIV_EVAL_REC_913_CONTINUE                   MACROLOP_PRIV_EVAL_REC_914
#define MACROLOP_PRIV_EVAL_REC_913_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_914(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_914_OVERLOAD(MACROLOP_PRIV_EVAL_REC_914_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_914_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_914_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_914_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_914_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_914_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_914_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_914_##choice
#define MACROLOP_PRIV_EVAL_REC_914_CONTINUE                   MACROLOP_PRIV_EVAL_REC_915
#define MACROLOP_PRIV_EVAL_REC_914_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_915(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_915_OVERLOAD(MACROLOP_PRIV_EVAL_REC_915_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_915_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_915_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_915_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_915_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_915_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_915_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_915_##choice
#define MACROLOP_PRIV_EVAL_REC_915_CONTINUE                   MACROLOP_PRIV_EVAL_REC_916
#define MACROLOP_PRIV_EVAL_REC_915_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_916(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_916_OVERLOAD(MACROLOP_PRIV_EVAL_REC_916_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_916_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_916_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_916_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_916_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_916_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_916_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_916_##choice
#define MACROLOP_PRIV_EVAL_REC_916_CONTINUE                   MACROLOP_PRIV_EVAL_REC_917
#define MACROLOP_PRIV_EVAL_REC_916_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_917(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_917_OVERLOAD(MACROLOP_PRIV_EVAL_REC_917_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_917_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_917_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_917_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_917_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_917_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_917_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_917_##choice
#define MACROLOP_PRIV_EVAL_REC_917_CONTINUE                   MACROLOP_PRIV_EVAL_REC_918
#define MACROLOP_PRIV_EVAL_REC_917_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_918(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_918_OVERLOAD(MACROLOP_PRIV_EVAL_REC_918_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_918_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_918_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_918_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_918_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_918_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_918_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_918_##choice
#define MACROLOP_PRIV_EVAL_REC_918_CONTINUE                   MACROLOP_PRIV_EVAL_REC_919
#define MACROLOP_PRIV_EVAL_REC_918_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_919(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_919_OVERLOAD(MACROLOP_PRIV_EVAL_REC_919_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_919_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_919_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_919_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_919_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_919_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_919_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_919_##choice
#define MACROLOP_PRIV_EVAL_REC_919_CONTINUE                   MACROLOP_PRIV_EVAL_REC_920
#define MACROLOP_PRIV_EVAL_REC_919_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_920(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_920_OVERLOAD(MACROLOP_PRIV_EVAL_REC_920_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_920_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_920_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_920_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_920_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_920_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_920_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_920_##choice
#define MACROLOP_PRIV_EVAL_REC_920_CONTINUE                   MACROLOP_PRIV_EVAL_REC_921
#define MACROLOP_PRIV_EVAL_REC_920_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_921(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_921_OVERLOAD(MACROLOP_PRIV_EVAL_REC_921_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_921_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_921_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_921_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_921_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_921_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_921_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_921_##choice
#define MACROLOP_PRIV_EVAL_REC_921_CONTINUE                   MACROLOP_PRIV_EVAL_REC_922
#define MACROLOP_PRIV_EVAL_REC_921_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_922(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_922_OVERLOAD(MACROLOP_PRIV_EVAL_REC_922_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_922_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_922_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_922_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_922_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_922_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_922_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_922_##choice
#define MACROLOP_PRIV_EVAL_REC_922_CONTINUE                   MACROLOP_PRIV_EVAL_REC_923
#define MACROLOP_PRIV_EVAL_REC_922_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_923(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_923_OVERLOAD(MACROLOP_PRIV_EVAL_REC_923_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_923_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_923_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_923_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_923_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_923_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_923_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_923_##choice
#define MACROLOP_PRIV_EVAL_REC_923_CONTINUE                   MACROLOP_PRIV_EVAL_REC_924
#define MACROLOP_PRIV_EVAL_REC_923_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_924(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_924_OVERLOAD(MACROLOP_PRIV_EVAL_REC_924_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_924_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_924_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_924_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_924_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_924_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_924_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_924_##choice
#define MACROLOP_PRIV_EVAL_REC_924_CONTINUE                   MACROLOP_PRIV_EVAL_REC_925
#define MACROLOP_PRIV_EVAL_REC_924_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_925(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_925_OVERLOAD(MACROLOP_PRIV_EVAL_REC_925_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_925_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_925_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_925_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_925_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_925_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_925_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_925_##choice
#define MACROLOP_PRIV_EVAL_REC_925_CONTINUE                   MACROLOP_PRIV_EVAL_REC_926
#define MACROLOP_PRIV_EVAL_REC_925_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_926(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_926_OVERLOAD(MACROLOP_PRIV_EVAL_REC_926_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_926_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_926_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_926_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_926_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_926_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_926_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_926_##choice
#define MACROLOP_PRIV_EVAL_REC_926_CONTINUE                   MACROLOP_PRIV_EVAL_REC_927
#define MACROLOP_PRIV_EVAL_REC_926_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_927(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_927_OVERLOAD(MACROLOP_PRIV_EVAL_REC_927_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_927_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_927_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_927_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_927_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_927_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_927_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_927_##choice
#define MACROLOP_PRIV_EVAL_REC_927_CONTINUE                   MACROLOP_PRIV_EVAL_REC_928
#define MACROLOP_PRIV_EVAL_REC_927_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_928(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_928_OVERLOAD(MACROLOP_PRIV_EVAL_REC_928_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_928_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_928_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_928_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_928_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_928_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_928_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_928_##choice
#define MACROLOP_PRIV_EVAL_REC_928_CONTINUE                   MACROLOP_PRIV_EVAL_REC_929
#define MACROLOP_PRIV_EVAL_REC_928_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_929(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_929_OVERLOAD(MACROLOP_PRIV_EVAL_REC_929_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_929_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_929_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_929_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_929_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_929_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_929_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_929_##choice
#define MACROLOP_PRIV_EVAL_REC_929_CONTINUE                   MACROLOP_PRIV_EVAL_REC_930
#define MACROLOP_PRIV_EVAL_REC_929_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_930(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_930_OVERLOAD(MACROLOP_PRIV_EVAL_REC_930_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_930_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_930_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_930_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_930_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_930_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_930_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_930_##choice
#define MACROLOP_PRIV_EVAL_REC_930_CONTINUE                   MACROLOP_PRIV_EVAL_REC_931
#define MACROLOP_PRIV_EVAL_REC_930_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_931(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_931_OVERLOAD(MACROLOP_PRIV_EVAL_REC_931_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_931_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_931_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_931_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_931_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_931_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_931_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_931_##choice
#define MACROLOP_PRIV_EVAL_REC_931_CONTINUE                   MACROLOP_PRIV_EVAL_REC_932
#define MACROLOP_PRIV_EVAL_REC_931_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_932(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_932_OVERLOAD(MACROLOP_PRIV_EVAL_REC_932_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_932_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_932_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_932_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_932_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_932_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_932_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_932_##choice
#define MACROLOP_PRIV_EVAL_REC_932_CONTINUE                   MACROLOP_PRIV_EVAL_REC_933
#define MACROLOP_PRIV_EVAL_REC_932_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_933(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_933_OVERLOAD(MACROLOP_PRIV_EVAL_REC_933_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_933_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_933_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_933_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_933_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_933_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_933_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_933_##choice
#define MACROLOP_PRIV_EVAL_REC_933_CONTINUE                   MACROLOP_PRIV_EVAL_REC_934
#define MACROLOP_PRIV_EVAL_REC_933_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_934(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_934_OVERLOAD(MACROLOP_PRIV_EVAL_REC_934_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_934_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_934_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_934_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_934_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_934_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_934_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_934_##choice
#define MACROLOP_PRIV_EVAL_REC_934_CONTINUE                   MACROLOP_PRIV_EVAL_REC_935
#define MACROLOP_PRIV_EVAL_REC_934_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_935(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_935_OVERLOAD(MACROLOP_PRIV_EVAL_REC_935_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_935_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_935_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_935_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_935_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_935_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_935_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_935_##choice
#define MACROLOP_PRIV_EVAL_REC_935_CONTINUE                   MACROLOP_PRIV_EVAL_REC_936
#define MACROLOP_PRIV_EVAL_REC_935_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_936(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_936_OVERLOAD(MACROLOP_PRIV_EVAL_REC_936_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_936_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_936_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_936_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_936_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_936_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_936_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_936_##choice
#define MACROLOP_PRIV_EVAL_REC_936_CONTINUE                   MACROLOP_PRIV_EVAL_REC_937
#define MACROLOP_PRIV_EVAL_REC_936_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_937(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_937_OVERLOAD(MACROLOP_PRIV_EVAL_REC_937_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_937_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_937_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_937_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_937_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_937_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_937_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_937_##choice
#define MACROLOP_PRIV_EVAL_REC_937_CONTINUE                   MACROLOP_PRIV_EVAL_REC_938
#define MACROLOP_PRIV_EVAL_REC_937_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_938(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_938_OVERLOAD(MACROLOP_PRIV_EVAL_REC_938_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_938_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_938_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_938_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_938_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_938_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_938_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_938_##choice
#define MACROLOP_PRIV_EVAL_REC_938_CONTINUE                   MACROLOP_PRIV_EVAL_REC_939
#define MACROLOP_PRIV_EVAL_REC_938_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_939(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_939_OVERLOAD(MACROLOP_PRIV_EVAL_REC_939_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_939_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_939_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_939_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_939_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_939_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_939_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_939_##choice
#define MACROLOP_PRIV_EVAL_REC_939_CONTINUE                   MACROLOP_PRIV_EVAL_REC_940
#define MACROLOP_PRIV_EVAL_REC_939_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_940(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_940_OVERLOAD(MACROLOP_PRIV_EVAL_REC_940_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_940_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_940_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_940_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_940_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_940_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_940_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_940_##choice
#define MACROLOP_PRIV_EVAL_REC_940_CONTINUE                   MACROLOP_PRIV_EVAL_REC_941
#define MACROLOP_PRIV_EVAL_REC_940_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_941(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_941_OVERLOAD(MACROLOP_PRIV_EVAL_REC_941_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_941_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_941_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_941_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_941_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_941_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_941_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_941_##choice
#define MACROLOP_PRIV_EVAL_REC_941_CONTINUE                   MACROLOP_PRIV_EVAL_REC_942
#define MACROLOP_PRIV_EVAL_REC_941_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_942(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_942_OVERLOAD(MACROLOP_PRIV_EVAL_REC_942_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_942_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_942_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_942_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_942_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_942_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_942_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_942_##choice
#define MACROLOP_PRIV_EVAL_REC_942_CONTINUE                   MACROLOP_PRIV_EVAL_REC_943
#define MACROLOP_PRIV_EVAL_REC_942_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_943(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_943_OVERLOAD(MACROLOP_PRIV_EVAL_REC_943_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_943_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_943_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_943_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_943_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_943_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_943_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_943_##choice
#define MACROLOP_PRIV_EVAL_REC_943_CONTINUE                   MACROLOP_PRIV_EVAL_REC_944
#define MACROLOP_PRIV_EVAL_REC_943_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_944(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_944_OVERLOAD(MACROLOP_PRIV_EVAL_REC_944_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_944_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_944_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_944_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_944_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_944_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_944_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_944_##choice
#define MACROLOP_PRIV_EVAL_REC_944_CONTINUE                   MACROLOP_PRIV_EVAL_REC_945
#define MACROLOP_PRIV_EVAL_REC_944_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_945(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_945_OVERLOAD(MACROLOP_PRIV_EVAL_REC_945_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_945_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_945_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_945_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_945_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_945_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_945_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_945_##choice
#define MACROLOP_PRIV_EVAL_REC_945_CONTINUE                   MACROLOP_PRIV_EVAL_REC_946
#define MACROLOP_PRIV_EVAL_REC_945_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_946(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_946_OVERLOAD(MACROLOP_PRIV_EVAL_REC_946_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_946_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_946_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_946_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_946_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_946_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_946_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_946_##choice
#define MACROLOP_PRIV_EVAL_REC_946_CONTINUE                   MACROLOP_PRIV_EVAL_REC_947
#define MACROLOP_PRIV_EVAL_REC_946_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_947(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_947_OVERLOAD(MACROLOP_PRIV_EVAL_REC_947_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_947_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_947_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_947_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_947_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_947_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_947_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_947_##choice
#define MACROLOP_PRIV_EVAL_REC_947_CONTINUE                   MACROLOP_PRIV_EVAL_REC_948
#define MACROLOP_PRIV_EVAL_REC_947_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_948(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_948_OVERLOAD(MACROLOP_PRIV_EVAL_REC_948_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_948_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_948_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_948_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_948_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_948_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_948_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_948_##choice
#define MACROLOP_PRIV_EVAL_REC_948_CONTINUE                   MACROLOP_PRIV_EVAL_REC_949
#define MACROLOP_PRIV_EVAL_REC_948_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_949(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_949_OVERLOAD(MACROLOP_PRIV_EVAL_REC_949_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_949_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_949_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_949_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_949_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_949_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_949_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_949_##choice
#define MACROLOP_PRIV_EVAL_REC_949_CONTINUE                   MACROLOP_PRIV_EVAL_REC_950
#define MACROLOP_PRIV_EVAL_REC_949_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_950(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_950_OVERLOAD(MACROLOP_PRIV_EVAL_REC_950_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_950_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_950_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_950_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_950_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_950_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_950_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_950_##choice
#define MACROLOP_PRIV_EVAL_REC_950_CONTINUE                   MACROLOP_PRIV_EVAL_REC_951
#define MACROLOP_PRIV_EVAL_REC_950_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_951(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_951_OVERLOAD(MACROLOP_PRIV_EVAL_REC_951_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_951_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_951_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_951_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_951_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_951_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_951_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_951_##choice
#define MACROLOP_PRIV_EVAL_REC_951_CONTINUE                   MACROLOP_PRIV_EVAL_REC_952
#define MACROLOP_PRIV_EVAL_REC_951_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_952(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_952_OVERLOAD(MACROLOP_PRIV_EVAL_REC_952_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_952_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_952_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_952_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_952_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_952_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_952_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_952_##choice
#define MACROLOP_PRIV_EVAL_REC_952_CONTINUE                   MACROLOP_PRIV_EVAL_REC_953
#define MACROLOP_PRIV_EVAL_REC_952_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_953(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_953_OVERLOAD(MACROLOP_PRIV_EVAL_REC_953_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_953_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_953_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_953_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_953_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_953_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_953_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_953_##choice
#define MACROLOP_PRIV_EVAL_REC_953_CONTINUE                   MACROLOP_PRIV_EVAL_REC_954
#define MACROLOP_PRIV_EVAL_REC_953_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_954(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_954_OVERLOAD(MACROLOP_PRIV_EVAL_REC_954_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_954_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_954_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_954_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_954_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_954_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_954_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_954_##choice
#define MACROLOP_PRIV_EVAL_REC_954_CONTINUE                   MACROLOP_PRIV_EVAL_REC_955
#define MACROLOP_PRIV_EVAL_REC_954_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_955(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_955_OVERLOAD(MACROLOP_PRIV_EVAL_REC_955_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_955_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_955_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_955_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_955_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_955_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_955_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_955_##choice
#define MACROLOP_PRIV_EVAL_REC_955_CONTINUE                   MACROLOP_PRIV_EVAL_REC_956
#define MACROLOP_PRIV_EVAL_REC_955_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_956(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_956_OVERLOAD(MACROLOP_PRIV_EVAL_REC_956_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_956_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_956_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_956_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_956_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_956_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_956_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_956_##choice
#define MACROLOP_PRIV_EVAL_REC_956_CONTINUE                   MACROLOP_PRIV_EVAL_REC_957
#define MACROLOP_PRIV_EVAL_REC_956_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_957(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_957_OVERLOAD(MACROLOP_PRIV_EVAL_REC_957_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_957_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_957_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_957_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_957_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_957_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_957_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_957_##choice
#define MACROLOP_PRIV_EVAL_REC_957_CONTINUE                   MACROLOP_PRIV_EVAL_REC_958
#define MACROLOP_PRIV_EVAL_REC_957_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_958(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_958_OVERLOAD(MACROLOP_PRIV_EVAL_REC_958_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_958_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_958_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_958_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_958_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_958_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_958_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_958_##choice
#define MACROLOP_PRIV_EVAL_REC_958_CONTINUE                   MACROLOP_PRIV_EVAL_REC_959
#define MACROLOP_PRIV_EVAL_REC_958_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_959(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_959_OVERLOAD(MACROLOP_PRIV_EVAL_REC_959_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_959_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_959_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_959_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_959_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_959_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_959_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_959_##choice
#define MACROLOP_PRIV_EVAL_REC_959_CONTINUE                   MACROLOP_PRIV_EVAL_REC_960
#define MACROLOP_PRIV_EVAL_REC_959_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_960(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_960_OVERLOAD(MACROLOP_PRIV_EVAL_REC_960_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_960_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_960_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_960_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_960_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_960_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_960_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_960_##choice
#define MACROLOP_PRIV_EVAL_REC_960_CONTINUE                   MACROLOP_PRIV_EVAL_REC_961
#define MACROLOP_PRIV_EVAL_REC_960_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_961(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_961_OVERLOAD(MACROLOP_PRIV_EVAL_REC_961_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_961_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_961_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_961_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_961_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_961_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_961_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_961_##choice
#define MACROLOP_PRIV_EVAL_REC_961_CONTINUE                   MACROLOP_PRIV_EVAL_REC_962
#define MACROLOP_PRIV_EVAL_REC_961_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_962(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_962_OVERLOAD(MACROLOP_PRIV_EVAL_REC_962_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_962_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_962_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_962_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_962_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_962_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_962_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_962_##choice
#define MACROLOP_PRIV_EVAL_REC_962_CONTINUE                   MACROLOP_PRIV_EVAL_REC_963
#define MACROLOP_PRIV_EVAL_REC_962_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_963(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_963_OVERLOAD(MACROLOP_PRIV_EVAL_REC_963_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_963_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_963_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_963_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_963_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_963_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_963_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_963_##choice
#define MACROLOP_PRIV_EVAL_REC_963_CONTINUE                   MACROLOP_PRIV_EVAL_REC_964
#define MACROLOP_PRIV_EVAL_REC_963_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_964(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_964_OVERLOAD(MACROLOP_PRIV_EVAL_REC_964_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_964_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_964_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_964_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_964_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_964_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_964_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_964_##choice
#define MACROLOP_PRIV_EVAL_REC_964_CONTINUE                   MACROLOP_PRIV_EVAL_REC_965
#define MACROLOP_PRIV_EVAL_REC_964_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_965(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_965_OVERLOAD(MACROLOP_PRIV_EVAL_REC_965_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_965_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_965_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_965_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_965_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_965_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_965_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_965_##choice
#define MACROLOP_PRIV_EVAL_REC_965_CONTINUE                   MACROLOP_PRIV_EVAL_REC_966
#define MACROLOP_PRIV_EVAL_REC_965_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_966(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_966_OVERLOAD(MACROLOP_PRIV_EVAL_REC_966_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_966_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_966_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_966_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_966_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_966_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_966_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_966_##choice
#define MACROLOP_PRIV_EVAL_REC_966_CONTINUE                   MACROLOP_PRIV_EVAL_REC_967
#define MACROLOP_PRIV_EVAL_REC_966_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_967(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_967_OVERLOAD(MACROLOP_PRIV_EVAL_REC_967_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_967_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_967_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_967_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_967_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_967_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_967_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_967_##choice
#define MACROLOP_PRIV_EVAL_REC_967_CONTINUE                   MACROLOP_PRIV_EVAL_REC_968
#define MACROLOP_PRIV_EVAL_REC_967_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_968(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_968_OVERLOAD(MACROLOP_PRIV_EVAL_REC_968_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_968_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_968_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_968_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_968_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_968_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_968_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_968_##choice
#define MACROLOP_PRIV_EVAL_REC_968_CONTINUE                   MACROLOP_PRIV_EVAL_REC_969
#define MACROLOP_PRIV_EVAL_REC_968_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_969(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_969_OVERLOAD(MACROLOP_PRIV_EVAL_REC_969_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_969_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_969_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_969_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_969_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_969_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_969_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_969_##choice
#define MACROLOP_PRIV_EVAL_REC_969_CONTINUE                   MACROLOP_PRIV_EVAL_REC_970
#define MACROLOP_PRIV_EVAL_REC_969_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_970(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_970_OVERLOAD(MACROLOP_PRIV_EVAL_REC_970_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_970_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_970_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_970_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_970_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_970_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_970_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_970_##choice
#define MACROLOP_PRIV_EVAL_REC_970_CONTINUE                   MACROLOP_PRIV_EVAL_REC_971
#define MACROLOP_PRIV_EVAL_REC_970_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_971(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_971_OVERLOAD(MACROLOP_PRIV_EVAL_REC_971_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_971_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_971_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_971_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_971_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_971_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_971_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_971_##choice
#define MACROLOP_PRIV_EVAL_REC_971_CONTINUE                   MACROLOP_PRIV_EVAL_REC_972
#define MACROLOP_PRIV_EVAL_REC_971_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_972(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_972_OVERLOAD(MACROLOP_PRIV_EVAL_REC_972_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_972_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_972_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_972_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_972_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_972_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_972_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_972_##choice
#define MACROLOP_PRIV_EVAL_REC_972_CONTINUE                   MACROLOP_PRIV_EVAL_REC_973
#define MACROLOP_PRIV_EVAL_REC_972_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_973(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_973_OVERLOAD(MACROLOP_PRIV_EVAL_REC_973_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_973_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_973_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_973_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_973_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_973_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_973_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_973_##choice
#define MACROLOP_PRIV_EVAL_REC_973_CONTINUE                   MACROLOP_PRIV_EVAL_REC_974
#define MACROLOP_PRIV_EVAL_REC_973_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_974(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_974_OVERLOAD(MACROLOP_PRIV_EVAL_REC_974_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_974_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_974_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_974_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_974_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_974_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_974_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_974_##choice
#define MACROLOP_PRIV_EVAL_REC_974_CONTINUE                   MACROLOP_PRIV_EVAL_REC_975
#define MACROLOP_PRIV_EVAL_REC_974_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_975(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_975_OVERLOAD(MACROLOP_PRIV_EVAL_REC_975_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_975_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_975_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_975_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_975_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_975_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_975_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_975_##choice
#define MACROLOP_PRIV_EVAL_REC_975_CONTINUE                   MACROLOP_PRIV_EVAL_REC_976
#define MACROLOP_PRIV_EVAL_REC_975_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_976(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_976_OVERLOAD(MACROLOP_PRIV_EVAL_REC_976_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_976_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_976_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_976_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_976_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_976_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_976_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_976_##choice
#define MACROLOP_PRIV_EVAL_REC_976_CONTINUE                   MACROLOP_PRIV_EVAL_REC_977
#define MACROLOP_PRIV_EVAL_REC_976_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_977(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_977_OVERLOAD(MACROLOP_PRIV_EVAL_REC_977_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_977_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_977_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_977_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_977_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_977_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_977_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_977_##choice
#define MACROLOP_PRIV_EVAL_REC_977_CONTINUE                   MACROLOP_PRIV_EVAL_REC_978
#define MACROLOP_PRIV_EVAL_REC_977_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_978(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_978_OVERLOAD(MACROLOP_PRIV_EVAL_REC_978_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_978_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_978_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_978_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_978_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_978_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_978_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_978_##choice
#define MACROLOP_PRIV_EVAL_REC_978_CONTINUE                   MACROLOP_PRIV_EVAL_REC_979
#define MACROLOP_PRIV_EVAL_REC_978_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_979(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_979_OVERLOAD(MACROLOP_PRIV_EVAL_REC_979_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_979_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_979_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_979_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_979_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_979_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_979_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_979_##choice
#define MACROLOP_PRIV_EVAL_REC_979_CONTINUE                   MACROLOP_PRIV_EVAL_REC_980
#define MACROLOP_PRIV_EVAL_REC_979_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_980(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_980_OVERLOAD(MACROLOP_PRIV_EVAL_REC_980_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_980_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_980_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_980_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_980_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_980_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_980_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_980_##choice
#define MACROLOP_PRIV_EVAL_REC_980_CONTINUE                   MACROLOP_PRIV_EVAL_REC_981
#define MACROLOP_PRIV_EVAL_REC_980_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_981(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_981_OVERLOAD(MACROLOP_PRIV_EVAL_REC_981_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_981_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_981_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_981_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_981_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_981_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_981_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_981_##choice
#define MACROLOP_PRIV_EVAL_REC_981_CONTINUE                   MACROLOP_PRIV_EVAL_REC_982
#define MACROLOP_PRIV_EVAL_REC_981_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_982(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_982_OVERLOAD(MACROLOP_PRIV_EVAL_REC_982_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_982_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_982_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_982_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_982_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_982_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_982_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_982_##choice
#define MACROLOP_PRIV_EVAL_REC_982_CONTINUE                   MACROLOP_PRIV_EVAL_REC_983
#define MACROLOP_PRIV_EVAL_REC_982_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_983(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_983_OVERLOAD(MACROLOP_PRIV_EVAL_REC_983_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_983_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_983_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_983_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_983_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_983_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_983_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_983_##choice
#define MACROLOP_PRIV_EVAL_REC_983_CONTINUE                   MACROLOP_PRIV_EVAL_REC_984
#define MACROLOP_PRIV_EVAL_REC_983_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_984(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_984_OVERLOAD(MACROLOP_PRIV_EVAL_REC_984_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_984_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_984_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_984_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_984_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_984_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_984_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_984_##choice
#define MACROLOP_PRIV_EVAL_REC_984_CONTINUE                   MACROLOP_PRIV_EVAL_REC_985
#define MACROLOP_PRIV_EVAL_REC_984_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_985(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_985_OVERLOAD(MACROLOP_PRIV_EVAL_REC_985_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_985_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_985_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_985_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_985_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_985_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_985_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_985_##choice
#define MACROLOP_PRIV_EVAL_REC_985_CONTINUE                   MACROLOP_PRIV_EVAL_REC_986
#define MACROLOP_PRIV_EVAL_REC_985_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_986(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_986_OVERLOAD(MACROLOP_PRIV_EVAL_REC_986_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_986_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_986_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_986_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_986_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_986_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_986_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_986_##choice
#define MACROLOP_PRIV_EVAL_REC_986_CONTINUE                   MACROLOP_PRIV_EVAL_REC_987
#define MACROLOP_PRIV_EVAL_REC_986_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_987(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_987_OVERLOAD(MACROLOP_PRIV_EVAL_REC_987_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_987_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_987_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_987_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_987_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_987_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_987_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_987_##choice
#define MACROLOP_PRIV_EVAL_REC_987_CONTINUE                   MACROLOP_PRIV_EVAL_REC_988
#define MACROLOP_PRIV_EVAL_REC_987_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_988(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_988_OVERLOAD(MACROLOP_PRIV_EVAL_REC_988_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_988_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_988_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_988_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_988_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_988_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_988_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_988_##choice
#define MACROLOP_PRIV_EVAL_REC_988_CONTINUE                   MACROLOP_PRIV_EVAL_REC_989
#define MACROLOP_PRIV_EVAL_REC_988_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_989(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_989_OVERLOAD(MACROLOP_PRIV_EVAL_REC_989_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_989_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_989_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_989_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_989_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_989_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_989_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_989_##choice
#define MACROLOP_PRIV_EVAL_REC_989_CONTINUE                   MACROLOP_PRIV_EVAL_REC_990
#define MACROLOP_PRIV_EVAL_REC_989_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_990(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_990_OVERLOAD(MACROLOP_PRIV_EVAL_REC_990_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_990_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_990_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_990_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_990_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_990_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_990_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_990_##choice
#define MACROLOP_PRIV_EVAL_REC_990_CONTINUE                   MACROLOP_PRIV_EVAL_REC_991
#define MACROLOP_PRIV_EVAL_REC_990_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_991(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_991_OVERLOAD(MACROLOP_PRIV_EVAL_REC_991_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_991_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_991_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_991_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_991_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_991_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_991_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_991_##choice
#define MACROLOP_PRIV_EVAL_REC_991_CONTINUE                   MACROLOP_PRIV_EVAL_REC_992
#define MACROLOP_PRIV_EVAL_REC_991_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_992(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_992_OVERLOAD(MACROLOP_PRIV_EVAL_REC_992_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_992_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_992_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_992_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_992_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_992_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_992_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_992_##choice
#define MACROLOP_PRIV_EVAL_REC_992_CONTINUE                   MACROLOP_PRIV_EVAL_REC_993
#define MACROLOP_PRIV_EVAL_REC_992_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_993(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_993_OVERLOAD(MACROLOP_PRIV_EVAL_REC_993_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_993_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_993_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_993_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_993_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_993_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_993_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_993_##choice
#define MACROLOP_PRIV_EVAL_REC_993_CONTINUE                   MACROLOP_PRIV_EVAL_REC_994
#define MACROLOP_PRIV_EVAL_REC_993_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_994(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_994_OVERLOAD(MACROLOP_PRIV_EVAL_REC_994_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_994_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_994_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_994_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_994_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_994_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_994_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_994_##choice
#define MACROLOP_PRIV_EVAL_REC_994_CONTINUE                   MACROLOP_PRIV_EVAL_REC_995
#define MACROLOP_PRIV_EVAL_REC_994_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_995(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_995_OVERLOAD(MACROLOP_PRIV_EVAL_REC_995_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_995_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_995_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_995_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_995_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_995_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_995_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_995_##choice
#define MACROLOP_PRIV_EVAL_REC_995_CONTINUE                   MACROLOP_PRIV_EVAL_REC_996
#define MACROLOP_PRIV_EVAL_REC_995_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_996(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_996_OVERLOAD(MACROLOP_PRIV_EVAL_REC_996_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_996_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_996_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_996_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_996_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_996_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_996_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_996_##choice
#define MACROLOP_PRIV_EVAL_REC_996_CONTINUE                   MACROLOP_PRIV_EVAL_REC_997
#define MACROLOP_PRIV_EVAL_REC_996_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_997(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_997_OVERLOAD(MACROLOP_PRIV_EVAL_REC_997_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_997_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_997_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_997_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_997_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_997_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_997_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_997_##choice
#define MACROLOP_PRIV_EVAL_REC_997_CONTINUE                   MACROLOP_PRIV_EVAL_REC_998
#define MACROLOP_PRIV_EVAL_REC_997_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_998(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_998_OVERLOAD(MACROLOP_PRIV_EVAL_REC_998_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_998_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_998_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_998_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_998_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_998_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_998_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_998_##choice
#define MACROLOP_PRIV_EVAL_REC_998_CONTINUE                   MACROLOP_PRIV_EVAL_REC_999
#define MACROLOP_PRIV_EVAL_REC_998_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_999(...)                                                            \
    MACROLOP_PRIV_EVAL_REC_999_OVERLOAD(MACROLOP_PRIV_EVAL_REC_999_GET_CHOICE(__VA_ARGS__))        \
    (MACROLOP_PRIV_EVAL_REC_999_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_999_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_999_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_999_OVERLOAD(choice)                                                \
    MACROLOP_PRIV_EVAL_REC_999_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_999_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_999_##choice
#define MACROLOP_PRIV_EVAL_REC_999_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1000
#define MACROLOP_PRIV_EVAL_REC_999_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1000(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1000_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1000_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1000_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1000_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1000_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1000_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1000_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1000_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1000_##choice
#define MACROLOP_PRIV_EVAL_REC_1000_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1001
#define MACROLOP_PRIV_EVAL_REC_1000_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1001(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1001_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1001_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1001_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1001_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1001_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1001_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1001_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1001_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1001_##choice
#define MACROLOP_PRIV_EVAL_REC_1001_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1002
#define MACROLOP_PRIV_EVAL_REC_1001_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1002(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1002_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1002_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1002_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1002_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1002_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1002_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1002_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1002_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1002_##choice
#define MACROLOP_PRIV_EVAL_REC_1002_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1003
#define MACROLOP_PRIV_EVAL_REC_1002_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1003(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1003_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1003_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1003_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1003_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1003_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1003_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1003_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1003_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1003_##choice
#define MACROLOP_PRIV_EVAL_REC_1003_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1004
#define MACROLOP_PRIV_EVAL_REC_1003_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1004(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1004_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1004_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1004_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1004_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1004_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1004_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1004_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1004_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1004_##choice
#define MACROLOP_PRIV_EVAL_REC_1004_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1005
#define MACROLOP_PRIV_EVAL_REC_1004_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1005(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1005_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1005_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1005_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1005_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1005_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1005_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1005_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1005_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1005_##choice
#define MACROLOP_PRIV_EVAL_REC_1005_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1006
#define MACROLOP_PRIV_EVAL_REC_1005_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1006(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1006_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1006_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1006_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1006_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1006_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1006_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1006_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1006_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1006_##choice
#define MACROLOP_PRIV_EVAL_REC_1006_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1007
#define MACROLOP_PRIV_EVAL_REC_1006_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1007(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1007_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1007_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1007_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1007_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1007_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1007_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1007_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1007_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1007_##choice
#define MACROLOP_PRIV_EVAL_REC_1007_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1008
#define MACROLOP_PRIV_EVAL_REC_1007_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1008(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1008_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1008_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1008_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1008_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1008_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1008_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1008_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1008_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1008_##choice
#define MACROLOP_PRIV_EVAL_REC_1008_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1009
#define MACROLOP_PRIV_EVAL_REC_1008_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1009(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1009_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1009_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1009_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1009_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1009_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1009_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1009_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1009_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1009_##choice
#define MACROLOP_PRIV_EVAL_REC_1009_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1010
#define MACROLOP_PRIV_EVAL_REC_1009_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1010(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1010_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1010_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1010_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1010_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1010_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1010_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1010_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1010_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1010_##choice
#define MACROLOP_PRIV_EVAL_REC_1010_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1011
#define MACROLOP_PRIV_EVAL_REC_1010_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1011(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1011_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1011_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1011_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1011_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1011_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1011_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1011_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1011_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1011_##choice
#define MACROLOP_PRIV_EVAL_REC_1011_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1012
#define MACROLOP_PRIV_EVAL_REC_1011_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1012(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1012_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1012_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1012_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1012_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1012_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1012_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1012_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1012_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1012_##choice
#define MACROLOP_PRIV_EVAL_REC_1012_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1013
#define MACROLOP_PRIV_EVAL_REC_1012_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1013(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1013_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1013_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1013_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1013_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1013_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1013_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1013_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1013_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1013_##choice
#define MACROLOP_PRIV_EVAL_REC_1013_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1014
#define MACROLOP_PRIV_EVAL_REC_1013_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1014(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1014_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1014_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1014_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1014_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1014_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1014_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1014_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1014_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1014_##choice
#define MACROLOP_PRIV_EVAL_REC_1014_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1015
#define MACROLOP_PRIV_EVAL_REC_1014_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1015(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1015_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1015_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1015_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1015_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1015_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1015_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1015_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1015_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1015_##choice
#define MACROLOP_PRIV_EVAL_REC_1015_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1016
#define MACROLOP_PRIV_EVAL_REC_1015_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1016(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1016_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1016_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1016_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1016_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1016_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1016_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1016_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1016_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1016_##choice
#define MACROLOP_PRIV_EVAL_REC_1016_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1017
#define MACROLOP_PRIV_EVAL_REC_1016_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1017(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1017_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1017_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1017_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1017_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1017_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1017_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1017_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1017_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1017_##choice
#define MACROLOP_PRIV_EVAL_REC_1017_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1018
#define MACROLOP_PRIV_EVAL_REC_1017_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1018(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1018_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1018_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1018_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1018_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1018_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1018_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1018_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1018_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1018_##choice
#define MACROLOP_PRIV_EVAL_REC_1018_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1019
#define MACROLOP_PRIV_EVAL_REC_1018_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1019(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1019_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1019_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1019_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1019_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1019_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1019_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1019_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1019_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1019_##choice
#define MACROLOP_PRIV_EVAL_REC_1019_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1020
#define MACROLOP_PRIV_EVAL_REC_1019_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1020(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1020_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1020_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1020_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1020_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1020_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1020_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1020_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1020_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1020_##choice
#define MACROLOP_PRIV_EVAL_REC_1020_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1021
#define MACROLOP_PRIV_EVAL_REC_1020_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1021(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1021_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1021_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1021_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1021_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1021_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1021_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1021_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1021_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1021_##choice
#define MACROLOP_PRIV_EVAL_REC_1021_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1022
#define MACROLOP_PRIV_EVAL_REC_1021_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1022(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1022_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1022_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1022_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1022_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1022_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1022_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1022_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1022_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1022_##choice
#define MACROLOP_PRIV_EVAL_REC_1022_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1023
#define MACROLOP_PRIV_EVAL_REC_1022_STOP(...)                  __VA_ARGS__

#define MACROLOP_PRIV_EVAL_REC_1023(...)                                                           \
    MACROLOP_PRIV_EVAL_REC_1023_OVERLOAD(MACROLOP_PRIV_EVAL_REC_1023_GET_CHOICE(__VA_ARGS__))      \
    (MACROLOP_PRIV_EVAL_REC_1023_GET_REST(__VA_ARGS__))
#define MACROLOP_PRIV_EVAL_REC_1023_GET_CHOICE(choice, ...) choice
#define MACROLOP_PRIV_EVAL_REC_1023_GET_REST(choice, ...)   __VA_ARGS__
#define MACROLOP_PRIV_EVAL_REC_1023_OVERLOAD(choice)                                               \
    MACROLOP_PRIV_EVAL_REC_1023_OVERLOAD_PRIMITIVE(choice)
#define MACROLOP_PRIV_EVAL_REC_1023_OVERLOAD_PRIMITIVE(choice) MACROLOP_PRIV_EVAL_REC_1023_##choice
#define MACROLOP_PRIV_EVAL_REC_1023_CONTINUE                   MACROLOP_PRIV_EVAL_REC_1024
#define MACROLOP_PRIV_EVAL_REC_1023_STOP(...)                  __VA_ARGS__

#endif // MACROLOP_EVAL_REC_UNROLL_0_TO_1023_H
