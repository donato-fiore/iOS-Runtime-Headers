// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTFAIRPLAYCONTEXT_H
#define SUSCRIPTFAIRPLAYCONTEXT_H



#import "SUScriptObject.h"

@interface SUScriptFairPlayContext : SUScriptObject



+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(BOOL)isOpen;
-(id)_accountViewController;
-(id)_className;
-(id)signData:(id)arg0 ;
-(void)close;


@end


#endif