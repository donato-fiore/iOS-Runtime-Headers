// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDIALOGFORADDINGKEYBOARD_H
#define _UIDIALOGFORADDINGKEYBOARD_H


#import <Foundation/Foundation.h>

#import "UIWindow.h"
#import "UINavigationController.h"

@interface _UIDialogForAddingKeyboard : NSObject {
    UIWindow *_presenterWindow;
    UINavigationController *_privacySheetController;
}




+(void)presentDialogForAddingKeyboard;
-(void)dismiss;
-(void)presentDialogForAddingKeyboard;
-(void)presentPrivacySheet;


@end


#endif