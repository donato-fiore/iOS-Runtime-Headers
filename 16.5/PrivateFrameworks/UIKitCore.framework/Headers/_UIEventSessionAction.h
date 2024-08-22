// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEVENTSESSIONACTION_H
#define _UIEVENTSESSIONACTION_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UIEventSessionContextualAction.h"
#import "_UIEventSessionHoverAction.h"
#import "_UIEventSessionKeyCommandAction.h"
#import "_UIEventSessionScrollAction.h"
#import "_UIEventSessionTapAction.h"
#import "_UIEventSessionTextSelectionAction.h"
#import "_UIEventSessionTouchAction.h"
#import "_UIEventSessionTypingAction.h"

@interface _UIEventSessionAction : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger actionCount;
@property (nonatomic) NSInteger actionCountFromMergedActions; // ivar: _actionCountFromMergedActions
@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (readonly, nonatomic) _UIEventSessionContextualAction *asContextualPress;
@property (readonly, nonatomic) _UIEventSessionHoverAction *asHover;
@property (readonly, nonatomic) _UIEventSessionKeyCommandAction *asKeyCommand;
@property (readonly, nonatomic) _UIEventSessionScrollAction *asScroll;
@property (readonly, nonatomic) _UIEventSessionTapAction *asTap;
@property (readonly, nonatomic) _UIEventSessionTextSelectionAction *asTextSelection;
@property (readonly, nonatomic) _UIEventSessionTouchAction *asTouch;
@property (readonly, nonatomic) _UIEventSessionTypingAction *asTyping;
@property (nonatomic) NSInteger hardwareKeyboardState; // ivar: _hardwareKeyboardState
@property (nonatomic) NSInteger magicKeyboardState; // ivar: _magicKeyboardState
@property (readonly, nonatomic) NSString *metadata;
@property (nonatomic) NSInteger sequenceNumber; // ivar: _sequenceNumber
@property (retain, nonatomic) NSNumber *sessionID; // ivar: _sessionID
@property (nonatomic) NSInteger source; // ivar: _source
@property (readonly, nonatomic) NSString *typeEncoding;
@property (nonatomic) NSInteger uiInterfaceOrientation; // ivar: _uiInterfaceOrientation


+(NSInteger)getUIEventSourceForUITouchType:(NSInteger)arg0 ;
+(id)stringValueForActionType:(NSInteger)arg0 ;
+(id)stringValueForSource:(NSInteger)arg0 ;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif