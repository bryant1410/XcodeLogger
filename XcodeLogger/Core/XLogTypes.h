//
//  XLogTypes.h
//  XcodeLogger
//
/*  
 *  Created by Razvan Alin Tanase on 13/07/15. https://twitter.com/razvan_tanase
 *  Copyright (c) 2015 Codebringers Software. All rights reserved.
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in
 *  all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 *  THE SOFTWARE.
 *
 */// Project's Source: https://github.com/codeFi/XcodeLogger

#ifndef XcodeLogger_XLogTypes_h
#define XcodeLogger_XLogTypes_h

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#define XLColor UIColor
#else
#import <Cocoa/Cocoa.h>
#define XLColor NSColor
#endif

typedef NS_ENUM(unsigned int, XLOGGER_TYPE) {
    XLOGGER_TYPE_NSLOG_REPLACEMENT = 0,
    XLOGGER_TYPE_DEBUG,
    XLOGGER_TYPE_DEVELOPMENT,
    XLOGGER_TYPE_DEBUG_DEVELOPMENT,
    XLOGGER_TYPE_ONLINE_SERVICES,
    XLOGGER_TYPE_ALL
};

typedef NS_ENUM(unsigned int, XLOGGER_LEVEL) {
    XLOGGER_LEVEL_SIMPLE = 10,
    XLOGGER_LEVEL_SIMPLE_NO_HEADER,
    XLOGGER_LEVEL_INFORMATION,
    XLOGGER_LEVEL_IMPORTANT,
    XLOGGER_LEVEL_WARNING,
    XLOGGER_LEVEL_ERROR,
    XLOGGER_LEVEL_ALL
};

typedef NS_ENUM(unsigned int, XLOGGER_ARGS) {
    XLOGGER_ARGS_LOG_DESCRIPTION = 100,
    XLOGGER_ARGS_TIMESTAMP,
    XLOGGER_ARGS_CALLEE,
    XLOGGER_ARGS_CALLEE_METHOD,
    XLOGGER_ARGS_LINE_NUMBER,
    XLOGGER_ARGS_FILE_NAME
};

#pragma mark - CONVENIENCE MACROS
//XCODE LOGGER LEVELS
#define XL_LEVEL_SIMPLE           [NSNumber numberWithUnsignedInt:XLOGGER_LEVEL_SIMPLE]
#define XL_LEVEL_SIMPLE_NO_HEADER [NSNumber numberWithUnsignedInt:XLOGGER_LEVEL_SIMPLE_NO_HEADER]
#define XL_LEVEL_INFORMATION      [NSNumber numberWithUnsignedInt:XLOGGER_LEVEL_INFORMATION]
#define XL_LEVEL_IMPORTANT        [NSNumber numberWithUnsignedInt:XLOGGER_LEVEL_IMPORTANT]
#define XL_LEVEL_WARNING          [NSNumber numberWithUnsignedInt:XLOGGER_LEVEL_WARNING]
#define XL_LEVEL_ERROR            [NSNumber numberWithUnsignedInt:XLOGGER_LEVEL_ERROR]

//XCODE LOGGER'S ARGUMENTS FOR INFORMATION HEADER
#define XL_ARG_LOG_DESCRIPTION [NSNumber numberWithUnsignedInt:XLOGGER_ARGS_LOG_DESCRIPTION]
#define XL_ARG_TIMESTAMP       [NSNumber numberWithUnsignedInt:XLOGGER_ARGS_TIMESTAMP]
#define XL_ARG_CALLEE_ADDRESS  [NSNumber numberWithUnsignedInt:XLOGGER_ARGS_CALLEE]
#define XL_ARG_CALLEE_METHOD   [NSNumber numberWithUnsignedInt:XLOGGER_ARGS_CALLEE_METHOD]
#define XL_ARG_LINE_NUMBER     [NSNumber numberWithUnsignedInt:XLOGGER_ARGS_LINE_NUMBER]
#define XL_ARG_FILE_NAME       [NSNumber numberWithUnsignedInt:XLOGGER_ARGS_FILE_NAME]

//XCODE COLORS' STUFF
#define XCODE_COLORS_ESCAPE    @"\033["
#define XCODE_COLORS_RESET_FG  XCODE_COLORS_ESCAPE @"fg;" // Clear any foreground color
#define XCODE_COLORS_RESET_BG  XCODE_COLORS_ESCAPE @"bg;" // Clear any background color
#define XCODE_COLORS_RESET     XCODE_COLORS_ESCAPE @";"   // Clear any foreground or background color

#endif
