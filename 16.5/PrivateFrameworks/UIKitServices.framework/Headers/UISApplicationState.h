// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISAPPLICATIONSTATE_H
#define UISAPPLICATIONSTATE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "UISApplicationStateClient.h"

@interface UISApplicationState : NSObject {
    NSString *_bundleIdentifier;
    UISApplicationStateClient *_client;
}


@property (nonatomic, setter=_setNextWakeDate:) NSDate *_nextWakeDate;
@property (nonatomic, setter=_setUsesBackgroundNetwork:) BOOL _usesBackgroundNetwork;
@property (copy, nonatomic) id *badgeValue;


-(id)init;
-(id)initForCurrentApplication;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)_setMinimumBackgroundFetchInterval:(CGFloat)arg0 ;
-(void)dealloc;


@end


#endif