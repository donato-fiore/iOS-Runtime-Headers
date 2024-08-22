// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICUSTOMVIEWMENUELEMENT_H
#define UICUSTOMVIEWMENUELEMENT_H

@class NSAttributedString, NSString;
@protocol _UIMenuLeaf, UIPopoverPresentationControllerSourceItem;


#import "UIMenuElement.h"
#import "UIView.h"
#import "UIImage.h"

@interface UICustomViewMenuElement : UIMenuElement <_UIMenuLeaf>



@property (nonatomic, setter=_setForceCustomViewSupport:) BOOL _forceCustomViewSupport; // ivar: _forceCustomViewSupport
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) NSUInteger attributes; // ivar: attributes
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *discoverabilityTitle; // ivar: discoverabilityTitle
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (retain, nonatomic) UIMenuElement *menuElementRepresentation; // ivar: _menuElementRepresentation
@property (readonly, nonatomic) NSObject<UIPopoverPresentationControllerSourceItem> *presentationSourceItem;
@property (copy, nonatomic) id *primaryActionHandler; // ivar: _primaryActionHandler
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput; // ivar: requiresAuthenticatedInput
@property (readonly, nonatomic) id *sender;
@property (nonatomic) NSInteger state; // ivar: state
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id *viewProvider; // ivar: _viewProvider


+(id)elementWithViewProvider:(id)arg0 ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2  ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(BOOL)_isDefaultCommand;
-(BOOL)_isLeaf;
-(NSInteger)_leafKeyModifierFlags;
-(id)_immutableCopy;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(id)_resolvedTargetFromFirstTarget:(id)arg0 sender:(id)arg1 ;
-(id)_validatedLeafWithAlternate:(id)arg0 target:(id)arg1 validation:(id)arg2 ;
-(id)initWithMenuElement:(id)arg0 ;
// -(void)_acceptMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2 deferredElementVisit:(unk)arg3  ;
// -(void)_acceptMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(void)_performPrimaryAction;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performWithSender:(id)arg0 target:(id)arg1 ;


@end


#endif