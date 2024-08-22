// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITOOLTIPINTERACTION_H
#define UITOOLTIPINTERACTION_H

@class NSString;
@protocol UIToolTipProvider, _UIVisualStyleStylable, UIInteraction, UIToolTipInteractionDelegate;

#import <Foundation/Foundation.h>

#import "_UIToolTipInteractionStyle.h"
#import "UIView.h"

@interface UIToolTipInteraction : NSObject <UIToolTipProvider, _UIVisualStyleStylable, UIInteraction>

 {
    BOOL _delegateImplementsToolTipAtPoint;
    BOOL _isDefaultInteraction;
    _UIToolTipInteractionStyle *_style;
}


@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultToolTip; // ivar: _defaultToolTip
@property (weak, nonatomic) NSObject<UIToolTipInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


+(id)_defaultToolTipInteractionFromInteractions:(id)arg0 ;
+(id)_newDefaultToolTipInteraction;
+(id)visualStyleRegistryIdentity;
-(id)init;
-(id)initWithDefaultToolTip:(id)arg0 ;
-(id)toolTipAtPoint:(struct CGPoint )arg0 boundingRect:(struct CGRect *)arg1 ;
-(void)_refreshStyle;
-(void)_updateStyleForInteractionProperties;
-(void)didMoveToView:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif