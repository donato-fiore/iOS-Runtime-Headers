// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC5TEAUI32FULLSCREENTRANSITIONCOVERMANAGER_H
#define _TTC5TEAUI32FULLSCREENTRANSITIONCOVERMANAGER_H

@class SwiftObject;



@interface _TtC5TeaUI32FullscreenTransitionCoverManager : SwiftObject {
    ? closure;
    ? coverView;
    ? transitioning;
    ? dimmed;
}




-(void)didEndDimming;
-(void)didEndTransition;
-(void)didStartDimming;
-(void)didStartTransition;
-(void)willStartTransition;


@end


#endif