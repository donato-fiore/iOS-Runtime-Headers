// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDOCUMENTALERTPRESENTER_H
#define UIDOCUMENTALERTPRESENTER_H

@class NSError, NSString;
@protocol UIAlertViewDelegate;

#import <Foundation/Foundation.h>

#import "UIAlertView.h"

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate>

 {
    id *_completionHandler;
    NSError *_error;
    UIAlertView *_alert;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_presentAlertWithError:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithError:(id)arg0 completionHandler:(id)arg1 ;
-(void)_forceFinishNow;
-(void)alertView:(id)arg0 clickedButtonAtIndex:(NSInteger)arg1 ;
-(void)alertViewCancel:(id)arg0 ;
-(void)dealloc;


@end


#endif