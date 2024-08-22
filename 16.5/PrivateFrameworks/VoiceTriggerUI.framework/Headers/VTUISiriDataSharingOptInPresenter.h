// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTUISIRIDATASHARINGOPTINPRESENTER_H
#define VTUISIRIDATASHARINGOPTINPRESENTER_H

@class AFSettingsConnection, NSString;
@protocol VTUISiriDataSharingOptInViewControllerDelegate, OS_dispatch_queue, VTUISiriDataSharingOptInPresentationDelegate;

#import <Foundation/Foundation.h>

#import "VTUISiriDataSharingOptInViewController.h"
#import "VTUIProximityDataSharingOptInView.h"

@interface VTUISiriDataSharingOptInPresenter : NSObject <VTUISiriDataSharingOptInViewControllerDelegate>

 {
    AFSettingsConnection *_settings;
    NSObject<OS_dispatch_queue> *_settingsQueue;
    NSInteger _dataSharingOptInStatus;
    VTUISiriDataSharingOptInViewController *_currentWelcomeController;
    VTUIProximityDataSharingOptInView *_currentProxView;
}


@property (weak, nonatomic) NSObject<VTUISiriDataSharingOptInPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (copy) NSString *reasonForChange; // ivar: _reasonForChange
@property NSInteger sourceOfChange; // ivar: _sourceOfChange


+(BOOL)siriDataSharingOptInViewFeatureFlagEnabled;
-(BOOL)shouldShowSiriDataSharingOptInView;
-(id)_modalViewControllerForViewStyle:(NSInteger)arg0 ;
-(id)_proximityViewForFrame:(struct CGRect )arg0 ;
-(id)dataSharingOptInTextWelcomeControllerForViewStyle:(NSInteger)arg0 ;
-(id)dataSharingOptInViewForFrame:(struct CGRect )arg0 viewStyle:(NSInteger)arg1 ;
-(id)init;
-(void)_fetchSiriDataSharingEnabled;
-(void)_requestDismissal;
-(void)_setSiriDataSharingStatus:(NSInteger)arg0 forceDismissal:(BOOL)arg1 ;
-(void)_userTappedDetailLinkText;
-(void)_userTappedDismissButtonFromProxCard;
-(void)_userTappedOptInToDataSharing;
-(void)_userTappedOptOutOfDataSharing;
-(void)didDismissFromViewController:(id)arg0 ;
-(void)tearDownPresentedViews;


@end


#endif