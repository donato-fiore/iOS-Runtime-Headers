// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCUIDICTATIONTEXTFIELD_H
#define VCUIDICTATIONTEXTFIELD_H

@class UITextView;



@interface VCUIDictationTextField : UITextView



+(CGFloat)bottomPadding;
-(id)placeholderLabel;
-(struct CGSize )intrinsicContentSize;
-(void)dictationDidFinish:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setAttributedPlaceholder:(id)arg0 ;
-(void)startDictation;


@end


#endif