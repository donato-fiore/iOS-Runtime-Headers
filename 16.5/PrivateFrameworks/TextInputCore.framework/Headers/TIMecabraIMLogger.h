// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIMECABRAIMLOGGER_H
#define TIMECABRAIMLOGGER_H

@class NSMutableString;

#import <Foundation/Foundation.h>


@interface TIMecabraIMLogger : NSObject

@property (retain, nonatomic) NSMutableString *loggedMessage; // ivar: _loggedMessage


+(BOOL)isLoggingEnabled;
-(id)logFilePath;
-(void)beginLogging;
-(void)endLoggingForInput:(id)arg0 atFinalTimeMark:(NSUInteger)arg1 ;
-(void)markTime:(NSUInteger)arg0 ;
-(void)writeLogToFile;


@end


#endif