// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TYLOGGER_H
#define TYLOGGER_H


#import <Foundation/Foundation.h>


@interface TYLogger : NSObject



+(id)openLogFile:(id)arg0 ;
+(id)openLogFile:(id)arg0 inDirectory:(id)arg1 ;
+(void)closeLogFile;
+(void)logToFile:(BOOL)arg0 ;
+(void)logToSTDERR:(BOOL)arg0 ;


@end


#endif