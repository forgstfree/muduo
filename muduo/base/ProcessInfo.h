// Copyright 2010, Shuo Chen.  All rights reserved.
// http://code.google.com/p/muduo/
//
// Use of this source code is governed by a BSD-style license
// that can be found in the License file.

// Author: Shuo Chen (chenshuo at chenshuo dot com)
//
// This is a public header file, it must only include public header files.

#ifndef MUDUO_BASE_PROCESSINFO_H
#define MUDUO_BASE_PROCESSINFO_H

#include <muduo/base/Types.h>

namespace muduo
{

namespace ProcessInfo
{
  /// read /proc/self/status
  string procStatus();

  
  int openedFiles();
}

}

#endif  // MUDUO_BASE_PROCESSINFO_H
