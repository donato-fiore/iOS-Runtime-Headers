// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKANIMATION_H
#define VKANIMATION_H

@class NSString;
@protocol VKAnimationRunner;

#import <Foundation/Foundation.h>


@interface VKAnimation : NSObject {
    id<VKAnimationRunner> *_runner;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) CGFloat duration;
@property (nonatomic) float frequency; // ivar: _frequency
@property (readonly, nonatomic) BOOL hasFrequency;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, nonatomic) BOOL running;
@property (nonatomic) BOOL runsForever; // ivar: _runsForever
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) BOOL timed;


-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)initWithPriority:(NSInteger)arg0 ;
-(id)initWithPriority:(NSInteger)arg0 name:(id)arg1 ;
-(void)onTimerFired:(CGFloat)arg0 ;
-(void)pause;
-(void)resume;
-(void)startWithRunner:(id)arg0 ;
-(void)stop;
-(void)stopAnimation:(BOOL)arg0 ;
-(void)transferToRunner:(id)arg0 ;


@end


#endif