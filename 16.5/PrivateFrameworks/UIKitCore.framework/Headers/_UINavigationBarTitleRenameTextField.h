// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UINAVIGATIONBARTITLERENAMETEXTFIELD_H
#define _UINAVIGATIONBARTITLERENAMETEXTFIELD_H

@class NSString, NSLayoutConstraint;
@protocol _UIPassthroughScrollInteractionDelegate, _UINavigationBarTitleRenamerContentView;


#import "UITextField.h"
#import "_UIPassthroughScrollInteraction.h"
#import "_UINavigationBarTitleRenamerSession.h"

@interface _UINavigationBarTitleRenameTextField : UITextField <_UIPassthroughScrollInteractionDelegate, _UINavigationBarTitleRenamerContentView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat horizontalTextInset;
@property (copy, nonatomic) id *horizontalTextInsetDidChangeCallback; // ivar: _horizontalTextInsetDidChangeCallback
@property (readonly, nonatomic) NSLayoutConstraint *iconHeightConstraint; // ivar: _iconHeightConstraint
@property (retain, nonatomic) _UIPassthroughScrollInteraction *passthroughInteraction; // ivar: _passthroughInteraction
@property (readonly, nonatomic) _UINavigationBarTitleRenamerSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment;


-(BOOL)_shouldEndEditingOnReturn;
-(BOOL)canResignFirstResponder;
-(BOOL)passthroughScrollInteraction:(id)arg0 shouldInteractAtLocation:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(BOOL)passthroughScrollInteractionDidRecognize:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(void)_becomeFirstResponder;
-(void)_resignFirstResponder;
-(void)_setupIconViewIfNecessary;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif