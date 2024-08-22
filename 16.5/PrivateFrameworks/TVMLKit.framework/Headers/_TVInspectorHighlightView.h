// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVINSPECTORHIGHLIGHTVIEW_H
#define _TVINSPECTORHIGHLIGHTVIEW_H

@class UIView, UIColor, UILabel, UIWindow;


#import "_TVInspectorHighlightMetadataView.h"

@interface _TVInspectorHighlightView : UIView {
    UIView *_highlightView;
    _TVInspectorHighlightMetadataView *_metadataView;
}


@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (retain, nonatomic) UIColor *contentColor;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (weak, nonatomic) UIWindow *targetWindow; // ivar: _targetWindow


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)highlightView:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif