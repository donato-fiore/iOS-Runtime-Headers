// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEODBHANDLER_H
#define GEODBHANDLER_H

@class NSString, NSDate;
@protocol ProxyAnalyticsDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CellularStateRelay.h"
#import "NetworkAnalyticsStateRelay.h"
#import "LocationStateRelay.h"
#import "ProxyAnalytics.h"

@interface GeoDBHandler : NSObject <ProxyAnalyticsDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol>

 {
    unsigned int _adminState;
    CellularStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    LocationStateRelay *_locationRelay;
    id *_relayReadyObserver;
    id *_cellEpochObserver;
    id *_wifiEpochObserver;
    NSString *_cellPublicIPPrefix;
    NSString *_wifiPublicIPPrefix;
    NSString *_lastReportedCellPrefix;
    NSString *_lastReportedWiFiPrefix;
    NSDate *_lastReportedCellPrefixDate;
    NSDate *_lastReportedWiFiPrefixDate;
    BOOL _adminStateSettled;
    BOOL _observingSystemSettingsRelay;
    BOOL _cellEpochReady;
    BOOL _wifiEpochReady;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ProxyAnalytics *proxyAnalytics; // ivar: _proxyAnalytics
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)noteSymptom:(id)arg0 ;
-(BOOL)processSymptom:(id)arg0 ;
-(BOOL)shouldHandleGeoDB;
-(NSInteger)nwInterfaceTypeFromAPSDInterface:(NSUInteger)arg0 ;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_administrativeDisable;
-(void)_administrativeEnable;
-(void)completeInitialization;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)processSymptomForInterfaceType:(NSInteger)arg0 ;
-(void)requestReverseGeocodeCompleteForLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 interfaceType:(NSInteger)arg2 adminArea:(id)arg3 countryCode:(id)arg4 error:(id)arg5 ;
-(void)requestReverseGeocodeForLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 reply:(id)arg2 ;
-(void)submitGeoDBAttributes:(id)arg0 ;


@end


#endif