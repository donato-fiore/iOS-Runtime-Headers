// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNOFFSCREENCONTROLLER_H
#define KNOFFSCREENCONTROLLER_H


#import <Foundation/Foundation.h>

#import "KNAnimatedSlideView.h"
#import "KNPlaybackSession.h"

@interface KNOffscreenController : NSObject

@property (readonly, weak, nonatomic) KNAnimatedSlideView *animatedSlideView; // ivar: _animatedSlideView
@property (readonly, nonatomic) CGSize outputSize; // ivar: _outputSize
@property (readonly, nonatomic) KNPlaybackSession *session; // ivar: _session


-(BOOL)gotoSlideNode:(id)arg0 andEvent:(NSUInteger)arg1 ;
-(id)initWithShow:(id)arg0 canvasDelegate:(id)arg1 ;
-(id)initWithShow:(id)arg0 canvasDelegate:(id)arg1 outputSize:(struct CGSize )arg2 ;
-(struct CGImage *)copyImageOfCurrentEventIgnoringBuildVisilibity:(BOOL)arg0 ;
-(void)dealloc;
-(void)drawCurrentEventIntoContext:(struct CGContext *)arg0 intoRect:(struct CGRect )arg1 ignoreBuildVisibility:(BOOL)arg2 ;
-(void)generateImageOfCurrentEventWithCompletonHandler:(id)arg0 ;


@end


#endif