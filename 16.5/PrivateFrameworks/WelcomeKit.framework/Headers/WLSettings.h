// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLSETTINGS_H
#define WLSETTINGS_H


#import <Foundation/Foundation.h>


@interface WLSettings : NSObject

@property (nonatomic) CGFloat accessibilityFontScale; // ivar: _accessibilityFontScale
@property (nonatomic) BOOL enableAccessibilityDisplayInversion; // ivar: _enableAccessibilityDisplayInversion
@property (nonatomic) BOOL enableDisplayDarkMode; // ivar: _enableDisplayDarkMode
@property (nonatomic) BOOL enableDisplayZoom; // ivar: _enableDisplayZoom


+(id)settingsWithData:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 ;
-(id)initWithPreferences;


@end


#endif