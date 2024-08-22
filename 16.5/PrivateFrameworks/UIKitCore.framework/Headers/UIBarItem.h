// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIBARITEM_H
#define UIBARITEM_H

@class NSString;
@protocol NSCoding, UIAppearance;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UIBarItem : NSObject <NSCoding, UIAppearance>



@property (nonatomic, setter=_setHasCustomizableInstanceAppearanceModifications:) BOOL _hasCustomizableInstanceAppearanceModifications; // ivar: _hasCustomizableInstanceAppearanceModifications
@property (nonatomic, setter=_setShouldArchiveUIAppearanceTags:) BOOL _shouldArchiveUIAppearanceTags; // ivar: _shouldArchiveUIAppearanceTags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) UIEdgeInsets imageInsets;
@property (retain, nonatomic) UIImage *landscapeImagePhone;
@property (nonatomic) UIEdgeInsets landscapeImagePhoneInsets;
@property (retain, nonatomic) UIImage *largeContentSizeImage; // ivar: _largeContentSizeImage
@property (nonatomic) UIEdgeInsets largeContentSizeImageInsets; // ivar: _largeContentSizeImageInsets
@property (readonly, copy, nonatomic) NSString *resolvedTitle;
@property (readonly, nonatomic) BOOL selected;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tag; // ivar: _tag
@property (copy, nonatomic) NSString *title;


+(id)_appearanceBlindViewClasses;
+(id)_appearanceWhenContainedIn:(id)arg0 ;
+(id)appearance;
+(id)appearanceForTraitCollection:(id)arg0 ;
+(id)appearanceForTraitCollection:(id)arg0 whenContainedIn:(Class)arg1 ;
+(id)appearanceForTraitCollection:(id)arg0 whenContainedInInstancesOfClasses:(id)arg1 ;
+(id)appearanceWhenContainedIn:(Class)arg0 ;
+(id)appearanceWhenContainedInInstancesOfClasses:(id)arg0 ;
-(id)_attributedTitleForState:(NSUInteger)arg0 withDefaultAttributes:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)titleTextAttributesForState:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif