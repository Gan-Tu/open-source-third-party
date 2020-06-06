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
    deps = ["@inih"],
)

cc_binary(
    name = "yaml_main",
    srcs = ["yaml_main.cc"],
    data = ["data/test.yaml"],
    deps = [
        "@com_google_glog//:glog",
        "@yaml_cpp//:yaml-cpp",
    ],
)

cc_binary(
    name = "benchmark_main",
    srcs = ["benchmark_main.cc"],
    deps = [
        "@com_google_benchmark//:benchmark",
    ],
)
