load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library", "cc_proto_library", "cc_test")
load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
    name = "addressbook_proto",
    srcs = ["addressbook.proto"],
)

cc_proto_library(
    name = "cc_addressbook_proto",
    deps = [":addressbook_proto"],
)

cc_library(
    name = "hello",
    srcs = ["hello.cc"],
    hdrs = ["hello.h"],
    deps = [
        ":cc_addressbook_proto",
        "@com_google_absl//absl/strings",
    ],
)

cc_binary(
    name = "hello_main",
    srcs = ["hello_main.cc"],
    deps = [
        ":hello",
    ],
)

cc_test(
    name = "hello_test",
    srcs = ["hello_test.cc"],
    deps = [
        ":hello",
        "@com_google_test//:gtest",
        "@com_google_test//:gtest_main",
    ],
)
