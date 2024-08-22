// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYBOARDLAYOUTDICTATION_H
#define UIKEYBOARDLAYOUTDICTATION_H



#import "UIKeyboardLayout.h"
#import "UIKBBackgroundView.h"
#import "UIKBTree.h"

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {
    UIKBBackgroundView *_backgroundView;
    UIKBTree *_keyplane;
}




+(BOOL)keyboardInputMode:(id)arg0 supportsResizingOffsetForScreenTraits:(id)arg1 ;
+(id)activeInstance;
+(struct CGSize )keyboardSizeForInputMode:(id)arg0 screenTraits:(id)arg1 keyboardType:(NSInteger)arg2 ;
-(BOOL)shouldFadeFromLayout;
-(BOOL)shouldFadeToLayout;
-(BOOL)usesAutoShift;
-(BOOL)visible;
-(NSUInteger)_clipCornersOfView:(id)arg0 ;
-(id)currentKeyplane;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )dragGestureRectInView:(id)arg0 ;
-(struct CGSize )splitLeftSize;
-(void)_moveWithEvent:(id)arg0 ;
-(void)layoutSubviews;
-(void)setRenderConfig:(id)arg0 ;
-(void)setupBackgroundViewForNewSplitTraits:(id)arg0 ;
-(void)showKeyboardWithInputTraits:(id)arg0 screenTraits:(id)arg1 splitTraits:(id)arg2 ;


@end


#endif