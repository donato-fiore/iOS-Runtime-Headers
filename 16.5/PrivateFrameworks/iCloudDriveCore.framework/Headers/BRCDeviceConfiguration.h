// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCDEVICECONFIGURATION_H
#define BRCDEVICECONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface BRCDeviceConfiguration : NSObject

@property (readonly, nonatomic) NSDictionary *configuration; // ivar: _configuration


-(id)getDeviceConfigurationString;
-(id)init;


@end


#endif