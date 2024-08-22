// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWIDGETCONFIGURATIONCONTAINERVIEW_H
#define WFWIDGETCONFIGURATIONCONTAINERVIEW_H

@class UIView, NSLayoutConstraint, NSArray;
@protocol WFWidgetConfigurationContainerViewDelegate;


#import "WFWidgetConfigurationCardView.h"

@interface WFWidgetConfigurationContainerView : UIView {
    CGRect _configurationCardViewFrame;
}


@property (readonly, nonatomic) NSLayoutConstraint *avoidingKeyboardConstraint; // ivar: _avoidingKeyboardConstraint
@property (readonly, nonatomic) WFWidgetConfigurationCardView *cardView; // ivar: _cardView
@property (readonly, nonatomic) NSLayoutConstraint *configuratedCardHeightConstraint; // ivar: _configuratedCardHeightConstraint
@property (readonly, nonatomic) NSLayoutConstraint *configuratedCardOriginXConstraint; // ivar: _configuratedCardOriginXConstraint
@property (readonly, nonatomic) NSLayoutConstraint *configuratedCardOriginYConstraint; // ivar: _configuratedCardOriginYConstraint
@property (readonly, nonatomic) NSLayoutConstraint *configuratedCardWidthConstraint; // ivar: _configuratedCardWidthConstraint
@property (nonatomic) CGRect configurationCardViewFrame;
@property (readonly, nonatomic) NSArray *configuredCardLayoutConstraints; // ivar: _configuredCardLayoutConstraints
@property (readonly, nonatomic) NSLayoutConstraint *configuredSheetHeightConstraint; // ivar: _configuredSheetHeightConstraint
@property (readonly, nonatomic) NSArray *configuredSheetLayoutConstraints; // ivar: _configuredSheetLayoutConstraints
@property (readonly, nonatomic) NSLayoutConstraint *configuredSheetOriginXConstraint; // ivar: _configuredSheetOriginXConstraint
@property (readonly, nonatomic) NSLayoutConstraint *configuredSheetOriginYConstraint; // ivar: _configuredSheetOriginYConstraint
@property (readonly, nonatomic) NSLayoutConstraint *configuredSheetWidthConstraint; // ivar: _configuredSheetWidthConstraint
@property (readonly, nonatomic) NSArray *defaultCardLayoutConstraints; // ivar: _defaultCardLayoutConstraints
@property (weak, nonatomic) NSObject<WFWidgetConfigurationContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSLayoutConstraint *preferredCardHeightLayoutConstraint; // ivar: _preferredCardHeightLayoutConstraint
@property (readonly, nonatomic) NSLayoutConstraint *preferredCardWidthLayoutConstraint; // ivar: _preferredCardWidthLayoutConstraint
@property (nonatomic) NSUInteger widgetConfigurationStyle; // ivar: _widgetConfigurationStyle


-(id)initWithCardView:(id)arg0 preferredSize:(struct CGSize )arg1 ;
-(void)configureConstraints;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)requestDismissal;
-(void)setupConfiguredCardFrameConstraints;
-(void)setupConfiguredSheetFrameConstraints;
-(void)setupDefaultConstraintsWithPreferredSize:(struct CGSize )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif