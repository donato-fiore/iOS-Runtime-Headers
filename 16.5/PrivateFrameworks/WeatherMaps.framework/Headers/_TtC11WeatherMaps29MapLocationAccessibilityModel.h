// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11WEATHERMAPS29MAPLOCATIONACCESSIBILITYMODEL_H
#define _TTC11WEATHERMAPS29MAPLOCATIONACCESSIBILITYMODEL_H

@class NSString, NSDate, CLLocation;

#import <Foundation/Foundation.h>


@interface _TtC11WeatherMaps29MapLocationAccessibilityModel : NSObject {
    ? accessibilityDescription;
    ? overlayDescriptionKey;
    ? expiration;
}


@property (nonatomic, readonly) NSString *accessibilityDescription;
@property (nonatomic, readonly) NSDate *expiration;
@property (nonatomic, readonly) CLLocation *location; // ivar: location
@property (nonatomic, readonly) NSString *overlayDescriptionKey;


-(id)init;


@end


#endif