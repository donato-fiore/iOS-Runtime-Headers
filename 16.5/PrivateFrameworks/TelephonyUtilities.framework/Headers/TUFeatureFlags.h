// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUFEATUREFLAGS_H
#define TUFEATUREFLAGS_H

@class NSString;
@protocol TUFeatureFlags;

#import <Foundation/Foundation.h>


@interface TUFeatureFlags : NSObject <TUFeatureFlags>



@property (readonly, nonatomic) BOOL FTUserScore;
@property (readonly, nonatomic) BOOL TTRBannerEnabled;
@property (readonly, nonatomic) BOOL aTVHandoff;
@property (readonly, nonatomic) BOOL addTVAsActiveParticipant;
@property (readonly, nonatomic) BOOL announceCalls;
@property (readonly, nonatomic) BOOL avLessSharePlayEnabled;
@property (readonly, nonatomic) BOOL avcCameraSelectionEnabled;
@property (readonly, nonatomic) BOOL captionDraggingEnabled;
@property (readonly, nonatomic) BOOL collaborateTogetherEnabled;
@property (readonly, nonatomic) BOOL continuityCaptureEnabled;
@property (readonly, nonatomic) BOOL conversationHandoffEnabled;
@property (readonly, nonatomic) BOOL conversationOneToOneModeEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL expanseBTSwitchingEnabled;
@property (readonly, nonatomic) BOOL expanseEnabled;
@property (readonly, nonatomic) BOOL filterGFTaaSCalls;
@property (readonly, nonatomic) BOOL ftvSpatialAudioEnabled;
@property (readonly, nonatomic) BOOL gameCenterSharePlayIntegration;
@property (readonly, nonatomic) BOOL gelatoEnabled;
@property (readonly, nonatomic) BOOL gftDowngradeToOneToOne;
@property (readonly, nonatomic) BOOL greenTeaLinksEnabled;
@property (readonly, nonatomic) BOOL groupFacetimeAsAServiceEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL individualAudioVideoToggleEnabled;
@property (readonly, nonatomic) BOOL livePhotoXPCServiceEnabled;
@property (readonly, nonatomic) BOOL mochiEnabled;
@property (readonly, nonatomic) BOOL nonInterruptingCalls;
@property (readonly, nonatomic) BOOL offrampEnabled;
@property (readonly, nonatomic) BOOL qrPluginEncryptionEnabled;
@property (readonly, nonatomic) BOOL requestA2DPOverIncomingCalls;
@property (readonly, nonatomic) BOOL screenCaptureKitEnabled;
@property (readonly, nonatomic) BOOL screenSharingCALayerHostMode;
@property (readonly, nonatomic) BOOL screenSharingDeskViewEnabled;
@property (readonly, nonatomic) BOOL screenSharingDeskViewSqueegeeEnabled;
@property (readonly, nonatomic) BOOL sharePlayDisabled;
@property (readonly, nonatomic) BOOL sharePlayDiscoverabilityEnabled;
@property (readonly, nonatomic) BOOL sharePlayWithAirplayEnabled;
@property (readonly, nonatomic) BOOL suggestionsReloadForSelectedRecipients;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsScreenSharing;
@property (readonly, nonatomic) BOOL uNNotificationsMacOSEnabled;
@property (readonly, nonatomic) BOOL uPlusNDowngrade;
@property (readonly, nonatomic) BOOL uPlusOneScreenSharing;
@property (readonly, nonatomic) BOOL unreliableMessengerEnabled;
@property (readonly, nonatomic) BOOL vouchingEnabled;




@end


#endif