// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCPLAYBACKPOSITIONSERVICE_H
#define SBCPLAYBACKPOSITIONSERVICE_H

@class NSString;
@protocol SBCPlaybackPositionServiceProtocol;


#import "SBCXPCService.h"
#import "SBCPlaybackPositionDomain.h"

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBCPlaybackPositionDomain *playbackPositionDomain; // ivar: _playbackPositionDomain
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usingPlaybackPositions; // ivar: _usingPlaybackPositions


+(Class)XPCServiceInterfaceClass;
+(id)_serviceForPlaybackPositionDomain:(id)arg0 ;
+(id)serviceForSyncDomain:(id)arg0 ;
+(id)serviceForValueDomain:(id)arg0 ;
-(id)initWithPlaybackPositionDomain:(id)arg0 ;
-(void)beginAccessingPlaybackPositionEntities;
-(void)deletePlaybackPositionEntities;
-(void)deletePlaybackPositionEntity:(id)arg0 ;
-(void)didConnectToService;
-(void)endAccessingPlaybackPositionEntities;
-(void)persistPlaybackPositionEntity:(id)arg0 isCheckpoint:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)pullLocalPlaybackPositionForEntityIdentifiers:(id)arg0 completionBlock:(id)arg1 ;
-(void)pullPlaybackPositionEntity:(id)arg0 completionBlock:(id)arg1 ;
-(void)pushPlaybackPositionEntity:(id)arg0 completionBlock:(id)arg1 ;
-(void)synchronizeImmediatelyWithCompletionHandler:(id)arg0 ;
-(void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg0 ;
-(void)validateConnectionConfiguration;


@end


#endif