// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKPLACEHOLDERTEXTVIEW_H
#define TSKPLACEHOLDERTEXTVIEW_H

@class UITextView, UILabel, NSString;



@interface TSKPlaceholderTextView : UITextView {
    UILabel *mPlaceholderView;
}


@property (retain, nonatomic) NSString *placeholder;


-(BOOL)becomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)p_textDidChange:(id)arg0 ;
-(void)removeFromSuperview;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextAlignment:(NSInteger)arg0 ;
-(void)setTextColor:(id)arg0 ;


@end


#endif