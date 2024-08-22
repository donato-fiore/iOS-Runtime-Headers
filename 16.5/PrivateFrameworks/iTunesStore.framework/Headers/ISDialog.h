// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISDIALOG_H
#define ISDIALOG_H

@class NSString, NSLock, NSMutableDictionary, SSAuthenticationContext, NSArray, SSPaymentSheet;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface ISDialog : NSObject <SSXPCCoding>

 {
    NSString *_displayCountKey;
    NSLock *_lock;
    NSInteger _maxDisplayCount;
    NSMutableDictionary *_userInfo;
    *__CFDictionary _userNotificationValues;
}


@property BOOL allowDuplicates; // ivar: _allowDuplicates
@property (copy) SSAuthenticationContext *authenticationContext; // ivar: _authenticationContext
@property BOOL authorizationIsForced; // ivar: _authorizationIsForced
@property (retain) NSArray *buttons; // ivar: _buttons
@property (readonly, copy) NSString *debugDescription;
@property NSInteger defaultButtonIndex; // ivar: _defaultButtonIndex
@property (readonly, copy) NSString *description;
@property BOOL dismissOnHomeButton; // ivar: _dismissOnHomeButton
@property BOOL dismissOnLock; // ivar: _dismissOnLock
@property (copy) NSString *displayCountKey;
@property (readonly, getter=isDisplayable) BOOL displayable;
@property BOOL displaysOnLockscreen; // ivar: _displaysOnLockscreen
@property BOOL expectsResponse; // ivar: _expectsResponse
@property BOOL groupsTextFields; // ivar: _groupsTextFields
@property (readonly) NSUInteger hash;
@property NSInteger kind; // ivar: _kind
@property NSInteger maximumDisplayCount;
@property (retain) NSString *message; // ivar: _message
@property BOOL noDefaultButton; // ivar: _noDefaultButton
@property BOOL oneButtonPerLine; // ivar: _oneButtonPerLine
@property (readonly) SSPaymentSheet *paymentSheet; // ivar: _paymentSheet
@property BOOL shouldDismissAfterUnlock; // ivar: _shouldDismissAfterUnlock
@property BOOL shouldDisplayAsTopMost; // ivar: _shouldDisplayAsTopMost
@property BOOL shouldPendInSetupIfNotAllowed; // ivar: _shouldPendInSetupIfNotAllowed
@property (readonly) Class superclass;
@property (retain) NSArray *textFields; // ivar: _textFields
@property (retain) NSString *title; // ivar: _title
@property (copy) NSString *touchIDContinueToken; // ivar: _touchIDContinueToken
@property NSInteger unlockActionButtonIndex; // ivar: _unlockActionButtonIndex


+(NSInteger)displayCountForKey:(id)arg0 ;
+(NSUInteger)buttonTagForCFUserNotificationButtonTitleKey:(struct __CFString *)arg0 ;
+(struct __CFString *)buttonTitleKeyForCFUserNotificationButtonTag:(NSUInteger)arg0 ;
+(void)_initializeStaticButtonTitleKeyAndTagMapping;
-(*void)copyValueForCFUserNotificationKey:(struct __CFString *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_kindForString:(id)arg0 ;
-(id)buyParams;
-(id)copyUserNotification;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithAuthenticationChallege:(id)arg0 ;
-(id)initWithDialogDictionary:(id)arg0 ;
-(id)initWithDialogDictionary:(id)arg0 authenticationContext:(id)arg1 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithOfferDeviceError:(id)arg0 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)orderedButtonTitleKeysForCFUserNotification;
-(id)valueForUserInfoKey:(id)arg0 ;
-(void)dealloc;
-(void)incrementDisplayCount;
-(void)setValue:(*void)arg0 forCFUserNotificationKey:(struct __CFString *)arg1 ;
-(void)setValue:(id)arg0 forUserInfoKey:(id)arg1 ;


@end


#endif