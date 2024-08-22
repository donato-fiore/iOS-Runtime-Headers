// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSENSORACTIVITYDATAPROVIDER_H
#define SBSENSORACTIVITYDATAPROVIDER_H

@class NSSet, STUIDataAccessStatusDomain, NSString, NSMutableSet;
@protocol SBFSensorActivityDataProvider;

#import <Foundation/Foundation.h>

#import "SBSensorActivityAttribution.h"

@interface SBSensorActivityDataProvider : NSObject <SBFSensorActivityDataProvider>



@property (readonly, copy, nonatomic) NSSet *activeAndRecentSensorActivityAttributions;
@property (readonly, copy, nonatomic) NSSet *activeCameraAndMicrophoneActivityAttributions;
@property (copy, nonatomic) NSSet *activeSensorActivityAttributions; // ivar: _activeSensorActivityAttributions
@property (readonly, nonatomic) STUIDataAccessStatusDomain *dataAccessDomain; // ivar: _dataAccessDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) SBSensorActivityAttribution *mostRecentCameraAndMicrophoneSensorActivityAttribution;
@property (readonly, copy, nonatomic) NSMutableSet *observers; // ivar: _observers
@property (copy, nonatomic) NSSet *recentSensorActivityAttributions; // ivar: _recentSensorActivityAttributions
@property (readonly) Class superclass;


-(id)_recentCameraAndMicrophoneActivityAttributions;
-(id)init;
-(id)initWithSystemStatusServer:(id)arg0 ;
-(void)_handleNewDomainData:(id)arg0 ;
-(void)_notifyObserversOfActivityChange;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif