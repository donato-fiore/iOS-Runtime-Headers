// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTPASTESESSION_H
#define _UITEXTPASTESESSION_H

@class NSString, NSArray, NSAttributedString;
@protocol UITextDropPasteSession, UITextPasteSessionDelegate, _UITextPasteProgressSupport;

#import <Foundation/Foundation.h>

#import "UITextPasteController.h"
#import "UITextPasteCoordinator.h"
#import "UITextRange.h"

@interface _UITextPasteSession : NSObject <UITextDropPasteSession>



@property (readonly, nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (weak, nonatomic) UITextPasteController *controller; // ivar: _controller
@property (retain, nonatomic) UITextPasteCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UITextPasteSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextRange *hiddenRange; // ivar: _hiddenRange
@property (copy, nonatomic) NSArray *originalItems; // ivar: _originalItems
@property (retain, nonatomic) NSAttributedString *pasteResult; // ivar: _pasteResult
@property (retain, nonatomic) NSObject<_UITextPasteProgressSupport> *progressSupport; // ivar: _progressSupport
@property (retain, nonatomic) UITextRange *range; // ivar: _range
@property (readonly) Class superclass;


-(id)positionedPasteResult;
-(void)animationCompleted;
-(void)animationStarted;


@end


#endif