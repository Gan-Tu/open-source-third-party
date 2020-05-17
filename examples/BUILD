load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "leveldb_main",
    srcs = ["leveldb_main.cc"],
    deps = ["@com_google_leveldb//:leveldb"],
)

cc_binary(
    name = "parallel_hashmap_main",
    srcs = ["parallel_hashmap_main.cc"],
    deps = [
        "@com_google_absl//absl/synchronization",
        "@parallel_hashmap",
    ],
)

cc_binary(
    name = "glog_main",
    srcs = ["glog_main.cc"],
    deps = [
        "@com_google_glog//:glog",
    ],
)

cc_binary(
    name = "ini_reader_main",
    srcs = ["ini_reader_main.cc"],
    data = ["data/test.config"],
    deps = ["@inih//:inih"],
)
