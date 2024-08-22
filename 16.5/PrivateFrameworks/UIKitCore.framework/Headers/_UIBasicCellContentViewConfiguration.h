// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBASICCELLCONTENTVIEWCONFIGURATION_H
#define _UIBASICCELLCONTENTVIEWCONFIGURATION_H

@class NSString;
@protocol _UIContentViewConfiguration, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UIContentViewEditingConfiguration.h"
#import "_UIContentViewImageViewConfiguration.h"
#import "_UIContentViewLabelConfiguration.h"

@interface _UIBasicCellContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding>

 {
    ? _configurationFlags;
    NSUInteger _axesPreservingSuperviewLayoutMargins;
    CGFloat _imageToTextPadding;
    NSInteger _defaultStyle;
    NSDirectionalEdgeInsets _directionalLayoutMargins;
}


@property (copy, nonatomic) _UIContentViewEditingConfiguration *_textLabelEditingConfiguration; // ivar: _textLabelEditingConfiguration
@property (nonatomic) NSUInteger axesPreservingSuperviewLayoutMargins;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat imageToTextPadding;
@property (readonly, nonatomic) _UIContentViewImageViewConfiguration *imageView; // ivar: _imageView
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIContentViewLabelConfiguration *textLabel; // ivar: _textLabel


+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)defaultListCellConfigurationForState:(NSUInteger)arg0 ;
+(id)defaultOutlineCellConfigurationForState:(NSUInteger)arg0 ;
+(id)defaultOutlineParentCellConfigurationForState:(NSUInteger)arg0 ;
+(id)listCellConfiguration;
+(id)outlineCellConfiguration;
+(id)outlineRootParentCellConfiguration;
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