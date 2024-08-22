// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNRECORDINGNAVIGATIONEVENT_H
#define KNRECORDINGNAVIGATIONEVENT_H

@class TSPObjectContext, NSUUID;


#import "KNRecordingEvent.h"
#import "KNSlideNode.h"

@interface KNRecordingNavigationEvent : KNRecordingEvent {
    TSPObjectContext *_targetSlideNodeContextReference;
    NSUUID *_targetSlideNodeUUID;
}


@property (readonly, nonatomic) NSInteger animationPhase; // ivar: _animationPhase
@property (readonly, nonatomic) NSUInteger targetEventIndex; // ivar: _targetEventIndex
@property (readonly, nonatomic) KNSlideNode *targetSlideNode;


-(BOOL)canPrecedeDiscontinuity;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIgnoredWhenSeeking;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStartTime:(CGFloat)arg0 targetSlideNode:(id)arg1 targetEventIndex:(NSUInteger)arg2 animationPhase:(NSInteger)arg3 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 parentEventTrack:(id)arg2 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif