// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCDEFAULTCITYMANAGER_H
#define WCDEFAULTCITYMANAGER_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WCDefaultCityManager : NSObject

@property (readonly, nonatomic) os_unfair_lock_s dataSynchronizationLock; // ivar: _dataSynchronizationLock
@property (retain, nonatomic) NSArray *defaultCities; // ivar: _defaultCities
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue; // ivar: _reloadQueue


-(id)defaultCityForLocalTimeZone;
-(id)init;
-(id)reloadDefaultCities;


@end


#endif