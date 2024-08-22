// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCPLAYBACKPOSITIONSYNCSERVICE_H
#define SBCPLAYBACKPOSITIONSYNCSERVICE_H

@class NSString;
@protocol SBCDomainSyncServiceProtocol;


#import "SBCPlaybackPositionService.h"

@interface SBCPlaybackPositionSyncService : SBCPlaybackPositionService <SBCDomainSyncServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif