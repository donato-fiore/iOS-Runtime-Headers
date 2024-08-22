// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI26SPORTSKITSCOREBOARDMANAGER_H
#define _TTC8VIDEOSUI26SPORTSKITSCOREBOARDMANAGER_H

@class SwiftObject;



@interface _TtC8VideosUI26SportsKitScoreboardManager : SwiftObject {
    ? $defaultActor;
    ? $__lazy_storage_$_runningClockComponentsFormatter;
    ? $__lazy_storage_$_miniScorecardClockComponentsFormatter;
    ? listeners;
    ? _cachedScores;
    ? task;
    ? supportedLeagues;
    ? identifier;
    ? _demand;
    ? _demandCanceller;
    ? $__lazy_storage_$_timer;
    ? _timer;
    ? fetchTask;
    ? logger;
}




-(void)handleApplicationNotification:(id)arg0 ;


@end


#endif