// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKTESTCASEWRITER_H
#define TTKTESTCASEWRITER_H


#import <Foundation/Foundation.h>


@interface TTKTestCaseWriter : NSObject



+(id)storeToDir:(id)arg0 inputMode:(id)arg1 layouts:(id)arg2 writeOnFlush:(BOOL)arg3 maxTestCasesPerFile:(unsigned int)arg4 maxFilesPerDirectory:(unsigned int)arg5 ;
+(id)storeToFile:(id)arg0 inputMode:(id)arg1 layouts:(id)arg2 ;


@end


#endif