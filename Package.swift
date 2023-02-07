// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let version = "0.0.1"

let package = Package(
  name: "BoringSSL-GRPC",
  products: [
    .library(
      name: "BoringSSL-GRPC",
      targets: ["BoringSSL-GRPC"]
    )
  ],
  targets: [
    .binaryTarget(
        name: "BoringSSL-GRPC",
        url: "https://github.com/ncooke3/boringSSL-SwiftPM/releases/download/\(version)/BoringSSL-GRPC.zip",
        checksum: "96275c1aa7e2f4a7d30e966d67d9696983c43f07805710cba5f406cef6ec8535"
    ),
    .testTarget(
      name: "build-test",
      dependencies: [
        "BoringSSL-GRPC",
      ],
      path: "SwiftPMTests/build-test"
    ),
  ],
  cxxLanguageStandard: CXXLanguageStandard.gnucxx14
)

