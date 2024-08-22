// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWIDGETCONFIGURATIONREQUEST_H
#define WFWIDGETCONFIGURATIONREQUEST_H

@class NSString, INIntent, INSchema, NSSecurityScopedURLWrapper, UIColor;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFWidgetConfigurationRequest : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) CGSize defaultCardSize; // ivar: _defaultCardSize
@property (readonly, nonatomic) NSInteger family; // ivar: _family
@property (readonly, nonatomic) CGRect initialCardFrame; // ivar: _initialCardFrame
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) NSUInteger resolvedWidgetConfigurationStyle;
@property (readonly, nonatomic) INSchema *schema;
@property (readonly, copy, nonatomic) NSSecurityScopedURLWrapper *schemaBundleURL; // ivar: _schemaBundleURL
@property (readonly, nonatomic) BOOL usesWidgetAccentColor; // ivar: _usesWidgetAccentColor
@property (readonly, nonatomic) NSSecurityScopedURLWrapper *widgetBundleScopedURL; // ivar: _widgetBundleScopedURL
@property (readonly, nonatomic) NSUInteger widgetConfigurationStyle; // ivar: _widgetConfigurationStyle
@property (readonly, copy, nonatomic) NSString *widgetDescription; // ivar: _widgetDescription
@property (readonly, copy, nonatomic) NSString *widgetDisplayName; // ivar: _widgetDisplayName
@property (readonly, nonatomic, getter=isWidgetExtensionInformationLoaded) BOOL widgetExtensionInformationLoaded;
@property (readonly, nonatomic) UIColor *widgetPrimaryColor; // ivar: _widgetPrimaryColor
@property (readonly, nonatomic) UIColor *widgetTintColor; // ivar: _widgetTintColor


+(BOOL)supportsSecureCoding;
-(id)appBundleIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 bundleIdentifier:(id)arg1 widgetBundleScopedURL:(id)arg2 schemaBundleURL:(id)arg3 family:(NSInteger)arg4 widgetConfigurationStyle:(NSUInteger)arg5 defaultCardSize:(struct CGSize )arg6 initialCardFrame:(struct CGRect )arg7 widgetDisplayName:(id)arg8 widgetDescription:(id)arg9 usesWidgetAccentColor:(BOOL)arg10 ;
-(id)initWithIntent:(id)arg0 bundleIdentifier:(id)arg1 widgetBundleScopedURL:(id)arg2 schemaBundleURL:(id)arg3 family:(NSInteger)arg4 widgetConfigurationStyle:(NSUInteger)arg5 defaultCardSize:(struct CGSize )arg6 initialCardFrame:(struct CGRect )arg7 widgetDisplayName:(id)arg8 widgetDescription:(id)arg9 widgetPrimaryColor:(id)arg10 widgetTintColor:(id)arg11 usesWidgetAccentColor:(BOOL)arg12 ;
-(id)initWithOptions:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadWidgetExtensionInformationWithCompletion:(id)arg0 ;
-(void)startAccessingSecurityScopedBundleResource;


@end


#endif