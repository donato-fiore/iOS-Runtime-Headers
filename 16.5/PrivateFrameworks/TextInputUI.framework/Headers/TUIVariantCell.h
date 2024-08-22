// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIVARIANTCELL_H
#define TUIVARIANTCELL_H

@class UIView, NSArray, NSString, UILabel, UIKBRenderTraits;



@interface TUIVariantCell : UIView

@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) NSArray *cellConstraints; // ivar: _cellConstraints
@property (readonly, nonatomic) NSString *displayString; // ivar: _displayString
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) NSUInteger indexNumber; // ivar: _indexNumber
@property (readonly, nonatomic) UILabel *labelView; // ivar: _labelView
@property (nonatomic, getter=isPrimaryVariant) BOOL primaryVariant; // ivar: _primaryVariant
@property (retain, nonatomic) UIKBRenderTraits *traits; // ivar: _traits


-(BOOL)requiresConstraintBasedLayout;
-(id)constraintsToEmbedView:(id)arg0 withinView:(id)arg1 withInsets:(struct UIEdgeInsets )arg2 ;
-(id)fontForSymbolStyle:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 string:(id)arg1 traits:(id)arg2 ;
-(void)updateConstraints;


@end


#endif