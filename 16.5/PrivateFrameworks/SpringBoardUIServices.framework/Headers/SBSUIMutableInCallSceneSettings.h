// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUIMUTABLEINCALLSCENESETTINGS_H
#define SBSUIMUTABLEINCALLSCENESETTINGS_H

@class UIMutableApplicationSceneSettings, NSUUID;



@interface SBSUIMutableInCallSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic, getter=isAttachedToWindowedAccessory) BOOL attachedToWindowedAccessory;
@property (nonatomic, getter=isBeingShownAboveCoverSheet) BOOL beingShownAboveCoverSheet; // ivar: _beingShownAboveCoverSheet
@property (nonatomic) NSInteger inCallPresentationMode; // ivar: _inCallPresentationMode
@property (retain, nonatomic) NSUUID *requestedPresentationConfigurationIdentifier; // ivar: _requestedPresentationConfigurationIdentifier
@property (nonatomic, getter=isScreenSharingPresentation) BOOL screenSharingPresentation; // ivar: _screenSharingPresentation
@property (nonatomic) BOOL systemControlsShouldPresentAsEmbedded;
@property (nonatomic) CGRect windowedAccessoryCutoutFrameInScreen;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)setDeactivationReasons:(NSUInteger)arg0 ;


@end


#endif