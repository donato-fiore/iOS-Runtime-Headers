// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTUITRANSLATIONVIEWCONTROLLER_H
#define LTUITRANSLATIONVIEWCONTROLLER_H

@class UIViewController, _UIRemoteViewController, NSString, NSArray, NSUUID, NSLocale, NSAttributedString;
@protocol _UIRemoteViewControllerContaining, LTUIViewServiceExtensionHostProtocol;


#import "LTUIRemoteViewController.h"
#import "LTUISourceMeta.h"

@interface LTUITranslationViewController : UIViewController <_UIRemoteViewControllerContaining, LTUIViewServiceExtensionHostProtocol>

 {
    NSUInteger extensionQueryID;
    NSUInteger cplID;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic) BOOL consentDisplayOnly; // ivar: _consentDisplayOnly
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissCompletionHandler; // ivar: _dismissCompletionHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *ignoredAttributes; // ivar: _ignoredAttributes
@property (nonatomic) BOOL isSourceEditable; // ivar: _isSourceEditable
@property (retain, nonatomic) id *matchingToken; // ivar: _matchingToken
@property (retain, nonatomic) LTUIRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (copy, nonatomic) id *replacementHandler; // ivar: _replacementHandler
@property (retain, nonatomic) NSUUID *requestID; // ivar: _requestID
@property (copy, nonatomic) NSLocale *sourceLocale; // ivar: _sourceLocale
@property (retain, nonatomic) LTUISourceMeta *sourceMeta; // ivar: _sourceMeta
@property (readonly) Class superclass;
@property (copy, nonatomic) NSLocale *targetLocale; // ivar: _targetLocale
@property (copy, nonatomic) NSAttributedString *text; // ivar: _text
@property (nonatomic) BOOL userConsentConfirmed; // ivar: _userConsentConfirmed


+(BOOL)isAvailable;
+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(id)_sheetPresentationController;
-(id)_userInfo;
-(id)init;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_insertBackground;
-(void)_presentError:(id)arg0 ;
-(void)_presentationController:(id)arg0 prepareAdaptivePresentationController:(id)arg1 ;
-(void)_presentationControllerDidDismiss:(id)arg0 ;
-(void)_refreshExtensionList;
-(void)_removeBackground;
-(void)_setChildController:(id)arg0 ;
-(void)confirmUserConsent;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)dismiss;
-(void)expandSheet;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithTranslation:(id)arg0 ;
-(void)invalidate;
-(void)receiveExtensions:(id)arg0 ;
-(void)remoteIsReady;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif