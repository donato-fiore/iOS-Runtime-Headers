// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICONTENTUNAVAILABLECONFIGURATION_H
#define UICONTENTUNAVAILABLECONFIGURATION_H

@class NSAttributedString, NSString;
@protocol UIContentConfiguration, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIContentUnavailableButtonProperties.h"
#import "UIImage.h"
#import "UIContentUnavailableImageProperties.h"
#import "UIContentUnavailableTextProperties.h"

@interface UIContentUnavailableConfiguration : NSObject <UIContentConfiguration, NSSecureCoding>

 {
    ? _configurationFlags;
    CGFloat _imageToTextPadding;
    CGFloat _textToSecondaryTextPadding;
    CGFloat _textToButtonPadding;
    CGFloat _buttonToSecondaryButtonPadding;
    NSInteger _defaultStyle;
}


@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) UIContentUnavailableButtonProperties *buttonProperties; // ivar: _buttonProperties
@property (nonatomic) CGFloat buttonToSecondaryButtonPadding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIContentUnavailableImageProperties *imageProperties; // ivar: _imageProperties
@property (nonatomic) CGFloat imageToTextPadding;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (readonly, nonatomic) UIContentUnavailableButtonProperties *secondaryButtonProperties; // ivar: _secondaryButtonProperties
@property (copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) UIContentUnavailableTextProperties *secondaryTextProperties; // ivar: _secondaryTextProperties
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UIContentUnavailableTextProperties *textProperties; // ivar: _textProperties
@property (nonatomic) CGFloat textToButtonPadding;
@property (nonatomic) CGFloat textToSecondaryTextPadding;


+(BOOL)supportsSecureCoding;
+(id)emptyConfiguration;
+(id)emptyExtraProminentConfiguration;
+(id)emptyProminentConfiguration;
+(id)loadingConfiguration;
+(id)searchConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)makeContentView;
-(id)updatedConfigurationForState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif