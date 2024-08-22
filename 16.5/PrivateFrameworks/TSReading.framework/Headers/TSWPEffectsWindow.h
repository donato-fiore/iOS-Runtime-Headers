// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPEFFECTSWINDOW_H
#define TSWPEFFECTSWINDOW_H

@class UIWindow, UITextView;



@interface TSWPEffectsWindow : UIWindow {
    BOOL _readyToGo;
    unsigned int _activeEffectsCount;
    UITextView *_dummyToReclaimFirstResponder;
}




+(id)sharedEffectsWindowAboveStatusBar;
+(id)sharedEffectsWindowAboveStatusBarForView:(id)arg0 ;
-(BOOL)_canAffectStatusBarAppearance;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didAddSubview:(id)arg0 ;
-(void)pDidChangeStatusBarOrientation:(id)arg0 ;
-(void)p_updateForOrientation:(NSInteger)arg0 ;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif