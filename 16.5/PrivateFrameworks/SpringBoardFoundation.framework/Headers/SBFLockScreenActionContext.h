// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLOCKSCREENACTIONCONTEXT_H
#define SBFLOCKSCREENACTIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBFLockScreenActionContext : NSObject {
    CGFloat _fontSize;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (nonatomic) BOOL canBypassPinLock; // ivar: _canBypassPinLock
@property (nonatomic) BOOL confirmedNotInPocket; // ivar: _confirmedNotInPocket
@property (nonatomic) BOOL deactivateAwayController; // ivar: _deactivateAwayController
@property (readonly, nonatomic) BOOL hasCustomUnlockLabel;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int intent; // ivar: _intent
@property (retain, nonatomic) NSString *lockLabel; // ivar: _lockLabel
@property (nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication
@property (nonatomic) BOOL requiresUIUnlock; // ivar: _requiresUIUnlock
@property (retain, nonatomic) NSString *shortLockLabel; // ivar: _shortLockLabel
@property (nonatomic) int source; // ivar: _source
@property (copy, nonatomic) NSString *unlockDestination; // ivar: _unlockDestination
@property (nonatomic) BOOL wantsBiometricPresentation; // ivar: _wantsBiometricPresentation


// -(id)initWithLockLabel:(id)arg0 shortLockLabel:(id)arg1 action:(id)arg2 identifier:(unk)arg3  ;


@end


#endif