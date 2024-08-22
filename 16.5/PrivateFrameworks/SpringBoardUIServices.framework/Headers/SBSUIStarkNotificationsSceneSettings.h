// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSUISTARKNOTIFICATIONSSCENESETTINGS_H
#define SBSUISTARKNOTIFICATIONSSCENESETTINGS_H

@class UIApplicationSceneSettings, NSString, BSServiceConnectionEndpoint;
@protocol SBSUIStarkNotificationsSceneSettings;



@interface SBSUIStarkNotificationsSceneSettings : UIApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>



@property (readonly, nonatomic, getter=isConnectedWirelessly) BOOL connectedWirelessly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isGeoSupported) BOOL geoSupported;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *openServiceEndpoint;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger suspensionReasons;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif