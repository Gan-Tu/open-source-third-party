# Copyright 2020 Gan Tu
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "inih",
    srcs = [
        "cpp/INIReader.cpp",
        "cpp/INIReader.h",
        "ini.c",
        "ini.h",
    ],
    hdrs = ["cpp/INIReader.h"],
    # Make cpp/INIReader.h as inih/INIReader.h
    include_prefix = "inih",
    linkstatic = 1,
    strip_include_prefix = "cpp",
    visibility = ["//visibility:public"],
)
