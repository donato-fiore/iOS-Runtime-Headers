// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFILOCALEMANAGER_H
#define WIFILOCALEMANAGER_H

@class NSDateFormatter, NSString;
@protocol WiFiLocationManagerDelegate, WiFiLocaleManagerDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WiFiLocationManager.h"

@interface WiFiLocaleManager : NSObject <WiFiLocationManagerDelegate>

 {
    *__CTServerConnection _ctServerConnectionRef;
}


@property int aggressiveRetryAttemptsRemaining; // ivar: _aggressiveRetryAttemptsRemaining
@property (retain) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WiFiLocaleManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property unsigned char isWaitingForLocationUpdate; // ivar: _isWaitingForLocationUpdate
@property BOOL localeCheckSuspended; // ivar: _localeCheckSuspended
@property (retain) NSString *localeCountryCode; // ivar: _localeCountryCode
@property CGFloat localeLastUpdatedTime; // ivar: _localeLastUpdatedTime
@property int localeSource; // ivar: _localeSource
@property CGFloat localeTimeout; // ivar: _localeTimeout
@property (retain) NSObject<OS_dispatch_source> *localeTimer; // ivar: _localeTimer
@property (retain) WiFiLocationManager *locationManager; // ivar: _locationManager
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain) NSObject<OS_dispatch_source> *retryTimer; // ivar: _retryTimer
@property (readonly) Class superclass;
@property (retain) NSString *testHost11d; // ivar: _testHost11d
@property int testMcc; // ivar: _testMcc
@property unsigned char testModeEnabled; // ivar: _testModeEnabled
@property (retain) NSString *testPeer; // ivar: _testPeer
@property (retain) NSString *testTimeZoneCC; // ivar: _testTimeZoneCC
@property (retain) NSString *testUserDefaults; // ivar: _testUserDefaults


+(id)getStringOfLocaleSource:(int)arg0 ;
-(BOOL)isDefaultCountryCode:(id)arg0 ;
-(BOOL)isLocaleCheckSuspended;
-(BOOL)shouldDetermineNewLocale;
-(CGFloat)getLocaleLastUpdatedTime;
-(id)applySetCountryCodeExceptions:(id)arg0 ;
-(id)getLocaleCountryCode;
-(id)getLocaleFromCompanion;
-(id)getLocaleFromLocation:(id)arg0 ;
-(id)getLocaleFromMcc;
-(id)getLocaleFromMultiple80211d;
-(id)getLocaleFromPeer;
-(id)getLocaleFromTimezone;
-(id)getLocaleFromUserDefaults;
-(id)getLocaleUsingBoundingBoxes:(id)arg0 ;
-(id)getLocaleUsingGeoLocationCache:(id)arg0 ;
-(id)getLocaleUsingReverseGeocoder:(id)arg0 ;
-(id)getRestrictedCountryCodeFromRegionInfo;
-(id)getRestrictedCountryCodeFromTimezone;
-(id)init;
-(int)getLocaleSource;
-(unsigned char)getNetworkReachability;
-(void)dealloc;
-(void)determineAndSetLocale:(unsigned char)arg0 ;
-(void)determineLocale:(unsigned char)arg0 ;
-(void)didChangeAuthorizationStatus;
-(void)didFailWithError:(id)arg0 ;
-(void)didUpdateLocations:(id)arg0 ;
-(void)retrySetCountryCode:(id)arg0 source:(int)arg1 ;
-(void)setCountryCode:(id)arg0 source:(int)arg1 ;
-(void)setLocaleTestParams:(id)arg0 ;


@end


#endif