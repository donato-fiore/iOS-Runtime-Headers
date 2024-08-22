// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBASICHEADERFOOTERCONTENTVIEWCONFIGURATION_H
#define _UIBASICHEADERFOOTERCONTENTVIEWCONFIGURATION_H

@class NSString;
@protocol _UIContentViewConfiguration, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UIContentViewLabelConfiguration.h"

@interface _UIBasicHeaderFooterContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding>

 {
    ? _configurationFlags;
    NSUInteger _axesPreservingSuperviewLayoutMargins;
    NSInteger _defaultStyle;
    NSDirectionalEdgeInsets _directionalLayoutMargins;
}


@property (nonatomic) NSUInteger axesPreservingSuperviewLayoutMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL resetsVerticalLayoutMargins;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIContentViewLabelConfiguration *textLabel; // ivar: _textLabel


+(BOOL)supportsSecureCoding;
+(id)defaultFooterConfiguration;
+(id)defaultGroupedFooterConfiguration;
+(id)defaultGroupedHeaderConfiguration;
+(id)defaultHeaderConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createContentView;
-(id)initWithCoder:(id)arg0 ;
-(id)updatedConfigurationForState:(NSUInteger)arg0 ;
-(id)updatedConfigurationForState:(NSUInteger)arg0 traitCollection:(id)arg1 ;
-(void)applyToContentView:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif