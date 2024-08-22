// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYNOTESACTIVATIONCOMMAND_H
#define SYNOTESACTIVATIONCOMMAND_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SYNotesActivationRequest.h"

@interface SYNotesActivationCommand : NSObject {
    NSObject<OS_dispatch_queue> *__dataLoadingQueue;
}


@property (retain, nonatomic) SYNotesActivationRequest *activationRequest; // ivar: _activationRequest


+(BOOL)remotePresentationEnabled;
+(Class)_iOSImpl;
+(void)activateWithDomainIdentifier:(id)arg0 noteIdentifier:(id)arg1 completion:(id)arg2 ;
+(void)activateWithMetaActivity:(id)arg0 completion:(id)arg1 ;
+(void)activateWithNoteIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)setRemotePresentationEnabled:(BOOL)arg0 ;
-(id)init;
-(void)_loadDataFromFileURLs:(id)arg0 withCompletion:(id)arg1 ;
-(void)activateWithCompletion:(id)arg0 ;


@end


#endif