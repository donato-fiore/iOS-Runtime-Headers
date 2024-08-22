// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTAPPLICATION_H
#define SUSCRIPTAPPLICATION_H

@class NSNumber, NSString;


#import "SUScriptObject.h"

@interface SUScriptApplication : SUScriptObject

@property (readonly, getter=isDelayingTerminate) id *delayingTerminate;
@property (readonly) NSNumber *exitStoreReasonButton;
@property (readonly) NSNumber *exitStoreReasonDownloadComplete;
@property (readonly) NSNumber *exitStoreReasonFatalError;
@property (readonly) NSNumber *exitStoreReasonGotoMainStore;
@property (readonly) NSNumber *exitStoreReasonOther;
@property (readonly) NSNumber *exitStoreReasonPurchase;
@property (retain) id *iconBadgeNumber;
@property (readonly) NSString *identifier;
@property (readonly, getter=wasLaunchedFromLibrary) id *launchedFromLibrary;
@property (readonly, getter=isRunningInStoreDemoMode) id *runningInStoreDemoMode;
@property (readonly) id *screenHeight;
@property (readonly) id *screenWidth;
@property (readonly) NSInteger statusBarAnimationFade;
@property (readonly) NSInteger statusBarAnimationNone;
@property (readonly) NSInteger statusBarAnimationSlide;
@property id *statusBarHidden;
@property NSInteger statusBarStyle;
@property (readonly) NSInteger statusBarStyleBlackOpaque;
@property (readonly) NSInteger statusBarStyleBlackTranslucent;
@property (readonly) NSInteger statusBarStyleDefault;
@property (readonly) NSString *version;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)attributeKeys;
-(id)hostIdentifier;
-(id)scriptAttributeKeys;
-(void)beginDelayingTerminate;
-(void)endDelayingTerminate;
-(void)exitStoreWithReason:(id)arg0 ;
-(void)returnToLibrary;
-(void)scrollIconToVisible:(id)arg0 shouldSuspend:(BOOL)arg1 ;
-(void)showNewsstand;


@end


#endif