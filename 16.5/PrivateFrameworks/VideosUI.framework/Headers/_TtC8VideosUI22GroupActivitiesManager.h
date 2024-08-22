// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI22GROUPACTIVITIESMANAGER_H
#define _TTC8VIDEOSUI22GROUPACTIVITIESMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC8VideosUI22GroupActivitiesManager : NSObject {
    ? _session;
    ? subscriptions;
    ? sessionStateObserver;
    ? sessionActivityObserver;
    ? sessionActivityParticipantsObserver;
    ? dismissDelayTimer;
    ? endSessionReason;
    ? previousState;
    ? modifyingActivityIdentifier;
    ? _isSessionActive;
    ? metricsDictionary;
    ? participantsCountMax;
    ? participantsCount;
    ? playerObserver;
    ? sharedPlayer;
    ? _sceneIdentifier;
    ? _associateSceneIdentifier;
}


@property (nonatomic) BOOL isSessionActive;
@property (nonatomic, copy) NSString *sceneIdentifier;


-(id)init;


@end


#endif