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

# LevelDb
# Example dependency: "@com_google_leveldb//:leveldb"
http_archive(
    name = "com_google_leveldb",
    build_file = "//build_rules:leveldb.BUILD",
    sha256 = "55423cac9e3306f4a9502c738a001e4a339d1a38ffbee7572d4a07d5d63949b2",
    strip_prefix = "leveldb-1.22",
    urls = ["https://github.com/google/leveldb/archive/1.22.tar.gz"],
)

# Parallel Hashmap
# https://greg7mdp.github.io/parallel-hashmap/
http_archive(
    name = "parallel_hashmap",
    build_file = "//build_rules:parallel_hashmap.BUILD",
    sha256 = "1826589041140837f91ab0e3421abbf7e9184454bb83403b5a0359a0bf87bd68",
    strip_prefix = "parallel-hashmap-1.31",
    urls = ["https://github.com/greg7mdp/parallel-hashmap/archive/1.31.tar.gz"],
)

# Github gFlags
http_archive(
    name = "com_github_gflags_gflags",
    sha256 = "34af2f15cf7367513b352bdcd2493ab14ce43692d2dcd9dfc499492966c64dcf",
    strip_prefix = "gflags-2.2.2",
    urls = [
        "https://github.com/gflags/gflags/archive/v2.2.2.tar.gz",
    ],
)

# Google glog C++ logging library
# http://rpg.ifi.uzh.ch/docs/glog.html
# Example Usage: #include "glog/logging.h"
# Example dependency: "@com_google_glog//:glog"
http_archive(
    name = "com_google_glog",
    sha256 = "f28359aeba12f30d73d9e4711ef356dc842886968112162bc73002645139c39c",
    strip_prefix = "glog-0.4.0",
    urls = [
        "https://github.com/google/glog/archive/v0.4.0.tar.gz",
    ],
)
