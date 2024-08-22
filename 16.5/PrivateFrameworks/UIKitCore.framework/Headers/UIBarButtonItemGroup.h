// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIBARBUTTONITEMGROUP_H
#define UIBARBUTTONITEMGROUP_H

@class NSMutableArray, NSString, NSArray;
@protocol NSCoding, _UIBarButtonItemGroupOwner;

#import <Foundation/Foundation.h>

#import "UIMenuElement.h"
#import "UIBarButtonItem.h"

@interface UIBarButtonItemGroup : NSObject <NSCoding>

 {
    NSMutableArray *_barButtonItems;
    NSString *_customizationIdentifier;
    ? _groupFlags;
    NSInteger __calculationVisibility;
}


@property (readonly, nonatomic) CGFloat _contextualExpandedPadding;
@property (readonly, nonatomic, getter=_isCritical) BOOL _critical;
@property (nonatomic, getter=_dci_isAvailableWithoutCustomization, setter=_dci_setAvailableWithoutCustomization:) BOOL _dci_availableWithoutCustomization;
@property (readonly, copy, nonatomic) NSString *_dci_customizationIdentifier;
@property (readonly, nonatomic, getter=_dci_isInDefaultCustomization) BOOL _dci_inDefaultCustomization;
@property (copy, nonatomic, setter=_dci_setMenuRepresentation:) UIMenuElement *_dci_menuRepresentation;
@property (readonly, nonatomic) BOOL _disabledExpansion;
@property (nonatomic, getter=_isHidden, setter=_setHidden:) BOOL _hidden;
@property (copy, nonatomic) id *_notifyPrepareForLayout; // ivar: __notifyPrepareForLayout
@property (copy, nonatomic) id *_notifyWillRequestMenuRepresentation; // ivar: __notifyWillRequestMenuRepresentation
@property (nonatomic) BOOL alwaysAvailable;
@property (copy, nonatomic) NSArray *barButtonItems;
@property (readonly, nonatomic, getter=isDisplayingRepresentativeItem) BOOL displayingRepresentativeItem;
@property (nonatomic, getter=_expandStyle, setter=_setExpandStyle:) NSUInteger expandStyle; // ivar: _expandStyle
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) UIMenuElement *menuRepresentation; // ivar: _menuRepresentation
@property (nonatomic, getter=_minimumLeadingSpace, setter=_setMinimumLeadingSpace:) CGFloat minimumLeadingSpace;
@property (nonatomic, getter=_minimumTrailingSpace, setter=_setMinimumTrailingSpace:) CGFloat minimumTrailingSpace;
@property (weak, nonatomic, getter=_owner, setter=_setOwner:) NSObject<_UIBarButtonItemGroupOwner> *owner; // ivar: _owner
@property (retain, nonatomic) UIBarButtonItem *representativeItem; // ivar: _representativeItem
@property (nonatomic, getter=_shouldAlwaysCollapse, setter=_setShouldAlwaysCollapse:) BOOL shouldAlwaysCollapse; // ivar: _shouldAlwaysCollapse
@property (readonly, nonatomic, getter=_isSystemGroup) BOOL systemGroup;


+(id)fixedGroupWithRepresentativeItem:(id)arg0 items:(id)arg1 ;
+(id)movableGroupWithCustomizationIdentifier:(id)arg0 representativeItem:(id)arg1 items:(id)arg2 ;
+(id)optionalGroupWithCustomizationIdentifier:(id)arg0 inDefaultCustomization:(BOOL)arg1 representativeItem:(id)arg2 items:(id)arg3 ;
-(id)_synthesizedMenuElements;
-(id)description;
-(id)init;
-(id)initWithBarButtonItems:(id)arg0 representativeItem:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomizationIdentifier_dci:(id)arg0 inDefaultCustomization:(BOOL)arg1 representativeItem:(id)arg2 items:(id)arg3 ;
-(id)initWithCustomizationIdentifier_dci:(id)arg0 representativeItem:(id)arg1 items:(id)arg2 ;
-(void)_ib_setCustomizationDisposition:(NSInteger)arg0 ;
-(void)_ib_setCustomizationIdentifier:(id)arg0 ;
-(void)_removeBarButtonItem:(id)arg0 ;
-(void)_removeRepresentative:(id)arg0 ;
-(void)_sendNeedsToolbarUpdate;
-(void)_validateAllItems;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif