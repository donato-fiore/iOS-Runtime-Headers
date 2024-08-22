// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPREVIEWACTIONSHEETTITLEVIEW_H
#define _UIPREVIEWACTIONSHEETTITLEVIEW_H

@class NSString;


#import "UIView.h"
#import "UILabel.h"

@interface _UIPreviewActionSheetTitleView : UIView

@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 title:(id)arg1 ;
-(void)_contentSizeChanged:(id)arg0 ;
-(void)_updateLabelFont;
-(void)dealloc;


@end


#endif