// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIPLAYBACKREPORTERVPAF_H
#define VUIPLAYBACKREPORTERVPAF_H

@class NSMapTable;


#import "VUIPlaybackReporter.h"

@interface VUIPlaybackReporterVPAF : VUIPlaybackReporter {
    NSMapTable *_pendingPlayerProperties;
}




+(id)sharedInstance;
-(BOOL)_isDelegatedForPlayer:(id)arg0 ;
-(BOOL)enforceSinglePlaybackSession;
-(NSUInteger)_capPlayHeadIfNeeded:(NSUInteger)arg0 forSession:(id)arg1 ;
-(id)_audioFormatForPlayer:(id)arg0 session:(id)arg1 ;
-(id)_audioInfoForPlayer:(id)arg0 ;
-(id)_colorRangeForPlayer:(id)arg0 ;
-(id)_connectionInfo;
-(id)_createSessionForPlayer:(id)arg0 ;
-(id)_delegatedInfoForPlayer:(id)arg0 ;
-(id)_downloadInfoForPlayer:(id)arg0 ;
-(id)_focusInfoForSession:(id)arg0 ;
-(id)_metricsForPlayer:(id)arg0 session:(id)arg1 ;
-(id)_metricsForSession:(id)arg0 ;
-(id)_playHeadDescriptionForTimeInMS:(NSUInteger)arg0 playbackDate:(id)arg1 ;
-(id)_screenInfo;
-(id)_sensitiveContentInfoForPlayer:(id)arg0 ;
-(id)_skipIntroActionForSession:(id)arg0 consume:(BOOL)arg1 ;
-(id)_subtitleInfoForPlayer:(id)arg0 ;
-(id)_trackerWithBaseEventDataForSession:(id)arg0 ;
-(id)_videoDisplayInfoForSession:(id)arg0 ;
-(id)init;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_createPlaybackDatePollingTimerForLiveStream:(id)arg0 ;
-(void)_endSession:(id)arg0 ;
-(void)_flushUnreportedEventsAfterDelay:(CGFloat)arg0 ;
-(void)_handleDisplaySizeChange:(id)arg0 ;
-(void)_handleIsPlaybackUIBeingShownDidChange:(id)arg0 ;
-(void)_handleMediaControllerNotification:(id)arg0 ;
-(void)_handlePIPChange:(id)arg0 ;
-(void)_handleSkipIntro_iOS:(id)arg0 ;
-(void)_invalidatePlaybackDatePollingTimerForLiveStream:(id)arg0 ;
-(void)_playerCurrentMediaItemWillSeek:(id)arg0 ;
-(void)_reportForSession:(id)arg0 state:(id)arg1 reason:(id)arg2 ;
-(void)_reportSeekStopAtTimeInMS:(NSUInteger)arg0 playbackDate:(id)arg1 session:(id)arg2 tracker:(id)arg3 player:(id)arg4 ;
-(void)_setSessionMetadataValue:(id)arg0 forKey:(id)arg1 player:(id)arg2 ;
-(void)dealloc;
-(void)flushUnreportedEvents;


@end


#endif