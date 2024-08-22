// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBKEYBOARDFOCUSREDIRECTION_H
#define _SBKEYBOARDFOCUSREDIRECTION_H

@class NSString, BKSHIDEventDeferringToken;

#import <Foundation/Foundation.h>


@interface _SBKeyboardFocusRedirection : NSObject {
    int _fromProcessIdentifier;
    int _toProcessIdentifier;
    NSString *_reason;
    BKSHIDEventDeferringToken *_fromToken;
    BKSHIDEventDeferringToken *_toToken;
}




-(id)description;


@end


#endif