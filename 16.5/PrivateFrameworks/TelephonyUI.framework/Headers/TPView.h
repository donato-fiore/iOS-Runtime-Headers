// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPVIEW_H
#define TPVIEW_H

@class UIView;



@interface TPView : UIView

@property (nonatomic, getter=isAccessiblityConstraintsEnabled) BOOL accessiblityConstraintsEnabled; // ivar: _accessiblityConstraintsEnabled
@property (nonatomic, getter=isConstraintsLoaded) BOOL constraintsLoaded; // ivar: _constraintsLoaded


+(BOOL)requiresConstraintBasedLayout;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)loadConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unloadConstraints;
-(void)updateConstraints;
-(void)updateConstraintsConstants;
-(void)updateFonts;


@end


#endif