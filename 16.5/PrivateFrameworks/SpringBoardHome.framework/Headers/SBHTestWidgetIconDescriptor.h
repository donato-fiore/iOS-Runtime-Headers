// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHTESTWIDGETICONDESCRIPTOR_H
#define SBHTESTWIDGETICONDESCRIPTOR_H

@class NSString;
@protocol SBHTestWidgetIconDescriptor;

#import <Foundation/Foundation.h>


@interface SBHTestWidgetIconDescriptor : NSObject <SBHTestWidgetIconDescriptor>



@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *containerBundleIdentifier; // ivar: _containerBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger sizeClass; // ivar: _sizeClass
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *widgetIdentifier; // ivar: _widgetIdentifier


+(id)widgetIconDescriptorFromDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sbh_isValidWithError:(*id)arg0 ;
-(NSUInteger)sbh_iconDescriptorType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 containerBundleIdentifier:(id)arg1 widgetIdentifier:(id)arg2 sizeClass:(NSUInteger)arg3 ;


@end


#endif