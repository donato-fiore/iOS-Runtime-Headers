// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFKEYBOARDTOOLBARACCESSORYVIEW_H
#define WFKEYBOARDTOOLBARACCESSORYVIEW_H

@class UIInputView, NSArray, NSString, UIToolbar;
@protocol UIInputViewAudioFeedback;



@interface WFKeyboardToolbarAccessoryView : UIInputView <UIInputViewAudioFeedback>



@property (copy, nonatomic) NSArray *barItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enableInputClicksWhenVisible;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIToolbar *toolbar; // ivar: _toolbar


-(BOOL)isPhoneUI;
-(CGFloat)borderedButtonWidthForButtonTitle:(id)arg0 font:(id)arg1 ;
-(CGFloat)inverseToolbarPadding;
-(CGFloat)keyboardButtonHeight;
-(id)borderedButtonItemWithTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(id)buttonImageWithSize:(struct CGSize )arg0 ;
-(id)fixedSpaceItemOfWidth:(CGFloat)arg0 ;
-(id)flexibleSpaceItem;
-(id)init;
-(id)plainButtonItemWithTitle:(id)arg0 bolded:(BOOL)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)appendBarItem:(id)arg0 ;
-(void)drawRoundedRectangleInRect:(struct CGRect )arg0 withContext:(struct CGContext *)arg1 color:(id)arg2 radius:(CGFloat)arg3 ;
-(void)prependBarItem:(id)arg0 ;
-(void)removeAllBarItems;


@end


#endif