// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSKCELLEDITORFIELD_H
#define TSKCELLEDITORFIELD_H

@class UIView, NSString, UILabel, UITextView;



@interface TSKCellEditorField : UIView

@property (retain, nonatomic) NSString *leftSymbol;
@property (retain, nonatomic) UILabel *leftSymbolView; // ivar: mLeftSymbolView
@property (retain, nonatomic) NSString *rightSymbol;
@property (retain, nonatomic) UILabel *rightSymbolView; // ivar: mRightSymbolView
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UITextView *textView; // ivar: mTextView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)p_symbolContainerBackgroundColor;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif