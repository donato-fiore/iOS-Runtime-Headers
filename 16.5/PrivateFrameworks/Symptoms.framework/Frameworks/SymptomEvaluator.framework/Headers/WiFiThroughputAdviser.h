// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFITHROUGHPUTADVISER_H
#define WIFITHROUGHPUTADVISER_H

@class NSString;
@protocol FlowScheduledRefreshDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FlowOracle.h"
#import "LargeTransferAssessor.h"
#import "ConfigurationParams.h"

@interface WiFiThroughputAdviser : NSObject <FlowScheduledRefreshDelegate>

 {
    BOOL _enabled;
    BOOL _cellOutrankAdvised;
    BOOL _cellOutrankAdvisedViaInterfaceUse;
    BOOL _cellOutrankAdvisedViaLargeTransfers;
    FlowOracle *_flowOracle;
    CGFloat _lastHighInterfaceUse;
    CGFloat _lastTransferSizeUse;
    CGFloat _lastHighInterfaceUseDampeningInterval;
    CGFloat _minTransferSizeThroughputForUpgrade;
    CGFloat _minRequiredLargeTransferThroughputForContinuedOutrank;
    unsigned int _numLowerTransferThresholdFlowsForUpperThreshold;
    LargeTransferAssessor *_transferAssessor;
    ConfigurationParams *_pendingConfigurationParams;
}


@property (nonatomic) BOOL cellOutrankAdvised;
@property (nonatomic) BOOL cellOutrankAdvisedViaInterfaceUse;
@property (nonatomic) BOOL cellOutrankAdvisedViaLargeTransfers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LargeTransferAssessor *largeTransferAssessor; // ivar: _largeTransferAssessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)setConfiguration:(id)arg0 ;
-(id)getStateAt:(CGFloat)arg0 ;
-(id)init;
-(int)didPollFlowsCallbackOrder;
-(int)largeTransfersMeetContinuedThreshold:(id)arg0 ;
-(int)largeTransfersMeetInitialThreshold:(id)arg0 ;
-(void)checkHeavyInterfaceUseAt:(CGFloat)arg0 ;
-(void)checkLargeTransfersAt:(CGFloat)arg0 ;
-(void)didPollFlowsAt:(CGFloat)arg0 periodic:(BOOL)arg1 ;
-(void)dumpStateAt:(CGFloat)arg0 ;
-(void)restoreDefaults;


@end


#endif