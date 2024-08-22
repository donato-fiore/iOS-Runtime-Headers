// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDICTATIONCOMMANDHANDLERMANAGER_H
#define UIDICTATIONCOMMANDHANDLERMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface UIDictationCommandHandlerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *commandHandlers; // ivar: _commandHandlers


+(id)commandHandlerWithLocale:(id)arg0 ;
+(id)sharedInstance;
-(id)_commandHandlerWithLocale:(id)arg0 ;
-(id)init;


@end


#endif