// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONCONTENTPERMISSIONREQUESTOR_H
#define WFACTIONCONTENTPERMISSIONREQUESTOR_H

@class WFContactStore;
@protocol WFContentPermissionRequestor, WFActionSandboxExtensionProvider, WFUserInterfaceHost;

#import <Foundation/Foundation.h>

#import "WFAction.h"

@interface WFActionContentPermissionRequestor : NSObject <WFContentPermissionRequestor>



@property (readonly, weak, nonatomic) WFAction *action; // ivar: _action
@property (retain, nonatomic) WFContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) NSObject<WFActionSandboxExtensionProvider> *sandboxExtensionProvider; // ivar: _sandboxExtensionProvider
@property (retain, nonatomic) NSObject<WFUserInterfaceHost> *userInterface; // ivar: _userInterface


-(id)initWithAction:(id)arg0 ;
-(void)_allowNetworkAccessAfterPromptingForURLs:(id)arg0 completionHandler:(id)arg1 ;
-(void)allowContactsAccessWithCompletionHandler:(id)arg0 ;
-(void)allowNetworkAccessAfterPromptingForURLs:(id)arg0 completionHandler:(id)arg1 ;
-(void)allowNetworkAccessWithoutPromptingWithCompletionHandler:(id)arg0 ;
-(void)requestUserConsentToLoadWebContentAtURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif