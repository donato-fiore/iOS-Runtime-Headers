// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFLOATABLEBARBUTTONITEM_H
#define _UIFLOATABLEBARBUTTONITEM_H



#import "UIBarButtonItem.h"
#import "UIView.h"

@interface _UIFloatableBarButtonItem : UIBarButtonItem

@property (retain, nonatomic, setter=_setConfiguredFloatableView:) UIView *_configuredFloatableView; // ivar: _configuredFloatableView
@property (nonatomic, getter=_isFloatable, setter=_setFloatable:) BOOL _floatable; // ivar: _floatable
@property (nonatomic, getter=_isFloating, setter=_setFloating:) BOOL _floating; // ivar: _floating
@property (retain, nonatomic, setter=_setReferenceView:) UIView *_referenceView; // ivar: _referenceView


-(id)description;


@end


#endif