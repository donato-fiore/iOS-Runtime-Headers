// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTERFACETYPETRACKER_H
#define INTERFACETYPETRACKER_H

@class NSArray, NSDate, NWUsageTargetSelector, NSMutableDictionary;
@protocol flowDispositionObserver;

#import <Foundation/Foundation.h>

#import "TrackerPolicy.h"
#import "LightweightTimer.h"
#import "NetworkAnalyticsStateRelay.h"

@interface InterfaceTypeTracker : NSObject

@property (retain) NSArray *alwaysNote; // ivar: _alwaysNote
@property (retain) NSArray *daemonCheck; // ivar: _daemonCheck
@property (retain) TrackerPolicy *defaultPolicy; // ivar: _defaultPolicy
@property NSInteger interfaceType; // ivar: _interfaceType
@property (retain) LightweightTimer *lwTimer; // ivar: _lwTimer
@property (retain) NSDate *madePrimaryDate; // ivar: _madePrimaryDate
@property (retain) NSArray *neverNote; // ivar: _neverNote
@property (retain) NSObject<flowDispositionObserver> *observer; // ivar: _observer
@property (retain) NetworkAnalyticsStateRelay *stateRelay; // ivar: _stateRelay
@property (retain) NWUsageTargetSelector *targetFlowsNewWiFi; // ivar: _targetFlowsNewWiFi
@property (retain) NSMutableDictionary *trackerCache; // ivar: _trackerCache


-(NSUInteger)scheduleExpiryCheckFor:(NSUInteger)arg0 delay:(CGFloat)arg1 ;
-(id)description;
-(id)infoDir;
-(id)initWithInterfaceType:(NSInteger)arg0 ;
-(void)_dumpState;
-(void)configurePolicies:(id)arg0 ;
-(void)dealloc;
-(void)getNetworkActivity:(id)arg0 ;
-(void)noteFlow:(id)arg0 withDelegatee:(id)arg1 snapshot:(id)arg2 ;
-(void)noteFlow:(id)arg0 withOwner:(id)arg1 snapshot:(id)arg2 ;
-(void)noteFlowClassificationExpiry:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeLinkages:(id)arg0 ;
-(void)setupLightweightTimer;


@end


#endif