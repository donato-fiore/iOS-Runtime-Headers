// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLAYBACKREPORTER_H
#define VUIPLAYBACKREPORTER_H

@class NSMutableArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface VUIPlaybackReporter : NSObject

@property (readonly, nonatomic) BOOL enforceSinglePlaybackSession; // ivar: _enforceSinglePlaybackSession
@property (retain, nonatomic) NSObject<OS_os_log> *logObject; // ivar: _logObject
@property (retain, nonatomic) NSMutableArray *sessions; // ivar: _sessions


-(BOOL)_isTransitionValidForPlayer:(id)arg0 fromState:(id)arg1 toState:(id)arg2 ;
-(id)_createSessionForPlayer:(id)arg0 ;
-(id)_sessionForPlayer:(id)arg0 ;
-(id)init;
-(void)_beginSession:(id)arg0 ;
-(void)_endSession:(id)arg0 ;
-(void)_endSessions:(id)arg0 ;
-(void)_handlePlaybackChangeForPlayer:(id)arg0 fromState:(id)arg1 toState:(id)arg2 reason:(id)arg3 ;
-(void)_logWithFormat:(id)arg0 ;
-(void)_playerCurrentMediaItemWillChange:(id)arg0 ;
-(void)_playerStateWillChange:(id)arg0 ;
-(void)_registerObservers;
-(void)_removeObservers;
-(void)_reportForSession:(id)arg0 state:(id)arg1 reason:(id)arg2 ;
-(void)dealloc;


@end


#endif