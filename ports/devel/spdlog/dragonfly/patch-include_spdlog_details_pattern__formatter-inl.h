--- include/spdlog/details/pattern_formatter-inl.h.orig	2019-10-06 10:13:26 UTC
+++ include/spdlog/details/pattern_formatter-inl.h
@@ -14,6 +14,7 @@
 #include "spdlog/formatter.h"
 
 #include <array>
+#include <cassert>
 #include <chrono>
 #include <ctime>
 #include <cctype>
