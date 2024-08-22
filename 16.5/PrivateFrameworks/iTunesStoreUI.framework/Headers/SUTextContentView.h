// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUTEXTCONTENTVIEW_H
#define SUTEXTCONTENTVIEW_H

@class UITextContentView, UILabel, NSString;



@interface SUTextContentView : UITextContentView {
    UILabel *_placeholderLabel;
}


@property (retain, nonatomic) NSString *placeholder;


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)dealloc;
-(void)keyboardInputChangedSelection:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif