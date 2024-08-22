// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKKEYBOARDCAMERAGUIDANCEVIEW_H
#define VKKEYBOARDCAMERAGUIDANCEVIEW_H

@class UIView, UIVisualEffectView, UILabel, NSString;



@interface VKKeyboardCameraGuidanceView : UIView {
    BOOL _didAddConstraints;
    UIVisualEffectView *_blurView;
    UILabel *_label;
    UIEdgeInsets _contentEdgeInsets;
    CGFloat _visibleStartTime;
    CGFloat _lastVisibleTime;
    NSUInteger _state;
    NSString *_text;
}


@property (nonatomic) CGFloat preferredMaxLayoutWidth; // ivar: _preferredMaxLayoutWidth


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(void)_reallyHideGuidance;
-(void)_reallyShowGuidance;
-(void)didMoveToSuperview;
-(void)hideGuidance;
-(void)showGuidanceWithText:(id)arg0 ;


@end


#endif