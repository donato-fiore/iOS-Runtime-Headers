// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LTUITRANSLATESETTINGSCONTROLLER_H
#define LTUITRANSLATESETTINGSCONTROLLER_H

@class PSListController, PSSpecifier;



@interface LTUITranslateSettingsController : PSListController {
    PSSpecifier *onDeviceOnlyGroup;
}




-(BOOL)isOnDeviceOnlyTranslationForced;
-(id)appGroupUserDefaultForSpecifier:(id)arg0 ;
-(id)onDeviceOnlyFooterString;
-(id)specifiers;
-(void)openAppToLanguages:(id)arg0 ;
-(void)setAppGroupUserDefaultsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)showTranslatePrivacy;


@end


#endif