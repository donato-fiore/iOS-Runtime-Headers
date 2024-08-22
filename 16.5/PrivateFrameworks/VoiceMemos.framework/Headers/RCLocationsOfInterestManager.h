// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCLOCATIONSOFINTERESTMANAGER_H
#define RCLOCATIONSOFINTERESTMANAGER_H

@class CLLocationManager, CLLocation, NSArray, NSString;
@protocol CLLocationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate>

 {
    int _authorizationStatus;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    NSArray *_locationsOfInterest;
    BOOL _isFetchingPlacesOfInterest;
    BOOL _active;
    NSUInteger _placeInferencePolicy;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly) CLLocation *currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *locationsOfInterest;
@property (readonly) Class superclass;


+(id)defaultManager;
-(id)init;
-(void)_didFetchPlaceInferences:(id)arg0 location:(id)arg1 error:(id)arg2 ;
-(void)_requestPlaceInferences;
-(void)_startMonitoringLocation;
-(void)_stopMonitoringLocation;
-(void)locationManager:(id)arg0 didFailWithError:(id)arg1 ;
-(void)locationManager:(id)arg0 didUpdateLocations:(id)arg1 ;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif