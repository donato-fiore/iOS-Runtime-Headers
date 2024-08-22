// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFEXECUTABLEAUTOSHORTCUT_H
#define WFEXECUTABLEAUTOSHORTCUT_H

@class NSString, LNAutoShortcutLocalizedPhrase, LNAutoShortcut;

#import <Foundation/Foundation.h>


@interface WFExecutableAutoShortcut : NSObject

@property (nonatomic, readonly) NSUInteger chicletColor; // ivar: chicletColor
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) LNAutoShortcutLocalizedPhrase *phrase; // ivar: phrase
@property (nonatomic, readonly) LNAutoShortcut *underlyingAutoShortcut; // ivar: underlyingAutoShortcut


-(id)init;


@end


#endif