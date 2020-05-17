load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Google Abseil C++ Library
http_archive(
    name = "com_google_absl",
    sha256 = "f41868f7a938605c92936230081175d1eae87f6ea2c248f41077c8f88316f111",
    strip_prefix = "abseil-cpp-20200225.2",
    urls = [
        "https://github.com/abseil/abseil-cpp/archive/20200225.2.tar.gz",
    ],
)

# Google Protocol Buffers.
http_archive(
    name = "rules_proto",
    sha256 = "602e7161d9195e50246177e7c55b2f39950a9cf7366f74ed5f22fd45750cd208",
    strip_prefix = "rules_proto-97d8af4dc474595af3900dd85cb3a29ad28cc313",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/rules_proto/archive/97d8af4dc474595af3900dd85cb3a29ad28cc313.tar.gz",
        "https://github.com/bazelbuild/rules_proto/archive/97d8af4dc474595af3900dd85cb3a29ad28cc313.tar.gz",
    ],
)

load("@rules_proto//proto:repositories.bzl", "rules_proto_dependencies", "rules_proto_toolchains")

rules_proto_dependencies()

rules_proto_toolchains()

# GoogleTest
http_archive(
    name = "com_google_test",
    sha256 = "9dc9157a9a1551ec7a7e43daea9a694a0bb5fb8bec81235d8a1e6ef64c716dcb",
    strip_prefix = "googletest-release-1.10.0",
    urls = [
        "https://github.com/google/googletest/archive/release-1.10.0.tar.gz",
    ],
)
