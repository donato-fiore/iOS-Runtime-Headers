// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNRECORDINGMOVIEEVENT_H
#define KNRECORDINGMOVIEEVENT_H

@class TSPLazyReference, TSDMovieInfo, NSUUID;


#import "KNRecordingEvent.h"

@interface KNRecordingMovieEvent : KNRecordingEvent {
    TSPLazyReference *_movieInfoReference;
}


@property (readonly, nonatomic) BOOL didPlayAcrossSlides; // ivar: _didPlayAcrossSlides
@property (readonly, nonatomic) NSInteger movieEventType; // ivar: _movieEventType
@property (readonly, nonatomic) CGFloat movieEventValue; // ivar: _movieEventValue
@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) NSUUID *movieSlideNodeUUID; // ivar: _movieSlideNodeUUID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStartTime:(CGFloat)arg0 movieInfo:(id)arg1 movieSlideNodeUUID:(id)arg2 didPlayAcrossSlides:(BOOL)arg3 movieEventType:(NSInteger)arg4 movieEventValue:(CGFloat)arg5 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 parentEventTrack:(id)arg2 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif