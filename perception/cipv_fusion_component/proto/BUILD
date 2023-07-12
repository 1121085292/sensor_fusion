# load("@rules_proto//proto:defs.bzl", "proto_library")
# load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@//tools:python_rules.bzl", "py_proto_library")

package(default_visibility = ["//visibility:public"])

#生成 proto 库
proto_library(
    name = "cipv_fusion_proto",
    srcs = ["cipv_fusion.proto",],
)

#生成 C++ 相关的源文件
cc_proto_library(
    name = "cipv_fusion_cc_proto",
    deps = [":cipv_fusion_proto",],
)

py_proto_library(
   name = "cipv_fusion_py_proto",
   deps = [":cipv_fusion_proto"],
)

proto_library(
    name = "car_state_proto",
    srcs = ["car_state.proto",],
)

#生成 C++ 相关的源文件
cc_proto_library(
    name = "car_state_cc_proto",
    deps = [":car_state_proto",],
)

py_proto_library(
   name = "car_state_py_proto",
   deps = [":car_state_proto"],
)
