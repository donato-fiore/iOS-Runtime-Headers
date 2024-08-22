// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUIREMOTEEXTENSIONENTRY_H
#define ICQUIREMOTEEXTENSIONENTRY_H

@class EXExtension, NSXPCConnection, NSDictionary;
@protocol _TtP13iCloudQuotaUI20ExtensionXPCProtocol_, ICQUIRemoteExtensionDelegate;



@interface ICQUIRemoteExtensionEntry : EXExtension <_TtP13iCloudQuotaUI20ExtensionXPCProtocol_>



@property (weak, nonatomic) NSXPCConnection *currentConnection; // ivar: _currentConnection
@property (retain, nonatomic) NSDictionary *offerContext; // ivar: _offerContext
@property (nonatomic, readonly) NSObject<ICQUIRemoteExtensionDelegate> *transformer;


+(id)extensionPointID;
+(id)sharedInstance;
+(void)dismissRemoteViewControllerWithError:(id)arg0 ;
+(void)presentRemoteViewControllerWithContext:(id)arg0 presentingViewController:(id)arg1 completion:(id)arg2 ;
+(void)setSharedInstance:(id)arg0 ;
-(BOOL)extensionShouldAccept:(id)arg0 ;
-(BOOL)shouldAcceptConnection:(id)arg0 ;
-(id)extensionMakeContentViewController;
-(id)init;
-(id)makeContentViewController;
-(void)dismissViewControllerWithError:(id)arg0 ;
-(void)extensionPrepareForSceneConnectionWith:(id)arg0 ;
-(void)prepareForSceneConnectionWithConfiguration:(id)arg0 ;
-(void)startConnectionWithContext:(id)arg0 completion:(id)arg1 ;


@end


#endif