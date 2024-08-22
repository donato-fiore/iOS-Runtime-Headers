// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIREMOTEINPUTVIEWHOST_H
#define UIREMOTEINPUTVIEWHOST_H

@class NSLayoutConstraint;

#import <Foundation/Foundation.h>

#import "UIViewController.h"
#import "UIInputViewController.h"
#import "UIView.h"
#import "UIRemoteInputViewInfo.h"
#import "UIWindow.h"
#import "UIInputViewSet.h"

@interface UIRemoteInputViewHost : NSObject {
    UIViewController *_inputRootViewController;
    UIInputViewController *_inputViewController;
    UIView *_inputView;
    NSLayoutConstraint *_inputViewWidthConstraint;
    NSLayoutConstraint *_inputViewHeightConstraint;
    UIViewController *_assistantViewController;
}


@property (readonly, nonatomic) UIRemoteInputViewInfo *assistantViewInfo;
@property (readonly, nonatomic) UIWindow *assistantViewWindow; // ivar: _assistantViewWindow
@property (readonly, nonatomic) UIRemoteInputViewInfo *inputViewInfo;
@property (retain, nonatomic) UIInputViewSet *inputViewSet; // ivar: _inputViewSet
@property (readonly, nonatomic) UIWindow *inputViewWindow; // ivar: _inputViewWindow


-(BOOL)updateAssistantViewIfNecessary;
-(BOOL)updateCustomInputViewIfNecessary;
-(id)remoteAssistantItemForResponder:(id)arg0 ;
-(id)rtiGroupsForBarButtonItemGroups:(id)arg0 ;
-(id)settingsScene;
-(struct UIEdgeInsets )assistantViewInsets;
-(void)updateInputViewsIfNecessary;


@end


#endif