// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUSYSTEMINFO_H
#define TSUSYSTEMINFO_H


#import <Foundation/Foundation.h>


@interface TSUSystemInfo : NSObject



+(id)deviceName;
+(id)hwModel;
+(id)macAddress;
+(id)operatingSystemName;
+(id)osVersion;
+(id)processorName;
+(id)systemVersion;


@end


#endif