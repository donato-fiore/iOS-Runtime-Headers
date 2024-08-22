// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTEXTSCROLLVIEW_H
#define WFTEXTSCROLLVIEW_H

@class UIScrollView, NSString, UITextView;
@protocol UITextViewDelegate;



@interface WFTextScrollView : UIScrollView <UITextViewDelegate>



@property (nonatomic, getter=isAdjustmentEnabled) BOOL adjustmentEnabled; // ivar: _adjustmentEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) _NSRange selectedRange; // ivar: _selectedRange
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextView *textView; // ivar: _textView
@property (weak, nonatomic) NSObject<UITextViewDelegate> *textViewDelegate; // ivar: _textViewDelegate


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithTextView:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)layoutSubviews;
-(void)textUpdated;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif