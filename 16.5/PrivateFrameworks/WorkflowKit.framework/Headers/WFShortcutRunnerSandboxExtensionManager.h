// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSHORTCUTRUNNERSANDBOXEXTENSIONMANAGER_H
#define WFSHORTCUTRUNNERSANDBOXEXTENSIONMANAGER_H

@class NSString, NSMutableSet, NSXPCConnection;
@protocol WFActionSandboxExtensionProvider;

#import <Foundation/Foundation.h>


@interface WFShortcutRunnerSandboxExtensionManager : NSObject <WFActionSandboxExtensionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSMutableSet *issuedExtensionHandlers; // ivar: _issuedExtensionHandlers
@property (copy, nonatomic) NSMutableSet *issuedExtensionsAccessResources; // ivar: _issuedExtensionsAccessResources
@property (copy, nonatomic) NSMutableSet *resignedExtensionsAccessResources; // ivar: _resignedExtensionsAccessResources
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)requestSandboxExtensionForRunningActionWithAccessResources:(id)arg0 error:(*id)arg1 ;
-(BOOL)retakeResignedExtensionsWithReason:(id)arg0 error:(*id)arg1 ;
-(id)hostInterface;
-(id)initWithXPCConnection:(id)arg0 ;
-(id)requestExtensionTokensForAccessResources:(id)arg0 rejectedAccessResources:(*id)arg1 error:(*id)arg2 ;
-(id)synchronousHostInterface;
-(void)dealloc;
-(void)performWithSandboxExtensions:(id)arg0 asynchronousBlock:(id)arg1 ;
-(void)performWithSandboxExtensions:(id)arg0 synchronousBlock:(id)arg1 ;
-(void)requestExtensionTokensForAccessResources:(id)arg0 completion:(id)arg1 ;
-(void)requestSandboxExtensionForRunningActionWithAccessResources:(id)arg0 completion:(id)arg1 ;
-(void)resignIssuedExtensionsWithReason:(id)arg0 ;
-(void)temporaryRequestSandboxExtensionWithBlock:(id)arg0 ;


@end


#endif