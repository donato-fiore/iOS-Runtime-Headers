// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOBACKHAULHANDLERSTATE_H
#define NOBACKHAULHANDLERSTATE_H

@class NSDictionary;


#import "ExpertSystemStateCore.h"
#import "AWDSymptomsAdvisoryAlternateNetworkType.h"

@interface NoBackhaulHandlerState : ExpertSystemStateCore

@property (retain) AWDSymptomsAdvisoryAlternateNetworkType *awdMetric; // ivar: _awdMetric
@property (readonly) NSDictionary *entryCellPreds; // ivar: _entryCellPreds
@property (readonly) NSDictionary *entryWiFiPreds; // ivar: _entryWiFiPreds
@property (nonatomic) BOOL noPreconditions; // ivar: _noPreconditions


+(id)createAndInitializeAWDMetricForStateWithLevel:(int)arg0 activationIdentifier:(unsigned int)arg1 ;
+(id)createStateWithLabel:(id)arg0 rank:(NSUInteger)arg1 entryCellPreds:(id)arg2 entryWiFiPreds:(id)arg3 ;
-(id)_initStateWithLabel:(id)arg0 rank:(NSUInteger)arg1 entryCellPreds:(id)arg2 entryWiFiPreds:(id)arg3 ;


@end


#endif