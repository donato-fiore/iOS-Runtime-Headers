// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VTUIDICTATIONDATASHARINGOPTINPRESENTER_H
#define VTUIDICTATIONDATASHARINGOPTINPRESENTER_H

@class OBWelcomeController;
@protocol VTUIDictationDataSharingOptInPresentationDelegate;

#import <Foundation/Foundation.h>


@interface VTUIDictationDataSharingOptInPresenter : NSObject

@property (retain, nonatomic) OBWelcomeController *currentWelcomeController; // ivar: _currentWelcomeController
@property (weak, nonatomic) NSObject<VTUIDictationDataSharingOptInPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate


-(id)dataSharingOptInAlertController;
-(id)dataSharingOptInView;
-(id)dataSharingReminderAlertController;
-(id)dictationDataSharingOptInAlertViewModel;
-(id)dictationDataSharingOptInReminderViewModel;
-(void)_learnMoreButtonTapped;
-(void)_optInButtonTapped;
-(void)_optOutButtonTapped;
-(void)_userTappedDetailLinkText;


@end


#endif