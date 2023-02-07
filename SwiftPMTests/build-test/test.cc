// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// BoringSSL imports from gRPC
// Created using `git grep -h \<openssl | grep include | sort | uniq`
  
#include <BoringSSL-GRPC/bio.h>
#include <BoringSSL-GRPC/bn.h>
#include <BoringSSL-GRPC/buffer.h>
#include <BoringSSL-GRPC/crypto.h>
#include <BoringSSL-GRPC/engine.h>
#include <BoringSSL-GRPC/err.h>
#include <BoringSSL-GRPC/evp.h>
#include <BoringSSL-GRPC/hmac.h>
#include <BoringSSL-GRPC/pem.h>
#include <BoringSSL-GRPC/rsa.h>
#include <BoringSSL-GRPC/ssl.h>
#include <BoringSSL-GRPC/x509.h>
#include <BoringSSL-GRPC/x509v3.h>

// Test for duplicate `_main` symbol.
int main(int argc, char** argv) {}
