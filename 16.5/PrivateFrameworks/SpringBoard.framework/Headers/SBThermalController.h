// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTHERMALCONTROLLER_H
#define SBTHERMALCONTROLLER_H

@class NSUUID, NSHashTable, SBThermalDefaults, SBSecurityDefaults, NSString;
@protocol SBFThermalBlockProvider;

#import <Foundation/Foundation.h>

#import "SBExternalWifiDefaults.h"

@interface SBThermalController : NSObject <SBFThermalBlockProvider>

 {
    NSUUID *_samplingToken;
    int _hotToken;
    NSUInteger _hotLevel;
    int _coldToken;
    NSUInteger _coldLevel;
    int _sunToken;
    NSUInteger _sunLevel;
    NSHashTable *_observers;
    SBExternalWifiDefaults *_networkDefaults;
    SBThermalDefaults *_thermalDefaults;
    SBSecurityDefaults *_securityDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInSunlight) BOOL inSunlight; // ivar: _inSunlight
@property (readonly, nonatomic) NSInteger level; // ivar: _level
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)logThermalEvent:(id)arg0 ;
-(BOOL)_isBlocked;
-(BOOL)isThermalBlocked;
-(id)init;
-(void)_respondToCurrentThermalCondition;
-(void)_setBlocked:(BOOL)arg0 ;
-(void)_updateThermalJetsamCPUSamplingState;
-(void)addThermalObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeThermalObserver:(id)arg0 ;
-(void)startListeningForThermalEvents;


@end


#endif