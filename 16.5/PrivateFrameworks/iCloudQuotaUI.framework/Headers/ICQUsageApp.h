// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUSAGEAPP_H
#define ICQUSAGEAPP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICQUsageApp : NSObject

@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *bundleVersion; // ivar: _bundleVersion
@property (readonly, nonatomic) float dataSize;
@property (nonatomic) float dynamicSize; // ivar: _dynamicSize
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) float specialSize; // ivar: _specialSize
@property (nonatomic) float staticSize; // ivar: _staticSize
@property (nonatomic, getter=isSystemApp) BOOL systemApp; // ivar: _systemApp
@property (readonly, nonatomic) float totalSize;




@end


#endif