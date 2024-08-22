// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMENUELEMENT_H
#define UIMENUELEMENT_H

@class NSString, NSAttributedString;
@protocol NSCopying, NSSecureCoding, _UIMenuImageOrName;

#import <Foundation/Foundation.h>

#import "UIAction.h"
#import "UIImage.h"

@interface UIMenuElement : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_accessibilityIdentifier;
}


@property (copy, nonatomic) UIAction *_accessoryAction; // ivar: __accessoryAction
@property (readonly, nonatomic) NSObject<_UIMenuImageOrName> *_imageOrName; // ivar: __imageOrName
@property (readonly, nonatomic) BOOL _isLeaf;
@property (readonly, nonatomic) BOOL _isLoadingPlaceholder;
@property (nonatomic, setter=_setPreferredDisplayMode:) NSUInteger _preferredDisplayMode; // ivar: __preferredDisplayMode
@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (readonly, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2  ;
// -(BOOL)_acceptBoolMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(BOOL)_canBeHighlighted;
-(BOOL)_isInlineGroup;
-(BOOL)_isVisible;
-(BOOL)_omitsInlineTitle;
-(id)_customContentView;
-(id)_immutableCopy;
-(id)_mutableCopy;
-(id)accessibilityIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 image:(id)arg1 imageName:(id)arg2 ;
// -(void)_acceptMenuVisit:(id)arg0 commandVisit:(unk)arg1 actionVisit:(id)arg2 deferredElementVisit:(unk)arg3  ;
// -(void)_acceptMenuVisit:(id)arg0 leafVisit:(unk)arg1  ;
-(void)_willBePreparedForInitialDisplay:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAccessibilityIdentifier:(id)arg0 ;


@end


#endif