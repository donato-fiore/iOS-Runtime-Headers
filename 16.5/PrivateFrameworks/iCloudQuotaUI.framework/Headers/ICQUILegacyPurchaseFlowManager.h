// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUILEGACYPURCHASEFLOWMANAGER_H
#define ICQUILEGACYPURCHASEFLOWMANAGER_H

@class UIViewController, AMSURLSession, NSMutableArray, UINavigationController, ACAccount, NSString;
@protocol AMSURLProtocolDelegate, AMSPurchaseResponseProtocol, NSURLSessionDelegate, RUIObjectModelDelegate;

#import <Foundation/Foundation.h>


@interface ICQUILegacyPurchaseFlowManager : NSObject <AMSURLProtocolDelegate, AMSPurchaseResponseProtocol, NSURLSessionDelegate, RUIObjectModelDelegate>

 {
    UIViewController *_presenter;
    id *_flowCompletion;
    AMSURLSession *_defaultAMSURLSession;
    NSMutableArray *_objectModels;
    UINavigationController *_navController;
    ACAccount *_amsAccount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger requiredStorageThreshold; // ivar: _requiredStorageThreshold
@property (readonly) Class superclass;


-(BOOL)_loadNativeURL:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_presentationContext;
-(id)initWithPresenter:(id)arg0 ;
-(id)parentViewControllerForObjectModel:(id)arg0 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleDialogRequest:(id)arg2 completion:(id)arg3 ;
-(void)AMSURLSession:(id)arg0 task:(id)arg1 handleEngagementRequest:(id)arg2 completion:(id)arg3 ;
-(void)_beginRUIFlowWithAMSURLResult:(id)arg0 ;
-(void)_beginURLOperationWithURLRequest:(id)arg0 ;
-(void)_clearRetailFollowUpItem;
-(void)_didCompletePurchaseFlowWithStatusCode:(NSInteger)arg0 ;
-(void)_dismissPurchaseFlow;
-(void)_fetchURLRequestWithURL:(id)arg0 completion:(id)arg1 ;
-(void)_handleAuthenticateRequest:(id)arg0 completion:(id)arg1 ;
-(void)_handleDialogRequest:(id)arg0 completion:(id)arg1 ;
-(void)_handleEngagementRequest:(id)arg0 completion:(id)arg1 ;
-(void)_popObjectModelAnimated:(BOOL)arg0 ;
-(void)_updatePage:(id)arg0 ;
-(void)beginFlowWithCompletion:(id)arg0 ;
-(void)handleAuthenticateRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleDialogRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)handleEngagementRequest:(id)arg0 purchase:(id)arg1 purchaseQueue:(id)arg2 completion:(id)arg3 ;
-(void)makeBuyRequest:(id)arg0 ;
-(void)objectModel:(id)arg0 pressedButton:(id)arg1 attributes:(id)arg2 ;
-(void)objectModel:(id)arg0 pressedLink:(id)arg1 httpMethod:(id)arg2 ;
-(void)objectModelPressedBack:(id)arg0 ;


@end


#endif