// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUINOWPLAYINGTIMERTRIGGEREDFEATURE_H
#define VUINOWPLAYINGTIMERTRIGGEREDFEATURE_H

@class NSString;
@protocol VUINowPlayingFeature;

#import <Foundation/Foundation.h>


@interface VUINowPlayingTimerTriggeredFeature : NSObject <VUINowPlayingFeature>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove; // ivar: _autoRemove
@property (readonly, nonatomic, getter=isBackgroundTimer) BOOL backgroundTimer; // ivar: _backgroundTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL repeats; // ivar: _repeats
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 duration:(CGFloat)arg1 repeats:(BOOL)arg2 ;
-(id)initWithType:(NSUInteger)arg0 duration:(CGFloat)arg1 repeats:(BOOL)arg2 backgroundTimer:(BOOL)arg3 ;


@end


#endif