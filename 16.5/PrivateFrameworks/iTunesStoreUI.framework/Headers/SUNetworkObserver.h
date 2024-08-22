// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUNETWORKOBSERVER_H
#define SUNETWORKOBSERVER_H

@class ISStoreURLOperation, NSTimer, NSString, NSNumber;
@protocol ISSingleton, ISStoreURLOperationDelegate;

#import <Foundation/Foundation.h>


@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate>

 {
    ISStoreURLOperation *_partnerDetectOperation;
    BOOL _partnersEnabled;
    NSTimer *_startupTimer;
    NSInteger _storeServicesNetworkUsageCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (retain, nonatomic) NSString *partnerIdentifier; // ivar: _partnerIdentifier
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(id)init;
-(void)_cancelStartupTimer;
-(void)_handleNetworkTypeChange:(id)arg0 ;
-(void)_handleUsingNetworkChange:(id)arg0 ;
-(void)_mainThreadHandleNetworkTypeChange:(id)arg0 ;
-(void)_mainThreadScheduleNetworkActivityUpdate;
-(void)_mainThreadSetPartnerIdentifier:(id)arg0 ;
-(void)_networkTypeChanged:(id)arg0 ;
-(void)_networkUsageStateChanged:(id)arg0 ;
-(void)_partnerHeaderChanged:(id)arg0 ;
-(void)_startupTimer:(id)arg0 ;
-(void)_storeServicesNetworkStartNotification:(id)arg0 ;
-(void)_storeServicesNetworkStopNotification:(id)arg0 ;
-(void)_updateNetworkActivityIndicator;
-(void)checkPartnerAvailability;
-(void)dealloc;
-(void)setPartnersEnabled:(BOOL)arg0 ;
-(void)startNetworkAvailabilityTimer;


@end


#endif