// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIACTION_H
#define UIACTION_H

@class NSAttributedString, NSString, NSPointerArray;
@protocol _UIMenuLeaf, _UIMenuStateObserverableLeaf, UIMenuLeaf, UIPopoverPresentationControllerSourceItem;


#import "UIMenuElement.h"
#import "UIImage.h"

@interface UIAction : UIMenuElement <_UIMenuLeaf, _UIMenuStateObserverableLeaf, UIMenuLeaf>



@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *discoverabilityTitle; // ivar: _discoverabilityTitle
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) BOOL keepsMenuPresented;
@property (readonly, nonatomic) NSObject<UIPopoverPresentationControllerSourceItem> *presentationSourceItem;
@property (readonly, nonatomic) BOOL requiresAuthenticatedInput; // ivar: _requiresAuthenticatedInput
@property (readonly, nonatomic) id *sender; // ivar: _sender
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic, getter=_getStateObservers, setter=_setStateObservers:) NSPointerArray *stateObservers; // ivar: stateObservers
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(BOOL)supportsSecureCoding;
+(id)_textFromCameraImage;
+(id)_textFromCameraImageName;
+(id)_textFromCameraTitle;
+(id)_textFromCameraTitleForResponder:(id)arg0 ;
+(id)actionWithHandler:(id)arg0 ;
+(id)actionWithTitle:(id)arg0 image:(id)arg1 identifier:(id)arg2 handler:(id)arg3 ;
+(id)captureTextFromCameraActionForResponder:(id)arg0 identifier:(id)arg1 ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2  ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(BOOL)_isDefaultCommand;
-(BOOL)_isLeaf;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_leafKeyModifierFlags;
-(id)_immutableCopy;
-(id)_leafAlternates;
-(id)_leafKeyInput;
-(id)_resolvedTargetFromFirstTarget:(id)arg0 sender:(id)arg1 ;
-(id)_validatedLeafWithAlternate:(id)arg0 target:(id)arg1 validation:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAction:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 identifier:(id)arg2 discoverabilityTitle:(id)arg3 attributes:(NSUInteger)arg4 state:(NSInteger)arg5 handler:(id)arg6 ;
// -(void)_acceptMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2 deferredElementVisit:(unk)arg3  ;
// -(void)_acceptMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(void)_addStateObserver:(id)arg0 ;
-(void)_performActionWithSender:(id)arg0 ;
-(void)_performWithTarget:(id)arg0 ;
-(void)_removeStateObserver:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performWithSender:(id)arg0 target:(id)arg1 ;
-(void)setSubtitle:(id)arg0 ;


@end


#endif