// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPDIALPROMPTALERT_H
#define TPDIALPROMPTALERT_H

@class NSString, NSSet, BSProcessHandle, SBSRemoteAlertHandle;
@protocol SBSRemoteAlertHandleObserver;


#import "TPAlert.h"

@interface TPDialPromptAlert : TPAlert <SBSRemoteAlertHandleObserver>



@property (readonly, copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dialAction; // ivar: _dialAction
@property (readonly, copy, nonatomic) NSSet *handles; // ivar: _handles
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFaceTimeRequest; // ivar: _isFaceTimeRequest
@property (readonly, nonatomic) BSProcessHandle *processHandle; // ivar: _processHandle
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle; // ivar: _remoteAlertHandle
@property (readonly) Class superclass;


-(id)defaultButtonTitle;
-(id)initWithButtonTitle:(id)arg0 handles:(id)arg1 isFaceTimeRequest:(BOOL)arg2 dialAction:(id)arg3 ;
-(id)initWithDialRequest:(id)arg0 dialAction:(id)arg1 ;
-(id)initWithJoinRequest:(id)arg0 dialAction:(id)arg1 ;
-(id)otherButtonTitle;
-(id)phoneNumberHandle;
-(id)title;
-(void)dealloc;
-(void)defaultResponse;
-(void)invalidate;
-(void)otherResponse;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)show;


@end


#endif