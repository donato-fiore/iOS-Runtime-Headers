// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWIDGETCONFIGURATIONOPTIONS_H
#define WFWIDGETCONFIGURATIONOPTIONS_H

@class INIntent, NSString;

#import <Foundation/Foundation.h>


@interface WFWidgetConfigurationOptions : NSObject

@property (nonatomic) NSInteger family; // ivar: _family
@property (nonatomic) CGRect initialConfigurationCardViewFrame; // ivar: _initialConfigurationCardViewFrame
@property (retain, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) NSUInteger widgetConfigurationStyle; // ivar: _widgetConfigurationStyle
@property (copy, nonatomic) NSString *widgetDescription; // ivar: _widgetDescription
@property (copy, nonatomic) NSString *widgetDisplayName; // ivar: _widgetDisplayName
@property (retain, nonatomic) NSString *widgetExtensionBundleIdentifier; // ivar: _widgetExtensionBundleIdentifier


-(id)init;


@end


#endif