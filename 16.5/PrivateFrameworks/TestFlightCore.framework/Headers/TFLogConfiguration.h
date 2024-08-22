// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TFLOGCONFIGURATION_H
#define TFLOGCONFIGURATION_H

@class NSString;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TFLogConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSObject<OS_os_log> *generatedLogger;
@property (retain, nonatomic) NSObject<OS_os_log> *internalLogger; // ivar: _internalLogger
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalLoggerAccessQueue; // ivar: _internalLoggerAccessQueue
@property (readonly, copy, nonatomic) NSString *subsystem; // ivar: _subsystem


+(id)defaultConfiguration;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 ;


@end


#endif