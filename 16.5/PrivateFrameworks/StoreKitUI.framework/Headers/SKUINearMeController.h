// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUINEARMECONTROLLER_H
#define SKUINEARMECONTROLLER_H

@class NSArray, SSLookupRequest, CLLocationManager, NSString, NSDictionary;
@protocol CLLocationManagerDelegate, SKUIItemStateCenterObserver, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUINearMeController : NSObject <CLLocationManagerDelegate, SKUIItemStateCenterObserver>

 {
    NSArray *_items;
    BOOL _isMonitoring;
    SSLookupRequest *_lookupRequest;
    CLLocationManager *_locationManager;
    int _authorizationStatus;
    NSObject<OS_dispatch_source> *_locationTimeoutTimer;
    NSInteger _locationTimeoutCount;
    NSObject<OS_dispatch_source> *_refreshTimer;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)isNearMeLocationStatusEnabled;
-(id)init;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_disableNearMe;
-(void)_finishLookupWithItems:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)_lookupItemsForLocation:(id)arg0 ;
-(void)_monitorLocationTimeout;
-(void)_refreshTimeout;
-(void)_startMonitoringLocation;
-(void)_startRefreshTimer;
-(void)_stopMonitoringLocation;
-(void)_stopRefreshTimer;
-(void)disable;
-(void)getItems;
-(void)itemStateCenterRestrictionsChanged:(id)arg0 ;
-(void)locationManager:(id)arg0 didChangeAuthorizationStatus:(int)arg1 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;


@end


#endif