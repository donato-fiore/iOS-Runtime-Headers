// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYBOARDUIINFORMATION_H
#define _UIKEYBOARDUIINFORMATION_H

@class BKSAnimationFenceHandle, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIKeyboardUIInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly) BOOL animated; // ivar: _animated
@property (readonly, copy) BKSAnimationFenceHandle *animationFence; // ivar: _animationFence
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property BOOL assistantBarVisible; // ivar: _assistantBarVisible
@property (nonatomic) CGRect assistantFrame; // ivar: _assistantFrame
@property (nonatomic) BOOL assistantOnScreenOnly; // ivar: _assistantOnScreenOnly
@property (nonatomic) NSUInteger assistantPosition; // ivar: _assistantPosition
@property (nonatomic) CGRect beginFrame; // ivar: _beginFrame
@property (nonatomic) BOOL changedAccessoryOnly; // ivar: _changedAccessoryOnly
@property (copy, nonatomic) NSString *currentInputMode; // ivar: _currentInputMode
@property (nonatomic) BOOL dueToRotation; // ivar: _dueToRotation
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGRect endFrame; // ivar: _endFrame
@property (nonatomic) BOOL forceNotification; // ivar: _forceNotification
@property BOOL isLocal; // ivar: _isLocal
@property (readonly) BOOL keyboardOnScreen; // ivar: _keyboardOnScreen
@property (readonly) CGRect keyboardPosition; // ivar: _keyboardPosition
@property NSUInteger keyboardScenePresentationMode; // ivar: _keyboardScenePresentationMode
@property (nonatomic) NSUInteger notification; // ivar: _notification
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly) NSInteger orientation; // ivar: _orientation
@property (nonatomic, getter=isStartNotification) BOOL startNotification; // ivar: _startNotification
@property (readonly) BOOL tracking; // ivar: _tracking
@property NSUInteger uiPosition; // ivar: _uiPosition
@property (nonatomic) BOOL wasCausedRemotely; // ivar: _wasCausedRemotely


+(BOOL)supportsSecureCoding;
-(BOOL)hasValidNotification;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithoutFence;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyboardFrame:(struct CGRect )arg0 onScreen:(BOOL)arg1 animated:(BOOL)arg2 tracking:(BOOL)arg3 fence:(id)arg4 ;
-(id)initWithKeyboardFrame:(struct CGRect )arg0 onScreen:(BOOL)arg1 animated:(BOOL)arg2 tracking:(BOOL)arg3 orientation:(NSInteger)arg4 fence:(id)arg5 ;
-(id)initWithKeyboardFrame:(struct CGRect )arg0 onScreen:(BOOL)arg1 animated:(BOOL)arg2 tracking:(BOOL)arg3 orientation:(NSInteger)arg4 wantsFence:(BOOL)arg5 ;
-(id)initWithKeyboardFrame:(struct CGRect )arg0 onScreen:(BOOL)arg1 animated:(BOOL)arg2 tracking:(BOOL)arg3 wantsFence:(BOOL)arg4 ;
-(void)addNotificationInfo:(id)arg0 isStart:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)resetAnimationFencing;


@end


#endif