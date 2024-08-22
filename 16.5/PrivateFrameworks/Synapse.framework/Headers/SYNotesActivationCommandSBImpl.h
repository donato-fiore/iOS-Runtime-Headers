// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYNOTESACTIVATIONCOMMANDSBIMPL_H
#define SYNOTESACTIVATIONCOMMANDSBIMPL_H

@class NSString;
@protocol SYNotesActivationCommandImpl;

#import <Foundation/Foundation.h>


@interface SYNotesActivationCommandSBImpl : NSObject <SYNotesActivationCommandImpl>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)_activateWithActivity:(id)arg0 completion:(id)arg1 ;
+(void)activateWithDomainIdentifier:(id)arg0 noteIdentifier:(id)arg1 completion:(id)arg2 ;
+(void)activateWithMetaActivity:(id)arg0 completion:(id)arg1 ;


@end


#endif