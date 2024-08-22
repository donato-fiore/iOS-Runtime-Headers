// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNSLOCATIONMONITOR_H
#define UNSLOCATIONMONITOR_H

@class CLLocationManager, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UNSKeyedObservable.h"

@interface UNSLocationMonitor : NSObject <CLLocationManagerDelegate>

 {
    CLLocationManager *_locationManager;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 locationManager:(id)arg1 ;
-(id)initWithQueue:(id)arg0 locationManager:(id)arg1 observable:(id)arg2 ;
-(void)_queue_triggerDidFireForRegion:(id)arg0 ;
-(void)addObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)locationManager:(id)arg0 didEnterRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didExitRegion:(id)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didStartMonitoringForRegion:(id)arg1 ;
-(void)markAsHavingReceivedLocation;
-(void)removeObserver:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)setMonitoredRegions:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif