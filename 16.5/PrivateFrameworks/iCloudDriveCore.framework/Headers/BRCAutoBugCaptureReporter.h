// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCAUTOBUGCAPTUREREPORTER_H
#define BRCAUTOBUGCAPTUREREPORTER_H


#import <Foundation/Foundation.h>


@interface BRCAutoBugCaptureReporter : NSObject



+(void)captureLogsForOperationType:(id)arg0 ofSubtype:(id)arg1 forError:(id)arg2 ;
+(void)captureLogsForOperationType:(id)arg0 ofSubtype:(id)arg1 forError:(id)arg2 waitForCompletion:(BOOL)arg3 ;
+(void)captureLogsForOperationType:(id)arg0 ofSubtype:(id)arg1 withContext:(id)arg2 ;
+(void)captureLogsForOperationType:(id)arg0 ofSubtype:(id)arg1 withContext:(id)arg2 waitForCompletion:(BOOL)arg3 ;


@end


#endif