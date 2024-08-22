// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIRUNTIMEACCESSIBILITYCONFIGURATION_H
#define UIRUNTIMEACCESSIBILITYCONFIGURATION_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface UIRuntimeAccessibilityConfiguration : NSObject

@property (retain, nonatomic) NSString *accessibilityConfigurationHint; // ivar: accessibilityConfigurationHint
@property (retain, nonatomic) NSString *accessibilityConfigurationIdentifier; // ivar: accessibilityConfigurationIdentifier
@property (retain, nonatomic) NSString *accessibilityConfigurationLabel; // ivar: accessibilityConfigurationLabel
@property (retain, nonatomic) NSNumber *accessibilityConfigurationTraits; // ivar: accessibilityConfigurationTraits
@property (retain, nonatomic) NSNumber *isAccessibilityConfigurationElement; // ivar: isAccessibilityConfigurationElement
@property (retain, nonatomic) NSObject *object; // ivar: object


-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 label:(id)arg1 hint:(id)arg2 traits:(id)arg3 andIsAccessibilityElement:(id)arg4 ;
-(id)initWithObject:(id)arg0 label:(id)arg1 identifier:(id)arg2 hint:(id)arg3 traits:(id)arg4 andIsAccessibilityElement:(id)arg5 ;
-(void)applyConfiguration;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif