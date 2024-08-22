// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIGIFTTEXTTABLEVIEWCELL_H
#define SKUIGIFTTEXTTABLEVIEWCELL_H

@class UITableViewCell, UIView, UILabel, NSString, UITextView;
@protocol UITextViewDelegate;



@interface SKUIGiftTextTableViewCell : UITableViewCell <UITextViewDelegate>

 {
    UIView *_bottomBorderView;
    UILabel *_label;
    UILabel *_placeholderLabel;
    UIView *_topBorderView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL leftToRight; // ivar: _leftToRight
@property (nonatomic) NSInteger maximumCharacterCount; // ivar: _maximumCharacterCount
@property (copy, nonatomic) NSString *placeholder;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextView *textView; // ivar: _textView


+(id)newTextView;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif