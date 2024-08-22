// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSINGLESCENEWINDOW_H
#define SBSINGLESCENEWINDOW_H

@class SBFWindow;



@interface SBSingleSceneWindow : SBFWindow

@property (nonatomic, getter=isSceneContentVisible) BOOL sceneContentVisible; // ivar: _sceneContentVisible


+(BOOL)_isSecure;
-(BOOL)isContentHidden;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithWindowScene:(id)arg0 ;


@end


#endif