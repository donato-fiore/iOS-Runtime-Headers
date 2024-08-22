// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKLOCATIONMANAGER_H
#define WLKLOCATIONMANAGER_H

@class CLLocationManager, NSXPCConnection, NSString, NSDictionary;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLKLocationManager : NSObject <CLLocationManagerDelegate>



@property (retain, nonatomic) CLLocationManager *clLocationManager; // ivar: _clLocationManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clQueue; // ivar: _clQueue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int didChangeNotificationToken; // ivar: _didChangeNotificationToken
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *lastKnownLocation; // ivar: _lastKnownLocation
@property (copy, nonatomic) id *locationUpdateBlock; // ivar: _locationUpdateBlock
@property (readonly) Class superclass;


+(id)defaultLocationManager;
-(BOOL)_isIgnorableLocationError:(id)arg0 ;
-(BOOL)_isLastKnownLocation:(id)arg0 freshForMaxAge:(CGFloat)arg1 fromNewTimestamp:(CGFloat)arg2 ;
-(BOOL)_isLastKnownLocation:(id)arg0 significantlyOlderThanNewLocation:(id)arg1 ;
-(BOOL)_isLastKnownLocationFresh:(id)arg0 ;
-(BOOL)_locationServicesEnabled;
-(BOOL)_shouldLastKnownLocation:(id)arg0 beUpdatedTo:(id)arg1 ;
-(BOOL)isAuthorizationApproved;
-(CGFloat)_getDistanceOfLastKnownLocationDictionary:(id)arg0 fromLocation:(id)arg1 ;
-(NSInteger)_statusForCLAuthorizationStatus:(int)arg0 ;
-(NSInteger)authorizationStatus;
-(id)_cachedDictionary:(BOOL)arg0 ;
-(id)_copyLastKnownLocation;
-(id)_createLocationObjFromLocationDictionary:(id)arg0 ;
-(id)_dictionaryForCLLocation:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_locationQueryParameters;
-(id)init;
-(void)_deleteLastKnownLocation;
-(void)_locationAuthorizationStatus:(id)arg0 ;
-(void)_networkReachbilityDidChange:(id)arg0 ;
-(void)_requestActiveLocationChangeUpdates;
-(void)_requestCLLocationUpdates:(id)arg0 ;
-(void)_requestRecentCLLocation:(id)arg0 ;
-(void)_updateLocationIfNeeded;
-(void)dealloc;
-(void)fetchAuthorizationStatus:(id)arg0 ;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)requestAuthorization;


@end


#endif