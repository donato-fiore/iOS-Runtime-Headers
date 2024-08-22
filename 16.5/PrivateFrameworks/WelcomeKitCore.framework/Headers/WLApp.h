// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLAPP_H
#define WLAPP_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface WLApp : NSObject

@property (retain, nonatomic) NSNumber *appStoreIdentifier; // ivar: _appStoreIdentifier
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) BOOL isFree; // ivar: _isFree


-(id)initWithBundleIdentifier:(id)arg0 appStoreIdentifier:(id)arg1 isFree:(BOOL)arg2 ;


@end


#endif