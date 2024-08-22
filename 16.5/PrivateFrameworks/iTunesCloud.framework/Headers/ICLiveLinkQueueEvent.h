// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLIVELINKQUEUEEVENT_H
#define ICLIVELINKQUEUEEVENT_H


#import <Foundation/Foundation.h>

#import "ICLiveLinkQueueEventContentAdded.h"
#import "ICLiveLinkQueueEventContentPlayedNow.h"
#import "ICLiveLinkQueueEventContentRemoved.h"
#import "ICLiveLinkQueueEventContentReordered.h"
#import "ICLiveLinkQueueEventContentReplaced.h"
#import "ICLiveLinkQueueEventContentUpdatedMessage.h"
#import "ICLiveLinkQueueEventPlaybackModeChanged.h"

@interface ICLiveLinkQueueEvent : NSObject

@property (readonly, nonatomic) ICLiveLinkQueueEventContentAdded *contentAdded; // ivar: _contentAdded
@property (readonly, nonatomic) ICLiveLinkQueueEventContentPlayedNow *contentPlayedNow; // ivar: _contentPlayedNow
@property (readonly, nonatomic) ICLiveLinkQueueEventContentRemoved *contentRemoved; // ivar: _contentRemoved
@property (readonly, nonatomic) ICLiveLinkQueueEventContentReordered *contentReordered; // ivar: _contentReordered
@property (readonly, nonatomic) ICLiveLinkQueueEventContentReplaced *contentReplaced; // ivar: _contentReplaced
@property (readonly, nonatomic) ICLiveLinkQueueEventContentUpdatedMessage *contentUpdatedMessage; // ivar: _contentUpdatedMessage
@property (readonly, nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) ICLiveLinkQueueEventPlaybackModeChanged *playbackModeChanged; // ivar: _playbackModeChanged


+(id)queueEventWithContentAdded:(id)arg0 ;
+(id)queueEventWithContentPlayedNow:(id)arg0 ;
+(id)queueEventWithContentRemoved:(id)arg0 ;
+(id)queueEventWithContentReordered:(id)arg0 ;
+(id)queueEventWithContentReplaced:(id)arg0 ;
+(id)queueEventWithContentUpdatedMessage:(id)arg0 ;
+(id)queueEventWithPlaybackModeChanged:(id)arg0 ;
-(id)description;


@end


#endif