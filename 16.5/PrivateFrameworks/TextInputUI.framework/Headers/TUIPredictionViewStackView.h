// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIPREDICTIONVIEWSTACKVIEW_H
#define TUIPREDICTIONVIEWSTACKVIEW_H

@class UIView;


#import "TUIPredictionViewStackContentView.h"

@interface TUIPredictionViewStackView : UIView

@property (nonatomic) UIEdgeInsets contentMargin; // ivar: _contentMargin
@property (retain, nonatomic) TUIPredictionViewStackContentView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection


-(NSInteger)_layoutTypeForSubview:(id)arg0 ;
-(id)allVisibleCells;
-(id)arrangedSubviews;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)subStackViews;
-(id)visibleCells;
-(void)addArrangedSubview:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif